class CfgPatches
{
	class A3PL_Van
	{
		units[] = {"A3PL_Van"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars"};
	};
};
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class HitPoints;
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class C_Van_01_fuel_F: Car_F {class Turrets: Turrets{};};
	class A3PL_Car_Base: C_Van_01_fuel_F
	{
		class AnimationSources {class Mods;};		
		class Turrets: Turrets{};
		class Sounds;
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
	};
	class A3PL_Fuel_Van: A3PL_Car_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author = "Gaming / 76561198123473506";
		displayName = "Fuel Truck";
		class Library {libTextDesc = "Fuel Truck";};
		fuelCapacity = 16.5;///mpg (imp.), average combined
		transportSoldier = 2;
		model = "\A3PL_Cars\Van_01\A3PL_Van_01_fuel_F";
		extCameraPosition[] = {0,0.5,-7.5};
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","Body2"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,1,CO)","","","","","","","","#(argb,8,8,3)color(1,1,1,1,CO)"};
		driverAction="driver_low01";
		driverInAction="driver_low01";
		cargoAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
		};
		cargoInAction[]=
		{
			"passenger_generic01_foldhands",
			"passenger_generic01_foldhands"
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
			#define HZ_RPM7 FACTOR_RPM(5400,6150)
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
			#define VOLUME_RPM7 FACTOR2_RPM(5400,5700,5900,6100)
			#define VOLUME_RPM8 FACTOR2_RPM(5870,6100,6300,7100)
			#define VOLUME_RPM9 FACTOR2_RPM(6250,7050,7300,8100)
			#define VOLUME_RPM10 FACTOR2_RPM(7250,8050,8300,9100)
			#define VOLUME_RPM11 FACTOR2_RPM(8250,9050,9200,9870)
			#define VOLUME_RPM12 FACTOR2_RPM(9150,9800,10150,9150)
			#define VOLUME_RPM13 FACTOR_RPM(10100,11100)
			class	Idle_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\idle.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE;
			};
			class	Engine
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\1000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\2000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2;
			};
			class	Engine2_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\3000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3;
			};
			class	Engine3_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\4000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4;
			};
			class	Engine4_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\5000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5;
			};
			class	Engine5_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\6000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6;
			};
			class	Engine6_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\7000.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7;
			};
			class	Engine7_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\8000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8;
			};
			class	Engine8_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\9000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9;
			};
			class	Engine9_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\10000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10;
			};
			class	Engine10_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\11000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11;
			};
			class	Engine11_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\12000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12;
			};
			class	Engine12_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\12000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13;
			};
			class	Idle_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\Idle.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE;
			};
			class	Engine_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\1000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1;
			};
			class	Engine1_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\2000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2;
			};
			class	Engine2_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\3000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3;
			};
			class	Engine3_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\4000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4;
			};
			class	Engine4_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\5000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5;
			};
			class	Engine5_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\6000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6;
			};
			class	Engine6_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\7000.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7;
			};
			class	Engine7_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\8000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8;
			};
			class	Engine8_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\9000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9;
			};
			class	Engine9_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\10000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10;
			};
			class	Engine10_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\11000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11;
			};
			class	Engine11_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\12000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12;
			};
			class	Engine12_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_F150\sounds\12000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13;
			};
		};

		brakeIdleSpeed=0.6;
		wheelCircumference=2;
		antiRollbarForceCoef=1.5;
		antiRollbarForceLimit=1.5;
		antiRollbarSpeedMin=1.5;
		antiRollbarSpeedMax=4;
		frontBias=2.5;
		rearBias=2;
		centreBias=1.5;
		dampersBumpCoef=0.05;
		frontRearSplit=0.25;
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
				sprungMass=750;
				springStrength=75000;
				springDamperRate=12500;
				longitudinalStiffnessPerUnitGravity=2000;
				suspTravelDirection[]={0,-1.5,0};
				frictionVsSlipGraph[]={{0.75,1},{1,1},{1,1}};
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
				sprungMass=750*1.2;
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
				sprungMass=750;
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
				sprungMass=750*1.2;
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
			turnIncreaseLinear	= 0.5; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 6.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 2; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
	};
	class A3PL_Transport_Van: A3PL_Car_Base
	{
		displayName = "Truck";
		model = "\A3PL_Cars\Van_01\A3PL_Van_01_transport_F";
	};
};