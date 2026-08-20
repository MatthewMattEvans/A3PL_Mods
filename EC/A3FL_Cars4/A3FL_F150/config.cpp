class CfgPatches
{
	class A3FL_F150
	{
		units[]=
		{
			"A3FL_F150",
			"A3FL_F150_PD",
			"A3FL_F150_ML",
			"A3FL_F150_PD_ST",
			"A3FL_F150_FD",
			"EC_F150_A"
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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		A3FL_F150_Passenger="A3FL_F150_Passenger";
		A3FL_F150_Driver="A3FL_F150_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class A3FL_F150_Passenger: Crew
		{
			file="A3FL_Cars4\A3FL_F150\anim\A3FL_F150_Passenger.rtm";
		};
		class A3FL_F150_Driver: Crew
		{
			file="A3FL_Cars4\A3FL_F150\anim\A3FL_F150_Driver.rtm";
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
	class A3FL_F150: Car_F
	{
		scope=2;
		model="A3FL_Cars4\A3FL_F150\A3FL_F150";
		picture="";
		weapons[]=
		{
			"A3PL_CarHorn"
		};
		displayName="2018 Ford F150";
		author="A3FL Marshall & Winston";
		extCameraPosition[]={0,1.2,-6.5};
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
		insideSoundCoef=1;
		outsideSoundFilter=1;
		occludeSoundsWhenIn=1;
		obstructSoundsWhenIn=1;
		obstructSoundLFRatio=1;
		occludeSoundLFRatio=1;
		secondaryExplosion=0;
		class TransportItems
		{
		};
		class UserActions
		{
		};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class AnimationSources: AnimationSources
		{
			class SideSteps
			{
				source="user";
				animPeriod=0;
				initPhase=0;
			};
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
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=1;
			turnIncreaseLinear=1;
			turnIncreaseTime=5;
			turnDecreaseConst=5;
			turnDecreaseLinear=3;
			turnDecreaseTime=0;
			maxTurnHundred=0.5;
		};
		terrainCoef=2;
		turnCoef=2.8;
		precision=9;
		brakeDistance=3;
		acceleration=12;
		fireResistance=5;
		cost=50000;
		armor=100;
		transportMaxBackpacks=4;
		transportSoldier=4;
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
		driverAction="A3FL_F150_Driver";
		cargoAction[]=
		{
			"A3FL_F150_Passenger",
			"A3FL_F150_Passenger",
			"A3FL_F150_Passenger",
			"A3FL_F150_Passenger",
			"A3FL_F150_Passenger"
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
			"db-5",
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_door",
			"db-5",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"",
			1
		};
		soundEngineOnExt[]=
		{
			"",
			1,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_int_stop",
			"db-8",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\Hatchback_01\Hatchback_01_ext_stop",
			"db-7",
			1,
			200
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
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
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_wood_ext_1",
			"db0",
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			"db0",
			1,
			200
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			"db0",
			1,
			200
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			"db0",
			1,
			200
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			"db0",
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
					"A3FL_Cars4\A3FL_F150\sounds\ext_Idle.ogg",
					"db-17",
					2,
					150
				};
				frequency="0.6 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_1000.ogg",
					"db-16",
					1,
					200
				};
				frequency="0.5 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_2000.ogg",
					"db-15",
					1,
					240
				};
				frequency="0.5 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_3000.ogg",
					"db-14",
					1,
					280
				};
				frequency="0.6 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_4000.ogg",
					"db-13",
					1,
					320
				};
				frequency="0.6 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_5000.ogg",
					"db-12",
					1,
					360
				};
				frequency="0.6 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume="engineOn*camPos*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_6000.ogg",
					"db-11",
					1,
					420
				};
				frequency="0.7 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume="engineOn*camPos*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_Idle.ogg",
					"db-5",
					1,
					200
				};
				frequency="0.6 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_00844.ogg",
					"db-4",
					1,
					250
				};
				frequency="0.5 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_01673.ogg",
					"db-3",
					1,
					280
				};
				frequency="0.5 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_01918.ogg",
					"db-2",
					1,
					320
				};
				frequency="0.5 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_02287.ogg",
					"db-2",
					1,
					360
				};
				frequency="0.5 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_02910.ogg",
					"db0",
					1,
					400
				};
				frequency="0.5 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_03298.ogg",
					"db2",
					1,
					450
				};
				frequency="0.6 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_Idle.ogg",
					"db-17",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_1000.ogg",
					"db-16",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_2000.ogg",
					"db-15",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_3000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_4000.ogg",
					"db-13",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_5000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_6000.ogg",
					"db-11",
					1
				};
				frequency="0.95 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/6900) factor[(5100/6900),(6100/6900)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ext_Idle.ogg",
					"db-9",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(400/6900),(1150/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(400/6900),(700/6900)])* ((rpm/6900) factor[(1100/6900),(900/6900)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_00844.ogg",
					"db-8",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(900/6900),(2100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(870/6900),(1100/6900)])* ((rpm/6900) factor[(2100/6900),(1300/6900)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_01673.ogg",
					"db-7",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(1300/6900),(3100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(1250/6900),(2050/6900)])* ((rpm/6900) factor[(3100/6900),(2300/6900)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_01918.ogg",
					"db-6",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(2200/6900),(4100/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(2250/6900),(3050/6900)])* ((rpm/6900) factor[(4100/6900),(3300/6900)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_02287.ogg",
					"db-5",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(3300/6900),(4900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(3250/6900),(4050/6900)])* ((rpm/6900) factor[(4870/6900),(4200/6900)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_02910.ogg",
					"db-4",
					1
				};
				frequency="0.8 + ((rpm/6900) factor[(4200/6900),(6200/6900)])*0.3";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/6900) factor[(4150/6900),(4800/6900)])* ((rpm/6900) factor[(6150/6900),(5150/6900)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3FL_Cars4\A3FL_F150\sounds\ExhL_03298.ogg",
					"db-3",
					1
				};
				frequency="0.9 + ((rpm/6900) factor[(5100/6900),(6900/6900)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/6900) factor[(5100/6900),(6100/6900)])";
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-8",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-6",
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
					"db-12",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-3",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
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
					"db-10",
					1
				};
				frequency=1;
				volume="engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=280;
		fuelCapacity=25;
		wheelCircumference=2.277;
		idleRpm=900;
		redRpm=6900;
		antiRollbarForceCoef=2.3;
		antiRollbarForceLimit=2;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5,
				"N",
				0,
				"D1",
				2.3,
				"D2",
				2.0999999,
				"D3",
				2,
				"D4",
				1.8,
				"D5",
				1,
				"D6",
				0.74199998
			};
			TransmissionRatios[]=
			{
				"High",
				4.5110002
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.050000001;
		differentialType="all_open";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.5;
		clutchStrength=55;
		maxOmega=680;
		enginePower=320;
		peakTorque=620;
		dampingRateFullThrottle=0.050000001;
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
		changeGearMinEffectivity[]={1,0.15000001,0.85000002,0.85000002,0.85000002,0.85000002,0.85000002,0.75,0.75};
		switchTime=0.2;
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
				MOI=3.3;
				maxBrakeTorque=2900;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=615;
				springStrength=65412;
				springDamperRate=5074;
				longitudinalStiffnessPerUnitGravity=6800;
				latStiffX=25;
				latStiffY=220;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
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
				maxHandBrakeTorque=7500;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
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
				maxHandBrakeTorque=7500;
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
					renderQuality=10;
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
					renderQuality=10;
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
					renderQuality=10;
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
	class A3FL_F150_ML: A3FL_F150
	{
		displayName="2018 Ford F150 ML";
		model="\A3FL_Cars4\A3FL_F150\A3FL_F150_ML";
		class AnimationSources: AnimationSources
		{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Lightbar: Common
			{
			};
			class Directional_R: Common
			{
			};
			class Directional_S: Common
			{
			};
			class Directional_F: Common
			{
			};
			class Directional_L: Common
			{
			};
			class Lightbar1
			{
				source="MarkerLight";
				markerLight="Lightbar1";
			};
			class Lightbar2: Lightbar1
			{
				markerLight="Lightbar2";
			};
			class DirectL1: Lightbar1
			{
				markerLight="DirectL1";
			};
			class DirectL2: Lightbar1
			{
				markerLight="DirectL2";
			};
			class DirectL3: Lightbar1
			{
				markerLight="DirectL3";
			};
			class DirectL4: Lightbar1
			{
				markerLight="DirectL4";
			};
			class DirectL5: Lightbar1
			{
				markerLight="DirectL5";
			};
			class DirectL6: Lightbar1
			{
				markerLight="DirectL6";
			};
			class DirectL7: Lightbar1
			{
				markerLight="DirectL7";
			};
			class DirectL8: Lightbar1
			{
				markerLight="DirectL8";
			};
			class DirectR1: Lightbar1
			{
				markerLight="DirectR1";
			};
			class DirectR2: Lightbar1
			{
				markerLight="DirectR2";
			};
			class DirectR3: Lightbar1
			{
				markerLight="DirectR3";
			};
			class DirectR4: Lightbar1
			{
				markerLight="DirectR4";
			};
			class DirectR5: Lightbar1
			{
				markerLight="DirectR5";
			};
			class DirectR6: Lightbar1
			{
				markerLight="DirectR6";
			};
			class DirectR7: Lightbar1
			{
				markerLight="DirectR7";
			};
			class DirectR8: Lightbar1
			{
				markerLight="DirectR8";
			};
			class DirectS1: Lightbar1
			{
				markerLight="DirectS1";
			};
			class DirectS2: Lightbar1
			{
				markerLight="DirectS2";
			};
			class DirectS3: Lightbar1
			{
				markerLight="DirectS3";
			};
			class DirectS4: Lightbar1
			{
				markerLight="DirectS4";
			};
			class DirectS5: Lightbar1
			{
				markerLight="DirectS5";
			};
			class DirectS6: Lightbar1
			{
				markerLight="DirectS6";
			};
			class DirectS7: Lightbar1
			{
				markerLight="DirectS7";
			};
			class DirectS8: Lightbar1
			{
				markerLight="DirectS8";
			};
			class DirectF1: Lightbar1
			{
				markerLight="DirectF1";
			};
			class DirectF2: Lightbar1
			{
				markerLight="DirectF2";
			};
			class DirectF3: Lightbar1
			{
				markerLight="DirectF3";
			};
			class DirectF4: Lightbar1
			{
				markerLight="DirectF4";
			};
			class DirectF5: Lightbar1
			{
				markerLight="DirectF5";
			};
			class DirectF6: Lightbar1
			{
				markerLight="DirectF6";
			};
			class DirectF7: Lightbar1
			{
				markerLight="DirectF7";
			};
			class DirectF8: Lightbar1
			{
				markerLight="DirectF8";
			};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01
			{
			};
			class LightCarHeadR01: LightCarHeadR01
			{
			};
			class LightCarHeadL02: LightCarHeadL02
			{
			};
			class LightCarHeadR02: LightCarHeadR02
			{
			};
			class Lightbar1_1
			{
				color[]={125,125,5};
				ambient[]={125,125,5};
				position="Lightbar1_1_pos";
				direction="Lightbar1_1_dir";
				hitpoint="";
				selection="Lightbar1_1";
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=10;
				intensity=1;
				useFlare=10;
				dayLight=1;
				flareSize=0.2;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=5;
					hardLimitEnd=15;
				};
			};
			class Lightbar1_2: Lightbar1_1
			{
				position="Lightbar1_2_pos";
				direction="Lightbar1_2_dir";
				selection="Lightbar1_2";
			};
			class Lightbar1_3: Lightbar1_1
			{
				position="Lightbar1_3_pos";
				direction="Lightbar1_3_dir";
				selection="Lightbar1_3";
			};
			class Lightbar1_4: Lightbar1_1
			{
				position="Lightbar1_4_pos";
				direction="Lightbar1_4_dir";
				selection="Lightbar1_4";
			};
			class Lightbar1_5: Lightbar1_1
			{
				position="Lightbar1_5_pos";
				direction="Lightbar1_5_dir";
				selection="Lightbar1_5";
			};
			class Lightbar1_6: Lightbar1_1
			{
				position="Lightbar1_6_pos";
				direction="Lightbar1_6_dir";
				selection="Lightbar1_6";
			};
			class Lightbar1_7: Lightbar1_1
			{
				position="Lightbar1_7_pos";
				direction="Lightbar1_7_dir";
				selection="Lightbar1_7";
			};
			class Lightbar1_8: Lightbar1_1
			{
				position="Lightbar1_8_pos";
				direction="Lightbar1_8_dir";
				selection="Lightbar1_8";
			};
			class Lightbar1_9: Lightbar1_1
			{
				position="Lightbar1_9_pos";
				direction="Lightbar1_9_dir";
				selection="Lightbar1_9";
			};
			class Lightbar1_10: Lightbar1_1
			{
				position="Lightbar1_10_pos";
				direction="Lightbar1_10_dir";
				selection="Lightbar1_10";
			};
			class Lightbar1_11: Lightbar1_1
			{
				position="Lightbar1_11_pos";
				direction="Lightbar1_11_dir";
				selection="Lightbar1_11";
			};
			class Lightbar2_1: Lightbar1_1
			{
				color[]={125,125,5};
				ambient[]={125,125,5};
				position="Lightbar2_1_pos";
				direction="Lightbar2_1_dir";
				selection="Lightbar2_1";
			};
			class Lightbar2_2: Lightbar1_1
			{
				position="Lightbar2_2_pos";
				direction="Lightbar2_2_dir";
				selection="Lightbar2_2";
			};
			class Lightbar2_3: Lightbar1_1
			{
				position="Lightbar2_3_pos";
				direction="Lightbar2_3_dir";
				selection="Lightbar2_3";
			};
			class Lightbar2_4: Lightbar1_1
			{
				position="Lightbar2_4_pos";
				direction="Lightbar2_4_dir";
				selection="Lightbar2_4";
			};
			class Lightbar2_5: Lightbar1_1
			{
				position="Lightbar2_5_pos";
				direction="Lightbar2_5_dir";
				selection="Lightbar2_5";
			};
			class Lightbar2_6: Lightbar1_1
			{
				position="Lightbar2_6_pos";
				direction="Lightbar2_6_dir";
				selection="Lightbar2_6";
			};
			class Lightbar2_7: Lightbar1_1
			{
				position="Lightbar2_7_pos";
				direction="Lightbar2_7_dir";
				selection="Lightbar2_7";
			};
			class Lightbar2_8: Lightbar1_1
			{
				position="Lightbar2_8_pos";
				direction="Lightbar2_8_dir";
				selection="Lightbar2_8";
			};
			class Lightbar2_9: Lightbar1_1
			{
				position="Lightbar2_9_pos";
				direction="Lightbar2_9_dir";
				selection="Lightbar2_9";
			};
			class Lightbar2_10: Lightbar1_1
			{
				position="Lightbar2_10_pos";
				direction="Lightbar2_10_dir";
				selection="Lightbar2_10";
			};
			class Lightbar2_11: Lightbar1_1
			{
				position="Lightbar2_11_pos";
				direction="Lightbar2_11_dir";
				selection="Lightbar2_11";
			};
			class Yellow1
			{
				color[]={255,255,0};
				ambient[]={90,90,0};
				position="Lightbar1_6_pos";
				direction="Lightbar1_6_dir";
				hitpoint="";
				selection="Lightbar1_6";
				size=1;
				innerAngle=125;
				outerAngle=180;
				coneFadeCoef=2.5;
				intensity=1;
				useFlare=1;
				dayLight=1;
				flareSize=0;
				flareMaxDistance=5;
				class Attenuation
				{
					start=5;
					constant=3;
					linear=1.5;
					quadratic=1.5;
					hardLimitStart=15;
					hardLimitEnd=25;
				};
			};
			class Yellow2: Yellow1
			{
				color[]={255,255,0};
				ambient[]={90,90,0};
				position="Lightbar2_6_pos";
				direction="Lightbar2_6_dir";
				hitpoint="";
				selection="Lightbar2_6";
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
			},
			
			{
				"Lightbar1_1",
				"Lightbar1_2",
				"Lightbar1_3",
				"Lightbar1_4",
				"Lightbar1_5",
				"Lightbar1_6",
				"Lightbar1_7",
				"Lightbar1_8",
				"Lightbar1_9",
				"Lightbar1_10",
				"Lightbar1_11"
			},
			
			{
				"Lightbar2_1",
				"Lightbar2_2",
				"Lightbar2_3",
				"Lightbar2_4",
				"Lightbar2_5",
				"Lightbar2_6",
				"Lightbar2_7",
				"Lightbar2_8",
				"Lightbar2_9",
				"Lightbar2_10",
				"Lightbar2_11"
			}
		};
		class MarkerLights
		{
			class Lightbar1
			{
				color[]={0,0,0,0};
				ambient[]={0,0,0};
				name="Lightbar1_pos";
				blinkingPattern[]={0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.63999999};
				blinking=1;
				blinkingStartsOn=0;
				blinkingPatternGuarantee=1;
				intensity=0;
				activeLight=0;
				drawLight=0;
				drawLightSize=0;
				drawLightCenterSize=0;
				dayLight=0;
				useFlare=0;
				flareSize=0;
				flareMaxDistance=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=0;
					hardLimitEnd=0;
				};
			};
			class Lightbar2: Lightbar1
			{
				name="Lightbar2_pos";
				blinkingPattern[]={0.63999999,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998,0.079999998};
			};
			class DirectL1: Lightbar1
			{
				name="DirectL1_pos";
				blinkingPattern[]={0.80000001,0.1};
				useFlare=1;
				flareSize=1;
				color[]={0.30000001,0.1,0,1};
			};
			class DirectL2: DirectL1
			{
				name="DirectL2_pos";
				blinkingPattern[]={0.69999999,0.2};
			};
			class DirectL3: DirectL1
			{
				name="DirectL3_pos";
				blinkingPattern[]={0.60000002,0.30000001};
			};
			class DirectL4: DirectL1
			{
				name="DirectL4_pos";
				blinkingPattern[]={0.5,0.40000001};
			};
			class DirectL5: DirectL1
			{
				name="DirectL5_pos";
				blinkingPattern[]={0.40000001,0.5};
			};
			class DirectL6: DirectL1
			{
				name="DirectL6_pos";
				blinkingPattern[]={0.30000001,0.60000002};
			};
			class DirectL7: DirectL1
			{
				name="DirectL7_pos";
				blinkingPattern[]={0.2,0.69999999};
			};
			class DirectL8: DirectL1
			{
				name="DirectL8_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectR1: DirectL1
			{
				name="DirectR1_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectR2: DirectL1
			{
				name="DirectR2_pos";
				blinkingPattern[]={0.2,0.69999999};
			};
			class DirectR3: DirectL1
			{
				name="DirectR3_pos";
				blinkingPattern[]={0.30000001,0.60000002};
			};
			class DirectR4: DirectL1
			{
				name="DirectR4_pos";
				blinkingPattern[]={0.40000001,0.5};
			};
			class DirectR5: DirectL1
			{
				name="DirectR5_pos";
				blinkingPattern[]={0.5,0.40000001};
			};
			class DirectR6: DirectL1
			{
				name="DirectR6_pos";
				blinkingPattern[]={0.60000002,0.69999999};
			};
			class DirectR7: DirectL1
			{
				name="DirectR7_pos";
				blinkingPattern[]={0.80000001,0.1};
			};
			class DirectR8: DirectL1
			{
				name="DirectR8_pos";
				blinkingPattern[]={0.1,0.80000001};
			};
			class DirectS1: DirectL1
			{
				name="DirectS1_pos";
				blinkingPattern[]={0.80000001,0.2};
			};
			class DirectS2: DirectL1
			{
				name="DirectS2_pos";
				blinkingPattern[]={0.60000002,0.40000001};
			};
			class DirectS3: DirectL1
			{
				name="DirectS3_pos";
				blinkingPattern[]={0.40000001,0.60000002};
			};
			class DirectS4: DirectL1
			{
				name="DirectS4_pos";
				blinkingPattern[]={0.2,0.80000001};
			};
			class DirectS5: DirectL1
			{
				name="DirectS5_pos";
				blinkingPattern[]={0.2,0.80000001};
			};
			class DirectS6: DirectL1
			{
				name="DirectS6_pos";
				blinkingPattern[]={0.40000001,0.60000002};
			};
			class DirectS7: DirectL1
			{
				name="DirectS7_pos";
				blinkingPattern[]={0.60000002,0.40000001};
			};
			class DirectS8: DirectL1
			{
				name="DirectS8_pos";
				blinkingPattern[]={0.80000001,0.2};
			};
			class DirectF1: DirectL1
			{
				name="DirectF1_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF2: DirectF1
			{
				name="DirectF2_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF3: DirectF1
			{
				name="DirectF3_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF4: DirectF1
			{
				name="DirectF4_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF5: DirectF1
			{
				name="DirectF5_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF6: DirectF1
			{
				name="DirectF6_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
			class DirectF7: DirectF1
			{
				name="DirectF7_pos";
				blinkingPattern[]={0,0.16,0.16};
			};
			class DirectF8: DirectF1
			{
				name="DirectF8_pos";
				blinkingPattern[]={0.16,0.16,0};
			};
		};
	};
	class A3FL_F150_PD: A3FL_F150
	{
		model="A3FL_Cars4\A3FL_F150\A3FL_F150_PD";
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
			"spd1",
			"spd2",
			"spd3",
			"spd4",
			"spd5",
			"spd6",
			"spd7",
			"spd8",
			"spd9",
			"glass1",
			"glass2",
			"glass3",
			"glass4",
			"glass5",
			"glass6"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Textures\F150_18\FISD\FISD_f150_Patrol.paa",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)"
		};
		displayName="2018 Ford F150 PD";
		maxOmega=816;
		enginePower=480;
		peakTorque=805.2;
		class AnimationSources : AnimationSources 
		{
			class Common
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
			class Lightbar: Common {};
			class Directional_R: Common {};
			class Directional_S: Common {};
			class Directional_F: Common {};
			class Directional_L: Common {};
			class Lightbar1
			{
				source="MarkerLight";
				markerLight="Lightbar1";
			};
			class Lightbar2: Lightbar1 {markerLight="Lightbar2";};
			class DirectL1: Lightbar1 {markerLight="DirectL1";};
			class DirectL2: Lightbar1 {markerLight="DirectL2";};
			class DirectL3: Lightbar1 {markerLight="DirectL3";};
			class DirectL4: Lightbar1 {markerLight="DirectL4";};
			class DirectL5: Lightbar1 {markerLight="DirectL5";};
			class DirectL6: Lightbar1 {markerLight="DirectL6";};
			class DirectL7: Lightbar1 {markerLight="DirectL7";};
			class DirectL8: Lightbar1 {markerLight="DirectL8";};
			class DirectR1: Lightbar1 {markerLight="DirectR1";};
			class DirectR2: Lightbar1 {markerLight="DirectR2";};
			class DirectR3: Lightbar1 {markerLight="DirectR3";};
			class DirectR4: Lightbar1 {markerLight="DirectR4";};
			class DirectR5: Lightbar1 {markerLight="DirectR5";};
			class DirectR6: Lightbar1 {markerLight="DirectR6";};
			class DirectR7: Lightbar1 {markerLight="DirectR7";};
			class DirectR8: Lightbar1 {markerLight="DirectR8";};
			class DirectS1: Lightbar1 {markerLight="DirectS1";};
			class DirectS2: Lightbar1 {markerLight="DirectS2";};
			class DirectS3: Lightbar1 {markerLight="DirectS3";};
			class DirectS4: Lightbar1 {markerLight="DirectS4";};
			class DirectS5: Lightbar1 {markerLight="DirectS5";};
			class DirectS6: Lightbar1 {markerLight="DirectS6";};
			class DirectS7: Lightbar1 {markerLight="DirectS7";};
			class DirectS8: Lightbar1 {markerLight="DirectS8";};
			class DirectF1: Lightbar1 {markerLight="DirectF1";};
			class DirectF2: Lightbar1 {markerLight="DirectF2";};
			class DirectF3: Lightbar1 {markerLight="DirectF3";};
			class DirectF4: Lightbar1 {markerLight="DirectF4";};
			class DirectF5: Lightbar1 {markerLight="DirectF5";};
			class DirectF6: Lightbar1 {markerLight="DirectF6";};
			class DirectF7: Lightbar1 {markerLight="DirectF7";};
			class DirectF8: Lightbar1 {markerLight="DirectF8";};
			class AUX
			{
				source="user";
				animPeriod=0.2;
				initPhase=0;
			};
			class Siren_Control_Noob
			{
				source="user";
				animPeriod=0.050000001;
				initPhase=5.5999999;
			};
			class Laptop
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
			};
			class Spotlight: Common {};
			class Pushbar_Addon
			{ 
				initPhase = 1;
				source = "user";
				animPeriod = 0.001;
				forceAnimate[] = {};
			};
			class Spotlight_Addon: Pushbar_Addon {};
			class devider_addon: Pushbar_Addon {};
			class spotlight_rotate: Common {};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
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
	};
	class A3FL_F150_PD_ST: A3FL_F150_PD
	{
		model="\A3FL_Cars4\A3FL_F150\A3FL_F150_PD_ST";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,1.0,co)",
			"",
			"",
			"",
			"",
			"",
			"",
			"",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"a3pl_cars\common\textures\numbers\0.paa",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)",
			"#(argb,8,8,3)color(0,0,0,0.8,CA)"
		};
		displayName="2018 Ford F150 PD ST";
		class AnimationSources: AnimationSources {
			class Pushbar_Addon: Pushbar_Addon { initPhase = 0; };
			class Spotlight_Addon: Spotlight_Addon { initPhase = 0; };
			class devider_addon: Spotlight_Addon { initPhase = 0; };
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
	};
	class A3FL_F150_FD: A3FL_F150_PD
	{
		model="\A3FL_Cars4\A3FL_F150\A3FL_F150_FD";
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
			"\A3PL_Textures\F150_18\FIFR\FIFR_F150_Command.paa",
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
		displayName="2018 Ford F150 FD";
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
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
				color[]={255,255,255};
				ambient[]={255,255,255};
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
	};
	class EC_F150_A: A3FL_F150_PD {
		scope=2;
		displayName="2018 Ford F150 Ambulance";
		model="\A3FL_Cars4\A3FL_F150\EC_F150_A";
		weapons[] = {"A3PL_Ambulance_Air_Horn","A3PL_Truck_Horn"};
		cargoDoors[] = {"Door_RB","Door_LB"};
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
		hiddenSelectionsTextures[]={
			"\A3PL_Textures\F150_Ambulance\FIFR_F150_Medic.paa",
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
		transportSoldier=8;
		maximumLoad = 2000;
		cargoAction[] = 
		{
		"A3PL_Passenger_Low",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands",
		"passenger_generic01_foldhands"
		};
		attenuationEffectType="OpenCarAttenuation";
		extCameraPosition[] = {0,1.5,-9};
		simulation="carx";
		maxSpeed=180;
		brakeDistance=3;
		wheelCircumference=2.277;
		redRpm = 11900;
		dampersBumpCoef=0.0099999998;
		differentialType="rear_open";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.5;
		clutchStrength=55;
		maxOmega=680;
		enginePower=500;
		peakTorque=671;
		antiRollbarForceCoef=5;
		antiRollbarForceLimit=5;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchDisengaged=2;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		getInProxyOrder[] = {8,1,2,3,4,5,6,7};
		class AnimationSources: AnimationSources{
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Door_LB: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="Door_LB";
			};
			class Stretcher 
			{
      		source = "user";
      		animPeriod = 0.25;
      		initPhase=0;
			};
		};
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
		changeGearMinEffectivity[]={1,0.15000001,0.85000002,0.85000002,0.85000002,0.85000002,0.85000002,0.75,0.75};
		class HitPoints: HitPoints
		{
			class HitFuel: HitFuel
			{
				armor=2;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=1.5;
				radius=0.25;
				name="palivo";
			};
			class HitEngine: HitEngine
			{
				armor=0.5;
				passThrough=1;
				minimalHit=0.1;
				explosionShielding=0.5;
				radius=0.44999999;
				name="engine";
			};
			class HitBody: HitBody
			{
				armor=1;
				passThrough=1;
				minimalHit=0;
				explosionShielding=1.5;
				radius=0.33000001;
				name="Body";
				visual="Body";
			};
			class HitLFWheel: HitLFWheel
			{
				name="wheel_1_1_steering";
				armor=0.125;
				material=-1;
				passThrough=0;
				explosionShielding=4;
				radius=0.25;
				visual="";
			};
			class HitLF2Wheel: HitLFWheel
			{
				name="wheel_1_2_steering";
			};
			class HitLMWheel: HitLFWheel
			{
				name="wheel_1_3_steering";
			};
			class HitLBWheel: HitLFWheel
			{
				name="wheel_1_4_steering";
			};
			class HitRFWheel: HitLFWheel
			{
				name="wheel_2_1_steering";
			};
			class HitRF2Wheel: HitLFWheel
			{
				name="wheel_2_2_steering";
			};
			class HitRMWheel: HitLFWheel
			{
				name="wheel_2_3_steering";
			};
			class HitRBWheel: HitLFWheel
			{
				name="wheel_2_4_steering";
			};
			class HitGlass1
			{
				armor=0.050000001;
				material=-1;
				name="glass1";
				visual="glass1";
				passThrough=0;
				radius=0.40000001;
			};
			class HitGlass2: HitGlass1
			{
				name="glass2";
				visual="glass2";
			};
			class HitGlass3: HitGlass1
			{
				name="glass3";
				visual="glass3";
			};
			class HitGlass4: HitGlass1
			{
				name="glass4";
				visual="glass4";
			};
			class HitGlass5: HitGlass1
			{
				name="glass5";
				visual="glass5";
			};
			class HitGlass6: HitGlass1
			{
				name="glass6";
				visual="glass6";
			};
			class HitGlass7: HitGlass1
			{
				name="glass7";
				visual="glass7";
			};
			class HitGlass8: HitGlass1
			{
				name="glass8";
				visual="glass8";
			};
			class HitGlass9: HitGlass1
			{
				name="glass9";
				visual="glass9";
			};
			class HitGlass10: HitGlass1
			{
				name="glass10";
				visual="glass10";
			};
			class HitRGlass: HitGlass1
			{
				name="RGlass";
				visual="RGlass";
			};
			class HitLGlass: HitGlass1
			{
				name="LGlass";
				visual="LGlass";
			};
		};
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-2.4,
				"N",
				0,
				"D1",
				4.4840002,
				"D2",
				3.4,
				"D3",
				2.6,
				"D4",
				1.52,
				"D5",
				1,
				"D6",
				0.86
			};
			TransmissionRatios[]=
			{
				"High",
				4.1
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=2.5;
			turnIncreaseLinear=0.40000001;
			turnIncreaseTime=3.5;
			turnDecreaseConst=3.5;
			turnDecreaseLinear=4;
			turnDecreaseTime=0;
			maxTurnHundred=1.7;
		};
		turnCoef=2;
		class Wheels
		{
			class LF
			{
				boneName="wheel_1_1_damper";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				mass=80;
				MOI=3.3;
				alpha=0.027;
				dampingRatio=0.399;
				maxBrakeTorque=3000;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				springDamperRate = 8757;
				springStrength = 60000;
				sprungMass = 1068;
				longitudinalStiffnessPerUnitGravity=6800;
				latStiffX=25;
				latStiffY=220;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
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
				maxHandBrakeTorque=7500;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
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
				maxHandBrakeTorque=7500;
				steering=0;
				side="right";
				latStiffX=25;
				latStiffY=22000;
			};
		};
		class Reflectors: Reflectors
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
			class Blue
			{
				color[]={255,0,0};
				ambient[]={90,0,0};
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
			{"LightCarHeadL02","LightCarHeadR02"},
		};
	};
};
