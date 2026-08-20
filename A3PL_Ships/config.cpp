#include "basicdefines_A3.hpp"
class CfgPatches
{
	class A3PL_Ships
	{
		units[]= {};
		weapons[]={};
		requiredVersion=0.2;
		requiredAddons[]={"A3PL_Cars","A3_Boat_F","A3_Boat_F_Civilian_Boat","A3_Boat_F_Gamma","A3_Boat_F_Exp","A3PL_FD"};
	};
};
class RCWSOptics;
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CBA_Extended_EventHandlers_base;
class CfgVehicles
{
	class C_Boat_Civil_01_rescue_F;	
	class C_Boat_Civil_01_F;
	class C_Boat_Civil_01_police_F;
	class C_Boat_Transport_02_F;
	class Boat_Transport_02_base_F;
	class A3PL_Ship_Base: Boat_Transport_02_base_F {class AnimationSources;class NewTurret;class Turrets;class ViewOptics;class Components;class Sounds;};
	class A3PL_Motorboat: C_Boat_Civil_01_F
	{
		model = "\A3PL_Ships\A3PL_MotorBoat\Boat_Civil_01_F";
		canLock = 2;
		allowTabLock = 1;
		scope = 1;
		offsetY = 1;
		class EventHandlers
		{
			init = "_this select 0 animate [""HidePoliceSigns"",1]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",1]; if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
			killed = "_this select 0 animate [""HidePoliceSigns"",1]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",1];";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class A3PL_Motorboat_Rescue: C_Boat_Civil_01_rescue_F
	{
		model = "\A3PL_Ships\A3PL_MotorBoat\Boat_Civil_01_F";
		canLock = 2;
		allowTabLock = 1;
		scope = 1;
		offsetY = 1;
		class EventHandlers
		{
			init = "_this select 0 animate [""HidePoliceSigns"",1]; _this select 0 animate [""HideRescueSigns"",0]; _this select 0 animate [""HidePolice"",1]; if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
			killed = "_this select 0 animate [""HidePoliceSigns"",1]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",1];";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};
	class A3PL_Motorboat_Police: C_Boat_Civil_01_police_F
	{
		model = "\A3PL_Ships\A3PL_MotorBoat\Boat_Civil_01_F";
		canLock = 2;
		allowTabLock = 1;
		scope = 1;
		offsetY = 1;
		class EventHandlers
		{
			init = "_this select 0 animate [""HidePoliceSigns"",0]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",0]; if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
			killed = "_this select 0 animate [""HidePoliceSigns"",1]; _this select 0 animate [""HideRescueSigns"",1]; _this select 0 animate [""HidePolice"",1];";
			fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
		class UserActions {};
	};
	class A3PL_RHIB: C_Boat_Transport_02_F
	{
		model = "\A3PL_Ships\A3PL_RHIB\Boat_Transport_02_F.p3d";
		scope = 1;
		offsetY = 0.8;
		class EventHandlers
		{
			init = "_this select 0 setCenterOfMass [-6.73828e-005,-0.139322,-0.86934];if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
		};
	};	
	class A3PL_Cutter: A3PL_Ship_Base
	{
		displayName	= "A3PL Cutter";
		model		= "\A3PL_Ships\Cutter\A3PL_Cutter";
		maxSpeed					= 100;
		enginePower					= 900;
		rudderForceCoef				= 0.100000;	/// increase this to gain more turning on lower speeds
		rudderForceCoefAtMaxSpeed	= 0.003000;	/// increase this to gain more turning on higher speeds
		class complexGearbox
		{
			GearboxRatios[]    = {
				"R1",-0.782, 
				"N",0, 
				"D1",2.0, 
				"D2",1.85, 
				"D3",1.75
			};
			TransmissionRatios[] = {"High",1.0}; // Optional: defines transmission ratios (for example, High and Low range as commonly found in offroad vehicles)
			gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
			moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
			driveString        = "D"; // string to display in the HUD for forward gears.
			neutralString      = "N"; // string to display in the HUD for neutral gear.
			reverseString      = "R"; // string to display in the HUD for reverse gears.
		};   			
		driverAction			 = driver_mid01;
		cargoAction[]			 = {passenger_low01};
		transportSoldier		 = 1;
		class Turrets: Turrets
		{
			class CCTurret: NewTurret
			{
				class HitPoints
				{
				};
				
				stabilizedInAxes = 4;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerAction = "gunner_Mrap_01";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "konec hlavne";
				gunEnd = "usti hlavne";
				weapons[] = {"cannon_105mm"};
				magazines[] = {"20Rnd_105mm_HEAT_MP_T_Red","20Rnd_105mm_HEAT_MP_T_Red","20Rnd_105mm_HEAT_MP_T_Red"};
				soundServo[] = {"",1.4125376,1,30};
				soundServoVertical[] = {"",1.4125376,1,30};
				discreteDistance[] = {100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex = 2;
				gunnerName = "$STR_GETIN_POS_COMM";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics= "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				turretInfoType = "RscOptics_crows";
				gunnerForceOptics = 0;
				startEngine = 0;
				commanding = 2;
				primaryGunner = 0;
				primaryObserver = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				usePip = 1;
				minElev = -15;
				maxElev = 40;
				initElev = 5;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
				};
			};			
		};
		#include "sounds.hpp"
		extCameraPosition[]		 = {0,1.0,-8.0};
	};
	class A3PL_Patrol:A3PL_Ship_Base
	{
		extCameraPosition[] = {0, 0.8, -20};displayName	= "A3PL Patrol";
		model		= "\A3PL_Ships\Patrol\A3PL_Patrol";
		enginePower					= 600;
		driverAction= driver_mid01;
		cargoAction[]= {passenger_low01};
		class Turrets: Turrets
		{
			class CCTurret: NewTurret
			{
				class HitPoints{};
				stabilizedInAxes = 4;
				body = "MainTurret";
				gun = "MainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				gunnerAction = "gunner_staticlauncher";
				gunnerGetInAction = "GetInMedium";
				gunnerGetOutAction = "GetOutMedium";
				ejectDeadGunner = 0;
				outGunnerMayFire = 1;
				inGunnerMayFire = 1;
				gunBeg = "konec hlavne";
				gunEnd = "usti hlavne";
				weapons[] = {};
				magazines[] = {};
				soundServo[] = {"",1.4125376,1,30};
				soundServoVertical[] = {"",1.4125376,1,30};
				discreteDistance[] = {100,200,300,400,600,800,1000,1200};
				discreteDistanceInitIndex = 2;
				gunnerName = "$STR_GETIN_POS_COMM";
				memoryPointGunnerOptics = "gunnerview";
				memoryPointGunnerOutOptics= "gunnerview";
				gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
				turretInfoType = "RscOptics_crows";
				gunnerForceOptics = 0;
				startEngine = 0;
				commanding = 2;
				primaryGunner = 0;
				primaryObserver = 1;
				LODTurnedIn = 1100;
				LODTurnedOut = 1100;
				usePip = 1;
				minElev = -15;
				maxElev = 40;
				initElev = 5;
				minTurn = -135;
				maxTurn = 135;
				initTurn = 0;
				class ViewOptics: ViewOptics
				{
					initAngleX = 0;
					minAngleX = -30;
					maxAngleX = 30;
					initAngleY = 0;
					minAngleY = -100;
					maxAngleY = 100;
					minFov = 0.25;
					maxFov = 1.25;
					initFov = 0.75;
				};
				class ViewGunner: ViewOptics
				{
					initAngleX = 5;
					minAngleX = -65;
					maxAngleX = 85;
					initAngleY = 0;
					minAngleY = -150;
					maxAngleY = 150;
				};
			};		
		};			
	};
	class A3PL_Yacht:A3PL_Ship_Base
	{
		displayName= "A3PL Yacht";
		model= "\A3PL_Ships\Yacht\A3PL_yacht_civ";
		extCameraPosition[]= {0,1.0,-35.0};		
		enginePower= 6000;
		waterLinearDampingCoefY = 7.5;//7.5
		waterAngularDampingCoef = 10.2;
		maxSpeed= 45;
		fuelCapacity = 75006;//0.1111111111111111:Litre per Kilometres
		driverAction= "driver_boat01";	
		cargoAction[]= {"passenger_generic01_foldhands"};
		transportSoldier= 26;
		waterLeakiness = 100;
		waterLinearDampingCoefX = 7.5;
		waterResistanceCoef = 0.015;
		rudderForceCoef = 6;
		rudderForceCoefAtMaxSpeed = 4;
		offsetY = 7;
		class Turrets {};
		class HitPoints
		{
			class HitEngine
			{
				armor = 0.5;
				material = -1;
				name = "HitEngine";
				passThrough = 1;
				visual = "";
				radius = 0.5;
			};
		};
		class MarkerLights
		{
			class Solid_Red1
			{
				color[] = {1,0,0};
				ambient[] = {0.5,0,0};
				intensity = 75;
				name = "Solid_Red1_pos";
				activeLight = 1;
				blinking = 0;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 1;
				blinkingStartsOn = 1;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "Solid_White1_pos";
			};
			class Solid_White2: Solid_White1
			{
				name = "Solid_White2_pos";
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
			};
			class Solid_Green2: Solid_Green1
			{
				name = "Solid_Green2_pos";
				ambient[] = {0,0,0};
			};
			class Solid_Green3: Solid_Green2
			{
				name = "Solid_Green3_pos";
			};
			class Solid_Green4: Solid_Green2
			{
				name = "Solid_Green4_pos";
			};
			class Solid_Green5: Solid_Green2
			{
				name = "Solid_Green5_pos";
			};
			class Solid_Green6: Solid_Green2
			{
				name = "Solid_Green6_pos";
			};
			class Solid_Green7: Solid_Green2
			{
				name = "Solid_Green7_pos";
			};
			class Solid_Green8: Solid_Green2
			{
				name = "Solid_Green8_pos";
			};
			class Solid_Green9: Solid_Green2
			{
				name = "Solid_Green9_pos";
			};
			class Solid_Green10: Solid_Green2
			{
				name = "Solid_Green10_pos";
			};
		};
		class Reflectors
		{
			class Light_1
			{
				color[]={50,50,50};
				ambient[]={10,10,10};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1";
				direction="Light_1_dir";
				hitpoint="Light_1";
				selection="Light_1";
				useFlare=1;
				flareSize=0.2;
				flareMaxDistance=50;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=10;
					hardLimitEnd=20;
				};
			};
			class Light_2: Light_1
			{
				position="Light_2";
				direction="Light_2_dir";
				hitpoint="Light_2";
				selection="Light_2";
			};
			class Light_4: Light_1
			{
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
			class Light_12: Light_1
			{
				position = "Light_12";
				direction = "Light_12_dir";
				selection = "Light_12";
				hitpoint = "Light_12";
			};
			class Light_13: Light_1
			{
				position = "Light_13";
				direction = "Light_13_dir";
				selection = "Light_13";
				hitpoint = "Light_13";
			};
			class Light_14: Light_1
			{
				position = "Light_14";
				direction = "Light_14_dir";
				selection = "Light_14";
				hitpoint = "Light_14";
			};
			class Light_15: Light_1
			{
				position = "Light_15";
				direction = "Light_15_dir";
				selection = "Light_15";
				hitpoint = "Light_15";
			};
			class Light_16: Light_1
			{
				position = "Light_16";
				direction = "Light_16_dir";
				selection = "Light_16";
				hitpoint = "Light_16";
			};
			class Light_17: Light_1
			{
				position = "Light_17";
				direction = "Light_17_dir";
				selection = "Light_17";
				hitpoint = "Light_17";
			};
			class Light_18: Light_1
			{
				position = "Light_18";
				direction = "Light_18_dir";
				selection = "Light_18";
				hitpoint = "Light_18";
			};
			class Light_19: Light_1
			{
				position = "Light_19";
				direction = "Light_19_dir";
				selection = "Light_19";
				hitpoint = "Light_19";
			};
			class Light_20: Light_1
			{
				position = "Light_20";
				direction = "Light_20_dir";
				selection = "Light_20";
				hitpoint = "Light_20";
			};
			class Light_21: Light_1
			{
				position = "Light_21";
				direction = "Light_21_dir";
				selection = "Light_21";
				hitpoint = "Light_21";
			};
			class Light_23: Light_1
			{
				position = "Light_23";
				direction = "Light_23_dir";
				selection = "Light_23";
				hitpoint = "Light_23";
			};
			class Light_24: Light_1
			{
				position = "Light_24";
				direction = "Light_24_dir";
				selection = "Light_24";
				hitpoint = "Light_24";
			};
			class Light_25: Light_1
			{
				position = "Light_25";
				direction = "Light_25_dir";
				selection = "Light_25";
				hitpoint = "Light_25";
			};
			class Light_26: Light_1
			{
				position = "Light_26";
				direction = "Light_26_dir";
				selection = "Light_26";
				hitpoint = "Light_26";
			};
			class Light_27: Light_1
			{
				position = "Light_27";
				direction = "Light_27_dir";
				selection = "Light_27";
				hitpoint = "Light_27";
			};
			class Light_28: Light_1
			{
				position = "Light_28";
				direction = "Light_28_dir";
				selection = "Light_28";
				hitpoint = "Light_28";
			};
		};
		aggregateReflectors[]={{"Light_1","Light_2"},{"Light_4","Light_5"},{"Light_6","Light_7","Light_8","Light_9","Light_10","Light_10"},{"Light_12","Light_13"},{"Light_14","Light_15","Light_16","Light_17","Light_18","Light_19"},{"Light_20","Light_21","Light_23","Light_24","Light_25","Light_26"},{"Light_27","Light_28"}};	
	};
	class A3PL_Yacht_Pirate: A3PL_Yacht
	{
		displayName	= "A3PL Pirate Yacht";  /// displayed in Editor
		model = "\A3PL_Ships\Yacht\A3PL_yacht_pirate";/// simple path to model
		transportSoldier= 20;
		fuelCapacity = 0;
	};		
	class A3PL_RBM: A3PL_Ship_Base
	{
		displayName= "USCG RB-M";
		model= "\A3PL_Ships\A3PL_RBM\A3PL_RBM";
		enginePower= 5200;
		maxSpeed= 80;//80
		fuelCapacity = 47;//0.1111111111111111:Litre per Kilometres
		class Library{libTextDesc= "United States Coast Guard, Response Boat – Medium";};
		driverAction= "driver_boat01";
		cargoAction[]= {"Truck_Cargo01","passenger_flatground_crosslegs"};
		extCameraPosition[]= {0,1,-12};
		transportSoldier= 15;
		maximumLoad = 2000;
		commanderCanSee = 31+32;
		sensitivity = 900;
		ejectDeadDriver = 1;
		ejectDeadCargo = 1;
		driverDoor = "door";
		cargoDoors[] = {"door"};
		rudderForceCoef= 1;
		rudderForceCoefAtMaxSpeed= 0.1;
		waterLinearDampingCoefY = 4;
		//waterLinearDampingCoefX = 2;
		//waterAngularDampingCoef = 1.2;
		thrustDelay = 0.5; /// initial delay to cause lesser slip when on 1st gear - thrust goes from zero to full in this time
		waterResistanceCoef = 0.02;	/// how much does water slow the ship down
		engineShiftY = 0.5;
		offsetY = 1.6;
		/////////////////////////////////////////////////Radar Below//////////////////////////////////////////////////////////
		driverCanSee = "38";
		gunnerCanSee = "38";
		canUseScanners = 1;
		incomingMissileDetectionSystem = "0";
		irTarget = 1;
		irTargetSize = 2;
		weaponLockSystem = 0;
		radarTarget = 1;
		radarTargetSize = 2;
		//radarType = 4; // Air radar (used for jets and gunships)  - shows compass, turret directions and targets 
		radarType = 2; // Vehicle radar (used for AAA) - shows compass, turret directions and targets
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		showAllTargets = 2;
		showCrewAim = 0;
		visualTarget = 1;
		visualTargetSize = 2;
		waterAngularDampingCoef = 1.2;
		class ComplexGearbox
		{
			GearboxRatios[] = {"R1",-2.5,"N",0,"D1",1.2};
			TransmissionRatios[] = {"High",1.2};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
		};
		class MarkerLights
		{
			class Solid_Red1
			{
				color[] = {1,0,0};
				ambient[] = {0.5,0,0};
				intensity = 75;
				name = "Solid_Red1_pos";
				activeLight = 1;
				blinking = 0;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 1;
				blinkingStartsOn = 1;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "Solid_White1_pos";
			};
			class Solid_White2: Solid_White1
			{
				name = "Solid_White2_pos";
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
			};
		};
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget      
						{                                            
							minRange = 0; 
							maxRange = 5000;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						}; 
						class GroundTarget
						{                                            
							minRange = 0; 
							maxRange = 5000;
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;          
						};						
						aimDown = 0;
						angleRangeHorizontal = 360;
						angleRangeVertical = 360;
						animDirection = "";
						color[] = {0,0,0,0.8};
						groundNoiseDistanceCoef = -1;
						maxGroundNoiseDistance = -1;
						maxSpeedThreshold = 0;
						maxTrackableATL = 1e+010;
						maxTrackableSpeed = 1e+010;
						minSpeedThreshold = 0;
						minTrackableATL = -1e+010;
						minTrackableSpeed = -1e+010;
						typeRecognitionDistance = 12000;
						componentType = "ActiveRadarSensorComponent";						
					};
				};	
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				componentType = "VehicleSystemsDisplayManager";
				defaultDisplay = "EmptyDisplay";
				left = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay = "SensorDisplay";
				componentType = "VehicleSystemsDisplayManager";
				right = 1;
				x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
				y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
				class Components
				{
					class EmptyDisplay
					{
						componentType = "EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType = "MinimapDisplayComponent";
						resource = "RscCustomInfoMiniMap";
					};
					class SensorDisplay
					{
						componentType = "SensorsDisplayComponent";
						range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
		//////////////////////////////////////////////////˄ Radar ˄//////////////////////////////////////////////////////////
		class RenderTargets
		{
			class Gunner_1
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=0;
					renderQuality=0;
					fov=0.5;
				};
			};
			class Gunner_TV
			{
				renderTarget="rendertarget2";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderVisionMode=1;
					renderQuality=0;
					fov=0.69999999;
				};
			};
		};
		class Reflectors
		{
			class Spotlight
			{
				color[] = {240,240,240};
				ambient[] = {100,100,100};
				position = "Light1";
				direction = "Light1_end";
				hitpoint = "Spotlight";
				selection = "Spotlight";
				size = 1;
				innerAngle = 40;
				outerAngle = 80;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 1;
				flareSize = 2;
				class Attenuation {start = 2.0;constant = 0;linear = 0.1;quadratic = 0.01;hardLimitStart = 800;hardLimitEnd = 1800;};
			};
			class Light3
			{
				color[] = {1000,1000,1200};
				ambient[] = {15,15,15};
				position = "Light3";
				direction = "Light3_end";
				hitpoint = "Light3";
				selection = "Light3";
				size = 1;
				innerAngle = 100;
				outerAngle = 179;
				coneFadeCoef = 10;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1.0;
				class Attenuation{start = 1.0;constant = 0;linear = 0;quadratic = 0.25;hardLimitStart = 30;hardLimitEnd = 60;};
			};
			class Light4: Light3
			{
				position = "Light4";
				direction = "Light4_end";
				hitpoint = "Light4";
				selection = "Light4";
			};
			class Light2: Light3
			{
				position = "Light2";
				direction = "Light2_end";
				hitpoint = "Light2";
				selection = "Light2";
				color[] = {1300,1300,2200};
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 2;
				class Attenuation{start = 2.0;constant = 0;linear = 0.1;quadratic = 0.01;hardLimitStart = 390;hardLimitEnd = 450;};
			};
		};
		class CargoTurret;
		class Turrets: Turrets
		{
			class Gunner_Seat: NewTurret
			{
				stabilizedInAxes=4;//
				body="Spotlight_Spin";
				gun="Spotlight_Lift";
				animationSourceBody="mainTurret";
				animationSourceGun="mainGun";
				gunnerAction="Truck_Cargo01";
				gunnerGetInAction="GetInMedium";
				gunnerGetOutAction="GetOutMedium";
				ejectDeadGunner=0;
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				gunBeg="usti hlavne";
				gunEnd="konec hlavne";
				weapons[]={};
				magazines[]={};
				gunnerDoor = "door";
				soundServo[]={"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm",1.4125376,1,30};
				soundServoVertical[]={"A3\Sounds_F\vehicles\boat\Boat_Armed_01\servo_boat_comm_vertical",1.4125376,1,30};
				discreteDistance[]={};
				discreteDistanceInitIndex=2;
				gunnerName="Gunner";
				memoryPointGunnerOptics="gunnerview";
				gunnerOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_02_F";
				turretInfoType="RscOptics_crows";
				gunnerForceOptics=0;
				startEngine=0;
				commanding=0;
				primaryGunner=1;
				primaryObserver=0;
				LODTurnedIn=1100;
				LODTurnedOut=1100;
				usePip=1;
				minElev=-15;
				maxElev=40;
				initElev=5;
				minTurn=-135;
				maxTurn=135;
				initTurn=0;
				canUseScanners = 1;
				class ViewOptics: RCWSOptics{};
				class ViewGunner: ViewOptics
				{
					initAngleX=-15;
					minAngleX=-45;
					maxAngleX=45;
					minFov=0.25;
					maxFov=1.25;
					initFov=0.75;
					visionMode[]={};
				};
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class SensorDisplay
							{
							componentType = "SensorsDisplayComponent";
							range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
							resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						defaultDisplay = "SensorDisplay";
						componentType = "VehicleSystemsDisplayManager";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class SensorDisplay
							{
							componentType = "SensorsDisplayComponent";
							range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
							resource = "RscCustomInfoSensors";
							};
						};
					};
				};
			};
			class Captain_Seat: NewTurret
			{
				disableSoundAttenuation = 0;
				gunnerLeftHandAnimName = "";
				gunnerRightHandAnimName = "";
				gunnerName = "Captain";
				body = "";
				gun = "";
				proxyIndex= 2;
				animationSourceBody = "";
				animationSourceGun = "";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 1;
				outGunnerMayFire = 1;
				weapons[] = {};//"HMG_M2"
				magazines[] = {};
				minElev = 0;
				maxElev = 55;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 1;
				maxVerticalRotSpeed = 1;
				soundServo[] = {"",10,1,50};
				soundElevation[] = {"",10,1,50};
				gunnerAction = "Truck_Cargo01";
				gunnerCompartments = "Compartment2";
				castGunnerShadow = 1;
				stabilizedInAxes = 1;
				startEngine = 0;
				gunBeg = "";
				gunEnd = "";
				memoryPointGunnerOptics = "";
				optics = 0;
				commanding= 1;
				primaryGunner =0;
				primaryObserver =1;
				ejectDeadGunner = 1;
				hideWeaponsGunner = 1;
				turretFollowFreeLook = 1;
				lockWhenVehicleSpeed = 5;
				dontCreateAI = 0;
				allowTabLock = 1;
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
				};/*
				class Components: Components
				{
					class VehicleSystemsDisplayManagerComponentLeft
					{
						componentType = "VehicleSystemsDisplayManager";
						defaultDisplay = "EmptyDisplay";
						left = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"",	(safezoneX + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class SensorDisplay
							{
							componentType = "SensorsDisplayComponent";
							range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
							resource = "RscCustomInfoSensors";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight
					{
						defaultDisplay = "SensorDisplay";
						componentType = "VehicleSystemsDisplayManager";
						right = 1;
						x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"",	((safezoneX + safezoneW) - (		(10 * 			(			((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * 			(			((safezoneW / safezoneH) min 1.2) / 40)))])";
						y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"",	(safezoneY + safezoneH - 21 * 			(			(			((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";
						class Components
						{
							class EmptyDisplay
							{
								componentType = "EmptyDisplayComponent";
							};
							class SensorDisplay
							{
							componentType = "SensorsDisplayComponent";
							range[] = {100,200,400,500,1000,2000,3000,4000,5000,6000,7000,8000,9000,10000};
							resource = "RscCustomInfoSensors";
							};
						};
					};
				};*/
			};
			class CargoTurret_01: CargoTurret
			{
				gunnerAction = "passenger_inside_4";
				gunnerCompartments = "Compartment1";
				gunnerName = "Front Gunner";
				memoryPointsGetInGunner = "Cargo_R1_pos";
				memoryPointsGetInGunnerDir = "Cargo_R1_dir";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				proxyIndex = 16;
				class TurnIn
				{
					limitsArrayTop[] = {{44.0899,0.4614}};
					limitsArrayBottom[] = {{-73.3444,-103.2468},{-73.3444,-86.6666},{-73.3444,-52.2224},{-73.3444,-26.9412},{-73.3444,17.1711},{-73.3444,52.2545},{-73.3444,116.7031}};
					
				};
				class TurnOut: TurnIn {};
				isPersonTurret = 1;
				class DynamicViewLimits{};
			};
		};
	};
	class A3PL_Container_Ship: A3PL_Ship_Base
	{
		displayName= "Container Ship";
		model= "\A3PL_Ships\Container_Ship\Container_Ship";
		extCameraPosition[]= {0,1.0,-65.0};		
		enginePower= 40000;
		maxSpeed= 100;//35
		fuelCapacity = 143344;//0.1111111111111111:Litre per Kilometres
		driverAction= "A3PL_Ship_Driver";	
		cargoAction[]= {"passenger_low01"};
		transportSoldier= 10;
		waterLeakiness = 100;
		turnCoef = 1.0;
		waterLinearDampingCoefY = 2;//4
		waterLinearDampingCoefX = 7.5;
		rudderForceCoef = 25;
		rudderForceCoefAtMaxSpeed = 5;
		waterResistanceCoef = 0.02;/// how much does water slow the ship down
		redRpm = 1200;
		offsetY = 9.5;
		class Turrets {};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1_pos";
				direction = "exhaust1_dir";
				effect = "A3PL_ExhaustBigShipEffect";
			};
		};
		class Sounds: Sounds
		{
			delete EngineMaxOut;
			delete EngineMaxOut1;
			delete EngineMaxOut1_Turbo;
			delete EngineMaxOut2_Turbo;
			delete EngineMaxOut3_Turbo;
			class IdleOut
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_idle.ogg",0.4466836,1.0,300};
				frequency = "0.95	+	((rpm/	1000) factor[(100/	1000),(250/	1000)])*0.15";
				volume = "engineOn*(((rpm/	1000) factor[(100/	1000),(150/	1000)])	*	((rpm/	1000) factor[(270/	1000),(200/	1000)]))*10";
			};
			class Engine
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_1.ogg",0.63095737,1.0,350};
				frequency = "0.85	+	((rpm/	1000) factor[(200/	1000),(370/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(190/	1000),(250/	1000)])	*	((rpm/	1000) factor[(380/	1000),(280/	1000)]))*10";
			};
			class EngineMidOut
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_3.ogg",0.7943282,1.0,380};
				frequency = "0.85	+	((rpm/	1000) factor[(280/	1000),(480/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(250/	1000),(350/	1000)])	*	((rpm/	1000) factor[(480/	1000),(390/	1000)]))*10";
			};
			class EngineMaxOut2
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_4.ogg",0.8912509,1.0,440};
				frequency = "0.86	+	((rpm/	1000) factor[(380/	1000),(580/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(370/	1000),(440/	1000)])	*	((rpm/	1000) factor[(585/	1000),(495/	1000)]))*10";
			};
			class EngineMaxOut3
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_5.ogg",1.0,1.0,500};
				frequency = "0.85	+	((rpm/	1000) factor[(490/	1000),(800/	1000)])*0.2";
				volume = "engineOn*(((rpm/	1000) factor[(460/	1000),(550/	1000)])	*	((rpm/	1000) factor[(780/	1000),(620/	1000)]))*10";
			};
			class EngineMaxOut4
			{
				sound[] = {"A3PL_Ships\Container_Ship\Sounds\engine_6.ogg",1.2589254,1.0,550};
				frequency = "0.85	+	((rpm/	1000) factor[(650/	1000),(1000/	1000)])*0.2";
				volume = "engineOn*((rpm/	1000) factor[(600/	1000),(800/	1000)])*10";
			};
		};
		class MarkerLights
		{
			class Solid_Red1
			{
				color[] = {1,0,0};
				ambient[] = {0.5,0,0};
				intensity = 75;
				name = "Solid_Red1_pos";
				activeLight = 1;
				blinking = 0;
				blinkingPattern[] = {0.2,1.3};
				blinkingPatternGuarantee = 1;
				blinkingStartsOn = 1;
				drawLight = 1;
				drawLightSize = 0.25;
				drawLightCenterSize = 0.08;
				dayLight = 0;
				useFlare = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 25;
					quadratic = 50;
					hardLimitStart = 0.75;
					hardLimitEnd = 1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "Solid_White1_pos";
			};
			class Solid_White2: Solid_White1
			{
				name = "Solid_White2_pos";
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
			};
		};
		hiddenSelections[] = 
		{
			"Camo",
			"C1","C2","C3","C4","C5","C6","C7","C8","C9","C10",
			"C11","C12","C13","C14","C15","C16","C17","C18","C19","C20",
			"C21","C22","C23","C24","C25","C26","C27","C28","C29","C30",
			"C31","C32","C33","C34","C35","C36","C37","C38","C39","C40",
			"C41","C42","C43","C44","C45","C46","C47","C48","C49","C50",
			"C51","C52","C53","C54","C55","C56","C57","C58","C59","C60",
			"C61","C62","C63","C64","C65","C66","C67","C68","C69","C70",
			"C71","C72","C73","C74","C75","C76","C77","C78","C79","C80",
			"C81","C82","C83","C84","C85","C86","C87","C88","C89","C90",
			"C91","C92","C93","C94","C95","C96","C97","C98","C99","C100",
			"C101","C102","C103","C104","C105","C106","C107","C108","C109","C110",
			"C111","C112","C113","C114","C115","C116","C117","C118","C119","C120",
			"C121","C122","C123","C124","C125","C126","C127","C128","C129","C130",
			"C131","C132","C133","C134","C135","C136","C137","C138","C139","C140",
			"C141","C142","C143","C144","C145","C146","C147","C148","C149","C150",
			"C151","C152","C153","C154","C155","C156","C157","C158","C159","C160",
			"C161","C162","C163","C164","C165","C166","C167","C168","C169","C170"
		};
		hiddenSelectionsTextures[] = 
		{
			"",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa",
			"a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa","a3\structures_f\data\metal\containers\containers_colors_01_co.paa","a3\structures_f\data\metal\containers\containers_colors_02_co.paa","a3\structures_f\data\metal\containers\containers_colors_03_co.paa","a3\structures_f\data\metal\containers\containers_colors_04_co.paa","a3\structures_f\data\metal\containers\containers_colors_05_co.paa"
		};
		hiddenSelectionsMaterials[] = 
		{
			"",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat",
			"a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat","a3\structures_f\data\metal\containers\containers_01_set.rvmat"
		};
	};
};