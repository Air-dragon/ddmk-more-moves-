#include "../Core/Core.h"

import Actor;
import Arcade;
import Camera;
import Config;
import Event;
import File;
import Graphics;
import GUI;
import Hooks;
import HUD;
import Internal;
import Memory;
import Other;
import Scene;
import Speed;
import Training;
import Window;

#define debug false

uint32 DllMain(HINSTANCE instance, uint32 reason, LPVOID reserved)
{
	if (reason == DLL_PROCESS_ATTACH)
	{
		Core_Log_Init("logs", "Mary.txt");

		Log("Session started.");

		if (!Core_Memory_Init((64 * 1024 * 1024)))
		{
			Log("Core_Memory_Init failed.");

			return 0;
		}

		Config_Init("configs", "Mary.bin");
		LoadConfig();

		if (!Memory_Init())
		{
			Log("Memory_Init failed.");

			return 0;
		}

		Memory_ToggleExtendVectors(true);

		Internal_Init();

		if (!File_Init())
		{
			Log("File_Init failed.");

			return 0;
		}

		Actor_Init();
		Actor_Toggle(activeConfig.Actor.enable);

		UpdateCrazyComboLevelMultiplier();

		Arcade_Toggle(activeConfig.Arcade.enable);

		ToggleArtemisSwapNormalShotAndMultiLock(activeConfig.Artemis.swapNormalShotAndMultiLock);
		ToggleArtemisInstantFullCharge         (activeConfig.Artemis.instantFullCharge         );

		Camera_ToggleInvertX(activeConfig.Camera.invertX);

		Event_Init();
		Event_ToggleSkipIntro    (activeConfig.Event.skipIntro);
		Event_ToggleSkipCutscenes(activeConfig.Event.skipCutscenes);

		Graphics_Init();
		UpdateFrameRate();

		Hooks_Init();

		HUD_Init();

		Other_Init();
		UpdateOrbReach();

		Scene_Init();

		Speed_Init();
		UpdateSpeedValues();

		Training_ToggleInfiniteHitPoints  (activeConfig.Training.infiniteHitPoints  );
		Training_ToggleInfiniteMagicPoints(activeConfig.Training.infiniteMagicPoints);
		Training_ToggleDisableTimer       (activeConfig.Training.disableTimer       );

		Window_ToggleForceFocus(true);

		vp_memset((appBaseAddr + 0x5505B5), 0, 23); // Remove FMODGetCodecDescription label.

		if constexpr (debug)
		{
			// Disable Idle Timer
			vp_memset((appBaseAddr + 0x1F2A38), 0x90, 5); // Dante
			vp_memset((appBaseAddr + 0x1F29AE), 0x90, 5); // Vergil

			// Force Visible HUD
			Write<byte8>((appBaseAddr + 0x27E800), 0xEB);
			Write<byte8>((appBaseAddr + 0x27DF3E), 0xEB);
			Write<byte16>((appBaseAddr + 0x280DB9), 0xE990);

			// Disable Style Rank Sub
			vp_memset((appBaseAddr + 0x27A39C), 0x90, 5);

			// Force Collect Orbs
			WriteAddress((appBaseAddr + 0x1B6597), (appBaseAddr + 0x1B6599), 2);
		}
	}

	return 1;
}
