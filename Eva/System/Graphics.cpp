#include "Graphics.h"

float32 System_Graphics_frameRateMultiplier = 1;

void System_Graphics_UpdateFrameRate(CONFIG & config)
{
	LogFunction();

	System_Graphics_frameRateMultiplier = ((float32)60 / (float32)config.System.frameRate);

	auto addr = (float64 *)(appBaseAddr + 0x4E29A8);
	constexpr uint64 size = 8;
	byte32 protection = 0;
	VirtualProtect(addr, size, PAGE_EXECUTE_READWRITE, &protection);
	*addr *= System_Graphics_frameRateMultiplier;
	VirtualProtect(addr, size, protection, &protection);
}
