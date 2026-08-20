////////////////////////////////////////////////////////////////////
//DeRap: EC_Explorer19\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Thu Oct 17 00:12:40 2024 : 'file' last modified on Thu Dec 21 06:00:02 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_Explorer19
	{
		units[] = {"EC_Explorer19","EC_Explorer19_PD","EC_Explorer19_PD_ST","EC_Explorer19_FD"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
		weapons[] = {};
	};
};
class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		EC_Explorer19_Passenger = "EC_Explorer19_Passenger";
		EC_Explorer19_Driver = "EC_Explorer19_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class EC_Explorer19_Passenger: Crew
		{
			file = "\EC_Cars\EC_Explorer19\Anim\EC_Explorer19_Passenger.rtm";
		};
		class EC_Explorer19_Driver: Crew
		{
			file = "\EC_Cars\EC_Explorer19\Anim\EC_Explorer19_Driver.rtm";
		};
	};
};
class CfgVehicles
{
	class Car;
	class Car_F: Car
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
		class AnimationSources;
	};
	class EC_Explorer19: Car_F
	{
		scope = 2;
		model = "EC_Cars\EC_Explorer19\EC_Explorer19";
		author = "Marshall McMullen :)";
		weapons[] = {"A3PL_CarHorn"};
		displayName = "Ford Explorer 2019";
		extCameraPosition[] = {0,1.2,-5};
		hiddenSelections[]=
		{
			"Body",
			"Lett_1",
			"Lett_2",
			"Lett_3",
			"num_1",
			"num_2",
			"num_3",
			"num_4",
			"glass1",
			"glass2",
			"glass3",
			"glass4",
			"glass5",
			"glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,CO)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)"
		};
		class EventHandlers
		{
			init = "if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class AnimationSources: AnimationSources
		{
			class Zeroanimation
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class LightAnim
			{
				source = "user";
				animPeriod = 1;
				initPhase = 1;
			};
			class HitLFWheel
			{
				source = "Hit";
				hitpoint = "HitLFWheel";
				raw = 1;
			};
			class HitLF2Wheel
			{
				source = "Hit";
				hitpoint = "HitLF2Wheel";
				raw = 1;
			};
			class HitRFWheel
			{
				source = "Hit";
				hitpoint = "HitRFWheel";
				raw = 1;
			};
			class HitRF2Wheel
			{
				source = "Hit";
				hitpoint = "HitRF2Wheel";
				raw = 1;
			};
			class HitBody
			{
				source = "Hit";
				hitpoint = "HitBody";
				raw = 1;
			};
			class HitGlass1
			{
				source = "Hit";
				hitpoint = "HitGlass1";
				raw = 1;
			};
			class HitGlass2
			{
				source = "Hit";
				hitpoint = "HitGlass2";
				raw = 1;
			};
			class HitGlass3
			{
				source = "Hit";
				hitpoint = "HitGlass3";
				raw = 1;
			};
			class HitGlass4
			{
				source = "Hit";
				hitpoint = "HitGlass4";
				raw = 1;
			};
			class HitGlass5
			{
				source = "Hit";
				hitpoint = "HitGlass5";
				raw = 1;
			};
			class HitGlass6
			{
				source = "Hit";
				hitpoint = "HitGlass6";
				raw = 1;
			};
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Head_Lights: Common{};
			class High_Beam: Common{};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 4.5;
			turnIncreaseLinear = 0.2;
			turnIncreaseTime = 6;
			turnDecreaseConst = 6;
			turnDecreaseLinear = 4;
			turnDecreaseTime = 0;
			maxTurnHundred = 0.7;
		};
		terrainCoef = 0.8;
		turnCoef = 2.8;
		precision = 9;
		brakeDistance = 3;
		acceleration = 15;
		fireResistance = 5;
		cost = 50000;
		secondaryExplosion = 0;
		armor = 40;
		transportMaxBackpacks = 4;
		transportSoldier = 5;
		wheelDamageRadiusCoef = 0.7;
		wheelDestroyRadiusCoef = 0.3;
		maxFordingDepth = 0.3;
		waterResistance = 1;
		crewCrashProtection = 2;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class CargoTurret;
		class Turrets{};
		class TransportItems{};
		class HitPoints: HitPoints
		{
			class HitLFWheel: HitLFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor = 0.5;
				passThrough = 0;
			};
			class HitFuel
			{
				armor = 0.5;
				material = -1;
				name = "fueltank";
				visual = "";
				passThrough = 0.2;
			};
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "engine";
				visual = "";
				passThrough = 0.2;
			};
			class HitBody: HitBody
			{
				name = "body";
				visual = "camo1";
				passThrough = 0.5;
			};
			class HitGlass1: HitGlass1
			{
				armor = 0.01;
			};
			class HitGlass2: HitGlass2
			{
				armor = 0.01;
			};
			class HitGlass3: HitGlass3
			{
				armor = 0.01;
			};
			class HitGlass4: HitGlass4
			{
				armor = 0.01;
			};
			class HitGlass5: HitGlass5
			{
				armor = 0.01;
			};
			class HitGlass6: HitGlass6
			{
				armor = 0.01;
			};
		};
		driverAction = "EC_Explorer19_Driver";
		cargoAction[] = {"EC_Explorer19_Passenger","EC_Explorer19_Passenger","EC_Explorer19_Passenger","EC_Explorer19_Passenger","EC_Explorer19_Passenger"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOffInt[] = {"",0.39810717,1};
		soundEngineOffExt[] = {"",0.4466836,1,200};
		buildCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_01",0.70794576,1,200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_02",0.70794576,1,200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_03",0.70794576,1,200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_building_04",0.70794576,1,200};
		soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_01",0.70794576,1,200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_02",0.70794576,1,200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_03",0.70794576,1,200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_04",0.70794576,1,200};
		WoodCrash4[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_05",0.70794576,1,200};
		WoodCrash5[] = {"A3\Sounds_F\vehicles\soft\noises\crash_mix_wood_06",0.70794576,1,200};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_01",0.70794576,1,200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_02",0.70794576,1,200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_03",0.70794576,1,200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\soft\noises\crash_vehicle_04",0.70794576,1,200};
		soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg","db-13",1,150};
				frequency = "0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg","db-11",1,200};
				frequency = "0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg","db-9",1,240};
				frequency = "0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg","db-8",1,280};
				frequency = "0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg","db-7",1,320};
				frequency = "0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg","db-6",1,360};
				frequency = "0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg","db-5",1,420};
				frequency = "0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume = "engineOn*camPos*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg","db-13",1,150};
				frequency = "0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg","db-11",1,200};
				frequency = "0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg","db-9",1,240};
				frequency = "0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg","db-8",1,280};
				frequency = "0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg","db-7",1,320};
				frequency = "0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg","db-6",1,360};
				frequency = "0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume = "engineOn*camPos*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_ext
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg","db-5",1,420};
				frequency = "0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume = "engineOn*camPos*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};
			class Idle_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg","db-15",1};
				frequency = "0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg","db-14",1};
				frequency = "0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg","db-12",1};
				frequency = "0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg","db-11",1};
				frequency = "0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg","db-10",1};
				frequency = "0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg","db-9",1};
				frequency = "0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg","db-6",1};
				frequency = "0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg","db-15",1};
				frequency = "0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg","db-14",1};
				frequency = "0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg","db-12",1};
				frequency = "0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg","db-11",1};
				frequency = "0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg","db-10",1};
				frequency = "0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg","db-9",1};
				frequency = "0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_int
			{
				sound[] = {"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg","db-6",1};
				frequency = "0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};
			class Movement
			{
				sound = "soundEnviron";
				frequency = "1";
				volume = "0";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.56234133,1,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.56234133,1,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.56234133,1,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.56234133,1,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.56234133,1,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.8912509,1,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.31622776,1,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.4466836,1};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.19952624,1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1,15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.39810717,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay = 0.1;
		brakeIdleSpeed = 1.78;
		maxSpeed = 280;
		fuelCapacity = 42;
		wheelCircumference = 2.277;
		idleRpm = 900;
		redRpm = 6900;
		antiRollbarForceCoef = 2.3;
		antiRollbarForceLimit = 2;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.882,"N",0,"D1",4.484,"D2",2.872,"D3",1.842,"D4",1.414,"D5",1,"D6",0.742};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "all_open";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.5;
		clutchStrength = 55;
		maxOmega = 690;
		enginePower = 320;
		peakTorque = 500;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchDisengaged = 2;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		torqueCurve[] = {{0,0},{0.14,0.41},{0.28,0.7},{0.43,1},{0.56,1},{0.7,0.97},{0.86,0.88},{1,0.69}};
		changeGearMinEffectivity[] = {1,0.15,0.85,0.85,0.85,0.85,0.85,0.75,0.75};
		switchTime = 0.2;
		latency = 1;
		class Wheels
		{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				mass = 20;
				MOI = 3.3;
				maxBrakeTorque = 2300;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.15;
				MaxDroop = 0.15;
				sprungMass = 365;
				springStrength = 39125;
				springDamperRate = 3023;
				longitudinalStiffnessPerUnitGravity = 5800;
				latStiffX = 25;
				latStiffY = 220;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				steering = 0;
				side = "left";
				latStiffX = 25;
				latStiffY = 22000;
				maxHandBrakeTorque = 7500;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
				latStiffX = 25;
				latStiffY = 220;
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 7500;
				steering = 0;
				side = "right";
				latStiffX = 25;
				latStiffY = 22000;
			};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 10;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 10;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class FrontCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 10;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		memoryPointTrackFLL = "TrackFLL";
		memoryPointTrackFLR = "TrackFLR";
		memoryPointTrackBLL = "TrackBLL";
		memoryPointTrackBLR = "TrackBLR";
		memoryPointTrackFRL = "TrackFRL";
		memoryPointTrackFRR = "TrackFRR";
		memoryPointTrackBRL = "TrackBRL";
		memoryPointTrackBRR = "TrackBRR";
		class Damage
		{
			tex[] = {};
			mat[] = {"A3PL_Cars\Common\rvmats\car_paint_old.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat"};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust3
			{
				position = "exhaust3_pos";
				direction = "exhaust3_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust4
			{
				position = "exhaust4_pos";
				direction = "exhaust4_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1000,1000,1200};
				ambient[] = {15,15,15};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				hitpoint = "HighBeamL";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				hitpoint = "HighBeamR";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"}};
	};
	class EC_Explorer19_PD: EC_Explorer19
	{
		model = "EC_Cars\EC_Explorer19\EC_Explorer19_PD";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = {"A3PL_Textures\Explorer19\FISD\FISD_Explorer19_Patrol.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)","#(argb,8,8,3)color(0,0,0,0.8,CA)"};
		displayName = "2019 Ford Explorer PD";
		maxOmega = 828;
		enginePower = 457.2;
		peakTorque = 810;
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lightbar: Common{};
			class Directional_R: Common{};
			class Directional_S: Common{};
			class Directional_F: Common{};
			class Directional_L: Common{};
			class Lightbar1
			{
				source = "MarkerLight";
				markerLight = "Lightbar1";
			};
			class Lightbar2: Lightbar1
			{
				markerLight = "Lightbar2";
			};
			class DirectL1: Lightbar1
			{
				markerLight = "DirectL1";
			};
			class DirectL2: Lightbar1
			{
				markerLight = "DirectL2";
			};
			class DirectL3: Lightbar1
			{
				markerLight = "DirectL3";
			};
			class DirectL4: Lightbar1
			{
				markerLight = "DirectL4";
			};
			class DirectL5: Lightbar1
			{
				markerLight = "DirectL5";
			};
			class DirectL6: Lightbar1
			{
				markerLight = "DirectL6";
			};
			class DirectL7: Lightbar1
			{
				markerLight = "DirectL7";
			};
			class DirectL8: Lightbar1
			{
				markerLight = "DirectL8";
			};
			class DirectR1: Lightbar1
			{
				markerLight = "DirectR1";
			};
			class DirectR2: Lightbar1
			{
				markerLight = "DirectR2";
			};
			class DirectR3: Lightbar1
			{
				markerLight = "DirectR3";
			};
			class DirectR4: Lightbar1
			{
				markerLight = "DirectR4";
			};
			class DirectR5: Lightbar1
			{
				markerLight = "DirectR5";
			};
			class DirectR6: Lightbar1
			{
				markerLight = "DirectR6";
			};
			class DirectR7: Lightbar1
			{
				markerLight = "DirectR7";
			};
			class DirectR8: Lightbar1
			{
				markerLight = "DirectR8";
			};
			class DirectS1: Lightbar1
			{
				markerLight = "DirectS1";
			};
			class DirectS2: Lightbar1
			{
				markerLight = "DirectS2";
			};
			class DirectS3: Lightbar1
			{
				markerLight = "DirectS3";
			};
			class DirectS4: Lightbar1
			{
				markerLight = "DirectS4";
			};
			class DirectS5: Lightbar1
			{
				markerLight = "DirectS5";
			};
			class DirectS6: Lightbar1
			{
				markerLight = "DirectS6";
			};
			class DirectS7: Lightbar1
			{
				markerLight = "DirectS7";
			};
			class DirectS8: Lightbar1
			{
				markerLight = "DirectS8";
			};
			class DirectF1: Lightbar1
			{
				markerLight = "DirectF1";
			};
			class DirectF2: Lightbar1
			{
				markerLight = "DirectF2";
			};
			class DirectF3: Lightbar1
			{
				markerLight = "DirectF3";
			};
			class DirectF4: Lightbar1
			{
				markerLight = "DirectF4";
			};
			class DirectF5: Lightbar1
			{
				markerLight = "DirectF5";
			};
			class DirectF6: Lightbar1
			{
				markerLight = "DirectF6";
			};
			class DirectF7: Lightbar1
			{
				markerLight = "DirectF7";
			};
			class DirectF8: Lightbar1
			{
				markerLight = "DirectF8";
			};
			class AUX
			{
				source = "user";
				animPeriod = 0.2;
				initPhase = 0;
			};
			class Siren_Control_Noob
			{
				source = "user";
				animPeriod = 0.05;
				initPhase = 5.6;
			};
			class Laptop
			{
				source = "user";
				animPeriod = 2;
				initPhase = 0;
			};
			class Laptop_Top
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class Spotlight: Common{};
			class Pushbar_Addon
			{
				initPhase = 1;
				source = "user";
				animPeriod = 0.001;
				forceAnimate[] = {};
			};
			class Spotlight_Addon: Pushbar_Addon{};
			class devider_addon: Pushbar_Addon{};
			class spotlight_rotate: Common{};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01{};
			class LightCarHeadR01: LightCarHeadR01{};
			class LightCarHeadL02: LightCarHeadL02{};
			class LightCarHeadR02: LightCarHeadR02{};
			class Spotlight
			{
				color[] = {120,120,120};
				ambient[] = {100,100,100};
				position = "Spotlight_pos";
				direction = "Spotlight_axis";
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
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 490;
					hardLimitEnd = 550;
				};
			};
			class Blue
			{
				color[] = {0,0,255};
				ambient[] = {0,0,90};
				position = "Lightbar_Blue";
				direction = "Lightbar_Blue_End";
				hitpoint = "Light_L";
				selection = "Front_3";
				size = 1;
				innerAngle = 125;
				outerAngle = 180;
				coneFadeCoef = 2.5;
				intensity = 1;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 5;
					constant = 3;
					linear = 1.5;
					quadratic = 1.5;
					hardLimitStart = 100;
					hardLimitEnd = 250;
				};
			};
			class Red: Blue
			{
				color[] = {255,0,0};
				ambient[] = {90,0,0};
				position = "Lightbar_Red";
				direction = "Lightbar_Red_End";
				selection = "Front_4";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"}};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst = 1;
			turnIncreaseLinear = 3;
			turnIncreaseTime = 0;
			turnDecreaseConst = 8;
			turnDecreaseLinear = 0;
			turnDecreaseTime = 0;
			maxTurnHundred = 1;
		};
	};
	class EC_Explorer19_PD_ST: EC_Explorer19_PD
	{
		model = "\EC_Cars\EC_Explorer19\EC_Explorer19_PD_ST";
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName = "2019 Ford Explorer PD ST";
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon: Pushbar_Addon
			{
				initPhase = 0;
			};
			class Spotlight_Addon: Spotlight_Addon
			{
				initPhase = 0;
			};
			class devider_addon: Spotlight_Addon
			{
				initPhase = 0;
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1000,1000,1200};
				ambient[] = {15,15,15};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				hitpoint = "HighBeamL";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				hitpoint = "HighBeamR";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class Spotlight
			{
				color[] = {120,120,120};
				ambient[] = {100,100,100};
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
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 490;
					hardLimitEnd = 550;
				};
			};
			class Blue
			{
				color[] = {0,0,255};
				ambient[] = {0,0,90};
				position = "Lightbar_Blue";
				direction = "Lightbar_Blue_End";
				hitpoint = "Light_L";
				selection = "Front_3";
				size = 1;
				innerAngle = 125;
				outerAngle = 180;
				coneFadeCoef = 2.5;
				intensity = 1;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 5;
					constant = 3;
					linear = 1.5;
					quadratic = 1.5;
					hardLimitStart = 100;
					hardLimitEnd = 250;
				};
			};
			class Red: Blue
			{
				color[] = {255,0,0};
				ambient[] = {90,0,0};
				position = "Lightbar_Red";
				direction = "Lightbar_Red_End";
				selection = "Front_4";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"}};
	};
	class EC_Explorer19_FD: EC_Explorer19_PD
	{
		model = "\EC_Cars\EC_Explorer19\EC_Explorer19_FD";
		hiddenSelectionsTextures[] = {"A3PL_Textures\Explorer19\FIFR\FIFR_Explorer19_Command.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName = "2019 Ford Explorer FD";
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon: Pushbar_Addon
			{
				initPhase = 0;
			};
			class Spotlight_Addon: Spotlight_Addon
			{
				initPhase = 0;
			};
			class devider_addon: Spotlight_Addon
			{
				initPhase = 0;
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1000,1000,1200};
				ambient[] = {15,15,15};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				hitpoint = "HighBeamL";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				hitpoint = "HighBeamR";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class Spotlight
			{
				color[] = {120,120,120};
				ambient[] = {100,100,100};
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
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 490;
					hardLimitEnd = 550;
				};
			};
			class Blue
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				position = "Lightbar_Blue";
				direction = "Lightbar_Blue_End";
				hitpoint = "Light_L";
				selection = "Front_3";
				size = 1;
				innerAngle = 125;
				outerAngle = 180;
				coneFadeCoef = 2.5;
				intensity = 1;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				flareMaxDistance = 0;
				class Attenuation
				{
					start = 5;
					constant = 3;
					linear = 1.5;
					quadratic = 1.5;
					hardLimitStart = 100;
					hardLimitEnd = 250;
				};
			};
			class Red: Blue
			{
				color[] = {255,0,0};
				ambient[] = {90,0,0};
				position = "Lightbar_Red";
				direction = "Lightbar_Red_End";
				selection = "Front_4";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"}};
	};
};
