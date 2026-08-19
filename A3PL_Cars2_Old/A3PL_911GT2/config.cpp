class CfgPatches
{
	class A3PL_911GT2
	{
		units[] = {"A3PL_911GT2"};
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
		class complexGearbox;
		class Wheels
		{
			class LF;
			class LR;
			class RF;
			class RR;
		};
	};
	class A3PL_911GT2: A3PL_Car_Base
	{
		displayName = "1995 Porsche 911 GT2";
		class Library {libTextDesc = "1995 Porsche 911 GT2 (993)";};
		fuelCapacity = 20.42;///mpg (imp.), average combined
		transportSoldier = 1;
		differentialType = "all_limited";
		model = "\A3PL_Cars2\A3PL_911GT2\A3PL_911GT2";
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
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
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa"
		};
		maxSpeed = 392;
		enginePower = 516;
		peakTorque = 740;
		clutchStrength = 2;
		wheelDestroyRadiusCoef = 0.75;
		frontRearSplit = 0.4;
		extCameraPosition[] = {0,0.9,-6.2};
		driverAction = "A3PL_Driver2";
		cargoAction[] = {"A3PL_Passenger2"};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.71, 0.71, 0.72, 0.72, 0.72};
		class complexGearbox: complexGearbox
		{
			GearboxRatios[] = {"R1",-3.82,"N",0,"D1",3.82,"D2",2.15,"D3",1.8,"D4",1.45,"D5",1.1,"D6",0.75};
			TransmissionRatios[] = {"High",4.6};
			gearBoxMode = "manual";
			//transmissionDelay = 0.01;
		};
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet {initPhase = 1;displayName = "Stock Bonnet";source = "user";animPeriod = 0.001;forceAnimatePhase = 1;forceAnimate[] = {};};
			class Stock_Front_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Front Bumper";forceAnimate[] = {"Front_Bumper1", 0,"Front_Bumper2", 0};};
			class Stock_Rear_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Rear Bumper";forceAnimate[] = {"Rear_Bumper1", 0};};
			class Stock_Exhaust: Stock_Bonnet {initPhase = 1;displayName = "Stock Exhaust";forceAnimate[] = {};};
			class Stock_Spoiler: Stock_Bonnet {initPhase = 1;displayName = "Stock Spoiler";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,"Spoiler3", 0};};
			class Roll_Cage: Stock_Bonnet {initPhase = 0;displayName = "Roll Cage";forceAnimate[] = {};};
			class Front_Bumper1: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 1";forceAnimate[] = {"Stock_Front_Bumper", 0,"Front_Bumper2", 0};};
			class Front_Bumper2: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 2";forceAnimate[] = {"Front_Bumper1", 0,"Stock_Front_Bumper", 0};};
			class Rear_Bumper1: Stock_Rear_Bumper {initPhase = 0;displayName = "Rear Bumper Type 1";forceAnimate[] = {"Stock_Rear_Bumper", 0};};
			class Spoiler1: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 1";forceAnimate[] = {"Stock_Spoiler", 0,"Spoiler2", 0,"Spoiler3", 0};};
			class Spoiler2: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 2";forceAnimate[] = {"Spoiler1", 0,"Stock_Spoiler", 0,"Spoiler3", 0};};
			class Spoiler3: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 3";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0,"Stock_Spoiler", 0};};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 0.7; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.8; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
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
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\Idle.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class Engine
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\1000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\2000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\3000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\4000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\5000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\6000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\7000.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\8000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\9000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\10000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\11000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\12000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\13000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\Out\Idle.ogg",db-15,1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\1000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\2000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\3000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\4000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\5000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\6000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\7000.ogg",db-15,1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\8000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\9000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\10000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\11000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\12000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_Cars2\A3PL_911GT2\Sounds\In\13000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
			};
		};
		class Wheels: Wheels
		{
			class LF: LF
			{
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.0}, {1, 1}};
				width = "0.265";
				mass = 27;
				sprungMass = 324;
				springStrength = 8100;
				springDamperRate = 1296;
				//maxBrakeTorque = 11400;
			};
			class LR: LR
			{
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.0}, {1, 1}};
				width = "0.325";
				mass = 30;
				//maxBrakeTorque = 7600;
			};
			class RF: RF
			{
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.0}, {1, 1}};
				width = "0.265";
				mass = 27;
				//maxBrakeTorque = 11400;
			};
			class RR: RR
			{
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1.0}, {1, 1}};
				width = "0.325";
				mass = 30;
				//maxBrakeTorque = 7600;
			};
		};
    };
};