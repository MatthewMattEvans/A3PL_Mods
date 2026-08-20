////////////////////////////////////////////////////////////////////
//DeRap: EC_F450_Brush\config.bin
//Produced from mikero's Dos Tools Dll version 9.66
//https://mikero.bytex.digital/Downloads
//'now' is Thu Oct 17 00:12:41 2024 : 'file' last modified on Thu Dec 21 06:00:02 2023
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class EC_F450_Brush
	{
		units[] = {"EC_F450_Brush"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
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
		EC_F450_Brush_Driver = "EC_F450_Brush_Driver";
		EC_F450_Brush_Passenger = "EC_F450_Brush_Passenger";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName = "OFP2_ManSkeleton";
	gestures = "CfgGesturesMale";
	class States
	{
		class Crew;
		class EC_F450_Brush_Driver: Crew
		{
			file = "EC_Cars\EC_F450_Brush\anim\EC_F450_Brush_Driver.rtm";
		};
		class EC_F450_Brush_Passenger: Crew
		{
			file = "EC_Cars\EC_F450_Brush\anim\EC_F450_Brush_Passenger.rtm";
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
	class EC_F450_Brush: Car_F
	{
		scope = 2;
		model = "EC_Cars\EC_F450_Brush\EC_F450_Brush";
		weapons[] = {"A3PL_CarHorn"};
		displayName = "2015 Ford F450 Brush Truck";
		author = "EC Marshie Pooh";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = {"\A3PL_Textures\F450_Truck\F450_Brush.paa","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		class EventHandlers
		{
			init = "if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class BT_Lever_2
			{
				initPhase = 0;
				displayName = "BT_Lever_2";
				source = "user";
				animPeriod = 2;
				forceAnimatePhase = 0;
			};
			class BT_Lever_3
			{
				initPhase = 0;
				displayName = "BT_Lever_3";
				source = "user";
				animPeriod = 2;
				forceAnimatePhase = 0;
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
			class Head_Lights: Common{};
			class High_Beam: Common{};
		};
		class TransportItems
		{
			class _xx_Helmet_Probationer
			{
				name = "A3PL_FireHelmet_Probationer_New";
				count = 1;
			};
			class _xx_Helmet_Firefighter
			{
				name = "A3PL_FireHelmet_Firefighter_New";
				count = 3;
			};
			class _xx_Helmet_Engineer
			{
				name = "A3PL_FireHelmet_Engineer_New";
				count = 1;
			};
			class _xx_Helmet_Lieutenant
			{
				name = "A3PL_FireHelmet_Lieutenant_New";
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
				count = 4;
			};
			class _xx_FireExtinguisher_Mag
			{
				name = "A3PL_Extinguisher_Water_Mag";
				count = 4;
			};
			class _xx_FireAxe
			{
				name = "A3PL_FireAxe";
				count = 1;
			};
			class _xx_Jaws
			{
				name = "A3PL_Jaws";
				count = 1;
			};
			class _xx_Protective
			{
				name = "A3PL_FD_Protective_Uniform";
				count = 5;
			};
			class _xx_SCBA
			{
				name = "A3PL_FD_Oxygen";
				count = 5;
			};
			class _xx_Mask
			{
				name = "A3PL_FD_Mask";
				count = 5;
			};
			class _xx_Nozzle
			{
				name = "A3PL_High_Pressure";
				count = 5;
			};
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
		armor = 40;
		transportMaxBackpacks = 4;
		transportSoldier = 3;
		wheelDamageRadiusCoef = 0.7;
		wheelDestroyRadiusCoef = 0.3;
		maxFordingDepth = 0.3;
		waterResistance = 1;
		crewCrashProtection = 2;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		class CargoTurret;
		class Turrets{};
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
		driverAction = "EC_F450_Brush_Driver";
		cargoAction[] = {"EC_F450_Brush_Passenger","EC_F450_Brush_Passenger","EC_F450_Brush_Passenger"};
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",0.56234133,1};
		soundGetOut[] = {"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",0.56234133,1,40};
		soundDammage[] = {"",0.56234133,1};
		soundEngineOnInt[] = {"EC_Cars\EC_F450_Brush\sounds\startup.ogg",0.39810717,1};
		soundEngineOnExt[] = {"EC_Cars\EC_F450_Brush\sounds\startup.ogg",0.4466836,1,200};
		soundEngineOffInt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",0.39810717,1};
		soundEngineOffExt[] = {"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",0.4466836,1,200};
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
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\idle.ogg",0.31622776,1,180};
				frequency = "0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class Engine
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\1000.ogg",0.2818383,1,230};
				frequency = "0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\1000.ogg",0.35481337,1,270};
				frequency = "0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\2000.ogg",0.39810717,1,300};
				frequency = "0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\3000.ogg",0.4466836,1,330};
				frequency = "0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\4000.ogg",0.5011872,1,360};
				frequency = "0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\5000.ogg",0.56234133,1,420};
				frequency = "0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume = "engineOn*camPos*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class IdleThrust
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_00844.ogg",0.5011872,1,220};
				frequency = "0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class EngineThrust
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_01673.ogg",0.56234133,1,250};
				frequency = "0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_01918.ogg",0.63095737,1,280};
				frequency = "0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_02287.ogg",0.70794576,1,320};
				frequency = "0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_02910.ogg",0.7943282,1,360};
				frequency = "0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_03298.ogg",1,1,400};
				frequency = "0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.3";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_03933.ogg",1.2589254,1,450};
				frequency = "0.9 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class Idle_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\idle.ogg",0.17782794,1};
				frequency = "0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class Engine_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\1000.ogg",0.19952624,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\1000.ogg",0.25118864,1};
				frequency = "0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\2000.ogg",0.2818383,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\3000.ogg",0.31622776,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\4000.ogg",0.35481337,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\5000.ogg",0.5011872,1};
				frequency = "0.95 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.15";
				volume = "engineOn*(1-camPos)*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
			};
			class IdleThrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_00844.ogg",0.31622776,1};
				frequency = "0.9 + ((rpm/ 6900) factor[(400/ 6900),(1150/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(400/ 6900),(700/ 6900)]) * ((rpm/ 6900) factor[(1100/ 6900),(900/ 6900)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_01673.ogg",0.35481337,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(900/ 6900),(2100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(870/ 6900),(1100/ 6900)]) * ((rpm/ 6900) factor[(2100/ 6900),(1300/ 6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_01918.ogg",0.39810717,1};
				frequency = "0.8 +  ((rpm/ 6900) factor[(1300/ 6900),(3100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(1250/ 6900),(2050/ 6900)]) * ((rpm/ 6900) factor[(3100/ 6900),(2300/ 6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_02287.ogg",0.4466836,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(2200/ 6900),(4100/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(2250/ 6900),(3050/ 6900)]) * ((rpm/ 6900) factor[(4100/ 6900),(3300/ 6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_02910.ogg",0.5011872,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(3300/ 6900),(4900/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(3250/ 6900),(4050/ 6900)]) * ((rpm/ 6900) factor[(4870/ 6900),(4200/ 6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_03298.ogg",0.56234133,1};
				frequency = "0.8 + ((rpm/ 6900) factor[(4200/ 6900),(6200/ 6900)])*0.3";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 6900) factor[(4150/ 6900),(4800/ 6900)]) * ((rpm/ 6900) factor[(6150/ 6900),(5150/ 6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"EC_Cars\EC_F450_Brush\sounds\ExhL_03933.ogg",0.63095737,1};
				frequency = "0.9 + ((rpm/ 6900) factor[(5100/ 6900),(6900/ 6900)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 6900) factor[(5100/ 6900),(6100/ 6900)])";
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
		maxSpeed = 180;
		fuelCapacity = 42;
		wheelCircumference = 2.277;
		idleRpm = 900;
		redRpm = 6900;
		antiRollbarForceCoef = 2.1;
		antiRollbarForceLimit = 2;
		antiRollbarSpeedMin = 20;
		antiRollbarSpeedMax = 80;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-3.78,"N",0,"D1",4.0498,"D2",2.3,"D3",1.59,"D4",1.181,"D5",1,"D6",0.86,"D7",0.81};
			TransmissionRatios[] = {"High",4.111};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.5;
		clutchStrength = 55;
		maxOmega = 690;
		enginePower = 376;
		peakTorque = 450;
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
				MOI = 5.3;
				maxBrakeTorque = 2700;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.1;
				MaxDroop = 0.15;
				sprungMass = 298;
				springStrength = 9450;
				springDamperRate = 2192;
				longitudinalStiffnessPerUnitGravity = 4800;
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
