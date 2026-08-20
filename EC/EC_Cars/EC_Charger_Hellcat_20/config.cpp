class CfgPatches
{
	class EC_Charger_Hellcat_20
	{
		units[]=
		{
			"EC_Charger_Hellcat_20",
			"EC_Charger_Hellcat_20_PD",
			"EC_Charger_Hellcat_20_PD_ST",
			"EC_Charger_Hellcat_20_FD"
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
		EC_Charger_Hellcat_20_PassengerBack="EC_Charger_Hellcat_20_PassengerBack";
		EC_Charger_Hellcat_20_PassengerFront="EC_Charger_Hellcat_20_PassengerFront";
		EC_Charger_Hellcat_20_Driver="EC_Charger_Hellcat_20_Driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	skeletonName="OFP2_ManSkeleton";
	gestures="CfgGesturesMale";
	class States
	{
		class Crew;
		class EC_Charger_Hellcat_20_PassengerBack: Crew
		{
			file="EC_Cars\EC_Charger_Hellcat_20\anim\EC_Charger_Hellcat_20_PassengerBack.rtm";
		};
		class EC_Charger_Hellcat_20_PassengerFront: Crew
		{
			file="EC_Cars\EC_Charger_Hellcat_20\anim\EC_Charger_Hellcat_20_PassengerFront.rtm";
		};
		class EC_Charger_Hellcat_20_Driver: Crew
		{
			file="EC_Cars\EC_Charger_Hellcat_20\anim\EC_Charger_Hellcat_20_Driver.rtm";
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
	class EC_Charger_Hellcat_20: Car_F
	{
		scope=2;
		model="EC_Cars\EC_Charger_Hellcat_20\EC_Charger_Hellcat_20";
		picture="";
		weapons[]=
		{
			"A3PL_CarHorn"
		};
		displayName="2020 Dodge Charger Hellcat";
		author="EC Marshall McMullen";
		extCameraPosition[]={0,1.2,-5.3000002};
		driverLeftHandAnimName = "drivewheel";
        driverRightHandAnimName = "drivewheel";
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
		terrainCoef=0.80000001;
		turnCoef=2.5;
		precision=10;
		brakeDistance=3;
		acceleration=15;
		fireResistance=5;
		secondaryExplosion=0;
		cost=50000;
		armor=40;
		transportMaxBackpacks=4;
		transportSoldier=3;
		wheelDamageRadiusCoef=0.69999999;
		wheelDestroyRadiusCoef=0.30000001;
		maxFordingDepth=0.30000001;
		waterResistance=1;
		crewCrashProtection=2;
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
		driverAction="EC_Charger_Hellcat_20_Driver";
		cargoAction[]=
		{
			"EC_Charger_Hellcat_20_PassengerFront",
			"EC_Charger_Hellcat_20_PassengerBack",
			"EC_Charger_Hellcat_20_PassengerBack",
			"EC_Charger_Hellcat_20_PassengerBack"
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
			"A3FL_Cars4\A3FL_CamaroZL1\sounds\startup.ogg",
			"db-8",
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Cars4\A3FL_CamaroZL1\sounds\startup.ogg",
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
			#define	MAX_RPM	8100
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
			#define HZ_RPM9 FACTOR_RPM(7100,8900)
			#define VOLUME_IDLE FACTOR2_RPM(400,700,900,1100)
			#define VOLUME_RPM1 FACTOR2_RPM(870,1100,1300,2100)
			#define VOLUME_RPM2 FACTOR2_RPM(1250,2050,2300,3100)
			#define VOLUME_RPM3 FACTOR2_RPM(2250,3050,3300,4100)
			#define VOLUME_RPM4 FACTOR2_RPM(3250,4050,4200,4870)
			#define VOLUME_RPM5 FACTOR2_RPM(4150,4800,5150,6150)
			#define VOLUME_RPM6 FACTOR2_RPM(5100,6100,5400,5700)
			#define VOLUME_RPM7 FACTOR2_RPM(5400,5700,5900,6100)//////
			#define VOLUME_RPM8 FACTOR2_RPM(5870,6100,6300,7100)
			#define VOLUME_RPM9 FACTOR_RPM(6250,8100)
			class Idle_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\Idle.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class Engine
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\1000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\2000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\3000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\4000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\5000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\6000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\7000.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\8000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\9000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\Idle.ogg",db-15,1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\1000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\2000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\3000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\4000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\5000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\6000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\7000.ogg",db-15,1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\8000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_Challenger_Hellcat\Sounds\9000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
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
		maxSpeed=320;
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
		maxOmega=650;
		enginePower=707;
		peakTorque=975;
		dampingRateFullThrottle=0.050000001;
		dampingRateZeroThrottleClutchDisengaged=2;
		dampingRateZeroThrottleClutchEngaged=0.34999999;
		torqueCurve[]=
		{
			{0,0},
			{0.14,0.41},
			{0.25,0.69999999},
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
				MOI=5.3;
				maxBrakeTorque=2300;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				MaxDroop=0.15000001;
				sprungMass=365;
				springStrength=39125;
				springDamperRate=3023;
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
	class EC_Charger_Hellcat_20_PD: EC_Charger_Hellcat_20
	{
		model="EC_Cars\EC_Charger_Hellcat_20\EC_Charger_Hellcat_20_PD";
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
			"A3PL_Textures\ChargerHellcat\FISD\FISD_Hellcat_Patrol.paa",
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
		displayName="2020 Dodge Charger Hellcat PD";
		maxOmega=780;
		enginePower=848.4;
		peakTorque=1170;
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
				class Attenuation {start = 2.0;constant = 0;linear = 0.1;quadratic = 0.01;hardLimitStart = 490;hardLimitEnd = 550;};
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
	class EC_Charger_Hellcat_20_PD_ST : EC_Charger_Hellcat_20_PD {
		model = "\EC_Cars\EC_Charger_Hellcat_20\EC_Charger_Hellcat_20_PD_ST";
		hiddenSelectionsTextures[] = { "#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName="2020 Dodge Charger Hellcat PD ST";
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
	class EC_Charger_Hellcat_20_FD : EC_Charger_Hellcat_20_PD {
		model = "\EC_Cars\EC_Charger_Hellcat_20\EC_Charger_Hellcat_20_FD";
		hiddenSelectionsTextures[] = { "A3PL_Textures\ChargerHellcat\FIFR\FIFR_Charger20_BattChief.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		displayName="2020 Dodge Charger Hellcat FD";
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
};