class CfgPatches
{
	class EC_Performante
	{
		units[]=
		{
			"EC_Performante"
		};
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
		EC_Performante_Driver="EC_Performante_Driver";
		EC_Performante_Passenger="EC_Performante_Passenger";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class EC_Performante_Passenger: Crew
		{
			file="\EC_Cars\EC_Performante\Anim\EC_Performante_Passenger.rtm";
		};
		class EC_Performante_Driver: Crew
		{
			file="\EC_Cars\EC_Performante\Anim\EC_Performante_Driver.rtm";
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
	class EC_Performante: Car_F
	{
		scope=2;
		model="EC_Cars\EC_Performante\EC_Performante";
		weapons[]=
		{
			"A3PL_CarHorn"
			
		};
		displayName="2019 Lamborghini Huracan Performante";
		extCameraPosition[]={0,1,-4};
		driveOnComponent[]=
		{
			"wheel_1_1_damper",
			"wheel_1_2_damper",
			"wheel_2_1_damper",
			"wheel_2_2_damper"
		};
		author="Marshall McMullen :)";
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
		secondaryExplosion=0;
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
			class Head_Lights: Common{};
			class High_Beam: Common {};
		};
		terrainCoef=0.60000002;
		turnCoef=2.5;
		precision=9;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		maximumLoad = 39;
		cost=50000;
		armor=40;
		transportMaxBackpacks=0;
		transportSoldier=1;
		wheelDamageRadiusCoef=0.4;
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
		class TransportItems
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
		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst	= 0.95; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 6.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		driverAction="EC_Performante_Driver";
		cargoAction[]=
		{
			"EC_Performante_Passenger"
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
			"db-8",
			1
		};
		soundEngineOnExt[]=
		{
			"",
			"db-7",
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
			#define	FACTOR(val,from,to)	(val factor[from,to])
			#define	RANGE(val,from,band0,to,band1) FACTOR2(val,from,(from+band0),to,(to+band1))
			#define	FACTOR2(val,from0,to0,from1,to1) (FACTOR(val,from0,to0)	*	FACTOR(val,to1,from1))
			#define	MAX_RPM	11900
			#define	RPM(rpm) (rpm/MAX_RPM)
			#define	FACTOR_RPM(from,to)	FACTOR(RPM(rpm),RPM(from),RPM(to))
			#define	FACTOR2_RPM(from0,to0,from1,to1) (FACTOR_RPM(from0,to0)	*	FACTOR_RPM(to1,from1))
			#define	RANGE_RPM(from,band0,to,band1) FACTOR2_RPM(from,(from+band0),to,(to+band1))
			#define HZ_IDLE FACTOR_RPM(400,1150)
			#define HZ_RPM1 FACTOR_RPM(900,2100)
			#define HZ_RPM2	FACTOR_RPM(1300,3100)
			#define HZ_RPM3 FACTOR_RPM(2200,4100)
			#define HZ_RPM4 FACTOR_RPM(3300,4900)
			#define HZ_RPM5 FACTOR_RPM(4200,6200)
			#define HZ_RPM6 FACTOR_RPM(5100,6900)
			#define HZ_RPM7 FACTOR_RPM(5400,6150)//////
			#define HZ_RPM8 FACTOR_RPM(5900,7100)
			#define HZ_RPM9	FACTOR_RPM(6300,8100)
			#define HZ_RPM10 FACTOR_RPM(7200,9100)
			#define HZ_RPM11 FACTOR_RPM(8300,9900)
			#define HZ_RPM12 FACTOR_RPM(9200,11200)
			#define HZ_RPM13 FACTOR_RPM(10100,11900)
			#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
			#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
			#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
			#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
			#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
			#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
			#define VOLUME_RPM6 FACTOR2_RPM(5100,6100,5400,5700)
			#define VOLUME_RPM7 FACTOR2_RPM(5400,5700,5900,6100)//////
			#define VOLUME_RPM8 FACTOR2_RPM(5870,6100,6300,7100)
			#define VOLUME_RPM9 FACTOR2_RPM(6250,7050,7300,8100)
			#define VOLUME_RPM10 FACTOR2_RPM(7250,8050,8300,9100)
			#define VOLUME_RPM11 FACTOR2_RPM(8250,9050,9200,9870)
			#define VOLUME_RPM12 FACTOR2_RPM(9150,9800,10150,9150)
			#define VOLUME_RPM13 FACTOR_RPM(10100,11100)
			class	Idle_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\Idle.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class	Engine
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\1000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\2000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\3000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\4000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\5000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\6000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\7000.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\8000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\9000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\10000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\11000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\12000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\13000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\Idle.ogg",db-15,1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\1000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\2000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\3000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\4000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\5000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\6000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\7000.ogg",db-15,1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\8000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\9000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\10000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\11000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\12000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Gallardo\Sounds\13000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
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
		maxSpeed=325;
		fuelCapacity=42;
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
				-2.882,
				"N",
				0,
				"D1",
				4.4840002,
				"D2",
				2.872,
				"D3",
				1.842,
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
				4.1110001
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
		maxOmega=840;
		enginePower=630;
		peakTorque=1400;
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
				mass=38;
				MOI=3.3;
				maxBrakeTorque=2300;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=358;
				springStrength=68938;
				springDamperRate=3675;
				longitudinalStiffnessPerUnitGravity=5800;
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
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},
			{"LightCarHeadL02","LightCarHeadR02"}
		};
	};
};
