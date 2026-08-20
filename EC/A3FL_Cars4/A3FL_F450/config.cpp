class CfgPatches
{
	class A3FL_F450
	{
		units[]=
		{
			"A3FL_F450"
		};
		weapons[]=
		{
		};
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
class CBA_Extended_EventHandlers_base;
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		A3FL_F450_Back="A3FL_F450_Back";
		A3FL_F450_CoDriver="A3FL_F450_CoDriver";
		A3FL_F450_Driver="A3FL_F450_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class AmovPercMstpSnonWnonDnon;
		class PreciseCrew: Crew
		{
			head="headNo";
		};
		class A3FL_F450_Driver: Crew
		{
			file="\A3FL_Cars4\A3FL_F450\anim\A3FL_F450_Driver.rtm";
		};
		class A3FL_F450_CoDriver: Crew
		{
			file="\A3FL_Cars4\A3FL_F450\anim\A3FL_F450_CoDriver.rtm";
		};
		class A3FL_F450_Back: Crew
		{
			file="\A3FL_Cars4\A3FL_F450\anim\A3FL_F450_Back.rtm";
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
	class A3FL_F450: Car_F
	{
		scope=2;
		model="\A3FL_Cars4\A3FL_F450\A3FL_F450";
		picture="";
		weapons[]={"A3PL_CarHorn"};
		displayName="2015 Ford F450";
		extCameraPosition[]={0,1.2,-7};
		driveOnComponent[]=
		{
			"wheel_1_1_damper",
			"wheel_1_2_damper",
			"wheel_2_1_damper",
			"wheel_2_2_damper"
		};
		author="A3FL_Marshall";
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
		class UserActions
		{
		};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class AnimationSources: AnimationSources
		{
			
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
			class Towbar_Addon
			{
				initPhase=0;
				source="user";
				animPeriod=0.001;
				forceAnimatePhase=1;
				displayName="Towbar Addon";
				forceAnimate[]=
				{
					"Turntable",
					0
				};
			};
		};
		terrainCoef=1.2;
		turnCoef=3;
		precision=9;
		brakeDistance=3;
		acceleration=20;
		fireResistance=20;
		cost=50000;
		armor=100;
		transportMaxBackpacks=4;
		transportSoldier=3;
		wheelDamageRadiusCoef=0.69999999;
		wheelDestroyRadiusCoef=0.30000001;
		maxFordingDepth=0.30000001;
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
				armor=0.5;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.5;
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
				passThrough=0.5;
			};
			class HitGlass1: HitGlass1
			{
				armor=0.0099999998;
			};
			class HitGlass2: HitGlass2
			{
				armor=0.0099999998;
			};
			class HitGlass3: HitGlass3
			{
				armor=0.0099999998;
			};
			class HitGlass4: HitGlass4
			{
				armor=0.0099999998;
			};
			class HitGlass5: HitGlass5
			{
				armor=0.0099999998;
			};
			class HitGlass6: HitGlass6
			{
				armor=0.0099999998;
			};
		};
		driverAction="A3FL_F450_driver";
		cargoAction[]=
		{
			"A3FL_F450_CoDriver",
			"A3FL_F450_Back",
			"A3FL_F450_Back"
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
			"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\SUV_01\SUV_01_door",
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
			"A3FL_Cars4\A3FL_F450\sounds\startup.ogg",
			0.39810717,
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Cars4\A3FL_F450\sounds\startup.ogg",
			0.44668359,
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
			0.39810717,
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
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
					"A3FL_Cars4\A3FL_F450\sounds\idle.ogg",
					0.31622776,
					1,
					180
				};
				frequency="0.9 + ((rpm/ 5900) factor[(400/ 5900),(1150/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(400/ 5900),(700/ 5900)]) * ((rpm/ 5900) factor[(1100/ 5900),(900/ 5900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\1000.ogg",
					0.2818383,
					1,
					230
				};
				frequency="0.8 + ((rpm/ 5900) factor[(900/ 5900),(2100/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(870/ 5900),(1100/ 5900)]) * ((rpm/ 5900) factor[(2100/ 5900),(1300/ 5900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\1000.ogg",
					0.35481337,
					1,
					270
				};
				frequency="0.8 +  ((rpm/ 5900) factor[(1300/ 5900),(3100/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(1250/ 5900),(2050/ 5900)]) * ((rpm/ 5900) factor[(3100/ 5900),(2300/ 5900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\2000.ogg",
					0.39810717,
					1,
					300
				};
				frequency="0.8 + ((rpm/ 5900) factor[(2200/ 5900),(4100/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(2250/ 5900),(3050/ 5900)]) * ((rpm/ 5900) factor[(4100/ 5900),(3300/ 5900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\3000.ogg",
					0.44668359,
					1,
					330
				};
				frequency="0.8 + ((rpm/ 5900) factor[(3300/ 5900),(4900/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(3250/ 5900),(4050/ 5900)]) * ((rpm/ 5900) factor[(4870/ 5900),(4200/ 5900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\4000.ogg",
					0.50118721,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 5900) factor[(4200/ 5900),(6200/ 5900)])*0.2";
				volume="engineOn*camPos*(((rpm/ 5900) factor[(4150/ 5900),(4800/ 5900)]) * ((rpm/ 5900) factor[(6150/ 5900),(5150/ 5900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\5000.ogg",
					0.56234133,
					1,
					420
				};
				frequency="0.95 + ((rpm/ 5900) factor[(5100/ 5900),(5900/ 5900)])*0.15";
				volume="engineOn*camPos*((rpm/ 5900) factor[(5100/ 5900),(6100/ 5900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_00844.ogg",
					0.50118721,
					1,
					220
				};
				frequency="0.9 + ((rpm/ 5900) factor[(400/ 5900),(1150/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(400/ 5900),(700/ 5900)]) * ((rpm/ 5900) factor[(1100/ 5900),(900/ 5900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_01673.ogg",
					0.56234133,
					1,
					250
				};
				frequency="0.8 + ((rpm/ 5900) factor[(900/ 5900),(2100/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(870/ 5900),(1100/ 5900)]) * ((rpm/ 5900) factor[(2100/ 5900),(1300/ 5900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_01918.ogg",
					0.63095737,
					1,
					280
				};
				frequency="0.8 +  ((rpm/ 5900) factor[(1300/ 5900),(3100/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(1250/ 5900),(2050/ 5900)]) * ((rpm/ 5900) factor[(3100/ 5900),(2300/ 5900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_02287.ogg",
					0.70794576,
					1,
					320
				};
				frequency="0.8 + ((rpm/ 5900) factor[(2200/ 5900),(4100/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(2250/ 5900),(3050/ 5900)]) * ((rpm/ 5900) factor[(4100/ 5900),(3300/ 5900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_02910.ogg",
					0.79432821,
					1,
					360
				};
				frequency="0.8 + ((rpm/ 5900) factor[(3300/ 5900),(4900/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(3250/ 5900),(4050/ 5900)]) * ((rpm/ 5900) factor[(4870/ 5900),(4200/ 5900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_03298.ogg",
					1,
					1,
					400
				};
				frequency="0.8 + ((rpm/ 5900) factor[(4200/ 5900),(6200/ 5900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(4150/ 5900),(4800/ 5900)]) * ((rpm/ 5900) factor[(6150/ 5900),(5150/ 5900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_03933.ogg",
					1.2589254,
					1,
					450
				};
				frequency="0.9 + ((rpm/ 5900) factor[(5100/ 5900),(5900/ 5900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 5900) factor[(5100/ 5900),(6100/ 5900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\idle.ogg",
					0.17782794,
					1
				};
				frequency="0.9 + ((rpm/ 5900) factor[(400/ 5900),(1150/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(400/ 5900),(700/ 5900)]) * ((rpm/ 5900) factor[(1100/ 5900),(900/ 5900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\1000.ogg",
					0.19952624,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(900/ 5900),(2100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(870/ 5900),(1100/ 5900)]) * ((rpm/ 5900) factor[(2100/ 5900),(1300/ 5900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\1000.ogg",
					0.25118864,
					1
				};
				frequency="0.8 +  ((rpm/ 5900) factor[(1300/ 5900),(3100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(1250/ 5900),(2050/ 5900)]) * ((rpm/ 5900) factor[(3100/ 5900),(2300/ 5900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\2000.ogg",
					0.2818383,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(2200/ 5900),(4100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(2250/ 5900),(3050/ 5900)]) * ((rpm/ 5900) factor[(4100/ 5900),(3300/ 5900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\3000.ogg",
					0.31622776,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(3300/ 5900),(4900/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(3250/ 5900),(4050/ 5900)]) * ((rpm/ 5900) factor[(4870/ 5900),(4200/ 5900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\4000.ogg",
					0.35481337,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(4200/ 5900),(6200/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/ 5900) factor[(4150/ 5900),(4800/ 5900)]) * ((rpm/ 5900) factor[(6150/ 5900),(5150/ 5900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\5000.ogg",
					0.50118721,
					1
				};
				frequency="0.95 + ((rpm/ 5900) factor[(5100/ 5900),(5900/ 5900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/ 5900) factor[(5100/ 5900),(6100/ 5900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_00844.ogg",
					0.31622776,
					1
				};
				frequency="0.9 + ((rpm/ 5900) factor[(400/ 5900),(1150/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(400/ 5900),(700/ 5900)]) * ((rpm/ 5900) factor[(1100/ 5900),(900/ 5900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_01673.ogg",
					0.35481337,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(900/ 5900),(2100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(870/ 5900),(1100/ 5900)]) * ((rpm/ 5900) factor[(2100/ 5900),(1300/ 5900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_01918.ogg",
					0.39810717,
					1
				};
				frequency="0.8 +  ((rpm/ 5900) factor[(1300/ 5900),(3100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(1250/ 5900),(2050/ 5900)]) * ((rpm/ 5900) factor[(3100/ 5900),(2300/ 5900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_02287.ogg",
					0.44668359,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(2200/ 5900),(4100/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(2250/ 5900),(3050/ 5900)]) * ((rpm/ 5900) factor[(4100/ 5900),(3300/ 5900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_02910.ogg",
					0.50118721,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(3300/ 5900),(4900/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(3250/ 5900),(4050/ 5900)]) * ((rpm/ 5900) factor[(4870/ 5900),(4200/ 5900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_03298.ogg",
					0.56234133,
					1
				};
				frequency="0.8 + ((rpm/ 5900) factor[(4200/ 5900),(6200/ 5900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 5900) factor[(4150/ 5900),(4800/ 5900)]) * ((rpm/ 5900) factor[(6150/ 5900),(5150/ 5900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F450\sounds\ExhL_03933.ogg",
					0.63095737,
					1
				};
				frequency="0.9 + ((rpm/ 5900) factor[(5100/ 5900),(5900/ 5900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 5900) factor[(5100/ 5900),(6100/ 5900)])";
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
					0.56234133,
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
					0.56234133,
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
					0.56234133,
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
					0.56234133,
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
					0.56234133,
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
					0.89125091,
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
					0.31622776,
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
					0.44668359,
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
					0.44668359,
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
					0.44668359,
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
					0.44668359,
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
					0.44668359,
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
					0.44668359,
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
					0.19952624,
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
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
				volume="engineOn*camPos*asphalt*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
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
				volume="engineOn*camPos*asphalt*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
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
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.15, -0.3])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_ext_1",
					0.70794576,
					1,
					60
				};
				frequency=1;
				volume="engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.15, 0.3])*(Speed Factor[10, 0])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.15, 0.3])*(Speed Factor[0, 10])";
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
				volume="engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.15, -0.3])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1,15])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\acceleration_dirt_int_1",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.3])*(Speed Factor[15, 2])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.3])*(Speed Factor[2, 15])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",
					0.39810717,
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.3])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=160;
		fuelCapacity=42;
		wheelCircumference=2.073;
		idleRpm=1000;
		redRpm=5900;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=0;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.882,
				"N",
				0,
				"D1",
				4.5,
				"D2",
				3.872,
				"D3",
				2.842,
				"D4",
				1.414,
				"D5",
				1,
				"D6",
				0.74199998
			};
			TransmissionRatios[]=
			{
				"High",
				3.73
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			transmissionDelay=0.0099999998;
		};
		simulation="carx";
		dampersBumpCoef=0.0099999998;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=2.4000001;
		rearBias=2.4000001;
		centreBias=2.4000001;
		clutchStrength=35;
		maxOmega=617;
		enginePower=525;
		peakTorque=640;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchDisengaged=2;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.14,0.41},
			{0.28,0.69999999},
			{0.43000001,1},
			{0.56,1},
			{0.69999999,0.97000003},
			{0.86000001,0.88},
			{1,0.69}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.98000002,0.98000002,0.98000002,0.98000002,0.97000003,0.94999999,0.94999999};
		switchTime=0.050000001;
		slowSpeedForwardCoef=0.0099999998;
		normalSpeedForwardCoef=1;
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
				mass=20;
				MOI=5.3000002;
				maxBrakeTorque=3250;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.1;
				MaxDroop=0.1;
				sprungMass=691;
				springStrength=77269;
				springDamperRate=5846;
				longitudinalStiffnessPerUnitGravity=90000;
				latStiffX=25;
				latStiffY=220;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
				dampingRate=0.25;
				dampingRateDamaged=5;
				dampingRateDestroyed=5000;
			};
			class LR: LF
			{
				boneName="wheel_1_2_damper";
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				steering=0;
				side="left";
				latStiffX=25;
				latStiffY=22000;
				maxHandBrakeTorque=9000;
				maxBrakeTorque=6500;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				maxBrakeTorque=3250;
				steering=1;
				side="right";
				latStiffX=25;
				latStiffY=220;
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=9000;
				maxBrakeTorque=6500;
				steering=0;
				side="right";
				latStiffX=25;
				latStiffY=22000;
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
		memoryPointTrackFLL="TrackFLL";
		memoryPointTrackFLR="TrackFLR";
		memoryPointTrackBLL="TrackBLL";
		memoryPointTrackBLR="TrackBLR";
		memoryPointTrackFRL="TrackFRL";
		memoryPointTrackFRR="TrackFRR";
		memoryPointTrackBRL="TrackBRL";
		memoryPointTrackBRR="TrackBRR";
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
				effect="ExhaustsEffect";
			};
			class Exhaust2
			{
				position="exhaust2_pos";
				direction="exhaust2_dir";
				effect="ExhaustsEffect";
			};
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