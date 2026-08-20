class CfgPatches
{
	class A3PL_F150
	{
		units[] = {"A3PL_F150"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F","A3PL_Cars"};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class A3PL_Car_Base: Hatchback_01_sport_base_F 
	{
		class AnimationSources;class Sounds;
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
	};
	class A3PL_F150: A3PL_Car_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "2011 Ford F150";
		class Library { libTextDesc = "2011 Ford F150 SVT Raptor"; };
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		fuelCapacity = 13.2;///mpg (imp.), average combined
		transportSoldier = 4;
		differentialType = "all_open";
		model = "\A3PL_Cars\A3PL_F150\A3PL_F150";
		maxSpeed = 209;
		enginePower = 430;
		peakTorque = 520;
		terrainCoef = 4;
		wheelDestroyRadiusCoef = 0.68;
		extCameraPosition[] = {0,0.5,-6.5};
		htMax = 2724;
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

		brakeIdleSpeed=0.01;
		wheelCircumference=2;
		antiRollbarForceCoef=1.3;
		antiRollbarForceLimit=1.3;
		antiRollbarSpeedMin=1.3;
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
				sprungMass=650;
				springStrength=80000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=2000;
				suspTravelDirection[]={0,-0.75,0};
				frictionVsSlipGraph[]={{0.45,0.9},{0.9,0.8},{0.9,0.8}};
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
				sprungMass=650*1.1;
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
				sprungMass=650*1.1;
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=15000;
				latStiffX=18;
				latStiffY=18000;
			};
		};
		memoryPointTrackFLL="stopa pll";
		memoryPointTrackFLR="stopa plp";
		memoryPointTrackBLL="stopa zll";
		memoryPointTrackBLR="stopa zlp";
		memoryPointTrackFRL="stopa ppl";
		memoryPointTrackFRR="stopa ppp";
		memoryPointTrackBRL="stopa zpl";
		memoryPointTrackBRR="stopa zpp";

		class PlayerSteeringCoefficients /// steering sensitivity configuration
		{
			turnIncreaseConst	= 0.75; // basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 0.4; // higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 0.5; // higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle

			turnDecreaseConst	= 3.5; // basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 1.5; // higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0; // higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position

			maxTurnHundred		= 1; // coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
	};
	class A3PL_F150_Marker: A3PL_F150
	{
		displayName = "2011 Ford F150 MarkerLights";
		model = "\A3PL_Cars\A3PL_F150\A3PL_F150_Marker";
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
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
		aggregateReflectors[] = 
		{
			{"LightCarHeadL01","LightCarHeadR01"},
			{"LightCarHeadL02","LightCarHeadR02"}
		};
	};
};