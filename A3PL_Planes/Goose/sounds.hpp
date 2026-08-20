		attenuationEffectType = "HeliAttenuation"; //utlumovani v interieru (odkaz do Attenuation.hpp ve slozce SOUNDS_F

		soundEngineOnInt[] = {"\A3PL_Planes\Goose\sounds\StartupRight.wav", 1.0, 1.0};
		soundEngineOnExt[] = {"\A3PL_Planes\Goose\sounds\StartupRight.wav", 1.77828, 1.0, 500};
		soundEngineOffInt[] = {"\A3PL_Planes\Goose\sounds\ShutDownRight.wav", 1.0, 1.0};
		soundEngineOffExt[] = {"\A3PL_Planes\Goose\sounds\ShutDownRight.wav", 1.77828, 1.0, 500};
        soundLocked[] = {"", db-0, 1};
    	soundIncommingMissile[] = {"", db-0, 1.5};
		soundGearDown[] = {"\A3PL_Planes\Goose\sounds\geardown.wav", 1.0, 1.0};
        soundGearUp[] = {"\A3PL_Planes\Goose\sounds\gearup.wav", 1.0, 1.0};
        soundFlapsDown[] = {"\A3PL_Planes\Goose\sounds\flaps.wav", 1.0, 1.0};
        soundFlapsUp[] = {"\A3PL_Planes\Goose\sounds\flaps.wav", 1.0, 1.0};
		
		class Sounds {
            
            class EngineLowIn {
				sound[] = {"\A3PL_Planes\Goose\sounds\int-low.wav", db-3, 1.0};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn {
				sound[] = {"\A3PL_Planes\Goose\sounds\int-high.wav", db-3, 1.2};
				frequency = "1";
				volume = "(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class WindNoiseIn {
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise", db-6, 1.0};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "(1-camPos)*(speed factor[1, 150])";
			};
            
			class EngineLowOut {
				sound[] = {"\A3PL_Planes\Goose\sounds\ext-low.wav", 2.51189, 1.0, 1200};
				frequency = "1.0 min (rpm + 0.5)";
				volume = "camPos*2*(rpm factor[0, 0.95])*(rpm factor[0.95, 0])";
			};
			class EngineHighOut 
			{
				sound[] = {"\A3PL_Planes\Goose\sounds\ext-high.wav", 2.51189, 1.2, 1400};
				frequency = "1";
				volume = "camPos*4*(rpm factor[1.1, 0.5])*(rpm factor[0.5, 1.1])";
			};
			
            class ForsageIn	
			{
				sound[] =  {};
				frequency = "1";
				volume = "(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};			
			
            class ForsageOut
			{
				sound[] = {};
				frequency = "1";
				volume = "engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[] = {3.14,3.92,2,0.5};
			};
			class WindNoiseOut 
			{
				sound[] = {"A3\Sounds_F\air\Plane_Fighter_03\noise",0.562341,1,150};
				frequency = "(0.1+(1.2*(speed factor[1, 150])))";
				volume = "camPos*(speed factor[1, 150])";
			};
            
			
            
		};