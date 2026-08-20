class CfgPatches
{
	class A3PL_Tahoe
	{
		units[] = {"A3PL_Tahoe"};
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
	};
	class Car_F: Car {};
	class Hatchback_01_sport_base_F: Car_F {};
	class A3PL_Car_Base: Hatchback_01_sport_base_F
	{
		class AnimationSources {class Mods;};
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
		class Sounds;
	};
	class A3PL_Tahoe: A3PL_Car_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		author = "Jonzie";
		displayName = "2008 Chevrolet Tahoe";
		class Library { libTextDesc = "2008 Chevrolet Tahoe LTZ 4WD 5.3L V-8 Flexfuel"; };
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		fuelCapacity = 23;///mpg (imp.), average combined
		transportSoldier = 3;
		maxSpeed = 224;
		enginePower = 380;
		peakTorque = 461;
		extCameraPosition[] = {0,0.5,-5.5};
		model = "\A3PL_Cars\Jonzie_Tahoe\A3PL_Tahoe";
		htMax = 2512;
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
			class	Idle_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*2;
			};
			class	Engine
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*2;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*2;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*2;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*2;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*2;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*2;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*2;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*2;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*2;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*2;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*2;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*2;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*2;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*2;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*2;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*2;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*2;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*2;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*2;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*2;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*2;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*2;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*2;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*2;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*2;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*2;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*2;
			};
		};		

		differentialType="all_open";
		brakeIdleSpeed=0.01;
		wheelCircumference=2;
		antiRollbarForceCoef=1.5;
		antiRollbarForceLimit=1.5;
		antiRollbarSpeedMin=1.5;
		antiRollbarSpeedMax=6;
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
				sprungMass=650;
				springStrength=80000;
				springDamperRate=8500;
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
				sprungMass=650*1.2;
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
				sprungMass=650;
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
				sprungMass=650*1.2;
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
	class A3PL_Tahoe_PD: A3PL_Tahoe
	{
		displayName = "2008 Chevrolet Tahoe PD";
		driverAction = "A3PL_Driver_Tahoe";
		driverLeftHandAnimName = "steering_wheel";
		driverRightHandAnimName = "";
		cargoAction[] = {"A3PL_Passenger_Low2"};
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = {"\A3PL_Textures\Tahoe\FISD\FISD_Tahoe08_patrol.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		model = "\A3PL_Cars\Jonzie_Tahoe\A3PL_Tahoe_PD";
		terrainCoef = 3.8;
		cargoDoors[] = {"Door_LB","Door_RB"};
		maxSpeed = 268;
		enginePower = 456;
		peakTorque = 553;
		getInProxyOrder[] = {1,2};
		class AnimationSources: AnimationSources
		{
			class Pushbar_Addon: Mods {initPhase = 1;displayName = "Pushbar";};
			class Spotlight_Addon: Mods {initPhase = 1;displayName = "Spotlight";};
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
	};
	class A3PL_Tahoe_PD_Slicktop: A3PL_Tahoe_PD {displayName = "2008 Chevrolet Tahoe PD ST";model = "\A3PL_Cars\Jonzie_Tahoe\A3PL_Tahoe_PD_Slicktop";class AnimationSources: AnimationSources {class Pushbar_Addon: Pushbar_Addon {initPhase = 0;};class Spotlight_Addon: Spotlight_Addon {initPhase = 0;};};hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa"};};
	class A3PL_Tahoe_FD: A3PL_Tahoe
	{
		displayName = "2008 Chevrolet Tahoe FD";
		driverAction = "A3PL_Driver_Tahoe";
		driverLeftHandAnimName = "steering_wheel";
		driverRightHandAnimName = "";
		model = "\A3PL_Cars\Jonzie_Tahoe\A3PL_Tahoe_FD";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[] = {"\A3PL_Textures\Tahoe\FIFR\FIFR_Tahoe_SR.paa","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		terrainCoef = 3;
		cargoAction[] = {"A3PL_Passenger_Low","passenger_low01"};
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB"};
		getInProxyOrder[] = {1,2,3};
		class AnimationSources: AnimationSources
		{
			class Laptop 
			{
      		source = "user";
      		animPeriod = 2;
      		initPhase=1;
			};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota1_start";
				direction="rota1_end";
				hitpoint="Light_L";
				selection="rota1";
				size=0.75;
				innerAngle=30;
				outerAngle=60;
				coneFadeCoef=0.75;
				intensity=1.5;
				useFlare=1;
				dayLight=1;
				flareSize=0.5;
				flareMaxDistance=50;
				class Attenuation
				{
					start=0.5;
					constant=0;
					linear=0;
					quadratic=0;
					hardLimitStart=5;
					hardLimitEnd=15;
				};
			};
			class rota2: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota2_start";
				direction="rota2_end";
				selection="rota2";
			};
			class rota3: rota1
			{
				color[]={2500,2500,2500};
				ambient[]={255,255,255};
				position="rota3_start";
				direction="rota3_end";
				selection="rota3";
			};
			class rota4: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota4_start";
				direction="rota4_end";
				selection="rota4";
			};
			class rota5: rota1
			{
				color[]={2500,2500,2500};
				ambient[]={255,255,255};
				position="rota5_start";
				direction="rota5_end";
				selection="rota5";
			};
			class rota6: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota6_start";
				direction="rota6_end";
				selection="rota6";
			};
			class rota7: rota1
			{
				color[]={2500,0,0};
				ambient[]={255,0,0};
				position="rota7_start";
				direction="rota7_end";
				selection="rota7";
			};
		};
	};
};