class CfgPatches
{
	class A3PL_Rover
	{
		units[] = {"A3PL_Rover"};
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
		class AnimationSources {class Mods;class Towbar_Addon;};
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
	};
	class A3PL_Rover: A3PL_Car_Base
	{
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		displayName = "2012 Range Rover";
		class Library { libTextDesc = "2012 Range Rover 5.0 V8 Vogue"; };
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1.0,CO)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		fuelCapacity = 15.4;///mpg (imp.), average combined
		transportSoldier = 4;
		differentialType = "all_limited";
		model = "\A3PL_Cars\A3PL_Rover\A3PL_Rover";
		maxSpeed = 215;
		enginePower = 365;
		peakTorque = 480;
		terrainCoef = 3.8;
		wheelDestroyRadiusCoef = 0.75;
		extCameraPosition[] = {0,0.5,-5};
		htMax = 2517;
		class AnimationSources: AnimationSources
		{
			class Brakelight_Guards: Mods {displayName = "Brakelight Guards";};
			class Bull_Bar: Mods {displayName = "Bull Bar";};
			class Bumper_Guard: Mods {displayName = "Bumper Guard";forceAnimate[] = {"Chassis_Mount",1};};
			class Camping_Equipment: Mods {displayName = "Camping Equipment";forceAnimate[] = {"Roof_Rack",1};};
			class Roof_Lights: Mods {displayName = "Roof Lights";forceAnimate[] = {"Roof_Rack",1};};
			class Roof_Rack: Mods {displayName = "Roof Rack";};
			class Ladder: Mods {displayName = "Ladder";};
			class Lightbar: Mods {displayName = "Lightbar";};
			class Snorkel: Mods {displayName = "Snorkel";};
			class Winch: Mods {displayName = "Winch";};
			class Towbar_Addon: Towbar_Addon {forceAnimate[] = {"Chassis_Mount",1};};
		};
		class Reflectors: Reflectors
		{
			class LightCarHeadL01: LightCarHeadL01{};
			class LightCarHeadR01: LightCarHeadR01{};
			class LightCarHeadL02: LightCarHeadL02{};
			class LightCarHeadR02: LightCarHeadR02{};
			class Driving_Light_1
			{
				color[] = {8000,8000,8000};
				ambient[] = {20,20,20};
				position = "SpotlightL01";
				direction = "SpotlightL01_end";
				hitpoint = "SpotlightL01";
				selection = "Roof_Lights_emit";
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
			class Driving_Light_2: Driving_Light_1
			{
				position = "SpotlightR01";
				direction = "SpotlightR01_end";
				hitpoint = "SpotlightR01";
			};
			class Driving_Light_3: Driving_Light_1
			{
				position = "SpotlightL02";
				direction = "SpotlightL02_end";
				hitpoint = "SpotlightL02";
			};
			class Driving_Light_4: Driving_Light_1
			{
				position = "SpotlightR02";
				direction = "SpotlightR02_end";
				hitpoint = "SpotlightR02";
			};
			class Lightbar_1: Driving_Light_1
			{
				selection = "Lightbar_emit";
				position = "SpotlightL03";
				direction = "SpotlightL03_end";
				hitpoint = "Addon_1_Spotlight";
				flareSize = 0.3;
				size = 0.3;
			};
			class Lightbar_2: Lightbar_1
			{
				position = "SpotlightL04";
				direction = "SpotlightL04_end";
			};
			class Lightbar_3: Lightbar_1
			{
				position = "SpotlightL05";
				direction = "SpotlightL05_end";
			};
			class Lightbar_4: Lightbar_1
			{
				position = "SpotlightR03";
				direction = "SpotlightR03_end";
			};
			class Lightbar_5: Lightbar_1
			{
				position = "SpotlightR04";
				direction = "SpotlightR04_end";
			};
			class Lightbar_6: Lightbar_1
			{
				position = "SpotlightR05";
				direction = "SpotlightR05_end";
			};
		};
		aggregateReflectors[] = {{"LightCarHeadL01","LightCarHeadR01"},{"LightCarHeadL02","LightCarHeadR02"},{"Driving_Light_1","Driving_Light_2","Driving_Light_3","Driving_Light_4"},{"Lightbar_1","Lightbar_2","Lightbar_3","Lightbar_4","Lightbar_5","Lightbar_6"}};
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
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\Idle.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class	Engine
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\1000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\2000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\3000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\4000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\5000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\6000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\7000.ogg",db-13,1,150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\8000.ogg",db-11,1,200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\9000.ogg",db-9,1,240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\10000.ogg",db-8,1,280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\11000.ogg",db-7,1,320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\12000.ogg",db-6,1,360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\13000.ogg",db-5,1,420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\Idle.ogg",db-15,1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\1000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\2000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\3000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\4000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\5000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\6000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\7000.ogg",db-15,1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\8000.ogg",db-14,1};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\9000.ogg",db-12,1};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\10000.ogg",db-11,1};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\11000.ogg",db-10,1};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\12000.ogg",db-9,1};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_Cars\A3PL_Rover\Sounds\13000.ogg",db-6,1};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
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
				springStrength=50000;
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
				sprungMass=650;
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
				sprungMass=650;
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