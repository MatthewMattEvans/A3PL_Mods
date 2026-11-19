class CfgPatches
{
	class A3FL_Smart_Car
	{
		units[]=
		{
			"A3FL_Smart_Car"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Soft_F"
		};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F
	{
		class Sounds;
		class AnimationSources
		{
			class Mods;
		};
	};
	class A3FL_Smart_Car: A3PL_Car_Base
	{
		author="Danny Indelicato & Henry Indelicato";
		displayName="Smart Car";
		class Library
		{
			libTextDesc="Smart Car";
		};
		fuelCapacity=12.2;
		transportSoldier=1;
		differentialType="all_limited";
		model="\A3FL_Cars\A3FL_Smart_Car\A3FL_Smart_Car";
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,1.0,CO)","","","","","","","","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"};
		tf_isolatedAmount = 0.2;
		hideWeaponsDriver = true;
		hideWeaponsCargo = true;
		maxSpeed=160;
		enginePower=170;
		peakTorque=340;
		maxomega=470;
		wheelDestroyRadiusCoef=0.6;
		extCameraPosition[]={0,0.89999998,-6.1999998};
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.45},
			{0.34999999,0.75},
			{0.5,1},
			{0.75,0.97500002},
			{0.85000002,0.755},
			{1,0.62699997}
		};
		aggregateReflectors[]=
		{

			{
				"LightCarHeadL01"
			},

			{
				"LightCarHeadR01"
			},

			{
				"LightCarHeadL02"
			},

			{
				"LightCarHeadR02"
			}
		};
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Bonnet";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
		};
		
		/* ---- CRASHES START ---- */

        buildCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
        buildCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
        buildCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
        buildCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
        soundBuildingCrash[]={buildCrash0, 0.25, buildCrash1, 0.25, buildCrash2, 0.25, buildCrash3, 0.25};

        WoodCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        WoodCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1", db0, 1,200};
        soundWoodCrash[]={woodCrash0, 0.25, woodCrash1, 0.25, woodCrash2, 0.25, woodCrash3, 0.25};

        armorCrash0[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1", db0, 1,200};
        armorCrash1[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2", db0, 1,200};
        armorCrash2[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3", db0, 1,200};
        armorCrash3[]={"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4", db0, 1,200};
        soundArmorCrash[]={ArmorCrash0, 0.25, ArmorCrash1, 0.25, ArmorCrash2, 0.25, ArmorCrash3, 0.25};

        /* ---- CRASHES  END ---- */
		
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\Idle.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*1";
			};
			class Engine
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\1000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*1";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\2000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*1";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\3000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*1";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\4000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*1";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\5000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*1";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\6000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*camPos*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*1";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\7000.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*1";
			};
			class Engine7_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\8000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*1";
			};
			class Engine8_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\9000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*1";
			};
			class Engine9_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\10000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*1";
			};
			class Engine10_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\11000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*1";
			};
			class Engine11_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\12000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*1";
			};
			class Engine12_ext
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\13000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*camPos*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
			};
			class Idle_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\Idle.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*1";
			};
			class Engine_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\1000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*1";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\2000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*1";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\3000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*1";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\4000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*1";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\5000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*1";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\6000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*1";
			};
			class Engine6_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\7000.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*1";
			};
			class Engine7_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\8000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*1";
			};
			class Engine8_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\9000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*1";
			};
			class Engine9_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\10000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*1";
			};
			class Engine10_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\11000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*1";
			};
			class Engine11_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\12000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*1";
			};
			class Engine12_int
			{
				sound[]=
				{
					"\A3PL_Cars2\A3PL_CRX\Sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
			};
			
			/*----------------------------------*/
	        /*-----------  TIRES EXT ---------*/
	        /*----------------------------------*/

	        class TiresRockOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*rock*(speed factor[2, 20])";
	        };
	        class TiresSandOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*sand*(speed factor[2, 20])";
	        };
	        class TiresGrassOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*grass*(speed factor[2, 20])";
	        };
	        class TiresMudOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*mud*(speed factor[2, 20])";
	        };
	        class TiresGravelOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*gravel*(speed factor[2, 20])";
	        };
	        class TiresAsphaltOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2", db-6, 1.0, 60};
		        frequency = "1";
		        volume = "camPos*asphalt*(speed factor[2, 20])";
	        };
	        class NoiseOut
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3", db-8, 1.0, 90};
		        frequency = "1";
		        volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
	        };

	        /*----------------------------------*/
	        /*-----------  TIRES INT ---------*/
	        /*----------------------------------*/

	        class TiresRockIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*rock*(speed factor[2, 20])";
	        };
	        class TiresSandIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*sand*(speed factor[2, 20])";
	        };
	        class TiresGrassIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*grass*(speed factor[2, 20])";
	        };
	        class TiresMudIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*mud*(speed factor[2, 20])";
	        };
	        class TiresGravelIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*gravel*(speed factor[2, 20])";
	        };
	        class TiresAsphaltIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2", db-6, 1.0};
		        frequency = "1";
		        volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
	        };
	        class NoiseIn
	        {
		        sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", db-12, 1.0};
		        frequency = "1";
		        volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)"; //Definition of inside sounds
	        };

	        /*------------------------------------------------------------------*/
	        /*-------------- external sounds for screeching tires on the road -------------*/
	        /*------------------------------------------------------------------*/

	        /* sounds on the road */

	        class breaking_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        class acceleration_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };

	        class turn_right_ext_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02", db-3, 1, 80};
		        frequency	=	1;
		        volume = engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        /*-----------------------------------------------------------------*/
	        /* external sounds for screeching tires on other surfaces  */
	        /*-----------------------------------------------------------------*/

	        class breaking_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	        };
	        class acceleration_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration", db-3,	1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1]);
	        };
	        class turn_left_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15]);
	        };
	        class turn_right_ext_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt", db-3, 1, 60};
		        frequency	=	1;
		        volume = engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15]);
	        };


	        /*---------------------------------------------------------------------------*/
	        /*-------------- internal sounds for screeching tires on the road --------------*/
	        /*---------------------------------------------------------------------------*/

	        class breaking_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };
	        class acceleration_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };
	        class turn_right_int_road
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };

	        /*--------------------------------------------------------------------------------------------*/
	        /*-------------- internal sounds for screeching tires on other surfaces -------------*/
	        /*--------------------------------------------------------------------------------------------*/
	        class breaking_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15]);
	        };
	        class acceleration_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int", db-10, 1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2]);
	        };
	        class turn_left_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15]);
	        };
	        class turn_right_int_dirt
	        {
		        sound[]	=	{"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int", db-10,	1};
		        frequency	=	1;
		        volume = engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15]);
	        };
			
		};
	};
};
