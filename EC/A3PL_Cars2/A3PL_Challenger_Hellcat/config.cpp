class CfgPatches
{
	class A3PL_Challenger_Hellcat
	{
		units[] = {"A3PL_Challenger_Hellcat"};
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
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadL02;
			class LightCarHeadR01;
			class LightCarHeadR02;
		};
	};
	class A3PL_Challenger_Hellcat: A3PL_Car_Base
	{
		displayName = "2015 Dodge Challenger Hellcat";
		class Library {libTextDesc = "A3PL_Challenger_Hellcat";};
		fuelCapacity = 14.5;///mpg (imp.), average combined
		transportSoldier = 4;
		differentialType = "rear_limited";
		model = "\A3PL_Cars2\A3PL_Challenger_Hellcat\A3PL_Challenger_Hellcat";
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
			"glass6",
			"glass7"
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
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa",
			"a3pl_cars\common\textures\glass.paa"
		};
		scope=2;
		maxSpeed = 320;
		enginePower = 707;
		peakTorque = 881;
		redRpm = 6400;
		maxOmega = 750;
		engineMOI=0.3;
		//clutchStrength = 2;
		wheelDestroyRadiusCoef = 0.75;
		extCameraPosition[] = {0,0.5,-4.5};
		driverAction = "A3PL_Driver2";
		cargoAction[] = {"A3PL_Passenger2","A3PL_Passenger_Rear"};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.71, 0.71, 0.72, 0.72, 0.72};
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
		class AnimationSources: AnimationSources
		{
			class Stock_Bonnet {initPhase = 1;displayName = "Stock Bonnet";source = "user";animPeriod = 0.001;forceAnimatePhase = 1;forceAnimate[] = {};};
			class Stock_Front_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Front Bumper";};
			class Stock_Rear_Bumper: Stock_Bonnet {initPhase = 1;displayName = "Stock Rear Bumper";};
			class Stock_Spoiler: Stock_Bonnet {initPhase = 1;displayName = "Stock Spoiler";forceAnimate[] = {"Spoiler1", 0,"Spoiler2", 0};};
			class Roll_Cage: Stock_Bonnet {initPhase = 0;displayName = "Roll Cage";};
			class Front_Bumper1: Stock_Front_Bumper {initPhase = 0;displayName = "Front Bumper Type 1";};
			class Spoiler1: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 1";forceAnimate[] = {"Stock_Spoiler", 0,"Spoiler2", 0};};
			class Spoiler2: Stock_Spoiler {initPhase = 0;displayName = "Spoiler Type 2";forceAnimate[] = {"Spoiler1", 0,"Stock_Spoiler", 0};};
			class Front_Fender1: Stock_Bonnet {initPhase = 0;displayName = "Flared Front Fender";forceAnimate[] = {};};
			class Rear_Fender1: Stock_Bonnet {initPhase = 0;displayName = "Flared Rear Fender";forceAnimate[] = {};};
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
		class Sounds: Sounds
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
		};
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
    class A3PL_Challenger_Hellcat_PD_ST: A3PL_Challenger_Hellcat
	{
		displayName = "2015 Dodge Challenger Hellcat PD Slicktop Special";
		model = "\A3PL_Cars2\A3PL_Challenger_Hellcat\A3PL_Challenger_Hellcat_PD_ST";
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","spd1","spd2","spd3","spd4","spd5","spd6","spd7","spd8","spd9"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(0,0,0,1.0,co)","","","","","","","","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa","a3pl_cars\common\textures\numbers\0.paa"};
		maxSpeed = 320;
		enginePower = 919.1;
		peakTorque = 881;
		class AnimationSources: AnimationSources
		{	
			class Pushbar_Addon
			{ 
				initPhase = 1;
				source = "user";
				animPeriod = 0.001;
				forceAnimate[] = {};
			};
		};
		class Reflectors: Reflectors
		{	
			class LightCarHeadL01: LightCarHeadL01{};
			class LightCarHeadR01: LightCarHeadR01{};
			class LightCarHeadR02: LightCarHeadR02{};
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
};