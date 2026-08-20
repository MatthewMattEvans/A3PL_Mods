class CfgPatches
{
	class A3PL_Charger69
	{
		units[]=
		{
			"A3PL_Charger69"
		};
		weapons[]=
		{
		    "A3PL_CarHorn",
			"A3PL_DixieHorn"
		};
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
	class A3PL_Charger69: A3PL_Car_Base
	{
		author="Jonzie & Danny Indelicato & Henry Indelicato";
		displayName="1969 Dodge Charger R/T";
		class Library
		{
			libTextDesc="1969 Dodge Charger R/T 426 V-8 Hemi";
		};
		fuelCapacity=11.2;
		transportSoldier=4;
		differentialType="rear_open";
		model="\A3PL_Cars2\A3PL_Charger69\A3PL_Charger69";
		tf_isolatedAmount = 0.2;
		hideWeaponsDriver = true;
		hideWeaponsCargo = true;
		maxSpeed=204;
		enginePower=425;
		peakTorque=664;
		torqueCurve[]=
		{
			{0,0},
			{0.185,0.85000002},
			{0.34999999,0.99000001},
			{0.5,1},
			{0.75,0.99900001},
			{0.85000002,0.755},
			{1,0.62699997}
		};
		driverAction="A3PL_Driver2";
		cargoAction[]=
		{
			"A3PL_Passenger2",
			"A3PL_Passenger_Rear"
		};
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]=
		{
			"a3pl_cars2\common\textures\c69_default.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa"
		};
		wheelDestroyRadiusCoef=0.75;
		extCameraPosition[]={0,0.89999998,-6.1999998};
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
		htMax=1430;
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Bonnet";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]=
				{
					"Bonnet1",
					0,
					"Bonnet2",
					0
				};
			};
			class Stock_Front_Bumper: Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Front Bumper";
				forceAnimate[]=
				{
					"Front_Bumper1",
					0
				};
			};
			class Stock_Rear_Bumper: Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Rear Bumper";
				forceAnimate[]={};
			};
			class Stock_Exhaust: Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Exhaust";
				forceAnimate[]={};
			};
			class Roll_Cage: Stock_Bonnet
			{
				initPhase=0;
				displayName="Roll Cage";
				forceAnimate[]={};
			};
			class Bonnet1: Stock_Bonnet
			{
				initPhase=0;
				displayName="Reverse Cowl Scoops";
				forceAnimate[]=
				{
					"Stock_Bonnet",
					0,
					"Bonnet2",
					0
				};
			};
			class Bonnet2: Stock_Bonnet
			{
				initPhase=0;
				displayName="Bonnet Scoop";
				forceAnimate[]=
				{
					"Bonnet1",
					0,
					"Stock_Bonnet",
					0
				};
			};
			class Front_Bumper1: Stock_Bonnet
			{
				initPhase=0;
				displayName="Front Splitter";
				forceAnimate[]=
				{
					"Stock_Front_Bumper",
					0
				};
			};
			class Spoiler1: Stock_Bonnet
			{
				initPhase=0;
				displayName="Spoiler";
				forceAnimate[]={};
			};
			class General_Lee: Stock_Bonnet
			{
				initPhase=0;
				displayName="General Lee";
				forceAnimate[]=
				{
					"Stock_Bonnet",
					1,
					"Stock_Front_Bumper",
					1,
					"Stock_Rear_Bumper",
					1,
					"Stock_Exhaust",
					1,
					"Roll_Cage",
					1,
					"Bonnet1",
					0,
					"Bonnet2",
					0,
					"Front_Bumper1",
					0,
					"Spoiler1",
					0
				};
			};
		};

		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 0.4; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1.2; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.1; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 4.8; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\Idle.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\1000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\2000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\3000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\4000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\5000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\6000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\7000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\8000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\9000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\10000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\11000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\12000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\13000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\Idle.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\1000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\2000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\3000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\4000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\5000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\6000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\7000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\8000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\9000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\10000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\11000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\12000.ogg",
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
					"\A3PL_Cars2\A3PL_Charger69\sounds\13000.ogg",
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
