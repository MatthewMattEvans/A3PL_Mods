class CfgPatches
{
	class A3FL_Supra
	{
		units[]=
		{
			"A3FL_Supra"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Soft_F"
		};
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class Car;
	class Car_F: Car
	{
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitBody;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
		};
		class EventHandlers;
	};
	class A3FL_Supra: Car_F
	{
		scope=2;
		model="A3FL_Cars5\A3FL_Supra\A3FL_Supra";
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)"};
		insideSoundCoef=1;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		secondaryExplosion=0;
		class TransportItems {};
		class UserActions {};
		class AnimationSources
        {
            class Stock_Bonnet {initPhase = 1;displayName = "Stock Bonnet";source = "user";animPeriod = 0.001;forceAnimatePhase = 1;forceAnimate[] = {};};
            class Stock_Front_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Front Bumper";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Front_Bumper3", 0};};
            class Stock_Rear_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Rear Bumper";forceAnimate[] = {"Rear_Bumper1", 0,"Rear_Bumper2", 0,"Rear_Bumper3", 0,};};
            class Stock_Spoiler: Stock_Bonnet {initPhase = 1;displayName = "Stock Spoiler";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,};};
            class Front_Bumper1: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 1";forceAnimate[] = {"Stock_Front_Bumper", 0,"Front_Bumper2", 0,"Front_Bumper3", 0};};
            class Front_Bumper2: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 2";forceAnimate[] = {"Front_Bumper1", 0,"Stock_Front_Bumper", 0,"Front_Bumper3", 0};};
            class Front_Bumper3: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 3";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Stock_Front_Bumper", 0};};
            class Rear_Bumper1: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 1";forceAnimate[] = {"Stock_Rear_Bumper", 0,"Rear_Bumper2", 0};};
            class Rear_Bumper2: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 2";forceAnimate[] = {"Rear_Bumper1", 0,"Stock_Rear_Bumper", 0};};
            class Spoiler1: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 1";forceAnimate[] = {"Stock_Spoiler", 0, "Spoiler2", 0};};
            class Spoiler2: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 2";forceAnimate[] = {"Spoiler1", 0, "Stock_Spoiler", 0};};
            class Zeroanimation
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
			class LightAnim
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class HitLFWheel
			{
				source="Hit";
				hitpoint="HitLFWheel";
				raw=1;
			};
			class HitLF2Wheel
			{
				source="Hit";
				hitpoint="HitLF2Wheel";
				raw=1;
			};
			class HitRFWheel
			{
				source="Hit";
				hitpoint="HitRFWheel";
				raw=1;
			};
			class HitRF2Wheel
			{
				source="Hit";
				hitpoint="HitRF2Wheel";
				raw=1;
			};
			class HitBody
			{
				source="Hit";
				hitpoint="HitBody";
				raw=1;
			};
			class HitGlass1
			{
				source="Hit";
				hitpoint="HitGlass1";
				raw=1;
			};
			class HitGlass2
			{
				source="Hit";
				hitpoint="HitGlass2";
				raw=1;
			};
			class HitGlass3
			{
				source="Hit";
				hitpoint="HitGlass3";
				raw=1;
			};
			class HitGlass4
			{
				source="Hit";
				hitpoint="HitGlass4";
				raw=1;
			};
			class HitGlass5
			{
				source="Hit";
				hitpoint="HitGlass5";
				raw=1;
			};
			class HitGlass6
			{
				source="Hit";
				hitpoint="HitGlass6";
				raw=1;
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Head_Lights: Common{};
			class High_Beam: Common {};
        };
		picture="\A3FL_Common\A3PL_SmallPictureMod.paa";
		weapons[]={"A3PL_CarHorn"};
		displayName="1998 Toyota Supra Mk.4";
		author="A3FL Marshall";
		terrainCoef=2.5;
		turnCoef=2.5;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		armor=100;
		allowDamage=1;
		cost=50000;
		extCameraPosition[] = {0,0.5,-4};
		transportMaxBackpacks=5;
		transportSoldier=1;
		wheelDamageRadiusCoef=0.89999998;
		wheelDestroyRadiusCoef=0.40000001;
		maxFordingDepth=0.5;
		waterResistance=1;
		crewCrashProtection=2;
		driverLeftHandAnimName="drivewheel";
		driverRightHandAnimName="drivewheel";
		class CargoTurret;
		class Turrets
		{
		};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor=0.52499998;
				passThrough=0;
			};
			class HitLBWheel: HitLBWheel
			{
				armor=0.52499998;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.52499998;
				passThrough=0;
			};
			class HitRBWheel: HitRBWheel
			{
				armor=0.52499998;
				passThrough=0;
			};
			class HitFuel
			{
				armor=0.5;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=0.5;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=1;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.25;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.25;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.25;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.25;
			};
		};
		driverAction="driver_low01";
		cargoAction[]=
		{
			"passenger_low01"
		};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		cargoGetInAction[]=
		{
			"GetInLow"
		};
		cargoGetOutAction[]=
		{
			"GetOutLow"
		};
		attenuationEffectType="OpenCarAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			0.56234133,
			1,
			40
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3FL_Cars5\A3FL_Supra\sounds\int_start.wav",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Cars5\A3FL_Supra\sounds\ext_start.wav",
			0.44668359,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3FL_Cars5\A3FL_Supra\sounds\int_stop.wav",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3FL_Cars5\A3FL_Supra\sounds\ext_stop.wav",
			0.44668359,
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_01",
			0.70794576,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_02",
			0.70794576,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_03",
			0.70794576,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_building_04",
			0.70794576,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",
			0.70794576,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",
			0.70794576,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",
			0.70794576,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",
			0.70794576,
			1,
			200
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",
			0.70794576,
			1,
			200
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",
			0.70794576,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.16599999,
			"woodCrash1",
			0.16599999,
			"woodCrash2",
			0.16599999,
			"woodCrash3",
			0.16599999,
			"woodCrash4",
			0.16599999,
			"woodCrash5",
			0.16599999
		};
		ArmorCrash0[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",
			0.70794576,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",
			0.70794576,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",
			0.70794576,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",
			0.70794576,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_idle.wav",
					0.22387211,
					1,
					150
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_1000.wav",
					0.2818383,
					1,
					200
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_2000.wav",
					0.3548134,
					1,
					240
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_3000.wav",
					0.39810717,
					1,
					280
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_4000.wav",
					0.44668359,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_5000.wav",
					0.50118721,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*camPos*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_6000.wav",
					0.56234133,
					1,
					420
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*camPos*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_1000.wav",
					0.50118721,
					1,
					200
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_2000.wav",
					0.56234133,
					1,
					250
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_3000.wav",
					0.63095737,
					1,
					280
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_4000.wav",
					0.70794576,
					1,
					320
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_5000.wav",
					0.79432821,
					1,
					360
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_6000.wav",
					1,
					1,
					400
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\ext_7000.wav",
					1.2589254,
					1,
					450
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_idle.wav",
					0.17782794,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_1000.wav",
					0.19952622,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_2000.wav",
					0.25118864,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_3000.wav",
					0.2818383,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_4000.wav",
					0.31622776,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_5000.wav",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_6000.wav",
					0.50118721,
					1
				};
				frequency="0.95	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_1000.wav",
					0.31622776,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(400/	6900),(1150/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(400/	6900),(700/	6900)])	*	((rpm/	6900) factor[(1100/	6900),(900/	6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_2000.wav",
					0.3548134,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(900/	6900),(2100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(870/	6900),(1100/	6900)])	*	((rpm/	6900) factor[(2100/	6900),(1300/	6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_3000.wav",
					0.39810717,
					1
				};
				frequency="0.8	+		((rpm/	6900) factor[(1300/	6900),(3100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(1250/	6900),(2050/	6900)])	*	((rpm/	6900) factor[(3100/	6900),(2300/	6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_4000.wav",
					0.44668359,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(2200/	6900),(4100/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(2250/	6900),(3050/	6900)])	*	((rpm/	6900) factor[(4100/	6900),(3300/	6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_5000.wav",
					0.50118721,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(3300/	6900),(4900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(3250/	6900),(4050/	6900)])	*	((rpm/	6900) factor[(4870/	6900),(4200/	6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_6000.wav",
					0.56234133,
					1
				};
				frequency="0.8	+	((rpm/	6900) factor[(4200/	6900),(6200/	6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	6900) factor[(4150/	6900),(4800/	6900)])	*	((rpm/	6900) factor[(6150/	6900),(5150/	6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars5\A3FL_Supra\sounds\int_7000.wav",
					0.63095737,
					1
				};
				frequency="0.9	+	((rpm/	6900) factor[(5100/	6900),(6900/	6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	6900) factor[(5100/	6900),(6100/	6900)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					0.50118721,
					1,
					60
				};
				frequency="1";
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",
					0.39810717,
					1,
					90
				};
				frequency="1";
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.50118721,
					1
				};
				frequency="1";
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.25118864,
					1
				};
				frequency="1";
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					0.70794576,
					1,
					80
				};
				frequency=1;
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-01, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.31622776,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class RearCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
			class FrontCam
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP2_pos";
					pointDirection="PIP2_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=0.69999999;
				};
			};
		};
		thrustDelay=0.2;
		brakeIdleSpeed=1.78;
		maxSpeed=284.8;
		fuelCapacity=20;
		wheelCircumference=3;
		antiRollbarForceCoef=1.25;
		antiRollbarForceLimit=1.25;
		antiRollbarSpeedMin=1.25;
		antiRollbarSpeedMax=5;
		idleRpm=1000;
		redRpm=7400;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.2309999,
				"N",
				0,
				"D1",
				4.4619999,
				"D2",
				3.5699999,
				"D3",
				2.5710001,
				"D4",
				1.97,
				"D5",
				1.601,
				"D6",
				0.89999998,
				"D7",
				0.64999998
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
		simulation="carx";
		dampersBumpCoef=0.1;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=2.5;
		rearBias=1;
		centreBias=1.5;
		clutchStrength=13;
		enginePower=321;
		maxOmega=628.3;
		peakTorque=755;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.178,0.80000001},
			{0.25,1},
			{0.461,0.89999998},
			{0.89999998,0.80000001},
			{1,0.30000001}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999,0.94999999,0.94999999};
		switchTime=0.11;
		latency=1;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width=0.3;
				mass=30;
				MOI=5.3;
				dampingRate=0.25;
				dampingRateDamaged=0.25;
				dampingRateDestroyed=5000;
				maxCompression=0.1;
				mMaxDroop=0.1;
				sprungMass=450;
				springStrength=40000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=2000;
				suspTravelDirection[]={0,-1.5,0};
				frictionVsSlipGraph[]={{0.1,1},{0.5,1},{0.7,1}};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				sprungMass=450*1.2;
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=15000;
				latStiffX=18;
				latStiffY=180;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				steering=1;
				side="right";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				sprungMass=450;
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				maxHandBrakeTorque=0;
				maxBrakeTorque=5000;
				latStiffX=18;
				latStiffY=180;
			};
			class RR: LF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				sprungMass=450*1.2;
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=15000;
				latStiffX=18;
				latStiffY=18000;
			};
		};
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst	= 0.95; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.75; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 6.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		memoryPointTrackFLL="stopa pll";
		memoryPointTrackFLR="stopa plp";
		memoryPointTrackBLL="stopa zll";
		memoryPointTrackBLR="stopa zlp";
		memoryPointTrackFRL="stopa ppl";
		memoryPointTrackFRR="stopa ppp";
		memoryPointTrackBRL="stopa zpl";
		memoryPointTrackBRR="stopa zpp";
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3PL_Cars\Common\rvmats\car_paint_old.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat",
				"A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat",
				"A3PL_Cars\Common\rvmats\Body_damage.rvmat",
				"A3PL_Cars\Common\rvmats\Body_destruct.rvmat"
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1_pos";
				direction="exhaust1_dir";
				effect="ExhaustEffectHTruck";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustEffectHTruck";
			};
		};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[]={1000,1000,1200};
				ambient[]={15,15,15};
				position="LightCarHeadL01";
				direction="LightCarHeadL01_end";
				hitpoint="L svetlo";
				selection="L svetlo";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=1;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				hitpoint="HighBeamL";
				color[]={1300,1300,2200};
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				hitpoint="HighBeamR";
				color[]={1300,1300,2200};
				innerAngle=60;
				outerAngle=100;
				coneFadeCoef=10;
				intensity=2;
				class Attenuation
				{
					start=2;
					constant=0;
					linear=0.1;
					quadratic=0.0099999998;
					hardLimitStart=390;
					hardLimitEnd=450;
				};
			};
		};
		aggregateReflectors[]=
		{
			{
				"LightCarHeadL01",
				"LightCarHeadR01"
			},			
			{
				"LightCarHeadL02",
				"LightCarHeadR02"
			}
		};
	};

};
