#include "File.h"

typedef void(* InternalAdjustPointers_t)(byte *);

InternalAdjustPointers_t InternalAdjustPointers = 0;

bool ExtractGameFile(const char * fileName)
{
	char buffer[128];
	snprintf(buffer, sizeof(buffer), "data\\dmc3\\dmc3-0.nbz");

	zip_error result = {};
	zip * archive = zip_open(buffer, 0, &result.zip_err);
	if (!archive)
	{
		Log("zip_open failed. error %d", result.zip_err);
		return false;
	}

	snprintf(buffer, sizeof(buffer), "GData.afs/%s", fileName);

	zip_file * file = zip_fopen(archive, buffer, 0);
	if (!file)
	{
		zip_close(archive);
		Log("zip_fopen failed. error %d", result.zip_err);
		return false;
	}

	zip_stat_t stats = {};
	zip_stat_init(&stats);
	zip_stat(archive, buffer, 0, &stats);

	dword error = 0;

	SetLastError(0);
	byte * addr = (byte *)VirtualAllocEx(appProcess, 0, stats.size, MEM_COMMIT, PAGE_EXECUTE_READWRITE);
	error = GetLastError();
	if (!addr)
	{
		zip_fclose(file);
		zip_close(archive);
		Log("VirtualAllocEx failed. error %X", error);
		return false;
	}

	zip_fread(file, addr, stats.size);
	zip_fclose(file);
	zip_close(archive);

	snprintf(buffer, sizeof(buffer), "data\\dmc3\\GData.afs\\%s", fileName);

	SaveFile(addr, (uint32)stats.size, buffer);

	return true;
}

// @Todo: Make archive check optional.

byte * LoadGameFile(const char * fileName, uint32 * size, byte * dest)
{
	byte * file = 0;

	char buffer[128];
	snprintf(buffer, sizeof(buffer), "data\\dmc3\\GData.afs\\%s", fileName);

	file = LoadFile(buffer, size, dest);
	if (!file)
	{
		if (!ExtractGameFile(fileName))
		{
			return 0;
		}
		file = LoadFile(buffer, size, dest);
		if (!file)
		{
			return 0;
		}
	}

	return file;
}

void AdjustPointers(byte * addr)
{
	LogFunction();
	{
		byte signature[] = { 'P','A','C' };
		for (uint8 index = 0; index < countof(signature); index++)
		{
			if (addr[index] != signature[index])
			{
				Log("Not a PAC.");
				Log("addr %.16llX", addr);
				goto sect0;
			}
		}
		uint32 & fileCount = *(uint32 *)(addr + 4);
		for (uint32 fileIndex = 0; fileIndex < fileCount; fileIndex++)
		{
			uint32 & fileOff = ((uint32 *)(addr + 8))[fileIndex];
			InternalAdjustPointers((addr + fileOff));
			Log("%.16llX", (addr + fileOff));
		}
		return;
	}
	sect0:
	//HoboBreak();
	InternalAdjustPointers(addr);
}

void System_File_Init()
{
	LogFunction();

	// @Todo: Turn into enum.

	// Modes
	// 0 Memory
	// 1 Archive
	// 2 Local

	{
		byte payload[] =
		{
			0x48, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //mov rax,&Config.System.File.preferLocalFiles
			0x8A, 0x00,                                                 //mov al,[rax]
			0x84, 0xC0,                                                 //test al,al
			0x74, 0x0F,                                                 //je short
			0xBA, 0x02, 0x00, 0x00, 0x00,                               //mov edx,00000002
			0xE8, 0x00, 0x00, 0x00, 0x00,                               //call dmc3.exe+327430
			0x48, 0x85, 0xC0,                                           //test rax,rax
			0x75, 0x10,                                                 //jne short
			0x8D, 0x56, 0x01,                                           //lea edx,[rsi+01]
			0x48, 0x8D, 0x8C, 0x24, 0x60, 0x01, 0x00, 0x00,             //lea rcx,[rsp+00000160]
			0xE8, 0x00, 0x00, 0x00, 0x00,                               //call dmc3.exe+327430
		};
		FUNC func = CreateFunction(0, (appBaseAddr + 0x2FDB1), false, true, sizeof(payload));
		memcpy(func.sect0, payload, sizeof(payload));
		*(bool **)(func.sect0 + 2) = &Config.System.File.preferLocalFiles;
		WriteCall((func.sect0 + 0x15), (appBaseAddr + 0x327430));
		WriteCall((func.sect0 + 0x2A), (appBaseAddr + 0x327430));
		WriteJump((appBaseAddr + 0x2FDAC), func.addr);
	}
	// @Todo: Move up, cause helper func.

	{
		FUNC func = CreateFunction((appBaseAddr + 0x1B9FA0));
		InternalAdjustPointers = (InternalAdjustPointers_t)func.addr;
	}
}
