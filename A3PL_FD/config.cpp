class CfgPatches
{
	class A3PL_FD
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars"};
	};
};
class CfgVehicles
{
	class Hatchback_01_sport_base_F;
	class Car;
	class Car_F: Car
	{
		class HitPoints;
		class NewTurret;
	};
	class Truck_F: Car_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
	};
	class Truck_02_base_F: Truck_F {class Turrets: Turrets{};};
	class A3PL_Truck_Base: Truck_02_base_F
	{
		class AnimationSources 
		{
			class Cargo_Door;
			class Outriggers;
		};
		class Turrets: Turrets{};
		class Sounds;
		class Wheels
		{
			class L1;
			class L2;
			class L3;
			class R1;
			class R2;
			class R3;
		};
	};
	class A3PL_Car_Base: Hatchback_01_sport_base_F 
	{
		class AnimationSources
		{
			class Cargo_Door_1;
			class Cargo_Door_2;
			class Cargo_Door_3;
			class Cargo_Door_4;
			class Cargo_Door_5;
			class Cargo_Door_6;
			class Cargo_Door_7;
			class Door_LB;
			class Door_RB;
			class Door_RB2;
		};
		class Wheels
		{
			class LF;
			class LR;
			class RF;
			class RR;
		};
		class Sounds;
	};
	class Jonzie_Ambulance: A3PL_Car_Base
	{
		displayName = "Ford F450 Ambulance";
		fuelCapacity = 35;
		transportSoldier = 5;
		maxFordingDepth = 2;
		maxSpeed = 200;
		model = "\A3PL_FD\Ambulance\Jonzie_Ambulance";
		author = "Jonzie";
		redRpm = 11900;
		maxOmega = 940;
		peakTorque = 720;
		enginePower = 399;
		terrainCoef = 2.6;
		antiRollbarForceCoef=2.3;
		antiRollbarForceLimit=2;
		antiRollbarSpeedMin=20;
		antiRollbarSpeedMax=80;
		wheelDestroyRadiusCoef = 0.76;
		insideSoundCoef = 0;
		occludeSoundsWhenIn = 0.5;
		obstructSoundsWhenIn = 0.5;
		differentialType = "rear_open";
		weapons[] = {"A3PL_Ambulance_Air_Horn","A3PL_Truck_Horn"};
		getInProxyOrder[] = {1,2,3,4,5,6};
		driverRightHandAnimName = "";
		driverAction = "A3PL_Driver_Tahoe";
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB2","Door_LB","Door_RB2","Door_LB"};
		cargoAction[] = {"A3PL_Passenger_Low","passenger_apc_generic04","passenger_apc_generic03","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","Laptop_Sceen"};
		hiddenSelectionsTextures[] = {"A3PL_Textures\F450_Ambulance\F450_Ambulance_BLS.paa","","","","","","","",""};
		extCameraPosition[] = {0,1.5,-9};
		htMax = 4277;
		class AnimationSources: AnimationSources
		{
			class Cargo_Door_1: Cargo_Door_1
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_2: Cargo_Door_2
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_3: Cargo_Door_3
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_4: Cargo_Door_4
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_5: Cargo_Door_5
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_6: Cargo_Door_6
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Cargo_Door_7: Cargo_Door_7
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Door_LB: Door_LB
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Door_RB: Door_RB
			{
				sound = "A3PL_Truck_Open_Close";
			};
			class Door_RB2: Door_RB2
			{
				sound = "A3PL_Truck_Open_Close";
			};			
			class Stretcher 
			{
      		source = "user";
      		animPeriod = 0.25;
      		initPhase=0;
			};
			class Backrest 
			{
      		source = "user";
      		animPeriod = 2;
      		initPhase=0;
			};
			class Seatbelt_Hide
			{
				source = "user";
				animPeriod = 0.001;
				initPhase = 0;
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "Jonzie_ExhaustTruckEffect";
			};
			class Exhaust2
			{
				position = "exhaust2_pos";
				direction = "exhaust2_dir";
				effect = "Jonzie_ExhaustTruckEffect";
			};
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
			class	Idle_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\Idle.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class	Engine
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\1000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\2000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\3000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\4000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\5000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\6000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\7000.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\8000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\9000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\10000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\11000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\12000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\13000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\Idle.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\1000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\2000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\3000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\4000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\5000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\6000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\7000.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\8000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\9000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\10000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\11000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\12000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\13000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3PL_Cars\Common\rvmats\Car_paint.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat"};
		};
		class RenderTargets
		{
			class Left_mirror
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Right_mirror
			{
				renderTarget = "rendertarget2";
				class mirror
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Left_Small_mirror
			{
				renderTarget = "rendertarget3";
				class mirror
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Right_Small_mirror
			{
				renderTarget = "rendertarget4";
				class mirror
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Reversing_Camera
			{
				renderTarget = "rendertarget5";
				class Camera
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		class Wheels: Wheels
		{
			class LF: LF
			{
				springDamperRate = 8500;
				springStrength = 150000;
				sprungMass = 850;
				MOI = 3.629;
			};
			class LR: LR
			{
				springDamperRate = 8500;
				springStrength = 150000;
				sprungMass = 850;
				MOI = 3.629;
			};
			class RF: RF
			{
				springDamperRate = 8500;
				springStrength = 150000;
				sprungMass = 850;
				MOI = 3.629;
			};
			class RR: RR
			{
				springDamperRate = 8500;
				springStrength = 150000;
				sprungMass = 850;
				MOI = 3.629;
			};
		};
	};
	class A3PL_E350: Jonzie_Ambulance
	{
		displayName = "Ford E350 Ambulance";
		model = "\A3PL_FD\E350\A3PL_E350";
		author = "Jonzie";
		wheelDestroyRadiusCoef = 0.9;
		cargoAction[] = {"Truck_Cargo01","passenger_apc_generic04","passenger_apc_generic03","passenger_generic01_foldhands","passenger_generic01_foldhands"};
		driverAction = "Driver_High01";
		driverRightHandAnimName = "steering_wheel";
		hiddenSelectionsTextures[] = {"A3PL_Textures\E350_Ambulance\FIFR_BLS.paa","","","","","","","",""};
		extCameraPosition[] = {0,1,-9};
		htMax = 4272;
		terrainCoef = 3;
		maxspeed = 160;
		peakTorque = 530;
		enginePower = 255;
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
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\Idle.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*camPos*VOLUME_IDLE*1;
			};
			class	Engine
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\1000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*camPos*VOLUME_RPM1*1;
			};
			class	Engine1_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\2000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*camPos*VOLUME_RPM2*1;
			};
			class	Engine2_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\3000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*camPos*VOLUME_RPM3*1;
			};
			class	Engine3_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\4000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*camPos*VOLUME_RPM4*1;
			};
			class	Engine4_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\5000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*camPos*VOLUME_RPM5*1;
			};
			class	Engine5_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\6000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*camPos*VOLUME_RPM6*1;
			};
			class	Engine6_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\7000.ogg", db-13,	1, 150};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*camPos*VOLUME_RPM7*1;
			};
			class	Engine7_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\8000.ogg",	db-11,1, 200};
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*camPos*VOLUME_RPM8*1;
			};
			class	Engine8_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\9000.ogg",	db-9,1, 240};
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*camPos*VOLUME_RPM9*1;
			};
			class	Engine9_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\10000.ogg",	db-8,1, 280};
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*camPos*VOLUME_RPM10*1;
			};
			class	Engine10_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\11000.ogg",	db-7,1, 320};
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*camPos*VOLUME_RPM11*1;
			};
			class	Engine11_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\12000.ogg",	db-6,1, 360};
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*camPos*VOLUME_RPM12*1;
			};
			class	Engine12_ext
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\13000.ogg",	db-5,1, 420};
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*camPos*VOLUME_RPM13*1;
			};
			class	Idle_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\Idle.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_IDLE*0.2;
			volume = engineOn*(1-camPos)*VOLUME_IDLE*1;
			};
			class	Engine_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\1000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM1*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM1*1;
			};
			class	Engine1_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\2000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM2*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM2*1;
			};
			class	Engine2_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\3000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM3*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM3*1;
			};
			class	Engine3_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\4000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM4*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM4*1;
			};
			class	Engine4_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\5000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM5*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM5*1;
			};
			class	Engine5_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\6000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM6*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM6*1;
			};
			class	Engine6_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\7000.ogg", db-15,	1};
			frequency	=	0.9	+	HZ_RPM7*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM7*1;
			};
			class	Engine7_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\8000.ogg",	db-14,1 };
			frequency	=	0.8	+	HZ_RPM8*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM8*1;
			};
			class	Engine8_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\9000.ogg",	db-12,1 };
			frequency	=	0.8	+	HZ_RPM9*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM9*1;
			};
			class	Engine9_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\10000.ogg",	db-11,1 };
			frequency	=	0.8	+	HZ_RPM10*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM10*1;
			};
			class	Engine10_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\11000.ogg",	db-10,1 };
			frequency	=	0.8	+	HZ_RPM11*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM11*1;
			};
			class	Engine11_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\12000.ogg",	db-9,1 };
			frequency	=	0.8	+	HZ_RPM12*0.2;
			volume = engineOn*(1-camPos)*VOLUME_RPM12*1;
			};
			class	Engine12_int
			{
			sound[]	=	{"\A3PL_FD\Ambulance\Sounds\13000.ogg",	db-6,1 };
			frequency	=	0.95	+	HZ_RPM13*0.15;
			volume = engineOn*(1-camPos)*VOLUME_RPM13*1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3PL_Cars\Common\rvmats\Car_paint.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat"};
		};
		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition = "PIP0_pos";
					pointDirection = "PIP0_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class CenterMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Reversing_Camera
			{
				renderTarget = "rendertarget3";
				class Camera
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
		class Wheels: Wheels
		{
			class LF: LF
			{
				springDamperRate = 9500;
				springStrength = 45750;
				sprungMass = 1111;
				MOI = 3.629;
			};
			class LR: LR
			{
				springDamperRate = 9500;
				springStrength = 45750;
				sprungMass = 1111;
				MOI = 3.629;
			};
			class RF: RF
			{
				springDamperRate = 9500;
				springStrength = 45750;
				sprungMass = 1111;
				MOI = 3.629;
			};
			class RR: RR
			{
				springDamperRate = 9500;
				springStrength = 45750;
				sprungMass = 1111;
				MOI = 3.629;
			};
		};
	};
	class A3PL_Pierce_Ladder: A3PL_Truck_Base
	{
		scope = 0;
		displayName = "Pierce Ladder";
		fuelCapacity = 25;
		transportSoldier = 7;
		maxFordingDepth = 2.9;
		maxSpeed = 160;
		wheelDestroyRadiusCoef = 0.64;
		model = "";
		author = "Jonzie";
		getInProxyOrder[] = {1,2,3,4,5,6,7};
		driverDoor = "Door_LF";
		cargoDoors[] = {"Door_RF","Door_LB","Door_RB","Door_LB","Door_RB","Door_LB","Door_RB"};
		hiddenSelections[] = {"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","FT_num_1","FT_num_2"};
		hiddenSelectionsTextures[] = {"","","","","","","","","a3pl_fd\textures\truck_numbers\4.paa","a3pl_fd\textures\truck_numbers\9.paa"};
		extCameraPosition[] = {0, 1.5, -11};
		insideSoundCoef = 0.5;
		occludeSoundsWhenIn = 0.5;
		obstructSoundsWhenIn = 0.5;
		htMax = 13000;
		enableManualFire = 1;
		wheelCircumference= 3.424336;
		dampingRateFullThrottle = 0.2;
		dampingRateZeroThrottleClutchEngaged = 4;
		dampingRateZeroThrottleClutchDisengaged = 0.15;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-5.5619998,
				"N",
				0,
				"D1",
				5.5619998,
				"D2",
				3.4560001,
				"D3",
				2.6229999,
				"D4",
				1.678,
				"D5",
				1.0779999
			};
			TransmissionRatios[]=
			{
				"High",
				8
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
			gearUpMaxCoef=0.94999999;
			gearDownMaxCoef=0.5;
			gearUpMinCoef=0.89999998;
			gearDownMinCoef=0.15000001;
			transmissionDelay=2;
		};
		class Wheels: Wheels
		{
			class L1: L1
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
			class L2: L2
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
			class L3: L3
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
			class R1: R1
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
			class R2: R2
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
			class R3: R3
			{
				sprungMass = -1;
				springStrength = 145000;
				springDamperRate = 41000;
				latStiffX=25;
				latStiffY=180;
				longitudinalStiffnessPerUnitGravity=10000;
			};
		};
		class TransportItems
		{
			class _xx_Helmet_Prob
			{
				name="A3PL_FireHelmet_Probationer_New";
				count=3;
			};
			class _xx_Helmet_FF
			{
				name="A3PL_FireHelmet_Firefighter_New";
				count=5;
			};
			class _xx_Helmet_Eng
			{
				name="A3PL_FireHelmet_Engineer_New";
				count=3;
			};
			class _xx_Helmet_Lt
			{
				name="A3PL_FireHelmet_Lieutenant_New";
				count=3;
			};
			class _xx_Helmet_Bat1
			{
				name="A3PL_FireHelmet_Batt_1_New";
				count=1;
			};
			class _xx_Helmet_Bat2
			{
				name="A3PL_FireHelmet_Batt_2_New";
				count=1;
			};
			class _xx_Helmet_DepChief
			{
				name="A3PL_FireHelmet_Dep_Chief_New";
				count=1;
			};
			class _xx_Helmet_Chief
			{
				name="A3PL_FireHelmet_Chief_New";
				count=1;
			};
			class _xx_FD_Protective
			{
				name="A3PL_FD_Protective_Uniform";
				count=8;
			};
			class _xx_SCBA
			{
				name="A3PL_FD_Oxygen";
				count=8;
			};
			class _xx_A3PL_FD_Mask
			{
				name="A3PL_FD_Mask";
				count=8;
			};
			class _xx_FireExtinguisher
			{
				name="A3PL_FireExtinguisher";
				count=3;
			};
			class _xx_FireExtinguisherAmmo
			{
				name="A3PL_Extinguisher_Water_Mag";
				count=6;
			};
			class _xx_Branche
			{
				name="A3PL_High_Pressure";
				count=8;
			};
			class _xx_FireAxe
			{
				name="A3PL_FireAxe";
				count=2;
			};
			class _xx_Jaws
			{
				name="A3PL_Jaws";
				count=1;
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {"A3PL_Cars\Common\rvmats\car_paint_old.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat"};
		};
		class AnimationSources: AnimationSources
		{
			class Outrigger_1: Outriggers
			{
				soundPosition = "OutriggerFoot_1_axis";
			};
			class Outrigger_2: Outriggers
			{
				soundPosition = "OutriggerFoot_2_axis";
			};
			class Outrigger_3: Outriggers
			{
				soundPosition = "OutriggerFoot_3_axis";
			};
			class Outrigger_4: Outriggers
			{
				soundPosition = "OutriggerFoot_4_axis";
			};
			class Fire_Nozzle
			{
				source		 = "user";
				animPeriod	 = 0.2;
				initPhase	 = 0;
			};	
		};
		class Turrets: Turrets
		{
			class Ladder: MainTurret
			{
				disableSoundAttenuation = 0;
				gunnerLeftHandAnimName = "Ladder_Control_1";
				gunnerRightHandAnimName = "Ladder_Control_2";
				gunnerName = "Ladder Operator";
				body = "Turntable_Spin";//Turntable_Spin
				gun = "Ladder_Lift";//Ladder_Lift
				animationSourceBody = "Turntable_Spin";//mainTurret
				animationSourceGun = "Ladder_Lift";//mainGun
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 1;
				outGunnerMayFire = 1;
				weapons[] = {"HMG_M2"};
				magazines[] = {};
				minElev = 0;
				maxElev = 55;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.1;
				maxVerticalRotSpeed = 0.1;
				soundServo[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				soundElevation[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				gunnerAction = "driver_boat01";
				gunnerCompartments = "Compartment2";
				castGunnerShadow = 1;
				stabilizedInAxes = 1;
				startEngine = 1;
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 1;
				turretFollowFreeLook = 1;
				lockWhenVehicleSpeed = 5;
				dontCreateAI = 0;
				allowTabLock = 1;
				enableManualFire = 1;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 0.7;
					minFov = 0.42;
					maxFov = 0.85;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 90;
				};
			};
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1000,650,400};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class Ladder_Spotlight
			{
				color[] = {1300,1300,2200};
				ambient[] = {15,15,15};
				position = "Ladder_Spotlight_pos";
				direction = "Ladder_Spotlight_dir";
				hitpoint = "Ladder_Spotlight";
				selection = "Ladder_Spotlight";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 2;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
		};
		class RenderTargets
		{
			class Left_mirror
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			class Right_mirror
			{
				renderTarget = "rendertarget2";
				class mirror
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			class Left_Small_mirror
			{
				renderTarget = "rendertarget3";
				class mirror
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Right_Small_mirror
			{
				renderTarget = "rendertarget4";
				class mirror
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Reversing_Camera
			{
				renderTarget = "rendertarget5";
				class Camera
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
			class Ladder_Cam
			{
				renderTarget = "rendertarget6";
				class Camera
				{
					pointPosition = "PIP6_pos";
					pointDirection = "PIP6_dir";
					renderQuality = 2;
					renderVisionMode = 3;
					fov = 0.7;
				};
			};
		};
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst	= 1.2;	// basic sensitivity value, higher value = faster steering
			turnIncreaseLinear	= 1.5;	// higher value means less sensitive steering in higher speed, more sensitive in lower speeds
			turnIncreaseTime	= 1.0;	// higher value means smoother steering around the center and more sensitive when the actual steering angle gets closer to the max. steering angle
			turnDecreaseConst	= 5.0;	// basic caster effect value, higher value = the faster the wheels align in the direction of travel
			turnDecreaseLinear	= 1.5;	// higher value means faster wheel re-centering in higher speed, slower in lower speeds
			turnDecreaseTime	= 0.0;	// higher value means stronger caster effect at the max. steering angle and weaker once the wheels are closer to centered position
			maxTurnHundred		= 0.9;	// coefficient of the maximum turning angle @ 100km/h; limit goes linearly to the default max. turn. angle @ 0km/h
		};
	};
	class A3PL_Pierce_Heavy_Ladder: A3PL_Pierce_Ladder
	{
		scope = 2;
		displayName = "Pierce Heavy Ladder";
		model = "\A3PL_FD\Ladder\Jonzie_Heavy_Ladder";
		hiddenSelectionsTextures[] = {"","","","","","","","","a3pl_fd\textures\truck_numbers\3.paa","a3pl_fd\textures\truck_numbers\1.paa"};
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 0;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 0;
		class Turrets: Turrets
		{
			class Ladder: MainTurret
			{
				memoryPointGun = "Fire_Nozzle_pos";
				disableSoundAttenuation = 0;
				gunnerLeftHandAnimName = "Ladder_Control_1";
				gunnerRightHandAnimName = "Ladder_Control_2";
				gunnerName = "Ladder Operator";
				body = "Turntable_Spin";
				gun = "Ladder_Lift";
				animationSourceBody = "Turntable_Spin";
				animationSourceGun = "Ladder_Lift";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 1;
				outGunnerMayFire = 1;
				weapons[] = {"A3PL_High_Pressure_Ladder"};
				magazines[]={"A3PL_High_Pressure_Water_Mag"};
				minElev = 0;
				maxElev = 55;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.1;
				maxVerticalRotSpeed = 0.1;
				soundServo[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				soundElevation[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				gunnerAction = "driver_boat01";
				gunnerCompartments = "Compartment2";
				castGunnerShadow = 1;
				stabilizedInAxes = 1;
				startEngine = 1;
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "gunnerview";
				optics = 0;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				ejectDeadGunner = 1;
				hideWeaponsGunner = 1;
				turretFollowFreeLook = 1;
				lockWhenVehicleSpeed = 5;
				dontCreateAI = 0;
				allowTabLock = 1;
				enableManualFire = 1;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 70;
					initAngleY = 0;
					minAngleY = -180;
					maxAngleY = 180;
					initFov = 0.7;
					minFov = 0.42;
					maxFov = 0.85;
					minMoveX = 0;
					maxMoveX = 0;
					minMoveY = 0;
					maxMoveY = 0;
					minMoveZ = 0;
					maxMoveZ = 0;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -90;
					maxAngleX = 90;
				};
			};
		};
	};
	class A3PL_Pierce_Pumper: A3PL_Pierce_Ladder
	{
		scope=2;
		displayName = "Pierce Pumper";
		model = "\A3PL_FD\Pumper\Jonzie_Pumper";
		author = "Jonzie";
		hiddenSelectionsTextures[] = {"","","","","","","","","a3pl_fd\textures\truck_numbers\2.paa","a3pl_fd\textures\truck_numbers\6.paa"};
		extCameraPosition[] = {0, 1.5, -9.5};
		wheelDestroyRadiusCoef = 0.69;
		htMax = 13000;
		terrainCoef = 2.9;
		class TransportItems
		{
			class _xx_Helmet_Prob
			{
				name="A3PL_FireHelmet_Probationer_New";
				count=3;
			};
			class _xx_Helmet_FF
			{
				name="A3PL_FireHelmet_Firefighter_New";
				count=5;
			};
			class _xx_Helmet_Eng
			{
				name="A3PL_FireHelmet_Engineer_New";
				count=3;
			};
			class _xx_Helmet_Lt
			{
				name="A3PL_FireHelmet_Lieutenant_New";
				count=3;
			};
			class _xx_Helmet_Bat1
			{
				name="A3PL_FireHelmet_Batt_1_New";
				count=1;
			};
			class _xx_Helmet_Bat2
			{
				name="A3PL_FireHelmet_Batt_2_New";
				count=1;
			};
			class _xx_Helmet_DepChief
			{
				name="A3PL_FireHelmet_Dep_Chief_New";
				count=1;
			};
			class _xx_Helmet_Chief
			{
				name="A3PL_FireHelmet_Chief_New";
				count=1;
			};
			class _xx_FD_Protective
			{
				name="A3PL_FD_Protective_Uniform";
				count=8;
			};
			class _xx_SCBA
			{
				name="A3PL_FD_Oxygen";
				count=8;
			};
			class _xx_A3PL_FD_Mask
			{
				name="A3PL_FD_Mask";
				count=8;
			};
			class _xx_FireExtinguisher
			{
				name="A3PL_FireExtinguisher";
				count=3;
			};
			class _xx_FireExtinguisherAmmo
			{
				name="A3PL_Extinguisher_Water_Mag";
				count=6;
			};
			class _xx_Branche
			{
				name="A3PL_High_Pressure";
				count=8;
			};
			class _xx_FireAxe
			{
				name="A3PL_FireAxe";
				count=2;
			};
			class _xx_Jaws
			{
				name="A3PL_Jaws";
				count=1;
			};
		};
		class Turrets {};
		class Wheels
		{
			class L1
			{

				boneName="wheel_1_1";
				steering=1;
				side="left";
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=40;
				MOI=42;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=30000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				mMaxDroop=0.15000001;
				sprungMass=1500;
				springStrength=51338;
				springDamperRate=5000;
				longitudinalStiffnessPerUnitGravity=10100;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				side="right";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=300000;
			};	
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1000,650,400};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "L svetlo";
				selection = "L svetlo";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation
				{
					start = 1.0;
					constant = 0;
					linear = 0;
					quadratic = 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class LightCarHeadR01: LightCarHeadL01
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "P svetlo";
				selection = "P svetlo";
			};
			class LightCarHeadL02: LightCarHeadL01
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
			class LightCarHeadR02: LightCarHeadR01
			{
				position = "LightCarHeadR02";
				direction = "LightCarHeadR02_end";
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.01;
					hardLimitStart = 390;
					hardLimitEnd = 450;
				};
			};
		};
		class RenderTargets
		{
			class Left_mirror
			{
				renderTarget = "rendertarget1";
				class mirror
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			class Right_mirror
			{
				renderTarget = "rendertarget2";
				class mirror
				{
					pointPosition = "PIP2_pos";
					pointDirection = "PIP2_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 0.5;
				};
			};
			class Left_Small_mirror
			{
				renderTarget = "rendertarget3";
				class mirror
				{
					pointPosition = "PIP3_pos";
					pointDirection = "PIP3_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Right_Small_mirror
			{
				renderTarget = "rendertarget4";
				class mirror
				{
					pointPosition = "PIP4_pos";
					pointDirection = "PIP4_dir";
					renderVisionMode = 4;
					renderQuality = 2;
					fov = 1;
				};
			};
			class Reversing_Camera
			{
				renderTarget = "rendertarget5";
				class Camera
				{
					pointPosition = "PIP5_pos";
					pointDirection = "PIP5_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 0.7;
				};
			};
		};
	};
};
class CfgCloudlets
{
	class Default;
	class BigDestructionSmoke;
	class A3PL_High_Pressure_Water: Default
	{		
		interval=0.001;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		angleVar=1;
		particleFSLoop=0; //-Kane loops the frame:1
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal"; //-Kane Smoke seems to fit better than Universal
		particleFSNtieth=16; //16
		particleFSIndex=13; //13
		particleFSFrameCount=10; //10
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.5; //-Kane 0.5 is pretty quick but good for performance
		moveVelocity[]={0,0,0}; //-Kane can add an additional velocity to PE but isn't needed as they spawn onto the bullet anyway
		rotationVelocity=0; //1
		weight=7; //7 -Kane Ascent/descent of a particle is affected by ratio bewteeen particle's density (weight/volume), density of air is 1.275kg/m3 in arma (so if weight/volume = 1.275 it will not move up or down)
		volume=5.4; //5 -Kane Doesnt really matter what you set weight or volume to, the importance is the weight/volume ratio
		rubbing=0.075000003; //0.075 -Kane how much is particle affected by wind/air resistance, disabled at the moment
		size[]={0.505,0.5,0.825,0.775}; //1.01,1.00,1.65,1.55 -Kane Size goes from 1.5 to 1.7 depending on lifeTime (if lifetime is 1 then it will be 1.5 initial and 1.7 in the end)
		color[]=
		{
			{0.69999999,0.69999999,0.69999999,0.2},
			{0.80000001,0.80000001,0.80000001,0.18000001},
			{0.89999998,0.89999998,0.89999998,0.15000001},
			{1,1,1,0.11},
			{1,1,1,0.059999999},
			{1,1,1,0.0099999998}
		};
		colorCoef[]={1,1,1,0.5}; //1,1,1,0.5
		animationSpeedCoef=1;
		animationSpeed[]={1000};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-1.3;
		angle=0;//90
		lifeTimeVar=0; //0 -Kane variability in lifetime of particle
		position[]={"positionX","positionY","positionZ"};
		rotationVelocityVar=0;
		sizeVar=0.2; //0 -Kane variability in size of particle
		colorVar[]={0,0,0,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;//
		positionVar[]={0.30000001,0.30000001,0.30000001};
		MoveVelocityVar[]={"positionX","positionY","positionZ"};
	};
	class A3PL_Medium_Pressure_Water: A3PL_High_Pressure_Water{};
	class A3PL_Low_Pressure_Water: A3PL_High_Pressure_Water{};
	class A3PL_Foam_Water: A3PL_High_Pressure_Water
	{
		particleShape="\A3\data_f\ParticleEffects\Universal\Smoke"; 
	};
	class A3PL_SmokeExtinguisher : BigDestructionSmoke 
	{
		interval = 0.08;
		circleRadius = 1;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal_02";
		particleFSNtieth = 8;
		particleFSIndex = 0;
		particleFSFrameCount = 40;
		particleFSLoop = 1;
		angleVar = 0.5;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 22;
		moveVelocity[] = {0, 2.5, 0};
		rotationVelocity = 1;
		weight = 0.05;
		volume = 0.04;
		rubbing = 0.05;
		size[] = {2, 25};
		color[] = {{0.88, 0.88, 0.88, 0.6}, {0.88, 0.88, 0.88, 0.75}, {0.88, 0.88, 0.88, 0.45}, {0.93, 0.93, 0.93, 0.28}, {0.93, 0.93, 0.93, 0.16}, {0.93, 0.93, 0.93, 0.09}, {0.94, 0.94, 0.94, 0.06}, {0.98, 0.98, 0.98, 0.02}, {0.98, 0.98, 0.98, 0}};
		colorCoef[] = {0.92, 0.92, 0.92, 0.6};
		animationSpeed[] = {1.0, 0.55, 0.35};
		randomDirectionPeriod = 0.3;
		randomDirectionIntensity = 0.2;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 8;
		positionVar[] = {0.15, 0.15, 0.15};
		MoveVelocityVar[] = {0.25, 0.5, 0.25};
		rotationVelocityVar = 0.5;
		sizeVar = 0;
		colorVar[] = {0, 0, 0, 0.06};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};
class CfgSFX
{
	class A3PL_Airhorn_1
	{
		sounds[] = {"Airhorn"};
		name = "Airhorn";
		Airhorn[] = {"a3pl_fd\Sounds\A3PL_Airhorn_1.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_EQ2B_Priority
	{
		sounds[] = {"Siren"};
		name = "EQ2B Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_EQ2B_Priority.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_EQ2B_Wail
	{
		sounds[] = {"Siren"};
		name = "EQ2B Wail";
		Siren[] = {"a3pl_fd\Sounds\A3PL_EQ2B_Wail.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_EQ2B_Yelp
	{
		sounds[] = {"Siren"};
		name = "EQ2B Yelp";
		Siren[] = {"a3pl_fd\Sounds\A3PL_EQ2B_Yelp.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Electric_Horn
	{
		sounds[] = {"Horn"};
		name = "Electric Horn";
		Horn[] = {"a3pl_fd\Sounds\A3PL_Electric_Horn.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Electric_Airhorn
	{
		sounds[] = {"Horn"};
		name = "Electric Airhorn";
		Horn[] = {"a3pl_fd\Sounds\A3PL_Electric_Airhorn.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Priority_1
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_Priority_1.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Priority_2
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_Priority_2.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Rumbler_Manual
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_Rumbler_Manual.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_SmartSiren_Manual
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_SmartSiren_Manual.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Wail
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_Wail.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_Yelp
	{
		sounds[] = {"Siren"};
		name = "Priority";
		Siren[] = {"a3pl_fd\Sounds\A3PL_Yelp.ogg",1,1,400,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
	class A3PL_FT_Pump
	{
		sounds[] = {"SFX"};
		name = "Priority";
		SFX[] = {"a3pl_fd\Sounds\1500.ogg",1,1,100,1,0,0,0};
		empty[] = {"",0,0,0,0,0,0,0};
	};
};
class A3PL_High_Pressure_Water
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_High_Pressure_Water";
		intensity=1;
	};
};
class A3PL_Medium_Pressure_Water
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_Medium_Pressure_Water";
		intensity=1;
	};
};
class A3PL_Low_Pressure_Water
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_Low_Pressure_Water";
		intensity=1;
	};
};
class A3PL_High_Pressure_Foam
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_High_Pressure_Water";
		intensity=1;
	};
	class Foam
	{
		simulation="particles";
		type="A3PL_Foam_Water";
		intensity=1;
	};
};
class A3PL_Medium_Pressure_Foam
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_Medium_Pressure_Water";
		intensity=1;
	};
	class Foam
	{
		simulation="particles";
		type="A3PL_Foam_Water";
		intensity=1;
	};
};
class A3PL_Low_Pressure_Foam
{
	class WaterSplash
	{
		simulation="particles";
		type="A3PL_Low_Pressure_Water";
		intensity=1;
	};
	class Foam
	{
		simulation="particles";
		type="A3PL_Foam_Water";
		intensity=1;
	};
};

