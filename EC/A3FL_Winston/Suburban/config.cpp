class CfgPatches
{
	class A3PL_Suburban
	{
		units[]={"A3FL_Suburban"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3PL_Cars"};
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
	class Hatchback_01_sport_base_F: Car_F
	{
		class Turrets: Turrets
		{
		};
	};
	class A3PL_Car_Base: Hatchback_01_sport_base_F
	{
		class AnimationSources
		{
			class Mods;
		};
		class Reflectors
		{
			class LightCarHeadL01;
			class LightCarHeadR01;
			class LightCarHeadL02;
			class LightCarHeadR02;
		};
		class Turrets: Turrets
		{
		};
		class Sounds;
	};
	class A3FL_Suburban: A3PL_Car_Base
	{
		displayName="2018 Chevrolet Suburban";
		author="A3FL Winston";
		class Library{libTextDesc="Chevrolet Suburban";};
		transportSoldier=6;
		model="\A3FL_Winston\Suburban\A3FL_Suburban";
		terrainCoef=1.6;
		wheelDestroyRadiusCoef=0.68000001;
		extCameraPosition[]={0,0.89999998,-6.5};
		driverAction="A3PL_Driver_Tahoe";
		driverLeftHandAnimName="steering_wheel";
		driverRightHandAnimName="";
		cargoAction[]= {"A3PL_Passenger_Low","A3PL_Passenger_Low","A3PL_Passenger_Low","A3PL_Passenger_Low","A3PL_Passenger_Low","passenger_flatground_3"};
		
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverPrecise="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		memoryPointsGetInGunner="pos trunk";
		memoryPointsGetInGunnerPrecise="pos trunk";
		memoryPointsGetInGunnerDir="pos trunk dir";
		memoryPointsGetInCargo="pos cargo";
		memoryPointsGetInCargoDir="pos cargo dir";
		memoryPointsGetInCargoPrecise="pos cargo";
		
		hiddenSelections[]={"Body","Lett_1","Lett_2","Lett_3","num_1","num_2","num_3","num_4","glass1","glass2","glass3","glass4","glass5","glass6"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,1,1,1.0,co)","","","","","","","","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)","#(argb,8,8,3)color(0,0,0,0.8,ca)"};
		
		preciseGetInOut=1;
		cargoPreciseGetInOut[] = {0};
		class CargoTurret;
		class Turrets: Turrets{
			class CargoTurret_01 : CargoTurret {
				gunnerAction = "passenger_flatground_3";
				gunnerInAction = "passenger_flatground_3";
				gunnerName = "Trunk Gunner";
				memoryPointsGetInGunner = "pos trunk";
				memoryPointsGetInGunnerDir = "pos trunk dir";
				gunnerCompartments="";
				proxyIndex = 6;
				isPersonTurret = 1;
				forceHideGunner = 1;
				canHideGunner = 0;
				outGunnerMayFire = 1; 
				inGunnerMayFire = 1;
				allowLauncherIn = 0; 	
				allowLauncherOut = 0;
				showAsCargo = 1;
				enabledByAnimationSource="Trunk";
				maxElev=10;
				minElev=-70;
				maxTurn=-30;
				minTurn=-110;
                class dynamicViewLimits{};
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
				width="0.2";
				mass=20;
				MOI=5.3000002;
				dampingRate=0.5;
				maxBrakeTorque=6000;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.18000001;
				mMaxDroop=0.050000001;
				sprungMass=850;
				springStrength=150000;
				springDamperRate=8500;
				longitudinalStiffnessPerUnitGravity=100000;
				latStiffX=25;
				latStiffY=18000;
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
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
				maxBrakeTorque=5200;
				maxHandBrakeTorque=50000;
			};
			class RF: LF
			{
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
				steering=1;
				maxBrakeTorque=7800;
				side="right";
			};
			class RR: RF
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
				maxHandBrakeTorque=50000;
				maxBrakeTorque=5200;
			};
		};
		class Sounds: Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*camPos*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg",
					"db-13",
					1,
					150
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",
					"db-11",
					1,
					200
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",
					"db-9",
					1,
					240
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",
					"db-8",
					1,
					280
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",
					"db-7",
					1,
					320
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",
					"db-6",
					1,
					360
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*camPos*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_ext
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",
					"db-5",
					1,
					420
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*camPos*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};
			class Idle_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\Idle.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(400/11900),(1150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(400/11900),(700/11900)])* ((rpm/11900) factor[(1100/11900),(900/11900)]))*2";
			};
			class Engine_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\1000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(900/11900),(2100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(870/11900),(1100/11900)])* ((rpm/11900) factor[(2100/11900),(1300/11900)]))*2";
			};
			class Engine1_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\2000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(1300/11900),(3100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(1250/11900),(2050/11900)])* ((rpm/11900) factor[(3100/11900),(2300/11900)]))*2";
			};
			class Engine2_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\3000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(2200/11900),(4100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(2250/11900),(3050/11900)])* ((rpm/11900) factor[(4100/11900),(3300/11900)]))*2";
			};
			class Engine3_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\4000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(3300/11900),(4900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(3250/11900),(4050/11900)])* ((rpm/11900) factor[(4870/11900),(4200/11900)]))*2";
			};
			class Engine4_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\5000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(4200/11900),(6200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(4150/11900),(4800/11900)])* ((rpm/11900) factor[(6150/11900),(5150/11900)]))*2";
			};
			class Engine5_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\6000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(5100/11900),(6900/11900)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5100/11900),(6100/11900)])* ((rpm/11900) factor[(5700/11900),(5400/11900)]))*2";
			};
			class Engine6_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\7000.ogg",
					"db-15",
					1
				};
				frequency="0.9 + ((rpm/11900) factor[(5400/11900),(6150/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5400/11900),(5700/11900)])* ((rpm/11900) factor[(6100/11900),(5900/11900)]))*2";
			};
			class Engine7_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\8000.ogg",
					"db-14",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(5900/11900),(7100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(5870/11900),(6100/11900)])* ((rpm/11900) factor[(7100/11900),(6300/11900)]))*2";
			};
			class Engine8_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\9000.ogg",
					"db-12",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(6300/11900),(8100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(6250/11900),(7050/11900)])* ((rpm/11900) factor[(8100/11900),(7300/11900)]))*2";
			};
			class Engine9_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\10000.ogg",
					"db-11",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(7200/11900),(9100/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(7250/11900),(8050/11900)])* ((rpm/11900) factor[(9100/11900),(8300/11900)]))*2";
			};
			class Engine10_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\11000.ogg",
					"db-10",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(8300/11900),(9900/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(8250/11900),(9050/11900)])* ((rpm/11900) factor[(9870/11900),(9200/11900)]))*2";
			};
			class Engine11_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\12000.ogg",
					"db-9",
					1
				};
				frequency="0.8 + ((rpm/11900) factor[(9200/11900),(11200/11900)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/11900) factor[(9150/11900),(9800/11900)])* ((rpm/11900) factor[(9150/11900),(10150/11900)]))*2";
			};
			class Engine12_int
			{
				sound[]=
				{
					"\A3PL_Cars\Jonzie_Tahoe\Sounds\13000.ogg",
					"db-6",
					1
				};
				frequency="0.95 + ((rpm/11900) factor[(10100/11900),(11900/11900)])*0.15";
				volume="engineOn*(1-camPos)*((rpm/11900) factor[(10100/11900),(11100/11900)])*2";
			};
		};
		class complexGearbox {
			GearboxRatios[] = {"R1", -5, "N", 0, "D1", 5.5, "D2", 4.5, "D3", 3.5, "D4", 2.9, "D5", 2.5, "D6", 2};
			TransmissionRatios[] = {"High", 3.2};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.01;
		};
		armor = 100;
		brakeDistance = 11;
		thrustDelay = 0.2;
		brakeIdleSpeed = 1;
		maxSpeed=250;
		enginePower=700;
		peakTorque=650;
		fuelCapacity = 48;
		wheelCircumference = 2;
		antiRollbarForceCoef = 10;
		antiRollbarForceLimit = 5;
		antiRollbarSpeedMin = 0;
		antiRollbarSpeedMax = 170;
		acceleration = 10;
		idleRpm = 800;
		redRpm = 6000;
		simulation = "carx";
		dampersBumpCoef = 0.01;
		differentialType = "all_limited";
		frontRearSplit = 0.3;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 2.5;
		clutchStrength = 55.0;
		maxOmega = 780;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 2.0;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {{0.0, 0.0}, {0.2, 0.65}, {0.3, 0.8}, {0.4, 0.95}, {0.6, 1.0}, {0.7, 0.95}, {0.9, 0.9}, {1.0, 0.5}};
		changeGearMinEffectivity[] = {0.95, 0.15, 0.98, 0.98, 0.98, 0.98, 0.97, 0.95, 0.95};
		switchTime = 0.11;
		latency = 1.0;
	};
};