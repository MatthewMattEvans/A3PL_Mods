class CfgPatches
{
	class A3PL_Charger15
	{
		units[]=
		{
			"A3PL_Charger15",
			"A3PL_Charger15_PD",
			"A3PL_Charger15_PD_ST",
			"A3PL_Charger15_FD"
		};
		weapons[]={"A3FL_CarHorn"};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Soft_F"
		};
	};
};
class cfgWeapons
{
	class CarHorn;
	class A3FL_CarHorn: CarHorn
	{
		displayname="Horn";
		reloadTime=4;
		drySound[]={"A3PL_Cars\Common\Sounds\A3PL_CarHorn.ogg",2,1,200};
		scope = 2;
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRF2Wheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
		class EventHandlers;
		class Sounds;
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
		class AnimationSources
		{
			class Mods;
		};
	};
	class A3PL_Charger15: A3PL_Car_Base
	{
		author="Jonzie";
		displayName="2015 Dodge Charger";
		class Library
		{
			libTextDesc="2015 Dodge Charger R/T";
		};
		fuelCapacity=17.299999;
		transportSoldier=4;
		maxSpeed=241;
		enginePower=370;
		maxOmega=1247;
		peakTorque=536;
		wheelDestroyRadiusCoef=0.64999998;
		differentialType="rear_limited";
		model="\A3PL_Cars3\A3PL_Charger15\A3PL_Charger15";
		driverAction="A3PL_Driver2";
		cargoAction[]=
		{
			"A3PL_Passenger2",
			"A3PL_Passenger_Rear"
		};
		hiddenSelections[]=
		{
			"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(1,1,1,1.0,CO)","","","","","","","","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"
		};
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
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 2.5;	// basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1.8;	// higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 3.0;	// higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0;	// basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 4.0;	// higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0;	// higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.9;	// coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		class complexGearbox
        {
            GearboxRatios[]=
            {
                "R1",
                -3.2309999,
                "N",
                0,
                "D1",
                4.26,
                "D2",
                3.34,
                "D3",
                2.46,
                "D4",
                1.62,
                "D5",
                1.49,
                "D6",
                0.62,
                "D7",
                0.48
            };
            TransmissionRatios[]=
            {
                "High",
                4.1110001
            };
            gearBoxMode="auto";
            moveOffGear=1;
            driveString="D";
            neutralString="N";
            reverseString="R";
            transmissionDelay=0.0099999998;
        };
		class AnimationSources: AnimationSources
		{
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Towbar_Addon: Mods
			{
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
			class Stock_Bonnet
			{
				initPhase=1;
				displayName="Stock Bonnet";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Stock_Front_Bumper: Stock_Bonnet
			{
				displayName="Stock Front Bumper";
				forceAnimate[]=
				{
					"Front_Bumper1",
					0
				};
			};
			class Stock_Rear_Bumper: Stock_Bonnet
			{
				displayName="Stock Rear Bumper";
			};
			class Stock_Exhaust: Stock_Bonnet
			{
				displayName="Stock Exhaust";
			};
			class Stock_Side_Skirt: Stock_Bonnet
			{
				displayName="Stock Side Skirt";
			};
			class Stock_Spoiler: Stock_Bonnet
			{
				displayName="Stock Spoiler";
				forceAnimate[]=
				{
					"Spoiler1",
					0
				};
			};
			class Roll_Cage: Stock_Bonnet
			{
				initPhase=0;
				displayName="Roll Cage";
			};
			class Front_Bumper1: Stock_Front_Bumper
			{
				initPhase=0;
				displayName="Front Bumper Type 1";
			};
			class Spoiler1: Stock_Spoiler
			{
				initPhase=0;
				displayName="Spoiler Type 1";
				forceAnimate[]=
				{
					"Stock_Spoiler",
					0
				};
			};
		};
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Charger\Sounds\Idle.ogg",
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
					"\A3PL_Cars\Charger\Sounds\1000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\2000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\3000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\4000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\5000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\6000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\7000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\8000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\9000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\10000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\11000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\12000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\13000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\Idle.ogg",
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
					"\A3PL_Cars\Charger\Sounds\1000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\2000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\3000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\4000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\5000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\6000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\7000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\8000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\9000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\10000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\11000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\12000.ogg",
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
					"\A3PL_Cars\Charger\Sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*1";
			};
		};
	};
	class A3PL_Charger15_PD : A3PL_Charger15 {
		model = "\A3PL_Cars3\A3PL_Charger15\A3PL_Charger15_pd";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"};
		displayName = "2015 Dodge Charger PD";
		maxSpeed=247;
		enginePower=376;
		maxOmega=1247;
		peakTorque=546;
		driverAction = "A3PL_Driver_Tahoe";
		driverLeftHandAnimName = "steering_wheel";
		driverRightHandAnimName = "";
		class AnimationSources : AnimationSources 
		{
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Towbar_Addon: Mods
			{
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Spotlight: Common
			{
			};
			class Lightbar: Common
			{
			};
			class Pushbar_Addon 
			{ 
				initPhase = 1;
				displayName = "Bull Bar";
				source = "user";
				animPeriod = 0.001;
				forceAnimatePhase = 1;
				forceAnimate[] = {};
			};
			class Spotlight_Addon : Pushbar_Addon 
			{ 
			    initPhase = 1;
				displayName = "Spotlight"; 
			};
			class Devider_Addon: Pushbar_Addon
			{
				initPhase=1;
				displayName="Partition";
			};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class Lightbar1_1
			{
				color[] = {125,0,0};
				ambient[] = {125,0,0};
				position = "Lightbar1_1_pos";
				direction = "Lightbar1_1_dir";
				hitpoint = "";
				selection = "Lightbar1_1";
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 10;
				dayLight = 1;
				flareSize = 0.2;
				flareMaxDistance = 50;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 5;
					hardLimitEnd = 15;
				};
			};
			class Spotlight
			{
				color[] = { 120,120,120 };
				ambient[] = { 100,100,100 };
				position = "Spotlight_pos";
				direction = "Spotlight_dir";
				hitpoint = "Spotlight_Hit";
				selection = "Spotlight";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation { start = 2.0; constant = 0; linear = 0.1; quadratic = 0.01; hardLimitStart = 490; hardLimitEnd = 550; };
			};
			class Blue
			{
				color[]={0,0,255};
				ambient[]={0,0,90};
				position="Lightbar_Blue";
				direction="Lightbar_Blue_End";
				hitpoint="Light_L";
				selection="Front_3";
				size=1;
				innerAngle=125;
				outerAngle=180;
				coneFadeCoef=2.5;
				intensity=1;
				useFlare=0;
				dayLight=1;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=5;
					constant=3;
					linear=1.5;
					quadratic=1.5;
					hardLimitStart=100;
					hardLimitEnd=250;
				};
			};
			class Red: Blue
			{
				color[]={255,0,0};
				ambient[]={90,0,0};
				position="Lightbar_Red";
				direction="Lightbar_Red_End";
				selection="Front_4";
			};
		};
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},
			{"LightCarHeadL02","LightCarHeadR02"}
		};
		class MarkerLights
		{
			class Lightbar1
			{
				color[] = {0,0,0,0};ambient[] = {0,0,0};
				name = "Lightbar1_pos";
				blinkingPattern[] = {0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.64};
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPatternGuarantee = 1;
				intensity = 0;
				activeLight = 0;
				drawLight = 0;
				drawLightSize = 0;
				drawLightCenterSize = 0;
				dayLight = 0;
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation {start = 0;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 0;hardLimitEnd = 0;};
			};
			class Lightbar2: Lightbar1 {name = "Lightbar2_pos";blinkingPattern[] ={0.64,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08};};
		};
	};
	class A3PL_Charger15_PD_ST : A3PL_Charger15_PD {
		displayName = "2015 Dodge Charger PD ST";
		maxSpeed=247;
		enginePower=376;
		maxOmega=1247;
		peakTorque=546;
		model = "\A3PL_Cars3\A3PL_Charger15\A3PL_Charger15_pd_st";
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"};
		class AnimationSources: AnimationSources {
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Towbar_Addon: Mods
			{
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
			class Pushbar_Addon: Pushbar_Addon 
			{ 
			    initPhase = 0; 
			};
			class Spotlight_Addon: Spotlight_Addon 
			{ 
			    initPhase = 0; 
			};
		};
	};
	class A3PL_Charger15_FD : A3PL_Charger15
	{
		model = "\A3PL_Cars3\A3PL_Charger15\A3PL_Charger15_fd";
		hiddenSelections[]=
		{
			"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"A3PL_Textures\Charger15\FIFR\FIFR_Charger_2015_BAT1.paa","","","","","","","","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa","a3pl_cars\common\textures\glass.paa"
		};
		displayName = "2015 Dodge Charger FD";
		driverAction = "A3PL_Driver_Tahoe";
		driverLeftHandAnimName = "steering_wheel";
		driverRightHandAnimName = "";
		class AnimationSources : AnimationSources 
		{
			class Mods
			{
				initPhase=0;
				displayName="Mods";
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				forceAnimate[]={};
			};
			class Towbar_Addon: Mods
			{
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Spotlight : Common
			{
			};
			class Lightbar : Common
			{
			};
			class Pushbar_Addon 
			{ 
				initPhase = 1;
				displayName = "Bull Bar";
				source = "user";
				animPeriod = 0.001;
				forceAnimatePhase = 1;
				forceAnimate[] = {};
			};
			class Spotlight_Addon : Pushbar_Addon { initPhase = 1;displayName = "Spotlight"; };
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class Lightbar1_1
			{
				color[] = {125,0,0};
				ambient[] = {125,0,0};
				position = "Lightbar1_1_pos";
				direction = "Lightbar1_1_dir";
				hitpoint = "";
				selection = "Lightbar1_1";
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 10;
				dayLight = 1;
				flareSize = 0.2;
				flareMaxDistance = 25;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 5;
					hardLimitEnd = 15;
				};
			};
			class Spotlight
			{
				color[] = { 120,120,120 };
				ambient[] = { 100,100,100 };
				position = "Spotlight_pos";
				direction = "Spotlight_dir";
				hitpoint = "Spotlight_Hit";
				selection = "Spotlight";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation { start = 2.0; constant = 0; linear = 0.1; quadratic = 0.01; hardLimitStart = 490; hardLimitEnd = 550; };
			};
			class Lightbar1_2: Lightbar1_1 {position = "Lightbar1_2_pos";direction = "Lightbar1_2_dir";selection = "Lightbar1_2";};
			class Lightbar1_3: Lightbar1_1 {position = "Lightbar1_3_pos";direction = "Lightbar1_3_dir";selection = "Lightbar1_3";};
			class Lightbar1_4: Lightbar1_1 {position = "Lightbar1_4_pos";direction = "Lightbar1_4_dir";selection = "Lightbar1_4";};
			class Lightbar1_5: Lightbar1_1 {position = "Lightbar1_5_pos";direction = "Lightbar1_5_dir";selection = "Lightbar1_5";};
			class Lightbar1_6: Lightbar1_1 {position = "Lightbar1_6_pos";direction = "Lightbar1_6_dir";selection = "Lightbar1_6";};
			class Lightbar1_7: Lightbar1_1 {position = "Lightbar1_7_pos";direction = "Lightbar1_7_dir";selection = "Lightbar1_7";};
			class Lightbar1_8: Lightbar1_1 {position = "Lightbar1_8_pos";direction = "Lightbar1_8_dir";selection = "Lightbar1_8";};
			class Lightbar2_1
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				position = "Lightbar2_1_pos";
				direction = "Lightbar2_1_dir";
				hitpoint = "";
				selection = "Lightbar2_1";
				size = 1;
				innerAngle = 90;
				outerAngle = 360;
				coneFadeCoef = 10;
				intensity = 0.5;
				useFlare = 10;
				dayLight = 1;
				flareSize = 0.1;
				flareMaxDistance = 25;
				class Attenuation
				{
					start = 0;
					constant = 20;
					linear = 0;
					quadratic = 0.5;
					hardLimitStart = 5;
					hardLimitEnd = 15;
				};
			};
			class Lightbar2_2: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_2_pos";direction = "Lightbar2_2_dir";selection = "Lightbar2_2";};
			class Lightbar2_3: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_3_pos";direction = "Lightbar2_3_dir";selection = "Lightbar2_3";};
			class Lightbar2_4: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_4_pos";direction = "Lightbar2_4_dir";selection = "Lightbar2_4";};
			class Lightbar2_5: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_5_pos";direction = "Lightbar2_5_dir";selection = "Lightbar2_5";};
			class Lightbar2_6: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_6_pos";direction = "Lightbar2_6_dir";selection = "Lightbar2_6";};
			class Lightbar2_7: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_7_pos";direction = "Lightbar2_7_dir";selection = "Lightbar2_7";};
			class Lightbar2_8: Lightbar2_1 {color[] = {255,255,255};ambient[] = {255,255,255};position = "Lightbar2_8_pos";direction = "Lightbar2_8_dir";selection = "Lightbar2_8";};
		};
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},
			{"LightCarHeadL02","LightCarHeadR02"},
			{"AUX_Light1_1","AUX_Light1_2","AUX_Light1_3","AUX_Light1_4","AUX_Light1_5","AUX_Light1_6","AUX_Light1_7","AUX_Light1_8","AUX_Light1_9","AUX_Light1_10","AUX_Light1_11","AUX_Light1_12"},
			{"AUX_Light2_1","AUX_Light2_2","AUX_Light2_3","AUX_Light2_4","AUX_Light2_5","AUX_Light2_6","AUX_Light2_7","AUX_Light2_8","AUX_Light2_9","AUX_Light2_10","AUX_Light2_11","AUX_Light2_12"}
		};
		class MarkerLights
		{
			class Lightbar1
			{
				color[] = {0,0,0,0};ambient[] = {0,0,0};
				name = "Lightbar1_pos";
				blinkingPattern[] = {0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.64};
				blinking = 1;
				blinkingStartsOn = 0;
				blinkingPatternGuarantee = 1;
				intensity = 0;
				activeLight = 0;
				drawLight = 0;
				drawLightSize = 0;
				drawLightCenterSize = 0;
				dayLight = 0;
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation {start = 0;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 0;hardLimitEnd = 0;};
			};
			class Lightbar2: Lightbar1 {name = "Lightbar2_pos";blinkingPattern[] ={0.64,0.08,0.08,0.08,0.08,0.08,0.08,0.08,0.08};};
			class DirectL1: Lightbar1 {name = "DirectL1_pos";blinkingPattern[] ={0.8,0.1};useFlare = 1;flareSize = 1;color[] = {0.3,0.1,0,1};};
			class DirectL2: DirectL1 {name = "DirectL2_pos";blinkingPattern[] = {0.7,0.2};};
			class DirectL3: DirectL1 {name = "DirectL3_pos";blinkingPattern[] ={0.6,0.3};};
			class DirectL4: DirectL1 {name = "DirectL4_pos";blinkingPattern[] ={0.5,0.4};};
			class DirectL5: DirectL1 {name = "DirectL5_pos";blinkingPattern[] ={0.4,0.5};};
			class DirectL6: DirectL1 {name = "DirectL6_pos";blinkingPattern[] ={0.3,0.6};};
			class DirectL7: DirectL1 {name = "DirectL7_pos";blinkingPattern[] ={0.2,0.7};};
			class DirectL8: DirectL1 {name = "DirectL8_pos";blinkingPattern[] ={0.1,0.8};};
			class DirectR1: DirectL1 {name = "DirectR1_pos";blinkingPattern[] ={0.1,0.8};};
			class DirectR2: DirectL1 {name = "DirectR2_pos";blinkingPattern[] ={0.2,0.7};};
			class DirectR3: DirectL1 {name = "DirectR3_pos";blinkingPattern[] ={0.3,0.6};};
			class DirectR4: DirectL1 {name = "DirectR4_pos";blinkingPattern[] ={0.4,0.5};};
			class DirectR5: DirectL1 {name = "DirectR5_pos";blinkingPattern[] ={0.5,0.4};};
			class DirectR6: DirectL1 {name = "DirectR6_pos";blinkingPattern[] ={0.6,0.7};};
			class DirectR7: DirectL1 {name = "DirectR7_pos";blinkingPattern[] ={0.8,0.1};};
			class DirectR8: DirectL1 {name = "DirectR8_pos";blinkingPattern[] ={0.1,0.8};};
			class DirectS1: DirectL1 {name = "DirectS1_pos";blinkingPattern[] ={0.8,0.2};};
			class DirectS2: DirectL1 {name = "DirectS2_pos";blinkingPattern[] ={0.6,0.4};};
			class DirectS3: DirectL1 {name = "DirectS3_pos";blinkingPattern[] ={0.4,0.6};};
			class DirectS4: DirectL1 {name = "DirectS4_pos";blinkingPattern[] ={0.2,0.8};};
			class DirectS5: DirectL1 {name = "DirectS5_pos";blinkingPattern[] ={0.2,0.8};};
			class DirectS6: DirectL1 {name = "DirectS6_pos";blinkingPattern[] ={0.4,0.6};};
			class DirectS7: DirectL1 {name = "DirectS7_pos";blinkingPattern[] ={0.6,0.4};};
			class DirectS8: DirectL1 {name = "DirectS8_pos";blinkingPattern[] ={0.8,0.2};};
			class DirectF1: DirectL1 {name = "DirectF1_pos";blinkingPattern[] = {0,0.16,0.16};};
			class DirectF2: DirectF1 {name = "DirectF2_pos";blinkingPattern[] ={0.16,0.16,0};};
			class DirectF3: DirectF1 {name = "DirectF3_pos";blinkingPattern[] ={0,0.16,0.16};};
			class DirectF4: DirectF1 {name = "DirectF4_pos";blinkingPattern[] ={0.16,0.16,0};};
			class DirectF5: DirectF1 {name = "DirectF5_pos";blinkingPattern[] ={0,0.16,0.16};};
			class DirectF6: DirectF1 {name = "DirectF6_pos";blinkingPattern[] ={0.16,0.16,0};};
			class DirectF7: DirectF1 {name = "DirectF7_pos";blinkingPattern[] ={0,0.16,0.16};};
			class DirectF8: DirectF1 {name = "DirectF8_pos";blinkingPattern[] ={0.16,0.16,0};};
		};
		class TransportItems
		{
			class _xx_Helmet_Lieutenant
			{
				name = "A3PL_FireHelmet_Lieutenant_New";
				count = 1;
			};
			class _xx_Helmet_Captain
			{
				name = "A3PL_FireHelmet_Captain_New";
				count = 1;
			};
			class _xx_Helmet_Batt_1
			{
				name = "A3PL_FireHelmet_Batt_1_New";
				count = 1;
			};
			class _xx_Helmet_Batt_2
			{
				name = "A3PL_FireHelmet_Batt_2_New";
				count = 1;
			};
			class _xx_Helmet_Dep_Chief
			{
				name = "A3PL_FireHelmet_Dep_Chief_New";
				count = 1;
			};
			class _xx_Helmet_Chief
			{
				name = "A3PL_FireHelmet_Chief_New";
				count = 1;
			};
			class _xx_FireExtinguisher
			{
				name = "A3PL_FireExtinguisher";
				count = 1;
			};
			class _xx_FireExtinguisher_Mag
			{
				name = "A3PL_Extinguisher_Water_Mag";
				count = 5;
			};
			class _xx_Protective
			{
				name = "A3PL_FD_Protective_Uniform";
				count = 2;
			};
			class _xx_SCBA
			{
				name = "A3PL_FD_Oxygen";
				count = 2;
			};
			class _xx_Mask
			{
				name = "A3PL_FD_Mask";
				count = 2;
			};
		};
	};
};
