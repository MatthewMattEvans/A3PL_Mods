		attenuationEffectType = "HeliAttenuation"; //Attenuation in interior (Link to Attenuation.hpp in folder SOUNDS_F)
		soundGetIn[]={"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",db0, 1, 40};
		soundGetOut[]={"A3\Sounds_F\air\Plane_Fighter_03\getout",db0, 1, 40};
		soundDammage[]={"", db-5, 1};
		soundEngineOnInt[] = {"\A3PL_Planes\Goose\sounds\StartupRight.wav", 1.0, 1.0};
		soundEngineOnExt[] = {"\A3PL_Planes\Goose\sounds\StartupRight.wav", 1.77828, 1.0, 500};
		soundEngineOffInt[] = {"\A3PL_Planes\Goose\sounds\ShutDownRight.wav", 1.0, 1.0};
		soundEngineOffExt[] = {"\A3PL_Planes\Goose\sounds\ShutDownRight.wav", 1.77828, 1.0, 500};
		soundGearUp[] = {"A3\Sounds_F_EPC\CAS_02\gear_up", db-2, 1.0, 150};
		soundGearDown[] = {"A3\Sounds_F_EPC\CAS_02\gear_down", db-2, 1.0, 150};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", db-4, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", db-4, 1.0, 100};

	/*	EXTERNAL SOUNDS */

		class Sounds
		{
			class Engine
			{
				sound[] = {"\A3PL_Planes\Cessna172\engine.wav",2.23872,1,900};
				frequency = "(1-randomizer*0.05)*(thrust+0.5)*rpm";
				volume = "camPos*(thrust+0.5)";
			};
			class EngineIn
			{
				sound[] = {"\A3PL_Planes\Cessna172\engine.wav",1,1};
				frequency = "(1-randomizer*0.05)*(thrust+0.5)*rpm";
				volume = "(1-camPos)*thrust";
			};
		};