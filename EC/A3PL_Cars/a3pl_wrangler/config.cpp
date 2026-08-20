class CfgPatches
{
	class A3PL_Wrangler
	{
		units[] = {"A3PL_Wrangler"};
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
		class Sounds;
		class AnimationSources {class Mods;};
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
	};
	class A3PL_Wrangler: A3PL_Car_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "2012 Jeep Wrangler";
		class Library { libTextDesc = "2012 Jeep Wrangler Rubicon"; };
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		fuelCapacity = 17.1;///mpg (imp.), average combined
		transportSoldier = 3;
		differentialType = "all_open";
		model = "\A3PL_Cars\A3PL_Wrangler\A3PL_Wrangler";
		maxSpeed = 201;
		enginePower = 285;
		peakTorque = 353;
		terrainCoef = 3;
		extCameraPosition[] = {0,0.5,-6};
		wheelDestroyRadiusCoef = 0.71;
		htMax = 1874;
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
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\idle.wav", db-13,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE;
			};
			class	Engine
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\1000.wav",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\2000.wav",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2;
			};
			class	Engine2_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\3000.wav",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3;
			};
			class	Engine3_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\4000.wav",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4;
			};
			class	Engine4_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\5000.wav",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5;
			};
			class	Engine5_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\6000.wav",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6;
			};
			class	Engine6_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\7000.wav", db-13,	1, 150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7;
			};
			class	Engine7_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\8000.wav",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8;
			};
			class	Engine8_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\9000.wav",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9;
			};
			class	Engine9_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\10000.wav",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10;
			};
			class	Engine10_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\11000.wav",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11;
			};
			class	Engine11_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\12000.wav",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12;
			};
			class	Engine12_ext
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\13000.wav",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13;
			};
			class	Idle_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\Idle.wav", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE;
			};
			class	Engine_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\1000.wav",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1;
			};
			class	Engine1_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\2000.wav",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2;
			};
			class	Engine2_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\3000.wav",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3;
			};
			class	Engine3_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\4000.wav",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4;
			};
			class	Engine4_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\5000.wav",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5;
			};
			class	Engine5_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\6000.wav",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6;
			};
			class	Engine6_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\7000.wav", db-15,	1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7;
			};
			class	Engine7_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\8000.wav",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8;
			};
			class	Engine8_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\9000.wav",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9;
			};
			class	Engine9_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\10000.wav",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10;
			};
			class	Engine10_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\11000.wav",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11;
			};
			class	Engine11_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\12000.wav",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12;
			};
			class	Engine12_int
			{
			sound[]	=	{"A3PL_Cars\A3PL_Wrangler\Sounds\13000.wav",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13;
			};
		};
		class AnimationSources: AnimationSources
		{
			class Bull_Bar: Mods {displayName = "Bull Bar";};
			class Driving_Lights: Mods {displayName = "Driving Lights";forceAnimate[] = {"Bull_Bar",1};};
			class Lightbar: Mods {displayName = "Lightbar";forceAnimate[] = {"Roll_Bar",1};};
			class Roll_Bar: Mods {displayName = "Roll Bar";};
			class Roof_Rack: Mods {displayName = "Roof Rack";};
			class Spair_Tire: Mods {displayName = "Spair Tire";};
			class Winch: Mods {displayName = "Winch";forceAnimate[] = {"Bull_Bar",1};};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"},{"Addon_1_Spotlight1","Addon_1_Spotlight2"},{"Addon_2_Spotlight1","Addon_2_Spotlight2","Addon_2_Spotlight3","Addon_2_Spotlight4","Addon_2_Spotlight5","Addon_2_Spotlight6","Addon_2_Spotlight7"}};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01 {};
			class LightCarHeadR01: LightCarHeadR01 {};
			class LightCarHeadL02: LightCarHeadL02 {};
			class LightCarHeadR02: LightCarHeadR02 {};
			class Addon_1_Spotlight1
			{
				color[] = {8000,8000,8000};
				ambient[] = {20,20,20};
				position = "SpotlightL07";
				direction = "SpotlightL07_end";
				hitpoint = "Addon_1_Spotlight1";
				selection = "Driving_Lights_emit";
				size = 1;
				innerAngle = 10;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = 1;
				dayLight = 1;
				flareSize = 1;
				flareMaxDistance = 1800;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 0.1;
					quadratic = 0;
					hardLimitStart = 800;
					hardLimitEnd = 1800;
				};
			};
			class Addon_1_Spotlight2: Addon_1_Spotlight1
			{
				position = "SpotlightR07";
				direction = "SpotlightR07_end";
				hitpoint = "Addon_1_Spotlight2";
			};
			class Addon_2_Spotlight1: Addon_1_Spotlight1
			{
				selection = "Lightbar_emit";
				position = "SpotlightL03";
				direction = "SpotlightL03_end";
				hitpoint = "Addon_2_Spotlight";
				flareSize = 0.3;
				size = 0.3;
			};
			class Addon_2_Spotlight2: Addon_2_Spotlight1
			{
				position = "SpotlightL04";
				direction = "SpotlightL04_end";
			};
			class Addon_2_Spotlight3: Addon_2_Spotlight1
			{
				position = "SpotlightL05";
				direction = "SpotlightL05_end";
			};
			class Addon_2_Spotlight4: Addon_2_Spotlight1
			{
				position = "SpotlightL06";
				direction = "SpotlightL06_end";
			};
			class Addon_2_Spotlight5: Addon_2_Spotlight1
			{
				position = "SpotlightR03";
				direction = "SpotlightR03_end";
			};
			class Addon_2_Spotlight6: Addon_2_Spotlight1
			{
				position = "SpotlightR04";
				direction = "SpotlightR04_end";
			};
			class Addon_2_Spotlight7: Addon_2_Spotlight1
			{
				position = "SpotlightR05";
				direction = "SpotlightR05_end";
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
				sprungMass=550;
				springStrength=30000;
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
				sprungMass=550;
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
				sprungMass=550;
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
				sprungMass=550;
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
};