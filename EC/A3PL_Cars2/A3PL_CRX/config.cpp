class CfgPatches
{
	class A3PL_CRX
	{
		units[] = {"A3PL_CRX"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3_Soft_F"};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F 
	{
		class Sounds;
		class AnimationSources;
		class Wheels
		{
			class LF;
			class LR;
			class RF;
			class RR;
		};
	};
	class A3PL_CRX: A3PL_Car_Base
	{
		displayName = "1991 Honda CR-X";
		class Library { libTextDesc = "1991 Honda CR-X SiR"; };
		fuelCapacity = 27.2;///mpg (imp.), average combined
		transportSoldier = 3;
		differentialType = "front_open";
		model = "\A3PL_Cars2\A3PL_CRX\A3PL_CRX";
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
			"#(argb,8,8,3)color(1,1,1,1.0,CO)",
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
		maxSpeed = 180;
		enginePower=210;
		peakTorque=420;
		wheelDestroyRadiusCoef = 0.75;
		extCameraPosition[] = {0,0.9,-6.2};
		driverAction = "A3PL_Driver2";
		cargoAction[] = {"A3PL_Passenger2","A3PL_Passenger_Rear"};
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet {initPhase = 1;displayName = "Stock Bonnet";source = "user";animPeriod = 0.001;forceAnimatePhase = 1;forceAnimate[] = {};};
			class Stock_Front_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Front Bumper";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Front_Bumper3", 0,"Front_Bumper4", 0,"Front_Bumper5", 0};};
			class Stock_Rear_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Rear Bumper";forceAnimate[] = {"Rear_Bumper1", 0,"Rear_Bumper2", 0,"Rear_Bumper3", 0,"Rear_Bumper4", 0};};
			class Stock_Exhaust: Stock_Bonnet {initPhase = 1;displayName = "Stock Exhaust";forceAnimate[] = {"Exhaust1", 0,"Exhaust2", 0,"Exhaust3", 0};};
			class Stock_Side_Skirt: Stock_Bonnet {initPhase = 1;displayName = "Stock Side Skirt";forceAnimate[] = {"Side_Skirt1", 0,"Side_Skirt2", 0,"Side_Skirt3", 0};};
			class Stock_Spoiler: Stock_Bonnet {initPhase = 0;displayName = "Stock Spoiler";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,"Spoiler4", 0};};
			class Roll_Cage: Stock_Bonnet {initPhase = 0;displayName = "Roll Cage";forceAnimate[] = {};};
			class Student_Driver: Stock_Bonnet {initPhase = 0;displayName = "Student Driver Addon";forceAnimate[] = {};};
			class Front_Bumper1: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 1";forceAnimate[] = {"Stock_Front_Bumper", 0,"Front_Bumper2", 0,"Front_Bumper3", 0,"Front_Bumper4", 0,"Front_Bumper5"};};
			class Front_Bumper2: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 2";forceAnimate[] = {"Front_Bumper1", 0,"Stock_Front_Bumper", 0,"Front_Bumper3", 0,"Front_Bumper4", 0,"Front_Bumper5"};};
			class Front_Bumper3: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 3";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Stock_Front_Bumper", 0,"Front_Bumper4", 0,"Front_Bumper5"};};
			class Front_Bumper4: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 4";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Front_Bumper3", 0,"Stock_Front_Bumper", 0,"Front_Bumper5"};};
			class Front_Bumper5: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 5";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0,"Front_Bumper3", 0,"Front_Bumper4", 0,"Stock_Front_Bumper"};};
			class Rear_Bumper1: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 1";forceAnimate[] = {"Stock_Rear_Bumper", 0,"Rear_Bumper2", 0,"Rear_Bumper3", 0,"Rear_Bumper4", 0};};
			class Rear_Bumper2: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 2";forceAnimate[] = {"Rear_Bumper1", 0,"Stock_Rear_Bumper", 0,"Rear_Bumper3", 0,"Rear_Bumper4", 0};};
			class Rear_Bumper3: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 3";forceAnimate[] = {"Rear_Bumper1", 0,"Rear_Bumper2", 0,"Stock_Rear_Bumper", 0,"Rear_Bumper4", 0};};
			class Rear_Bumper4: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 4";forceAnimate[] = {"Rear_Bumper1", 0,"Rear_Bumper2", 0,"Rear_Bumper3", 0,"Stock_Rear_Bumper", 0};};
			class Side_Skirt1: Stock_Side_Skirt {initPhase = 0;displayName = "Side Skirt Type 1";forceAnimate[] = {"Stock_Side_Skirt", 0,"Side_Skirt2", 0,"Side_Skirt3", 0};};
			class Side_Skirt2: Stock_Side_Skirt {initPhase = 0;displayName = "Side Skirt Type 2";forceAnimate[] = {"Side_Skirt1", 0,"Stock_Side_Skirt", 0,"Side_Skirt3", 0};};
			class Side_Skirt3: Stock_Side_Skirt {initPhase = 0;displayName = "Side Skirt Type 3";forceAnimate[] = {"Side_Skirt1", 0,"Side_Skirt2", 0,"Stock_Side_Skirt", 0};};
			class Spoiler1: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 1";forceAnimate[] = {"Stock_Spoiler", 0,"Spoiler2", 0,"Spoiler4"};};
			class Spoiler2: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 2";forceAnimate[] = {"Spoiler1", 0,"Stock_Spoiler", 0,"Spoiler4"};};
			class Spoiler3: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 3";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,"Stock_Spoiler", 0,"Spoiler4"};};
			class Spoiler4: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 4";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,"Stock_Spoiler"};};
			class Exhaust1: Stock_Exhaust {initPhase = 0;displayName = "Exhaust Type 1";forceAnimate[] = {"Stock_Exhaust", 0,"Exhaust2", 0,"Exhaust3", 0};};
			class Exhaust2: Stock_Exhaust {initPhase = 0;displayName = "Exhaust Type 2";forceAnimate[] = {"Exhaust1", 0,"Stock_Exhaust", 0,"Exhaust3", 0};};
			class Exhaust3: Stock_Exhaust {initPhase = 0;displayName = "Exhaust Type 3";forceAnimate[] = {"Exhaust1", 0,"Exhaust2", 0,"Stock_Exhaust", 0};};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 0.5; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1.0; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.0; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 3.0; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.7; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
		class Sounds: Sounds
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
			class Idle_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\Idle.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class Engine
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\1000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\2000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\3000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\4000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\5000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\6000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\7000.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\8000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\9000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\10000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\11000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\12000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\13000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\Idle.ogg",db-15,1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\1000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\2000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\3000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\4000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\5000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\6000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\7000.ogg",db-15,1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\8000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\9000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\10000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\11000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\12000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_CRX\Sounds\13000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
			};
		};
    };
};