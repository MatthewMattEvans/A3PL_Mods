class CfgPatches
{
	class EC_Bearcat
	{
		units[]=
		{
			"EC_Bearcat",
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
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		EC_Bearcat_Driver="EC_Bearcat_Driver";
		EC_Bearcat_Passenger="EC_Bearcat_Passenger";
		EC_Bearcat_Passenger_Back="EC_Bearcat_Passenger_Back";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class EC_Bearcat_Passenger_Back: Crew
		{
			file="\EC_Cars\EC_Bearcat\Anim\EC_Bearcat_Passenger_Back.rtm";
		};
		class EC_Bearcat_Passenger: Crew
		{
			file="\EC_Cars\EC_Bearcat\Anim\EC_Bearcat_Passenger.rtm";
		};
		class EC_Bearcat_Driver: Crew
		{
			file="\EC_Cars\EC_Bearcat\Anim\EC_Bearcat_Driver.rtm";
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
	class EC_Bearcat: Car_F
	{
		scope=2;
		model="EC_Cars\EC_Bearcat\EC_Bearcat";
		picture="\A3FL_Common\A3PL_SmallPictureMod.paa";
		weapons[]={"A3PL_CarHorn"};
		displayName="Pit-Bull VX 2018";
		author="Marshie Pooh";
		extCameraPosition[]={0,1.2,-7};
		cargoDoors[] = {"Door_LB","Door_RB","Trunk"};
		driveOnComponent[]=
		{
			"wheel_1_1_damper",
			"wheel_1_2_damper",
			"wheel_2_1_damper",
			"wheel_2_2_damper"
		};
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"A3PL_Textures\Bearcat\FISD_ERT.paa","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		class UserActions {};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
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
			class Door_LF: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="Door1_axis";
			};
			class Door_LB: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="door2_axis";
			};
			class Door_RF: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="door3_axis";
			};
			class Door_RB: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="door4_axis";
			};
			class Door_RB2: Common {
				source="door";
                animPeriod=0.40000001;
                sound="A3PL_Open_Close";
                soundPosition="door5_axis";
			};
		};
		terrainCoef=0.60000002;
		turnCoef=2.5;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=150;
		secondaryexplosion=0;
		cost=50000;
		armor=900;
		transportMaxBackpacks=4;
		transportSoldier=7;
		wheelDamageRadiusCoef=0.69999999;
		wheelDestroyRadiusCoef=0.30000001;
		maxFordingDepth=0.30000001;
		waterResistance=1;
		crewCrashProtection=0.2;
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
				armor=1;
				passThrough=0;
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=1;
				passThrough=0;
			};
			class HitRFWheel: HitRFWheel
			{
				armor=1;
				passThrough=0;
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=1;
				passThrough=0;
			};
			class HitFuel
			{
				armor=5000;
				material=-1;
				name="fueltank";
				visual="";
				passThrough=0.2;
			};
			class HitEngine
			{
				armor=5000;
				material=-1;
				name="engine";
				visual="";
				passThrough=0.2;
			};
			class HitBody: HitBody
			{
				name="body";
				visual="camo1";
				passThrough=5000;
			};
			class HitGlass1: HitGlass1
			{
				armor=5000;
			};
			class HitGlass2: HitGlass2
			{
				armor=5000;
			};
			class HitGlass3: HitGlass3
			{
				armor=5000;
			};
			class HitGlass4: HitGlass4
			{
				armor=5000;
			};
			class HitGlass5: HitGlass5
			{
				armor=5000;
			};
			class HitGlass6: HitGlass6
			{
				armor=5000;
			};
		};
		class TransportItems
		{
		};
		driverAction="EC_Bearcat_Driver";
		cargoAction[]=
		{
			"EC_Bearcat_Passenger",
			"EC_Bearcat_Passenger_Back",
			"EC_Bearcat_Passenger_Back",
			"EC_Bearcat_Passenger_Back",
			"EC_Bearcat_Passenger_Back",
			"EC_Bearcat_Passenger_Back",
			"EC_Bearcat_Passenger_Back"
		};
		getInAction="GetInMRAP_01";
		getOutAction="GetOutMRAP_01";
		cargoGetInAction[]=
		{
			"GetInMRAP_01_cargo"
		};
		cargoGetOutAction[]=
		{
			"GetOutMRAP_01"
		};
		attenuationEffectType="MrapAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Enter",
			0.44668359,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Exit",
			0.44668359,
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
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_Start",
			0.63095737,
			1
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Int_stop",
			0.50118721,
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_Start",
			1.9952624,
			1,
			50
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles2\soft\Mrap_01\Mrap_01_Engine_Ext_stop",
			1.9952624,
			1,
			50
		};
		buildCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.9952624,
			1,
			75
		};
		buildCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.9952624,
			1,
			75
		};
		buildCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.9952624,
			1,
			75
		};
		buildCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.9952624,
			1,
			75
		};
		buildCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		buildCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		buildCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		buildCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.125,
			"buildCrash1",
			0.125,
			"buildCrash2",
			0.125,
			"buildCrash3",
			0.125,
			"buildCrash4",
			0.125,
			"buildCrash5",
			0.125,
			"buildCrash6",
			0.125,
			"buildCrash7",
			0.125
		};
		WoodCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_01",
			1.9952624,
			1,
			75
		};
		WoodCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_02",
			1.9952624,
			1,
			75
		};
		WoodCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_03",
			1.9952624,
			1,
			75
		};
		WoodCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_04",
			1.9952624,
			1,
			75
		};
		WoodCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_05",
			1.9952624,
			1,
			75
		};
		WoodCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_06",
			1.9952624,
			1,
			75
		};
		WoodCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_07",
			1.9952624,
			1,
			75
		};
		WoodCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_Wood_08",
			1.9952624,
			1,
			75
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.125,
			"woodCrash1",
			0.125,
			"woodCrash2",
			0.125,
			"woodCrash3",
			0.125,
			"woodCrash4",
			0.125,
			"woodCrash5",
			0.125,
			"woodCrash6",
			0.125,
			"woodCrash7",
			0.125
		};
		armorCrash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.9952624,
			1,
			75
		};
		armorCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.9952624,
			1,
			75
		};
		armorCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.9952624,
			1,
			75
		};
		armorCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.9952624,
			1,
			75
		};
		armorCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		armorCrash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		armorCrash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		armorCrash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.125,
			"ArmorCrash1",
			0.125,
			"ArmorCrash2",
			0.125,
			"ArmorCrash3",
			0.125,
			"ArmorCrash4",
			0.125,
			"ArmorCrash5",
			0.125,
			"ArmorCrash6",
			0.125,
			"ArmorCrash7",
			0.125
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_01",
			1.9952624,
			1,
			75
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_02",
			1.9952624,
			1,
			75
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_03",
			1.9952624,
			1,
			75
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_04",
			1.9952624,
			1,
			75
		};
		Crash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_05",
			1.9952624,
			1,
			75
		};
		Crash5[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_06",
			1.9952624,
			1,
			75
		};
		Crash6[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_07",
			1.9952624,
			1,
			75
		};
		Crash7[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Medium_08",
			1.9952624,
			1,
			75
		};
		soundCrashes[]=
		{
			"Crash0",
			0.125,
			"Crash1",
			0.125,
			"Crash2",
			0.125,
			"Crash3",
			0.125,
			"Crash4",
			0.125,
			"Crash5",
			0.125,
			"Crash6",
			0.125,
			"Crash7",
			0.125
		};
		BushCrash1[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_01",
			0.63095737,
			1,
			50
		};
		BushCrash2[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_02",
			0.63095737,
			1,
			50
		};
		BushCrash3[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095737,
			1,
			50
		};
		BushCrash4[]=
		{
			"A3\Sounds_F\vehicles2\soft\shared\collisions\Vehicle_Soft_Collision_Light_Bush_03",
			0.63095737,
			0.80000001,
			50
		};
		soundBushCrash[]=
		{
			"BushCrash1",
			0.25,
			"BushCrash2",
			0.25,
			"BushCrash3",
			0.25,
			"BushCrash4",
			0.25
		};
		class Sounds
		{
			soundSetsInt[]=
			{
				"Mrap_01_Engine_RPM0_INT_SoundSet",
				"Mrap_01_Engine_RPM1_INT_SoundSet",
				"Mrap_01_Engine_RPM2_INT_SoundSet",
				"Mrap_01_Engine_RPM3_INT_SoundSet",
				"Mrap_01_Engine_RPM4_INT_SoundSet",
				"Mrap_01_Engine_INT_Burst_SoundSet",
				"Mrap_01_Rattling_INT_SoundSet",
				"Mrap_01_Stress_INT_SoundSet",
				"Mrap_01_Rain_INT_SoundSet",
				"Mrap_01_Tires_Rock_Fast_INT_SoundSet",
				"Mrap_01_Tires_Grass_Fast_INT_SoundSet",
				"Mrap_01_Tires_Sand_Fast_INT_SoundSet",
				"Mrap_01_Tires_Gravel_Fast_INT_SoundSet",
				"Mrap_01_Tires_Mud_Fast_INT_SoundSet",
				"Mrap_01_Tires_Asphalt_Fast_INT_SoundSet",
				"Mrap_01_Tires_Water_Fast_INT_SoundSet",
				"Mrap_01_Tires_Rock_Slow_INT_SoundSet",
				"Mrap_01_Tires_Grass_Slow_INT_SoundSet",
				"Mrap_01_Tires_Sand_Slow_INT_SoundSet",
				"Mrap_01_Tires_Gravel_Slow_INT_SoundSet",
				"Mrap_01_Tires_Mud_Slow_INT_SoundSet",
				"Mrap_01_Tires_Asphalt_Slow_INT_SoundSet",
				"Mrap_01_Tires_Water_Slow_INT_SoundSet",
				"Mrap_01_Tires_Turn_Hard_INT_SoundSet",
				"Mrap_01_Tires_Turn_Soft_INT_SoundSet",
				"Mrap_01_Tires_Brake_Hard_INT_SoundSet",
				"Mrap_01_Tires_Brake_Soft_INT_SoundSet",
				"",
				"Tires_Movement_Dirt_Int_01_SoundSet"
			};
			soundSetsExt[]=
			{
				"Mrap_01_Engine_RPM0_EXT_SoundSet",
				"Mrap_01_Engine_RPM1_EXT_SoundSet",
				"Mrap_01_Engine_RPM2_EXT_SoundSet",
				"Mrap_01_Engine_RPM3_EXT_SoundSet",
				"Mrap_01_Engine_RPM4_EXT_SoundSet",
				"Mrap_01_Engine_EXT_Burst_SoundSet",
				"Mrap_01_Rattling_EXT_SoundSet",
				"Mrap_01_Stress_EXT_SoundSet",
				"Mrap_01_Rain_EXT_SoundSet",
				"Mrap_01_Tires_Rock_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Grass_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Sand_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Gravel_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Mud_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Water_Fast_EXT_SoundSet",
				"Mrap_01_Tires_Rock_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Grass_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Sand_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Gravel_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Mud_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Water_Slow_EXT_SoundSet",
				"Mrap_01_Tires_Turn_Hard_EXT_SoundSet",
				"Mrap_01_Tires_Turn_Soft_EXT_SoundSet",
				"Mrap_01_Tires_Brake_Hard_EXT_SoundSet",
				"Mrap_01_Tires_Brake_Soft_EXT_SoundSet",
				"",
				"Tires_Movement_Dirt_Ext_01_SoundSet"
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		maxSpeed=190;
		fuelCapacity=75;
		wheelCircumference=3.924;
		idleRpm=800;
		redRpm=4500;
		antiRollbarForceCoef=12;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=50;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				2.3180001,
				"D3",
				1.85,
				"D4",
				1.65,
				"D5",
				1.45
			};
			TransmissionRatios[]=
			{
				"High",
				5.539
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=6;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.5;
		rearBias=1.5;
		centreBias=1.5;
		clutchStrength=20;
		maxOmega=471;
		enginePower=700;
		peakTorque=1200;
		dampingRateFullThrottle=0.079000004;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34900001;
		torqueCurve[]=
		{
			{0,0},
			{0.178,0.5},
			{0.25,0.85000002},
			{0.40000001,0.88999999},
			{0.5,1},
			{0.72500002,0.94},
			{0.85000002,0.60000002},
			{1,0.30000001}
		};
		changeGearMinEffectivity[]={0.94,0.15000001,0.94,0.94,0.94,0.94,0.94};
		switchTime=0.31;
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
				mass=150;
				MOI=40;
				width="0.35";
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=22500;
				suspTravelDirection[]={-0.125,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=1800;
				springStrength=225000;
				springDamperRate=16100;
				longitudinalStiffnessPerUnitGravity=4800;
				latStiffX=25;
				latStiffY=180;
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
				latStiffY=180;
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
				latStiffY=180;
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
				latStiffY=180;
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
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1300,950};
				ambient[]={5,5,5};
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
			class Right: Left
			{
				position="LightCarHeadR01";
				direction="LightCarHeadR01_end";
				hitpoint="P svetlo";
				selection="P svetlo";
			};
			class Right2: Right
			{
				position="LightCarHeadR02";
				direction="LightCarHeadR02_end";
				hitpoint="HighBeamR";
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
			class Left2: Left
			{
				position="LightCarHeadL02";
				direction="LightCarHeadL02_end";
				hitpoint="HighBeamL";
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
				"Left",
				"Right"
			},
			
			{
				"Right2",
				"Left2"
			},
		};
	};
};