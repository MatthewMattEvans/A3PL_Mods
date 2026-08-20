class CfgPatches
{
	class A3PL_Planes
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars","A3_Air_F","A3PL_Objects"};
		requiredVersion = 0.4;
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class Components;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RCWSOptics;
class CfgVehicles
{
	class A3PL_Objects;
	class PlaneWreck;
	class C_Plane_Civil_01_F;
	class B_Heli_Transport_01_F;
	class A3PL_Motorboat;
	class A3PL_Plane_Base: C_Plane_Civil_01_F
	{
		class Components;
		class AnimationSources;
		class ViewPilot;
		class CopilotTurret;
		class Turrets
		{
			class CopilotTurret;
		};
		ejectDamageLimit = 0.75;
		ejectSpeed[] = {900,900,900};
	};
	class A3PL_Helicopter_Medium_Base: B_Heli_Transport_01_F
	{
		class Sounds;
		class SoundsExt;
		class Turrets;
		ejectDamageLimit = 0.75;
		ejectSpeed[] = {900,900,900};
	};
	class A3PL_Goose_Base: A3PL_Plane_Base
	{
		displayName = "Grumman Goose";
		model = "\A3PL_Planes\Goose\A3PL_Goose";
		author = "Kane - A3PL";
		transportSoldier = 7;
		fuelCapacity = 500;//0.1111111111111111:Litre per Kilometres
		cargoAction[] = {"passenger_low01"};
		cargoGetInAction[] = {"GetInHelicopterCargo"};
		cargoGetOutAction[] = {"GetOutHelicopterCargo"};
		getInAction = "GetInHelicopterCargo";
		getOutAction = "GetOutHelicopterCargo";
		cargoDoors[] = {"Door_LF"};
		driverAction = "A3PL_Goose_Pilot";
		gunnerAction = "A3PL_Goose_Pilot";
		driverLeftHandAnimName = "front_stick";
		driverRightHandAnimName = "front_stick";
		extCameraPosition[] = {0.0, 1, -13.0};
		hiddenSelections[] = {"camo0","camo1"};
		hiddenselectionstextures[]={"A3PL_Textures\Goose\Default\ext_1.paa","A3PL_Textures\Goose\Default\ext_2.paa"};
		canFloat = 1;
		waterResistanceCoef = 0.0009;
		waterLeakiness = 0;
		gearRetracting = 1;
		//driveOnComponent[] = {"wheel_1_spin","wheel_2_spin","wheel_3_spin"};
		//waterEffect = "EmptyEffect";
		wheelSteeringSensitivity = 2;
		///////////////˅ Flight Model ˅///////////////////////////////////
		aileronCoef[] = {0,0.1,0.2,0.3,0.5,0.6,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.3};
		aileronControlsSensitivityCoef = 12;
		aileronSensitivity = 0.55;
		altFullForce = 5300;
		altNoForce = 7000;
		angleOfIndicence = 0.05;
		draconicForceXCoef = 6;
		draconicForceYCoef = 3.5;
		draconicForceZCoef = 0.5;
		draconicTorqueXCoef[] = {5,4,3,2,1,1,1,2,3,4,5,6};
		draconicTorqueYCoef[] = {8,7,3,2.5,2.4,2.3,2.2,2.1,2,1.9,1.8,1.6};
		elevatorCoef[] = {0,0.1,0.2,0.3,0.5,0.7,0.9,1,1.1,1.2,1.1,0.9,0.8,0.7,0.5,0.2};
		elevatorControlsSensitivityCoef = 12;
		elevatorSensitivity = 0.3;
		envelope[] = {0,0,0.15,1.5,1.8,2.2,2.8 3.2,3.3,3,2.2,1.3,0};
		flapsFrictionCoef = 1.2;
		landingSpeed = 144;
		maxSpeed = 361;
		rudderCoef[] = {0,60,60,0.9,1,1.1,1,0.9,0.8,0.7,0.6,0.5,0.4,0.3,0.2,0.1};
		rudderControlsSensitivityCoef = 12;
		rudderInfluence = 0.15;
		stallSpeed = 111;
		///////////////˄ Flight Model ˄///////////////////////////////////
		soundEngineOffExt[] = {"A3PL_Planes\Goose\Sounds\Goose_Shutdown.ogg",1,1,600};
		soundEngineOffInt[] = {"A3PL_Planes\Goose\Sounds\Goose_Shutdown.ogg",1,1};
		soundEngineOnExt[] = {"A3PL_Planes\Goose\Sounds\Goose_Startup.ogg",1,1,600};
		soundEngineOnInt[] = {"A3PL_Planes\Goose\Sounds\Goose_Startup.ogg",1,1};
		soundGearUp[] = {"A3PL_Planes\Goose\Sounds\Goose_Gearup.ogg",1,1,150};
		soundGearDown[] = {"A3PL_Planes\Goose\Sounds\Goose_Geardown.ogg",1,1,150};
		soundFlapsUp[] = {"A3PL_Planes\Goose\Sounds\Goose_Flaps.ogg",1,1,100};
		soundFlapsDown[] = {"A3PL_Planes\Goose\Sounds\Goose_Flaps.ogg",1,1,100};
		soundWaterCrashes[] = {"soundWaterCollision1",0.5,"soundWaterCollision2",0.5};
		soundWaterCollision1[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-20-speed",0.5,1,200};
		soundWaterCollision2[] = {"A3\Sounds_F\vehicles\boat\SFX\voda-o-bok-lodi-50-speed",0.5,1,200};
		htMax = 3136;
		class Wheels
		{
			class Wheel_1
			{
				boneName = "wheel_1_spin";
				steering = 0;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.3;
				mass = 150;
				MOI = 2;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				maxCompression = 0.3;
				maxDroop = 0.3;
				sprungMass = 822;
				springStrength = 20000;
				springDamperRate = 3244; 
				longitudinalStiffnessPerUnitGravity = 50;
				latStiffX = 1;
				latStiffY = 10;
				frictionVsSlipGraph[] = {{0,1},{0.5,1},{1,1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "wheel_2_spin";
				side = "right";
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
			};
			class Wheel_3: Wheel_2
			{
				steering = 1;
				boneName = "wheel_3_spin";
				side = "left";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
		class Sounds
		{
			class EngineMidhExt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_Low.ogg",0.7782794,1,1100};
				frequency = "1.1 + rpm/3 + (thrust - 0.5)/6";
				volume = "camPos*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.5])";
			};
			class EngineHighExt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_Mid.ogg",0.7782794,1,1100};
				frequency = "1.2 + rpm/4 +(thrust - 0.5)/5";
				volume = "camPos*(rpm factor[0.5, 0.9])";
			};
			class EngineMidhInt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_Low.ogg",0.7782794,1,1100};
				frequency = "1 + rpm/3 + (thrust - 0.5)/6";
				volume = "(1-camPos)*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.8])";
			};
			class EngineHighInt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_Mid.ogg",0.7782794,1,1100};
				frequency = "0.6 + rpm/5 +(thrust - 0.5)/5";
				volume = "(1-camPos)*(rpm factor[0.4, 0.9])";
			};
			class ForsageInt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_High.ogg",0.4125376,1.2,1100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "(1-campos)*(thrust factor[0, 1.0])*(rpm factor[0.7,1])";
				cone[] = {1.14,3.92,2.5,0.4};
			};
			class ForsageExt
			{
				sound[] = {"\A3PL_Planes\Goose\Sounds\Goose_High.ogg",0.4125376,1.2,1100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "camPos*(thrust factor[0, 1.0])*(rpm factor[0.7,1])";
				cone[] = {1.14,3.92,2.5,0.4};
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",0.7782794,1.0,100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class Waternoise_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\air_driving_in_water", 0.707946, 1, 300};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int", 0.562341, 1, 100};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "Jonzie_ExhaustTruckEffect";
			};
			class Exhaust2
			{
				position= "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "Jonzie_ExhaustTruckEffect";
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction = "A3PL_Goose_Pilot";
				gunnerLeftHandAnimName = "back_stick";
				gunnerRightHandAnimName = "back_stick";
				gunnerLeftLegAnimName = "rudder_copilot1";
				gunnerRightLegAnimName = "rudder_copilot2";
				isCopilot = 1;
				primaryGunner = 0;
				canEject = 1;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerInAction = "Heli_Medium_Gunner_H";
				gunnerName = "Co-Pilot";
				gunnerDoor = "Door_LF";
				gunnerNotSpawned = 1;
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				gunnerGetInAction = "GetInHelicopterCargo";
				gunnerGetOutAction = "GetOutHelicopterCargo";
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				maxHorizontalRotSpeed = 3;
				maxVerticalRotSpeed = 3;
				canUseScanners = 1;
				radarType = 4;
				commanding = 0;
				/*class ViewGunner: ViewPilot
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -170;
					maxAngleY = 170;
					initAngleY = 0;
					minFov = 0.3;
					maxFov = 0.8;
					initFov = 1;
				};*/
				/*
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
					*/
			};
		};
		class AnimationSources: AnimationSources
		{
			class Solid_Red1
			{
				source = "MarkerLight";
				markerLight = "Solid_Red1";
			};
			class Solid_Red2: Solid_Red1
			{
				markerLight = "Solid_Red2";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight = "Solid_White1";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight = "Solid_Green1";
			};
			class Blinking_Red1: Solid_Red1
			{
				markerLight = "Blinking_Red1";
			};
			class Blinking_White1: Solid_Red1
			{
				markerLight = "Blinking_White1";
			};
			class Blinking_White2: Solid_Red1
			{
				markerLight = "Blinking_White2";
			};
			class Blinking_White3: Solid_Red1
			{
				markerLight = "Blinking_White3";
			};
			class Landing_light2: Solid_Red1
			{
				markerLight = "Landing_light2";
			};
			class Landing_light3: Solid_Red1
			{
				markerLight = "Landing_light3";
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
			class Solid_Red2: Solid_Red1
			{
				name = "Solid_Red2_pos";
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Solid_White1: Solid_Red1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "Solid_White1_pos";
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Blinking_Red1: Solid_Red1
			{
				name = "Blinking_Red1_pos";
				blinking = 1;
				blinkingPattern[] = {1,2};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.08;
			};
			class Blinking_White1: Solid_White1
			{
				name = "Blinking_White1_pos";
				blinking = 1;
				blinkingPattern[] = {0.05,0.1,0.05,1};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Blinking_White2: Blinking_White1
			{
				name = "Blinking_White2_pos";
			};
			class Blinking_White3: Blinking_White1
			{
				name = "Blinking_White3_pos";
				blinkingPattern[] = {1,0.05,0.1,0.05};
			};
		};
		class Reflectors
		{
			class Landing_light2
			{
				color[] = {1900,1300,950};
				ambient[] = {5,5,5};
				position = "LightCarHeadL01";
				direction = "LightCarHeadL01_end";
				hitpoint = "Landing_light2";
				selection = "Landing_light2";
				size = 1;
				innerAngle = 60;
				outerAngle = 100;
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
			class Landing_light3: Landing_light2
			{
				position = "LightCarHeadR01";
				direction = "LightCarHeadR01_end";
				hitpoint = "Landing_light3";
				selection = "Landing_light3";
			};
			class Landing_light1: Landing_light2
			{
				position = "LightCarHeadL02";
				direction = "LightCarHeadL02_end";
				hitpoint = "Landing_light1";
				selection = "Landing_light1";
				coneFadeCoef = 10;
				intensity = 1;
				innerAngle = 100;
				outerAngle = 179;
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
		};
	};
	class A3PL_Goose_Radar: A3PL_Goose_Base
	{
		/////////////////////////////////////////////////˅ Radar ˅//////////////////////////////////////////////////////////
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
							maxRange = 2500;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						}; 
						class GroundTarget
						{                                            
							minRange = 0; 
							maxRange = 2500;
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
	};
	class A3PL_Goose_USCG: A3PL_Goose_Radar {displayName = "USCG Grumman Goose";hiddenselectionstextures[]={"A3PL_Textures\Goose\USCG\ext_3.paa","A3PL_Textures\Goose\USCG\ext_4.paa"};};
	class A3PL_Cessna172: A3PL_Plane_Base
	{
		displayName = "Cessna 172"; 
		model = "\A3PL_Planes\Cessna172\A3PL_Cessna172";
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetOutLow"};
		cargoGetOutAction[] = {"GetOutLow"};		
		icon = "A3PL_Planes\Cessna172\textures\icon.paa"; 
		picture = "A3PL_Planes\Cessna172\textures\image.paa";
		driverAction = "A3PL_Cessna_Pilot";
		driverDoor = "Pilot_Door";
		cargoDoors[] = {"Pilot_Door","CoPilot_Door"};
		cargoAction[] = {"passenger_apc_narrow_generic03","passenger_apc_generic02","passenger_apc_narrow_generic03"};
		gearRetracting = 0;
		hiddenselectionstextures[]={"A3PL_Planes\Cessna172\Textures\c172_t.paa"};
		wheelSteeringSensitivity = 0.3; //was 0.7
		//extCameraPosition[] = {0,0,-7.5};
		///////////////˅ Flight Model ˅///////////////////////////////////
		aileronCoef[] = {0, 0.4, 0.9, 1.1, 1.2, 1.3, 1.3};
		aileronControlsSensitivityCoef = 3.6;
		aileronSensitivity = 0.7;
		altFullForce = 6000;
		altNoForce = 7500;
		angleOfIndicence = "4*3.1415/180";
		draconicForceXCoef = 12;
		draconicForceYCoef = 1;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {14, 12, 11.2, 10.6, 9.9, 9.6, 9.7, 10.5, 11, 11.5, 12};
		draconicTorqueYCoef[] = {4.5, 4.1, 3.7, 3.3, 3, 2.7, 2.5, 2.3, 2.1, 1.9, 1.8};
		elevatorCoef[] = {0, 0.1, 0.28, 0.35, 0.4, 0.45, 0.49, 0.53, 0.57, 0.58, 0.56};
		elevatorControlsSensitivityCoef = 2;
		elevatorSensitivity = 0.9;
		envelope[] = {0, 0.01, 0.4, 1.6, 3.2, 3.4, 3.5, 3.6, 3.6, 3.7, 3.7, 3.6, 1};
		flapsFrictionCoef = 0.4;
		landingSpeed = 120;
		maxSpeed = 301;
		rudderCoef[] = {0, 0.89, 1.5, 2.1, 2.5, 3, 3.6, 3.9, 4, 3.6, 1.8};
		rudderControlsSensitivityCoef = 3;
		rudderInfluence = 0.6946;
		stallSpeed = 98;
		///////////////˄ Flight Model ˄///////////////////////////////////
		class NewTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				gunnerAction = "A3PL_Cessna_Pilot";
				gunnerLeftHandAnimName = "stick_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				isCopilot = 1;
				primaryGunner = 0;
				canEject = 1;
				body = "";
				gun = "";
				animationSourceBody = "";
				animationSourceGun = "";
				weapons[] = {};
				magazines[] = {};
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetInLow";
				gunnerName = "Co-Pilot";
				gunnerDoor = "CoPilot_Door";
				preciseGetInOut = 0;
				gunnerNotSpawned = 1;
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				minElev = -50;
				maxElev = 30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
				maxHorizontalRotSpeed = 3;
				maxVerticalRotSpeed = 3;
				class ViewGunner: ViewPilot {};
				commanding = -1;
				gunnerLeftLegAnimName = "rudder_copilot1";
				gunnerRightLegAnimName = "rudder_copilot2";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {1000,650,400};
				ambient[] = {5,5,5};		
				position = "Light_L";				
				direction = "Light_L_end";		
				hitpoint = "Light_L";				
				selection = "Light_L";				
				size = 1;
				innerAngle = 60;
				outerAngle = 100;
				coneFadeCoef = 10;
				intensity = 1;
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
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
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
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Blinking_Red1: Solid_Red1
			{
				name = "Blinking_Red1_pos";
				blinking = 1;
				blinkingPattern[] = {1,2};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.08;
			};
			class Blinking_White1: Solid_White1
			{
				name = "Blinking_White1_pos";
				blinking = 1;
				blinkingPattern[] = {0.05,0.1,0.05,1};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Blinking_White2: Blinking_White1
			{
				name = "Blinking_White2_pos";
				blinkingPattern[] = {1,0.05,0.1,0.05};
			};
		};		
		destrType = "DestructWreck";
		soundEngineOffExt[] = {"A3PL_Planes\Cessna172\Sounds\Shutdown.ogg",1,1,600};
		soundEngineOffInt[] = {"A3PL_Planes\Cessna172\Sounds\Shutdown.ogg",1,1};
		soundEngineOnExt[] = {"A3PL_Planes\Cessna172\Sounds\Startup.ogg",1,1,600};
		soundEngineOnInt[] = {"A3PL_Planes\Cessna172\Sounds\Startup.ogg",1,1};
		class Sounds
		{
			class EngineMidhExt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\Low.ogg",0.7782794,1,1100};
				frequency = "1.1 + rpm/3 + (thrust - 0.5)/6";
				volume = "camPos*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.5])";
			};
			class EngineHighExt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\Mid.ogg",0.7782794,1,1100};
				frequency = "1.2 + rpm/4 +(thrust - 0.5)/5";
				volume = "camPos*(rpm factor[0.5, 0.9])";
			};
			class EngineMidhInt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\Low.ogg",0.7782794,1,1100};
				frequency = "1 + rpm/3 + (thrust - 0.5)/6";
				volume = "(1-camPos)*(rpm factor[0.15, 0.3])*(rpm factor[1.0, 0.8])";
			};
			class EngineHighInt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\Mid.ogg",0.7782794,1,1100};
				frequency = "0.6 + rpm/5 +(thrust - 0.5)/5";
				volume = "(1-camPos)*(rpm factor[0.4, 0.9])";
			};
			class ForsageInt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\High.ogg",0.4125376,1.2,1100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "(1-campos)*(thrust factor[0, 1.0])*(rpm factor[0.7,1])";
				cone[] = {1.14,3.92,2.5,0.4};
			};
			class ForsageExt
			{
				sound[] = {"\A3PL_Planes\Cessna172\Sounds\High.ogg",0.4125376,1.2,1100};
				frequency = "1 + (thrust - 0.5)/4";
				volume = "camPos*(thrust factor[0, 1.0])*(rpm factor[0.7,1])";
				cone[] = {1.14,3.92,2.5,0.4};
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",0.7782794,1.0,100};
				frequency = 1;
				volume = "camPos * rain * (speed factor[50, 0])";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1.0,1.0,100};
				frequency = 1;
				volume = "(1-camPos) * rain * (speed factor[50, 0])";
			};
			class Waternoise_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\air_driving_in_water", 0.707946, 1, 300};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * camPos + (speed factor[-0.1, -5]) * water * camPos";
			};
			class Waternoise_int
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\soft_driving_in_water_int", 0.562341, 1, 100};
				frequency = "1";
				volume = "(speed factor[0, 5]) * water * (1-camPos) + (speed factor[-0.1, -5]) * water * (1-camPos)";
			};
		};
		class Exhausts
		{
			class Exhaust_left
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectPlaneSmallHP";
				engineIndex = 0;
			};
		};
		class Wheels
		{
			class Wheel_1
			{
				boneName = "wheel_1";
				steering = 0;
				side = "left";
				center = "Wheel_1_center";
				boundary = "Wheel_1_rim";
				width = 0.16;
				mass = 20;
				MOI = 1;
				dampingRate = 0.1;
				dampingRateDamaged = 1;
				dampingRateDestroyed = 1000;
				maxBrakeTorque = 1500;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0, -1, 0};
				suspForceAppPointOffset = "Wheel_1_center";
				tireForceAppPointOffset = "Wheel_1_center";
				maxCompression = 0.05;
				maxDroop = 0.05;
				sprungMass = 144;
				springStrength = 14366;
				springDamperRate = 3448;
				longitudinalStiffnessPerUnitGravity = 50;
				latStiffX = 1;
				latStiffY = 10;
				frictionVsSlipGraph[] = {{0, 1}, {0.5, 1}, {1, 1}};
			};
			class Wheel_2: Wheel_1
			{
				boneName = "wheel_2";
				steering = 0;
				center = "Wheel_2_center";
				boundary = "Wheel_2_rim";
				width = 0.28;
				springDamperRate = 3062;
				sprungMass = 128;
				springStrength = 12757;
				suspForceAppPointOffset = "Wheel_2_center";
				tireForceAppPointOffset = "Wheel_2_center";
				maxCompression = 0.05;
				maxDroop = 0.05;
				suspTravelDirection[] = {0, -1, 0};
			};
			class Wheel_3: Wheel_2
			{
				boneName = "wheel_3";
				side = "right";
				center = "Wheel_3_center";
				boundary = "Wheel_3_rim";
				suspForceAppPointOffset = "Wheel_3_center";
				tireForceAppPointOffset = "Wheel_3_center";
			};
		};
	};
	class A3PL_Cessna172_Wreck: PlaneWreck
	{
		scope = 1;
		model = "A3PL_Planes\Cessna172\A3PL_Cessna172_wreck.p3d";
	};
	class A3PL_Cessna172_Banner: A3PL_Objects
	{
		displayName = "Banner";
		model = "\A3PL_Planes\Cessna172\A3PL_Cessna172_Banner.p3d";
		hiddenSelections[] = {"Camo1"};
		hiddenSelectionsTextures[] = {"#(argb,8,8,3)color(1,1,1,1.0,CO)"};
	};
	class A3PL_C_Plane_Civil_01_F: C_Plane_Civil_01_F
	{
		scope = 1;
		scopeCurator = 0;
        scopeArsenal = 2;
		DLC = "";
		model = "\A3PL_Planes\Plane_Civil_01\Plane_Civil_01_basic_F.p3d";
		driveOnComponent[] = {"wheel_f","wheel_l","wheel_r"};
	};
	class A3PL_Jayhawk: A3PL_Helicopter_Medium_Base
	{
		displayname = "USCG MH-60J Jayhawk";
		model = "\A3PL_Planes\Jayhawk\A3PL_Jayhawk.p3d";
		extCameraPosition[] = {0,3,-23};
		maxSpeed = 295;
		slingLoadMaxCargoMass = 4084;
		weapons[] = {"CMFlareLauncher"};
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"};
		soundEngineOnInt[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_startup",0.1,1};
		soundEngineOnExt[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_startup",1,1,800};
		soundEngineOffInt[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_shutdown",0.1,1};
		soundEngineOffExt[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_shutdown",1,1,800};
		class Sounds: Sounds
		{
			class Engine
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_engine",2.51189,1,900};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)/10";
			};
			class EngineIn
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_internal",3.1622777,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)/60";
			};
			class RotorLowIn
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_rotor",3.1622777,1};
				frequency = "rotorSpeed";
				volume = "2*(1-camPos)*((rotorSpeed factor[0.3, 1.1]) min (rotorSpeed factor[1.1, 0.3]))/60";
			};
			class RotorHighIn
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_rotor",3.1622777,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*3*(rotorThrust-0.9)/60";
			};
			class RotorLowOut
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_rotor",2.51189,1,1400};
				frequency = "rotorSpeed";
				volume = "camPos*(0 max (rotorSpeed-0.1))/10";
				cone[] = {1.6,3.14,2,0.5};
			};
			class RotorHighOut
			{
				sound[] = {"A3PL_Planes\Jayhawk\Sounds\uh60_rotor",2.51189,1,1600};
				frequency = "rotorSpeed";
				volume = "camPos*10*(0 max (rotorThrust-0.9))/10";
				cone[] = {1.6,3.14,2,0.5};
			};
			class EngineExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine", 1.41254, 1, 800};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "camPos*((rotorSpeed-0.72)*4)/60";
			};
			class EngineInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine", 1, 1};
				frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
				volume = "(1-camPos)*((rotorSpeed-0.75)*4)/60";
			};
		};
		class SoundsExt: SoundsExt
		{
			class SoundEvents {};
			class Sounds
			{
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine", 1.41254, 1, 800};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "camPos*((rotorSpeed-0.72)*4)/10";
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine", 1, 1};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)/60";
				};
			};
		};
		class MFD{};
		class pilotCamera {};
		driverInAction = "pilot_Heli_Light_03";
		driverAction = "A3PL_Jawhawk_Pilot";
		usePreciseGetInAction = 0;//1
		preciseGetInOut = 1; ///0 describes what style of get in is used (0 - non-precise; 1 - precise on proxy; 2 - precise on model center)
		cargoPreciseGetInOut[] = {0};
		cargoAction[] = {"A3PL_Crew","A3PL_Crew","A3PL_Crew","A3PL_Crew","A3PL_Crew","A3PL_medevac"};
		cargogetinaction[] = {"GetInHeli_Transport_01Cargo"};
		cargogetoutaction[] = {"GetOutLow"};
		cargoDoors[] = {""};
		getinaction = "pilot_Heli_Light_03_Enter";
		getoutaction = "pilot_Heli_Light_03_Exit";
		driverRightHandAnimName = "front_stick";
		driverLeftHandAnimName = "lever_pilot";
		driverLeftLegAnimName = "pedalL";
		driverRightLegAnimName = "pedalR";
		driverDoor = "Pilot_Door";
		memoryPointsGetInDriver = "pos driver";
		memoryPointsGetInDriverDir = "pos driver dir";
		transportSoldier = 6;
		fuelCapacity = 600;
		helmetMountedDisplay = 0;
		gearRetracting = 0;
		mainRotorSpeed = 1.2;
		backRotorSpeed = 6.1;
		gunnerCanSee = "2+4+8+16";
		driverCanSee = "2+4+8+16";
		radarType = 0;
		attenuationEffectType = "HeliAttenuation";
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		//cyclicAsideForceCoef = 0.3;
		//cyclicForwardForceCoef = 1.7;
		class Library{libTextDesc = "";};
		class CargoTurret;
		class CopilotTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 1;
				gunnerAction = "A3PL_Jawhawk_CoPilot";
				gunnerInAction = "A3PL_Jawhawk_CoPilot";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "copilot_Heli_Light_03_Enter";
				gunnerGetOutAction = "copilot_Heli_Light_03_Exit";
				selectionFireAnim = "";
				preciseGetInOut = 1;
				GunnerDoor = "CoPilot_Door";
				gunnerLeftHandAnimName = "lever_copilot";//
				gunnerRightHandAnimName = "back_stick";//
                gunnerRightLegAnimName = "pedalR";
                gunnerLeftLegAnimName = "pedalL";
				proxyIndex = 1;
				commanding = -1;
				
				body="Spotlight_Spin";
				gun="Spotlight_Lift";
				animationSourceBody="Spotlight_Spin";
				animationSourceGun="Spotlight_Lift";
				outGunnerMayFire=1;
				inGunnerMayFire=1;
				memoryPointGunnerOptics="CopilotOptics";
				gunnerOpticsModel = "A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				turretInfoType = "RscOptics_UAV_gunner";
				gunnerForceOptics=0;
				startEngine=0;
				usePip=1;
				canUseScanners = 1;
				minElev = -90;
				maxElev = 90;
				initElev = -0;//
				minTurn = -180;
				maxTurn = 180;
				initTurn = 0;
				stabilizedInAxes = 3;
				class ViewOptics: RCWSOptics {};
				class Reflectors
				{
					class Cabin
					{
						color[] = {20,0,0};
						ambient[] = {20,0,0};
						intensity = 10;
						size = 1;
						innerAngle = 179;
						outerAngle = 180;
						coneFadeCoef = 0;
						position = "cabin_light";
						direction = "cabin_light_dir";
						hitpoint = "";
						selection = "";
						useFlare = 0;
						flareSize = 0;
						flareMaxDistance = 0;
						dayLight = 1;
						blinking = 0;
						class Attenuation
						{
							start = 0;
							constant = 0;
							linear = 1;
							quadratic = 1;
							hardLimitStart = 0.1;
							hardLimitEnd = 1.3;
						};
					};
					class cargo_light_1: cabin
					{
						position = "cargo_light_1";
						direction = "cargo_light_1_dir";
						intensity = 1;
						class Attenuation: Attenuation
						{
							hardLimitEnd = 4;
						};
					};
					class cargo_light_2: cargo_light_1
					{
						position = "cargo_light_2";
						direction = "cargo_light_2_dir";
					};
				};
			};
			class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
			{
                gunnerAction = "passenger_inside_1";
                gunnerCompartments = "";
                memoryPointsGetInGunner = "pos cargo";
                memoryPointsGetInGunnerDir = "pos cargo dir";
                playerPosition = 4;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerName = "Passenger (Side)";
				GunnerDoor = "";
                proxyIndex = 7;
                maxElev = 90;
                minElev = -80;
                maxTurn = 100;
                minTurn = -100;
                isPersonTurret = 1;
                ejectDeadGunner = 1;
                memoryPointGunnerOptics = "eye";
                class dynamicViewLimits{};
			};
		};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliCom";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliCom";
			};
		};
		class Reflectors
		{
			class Light1
			{
				color[] = {300,300,300};
				ambient[] = {30,30,30};
				position = "Light1";
				direction = "Light1_end";
				hitpoint = "Light1";
				selection = "Light1";
				size = 1;
				innerAngle = 1.5;//2
				outerAngle = 4;//8
				coneFadeCoef = 5;
				intensity = 1000;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0.01;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
			class Light2
			{
				color[] = {1000,1000,1200};
				ambient[] = {30,30,30};
				position = "Light2";
				direction = "Light2_end";
				hitpoint = "Light2";
				selection = "Light2";
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
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.05;
					hardLimitStart = 400;
					hardLimitEnd = 450;
				};
			};
			class Light3: Light2
			{
				position = "Light3";
				direction = "Light3_end";
				hitpoint = "Light3";
				selection = "Light3";
			};
			class Light4: Light2
			{
				position = "Light4";
				direction = "Light4_end";
				hitpoint = "Light4";
				selection = "Light4";
			};
			class Light5: Light1
			{
				innerAngle = 22;//2
				outerAngle = 90;//8
				coneFadeCoef = 1;
				intensity = 1;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 1000;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 800;hardLimitEnd = 1000;};
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
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
				drawLightSize = 0.2;
				drawLightCenterSize = 0.04;
			};
			class Blinking_Red1: Solid_Red1
			{
				name = "Blinking_Red1_pos";
				blinking = 1;
				blinkingPattern[] = {1,2};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.08;
			};
			class Blinking_Red2: Blinking_Red1
			{
				name = "Blinking_Red2_pos";
				blinkingPattern[] = {0.05,0.1,0.05,1};
			};
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
					fov = 1.5;
				};
			};
			class RightMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition = "PIP1_pos";
					pointDirection = "PIP1_dir";
					renderQuality = 2;
					renderVisionMode = 0;
					fov = 1.5;
				};
			};
		};
		class TransportItems
		{
			class _xx_Rescue_Swimmer
			{
				name = "A3PL_USCG_Rescue_Swimmer_Uniform";
				count = 2;
			};
			class _xx_Rebreather
			{
				name = "V_RebreatherB";
				count = 2;
			};
			class _xx_Diving
			{
				name = "G_Diving";
				count = 2;
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
							minRange = 50; 
							maxRange = 2500;                                              
							objectDistanceLimitCoef = -1; 
							viewDistanceLimitCoef = -1;             
						}; 
						class GroundTarget
						{                                            
							minRange = 50; 
							maxRange = 2500;
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
						range[] = {100,200,400,500,1000,2000,3000,4000,5000};
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
						range[] = {200,400,500,1000,2000,3000,4000,5000};
						resource = "RscCustomInfoSensors";
					};
				};
			};
		};
	};
	class A3PL_RescueBasket: A3PL_Motorboat
	{
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"passenger_flatground_crosslegs_settlein"};
		cargoGetOutAction[] = {"GetOutLow"};
		displayName = "Rescue Basket";
		model = "\A3PL_Planes\Jayhawk\rescueBasket\rescueBasket";
		transportSoldier = 1;
		cargoAction[] = {"passenger_flatground_crosslegs"};
		armor = 999999;
		animated = 1;
		hiddenSelections[] = {};
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		scope = 1;
		waterLeakiness = 0.5;
		class AnimationSources {};
		class HitPoints {};
		class TransportItems {};
		class Exhausts {};
		class RenderTargets {};
	};
	class A3PL_Trailer_Base;
	class A3PL_Aircraft_Dolly: A3PL_Trailer_Base
	{
		displayName = "Aircraft Dolly";
		model = "\A3PL_Planes\Aircraft_Towbar\Aircraft_Towbar";
		simulation = "airplanex";
		armor = 9999999;
		gunAimDown = 0;
		minGunElev = 0;
		maxGunElev = 0;
		minGunTurn = 0;
		maxGunTurn = 0;
		cabinOpening = 0;
		gearRetracting = 0;
		lightOnGear = 0;
		vtol = 0;
		durationGetIn = 0;
		durationGetOut = 0;
		gearUpTime = 0;
		gearDownTime = 0;
		dustEffect = "HeliDust";//
		waterEffect = "HeliWater";//
		stallWarningTreshold = 0;
		envelope[] = {0,0.01,0.4,3,3.2,3.4,3.5,3.6,3.6,3.7,3.7,3.6,1};
		thrustCoef[] = {1.26,1.25,1.23,1.21,1.18,1.14,1.09,1.03,0.96,0.87,0.48,0.12,0,0,0,0};
		elevatorCoef[] = {0,0.21,0.28,0.35,0.4,0.45,0.49,0.53,0.57,0.58,0.56};
		aileronCoef[] = {0,0.7,0.9,1.1,1.2,1.3,1.3};
		rudderCoef[] = {0,0.89,1.5,2.1,2.5,3,3.6,3.9,4,3.6,1.8};
		aileronControlsSensitivityCoef = 0;
		elevatorControlsSensitivityCoef = 0;
		rudderControlsSensitivityCoef = 0;
		aileronSensitivity = 0;
		elevatorSensitivity = 0;
		wheelSteeringSensitivity = 1;
		landingSpeed = 0;
		flapsFrictionCoef = 0;
		flaps = 0;
		airBrake = 0;
		landingAoa = 0;
		ejectDamageLimit = 0.75;
		ejectSpeed[] = {0,0,3};
		selectionRotorStill = "vrtule staticka";
		selectionRotorMove = "vrtule blur";
		memoryPointLRocket = "L raketa";
		memoryPointRRocket = "P raketa";
		memoryPointLDust = "Dolly_wheel_1_bound";
		memoryPointRDust = "Dolly_wheel_2_bound";
		class Library
		{
			libTextDesc = "Aircraft Dolly are used to tow Aircraft.";
		};
		class WingVortices {};
	};
	class A3PL_TOH_Base: A3PL_Helicopter_Medium_Base
	{
		class Turrets;
		class AnimationSources;
		class Hitpoints;
		class Sounds;
		class SoundsExt;
		class RotorLibHelicopterProperties;
		class ViewPilot;
		class ViewOptics;
		class CopilotTurret;
	};
	class Heli_Medium01_Base_H: A3PL_TOH_Base
	{
		displayName = "Bell 412 (Civil)";
		scope = 1;
		model = "\A3PL_Planes\Helicopters_Medium\Heli_Medium01_H.p3d";
		class Armory
		{
			description = "With its four-blade composite main rotor system, this is a proven multi-role helicopter capable of many emergency rescue and law enforcement roles. It replaces an older, but similar model which featured only two rotor blades.&lt;br /&gt;&lt;br /&gt;The helicopter is known for its reliability in extreme conditions and climates. It has a large cabin which can cater for cargo or up to thirteen passengers. The tough construction and bulkheads provide protection to those inside in case of roll-over. Having two engines also allows the aircraft to land even after a full single engine malfunction.";
		};
		icon = "\A3PL_Planes\Helicopters_Medium\data\UI\icons\heli_medium01_CA.paa";
		picture = "\A3PL_Planes\Helicopters_Medium\data\UI\pictures\heli_medium01_CA.paa";
		mapSize = 9;
		vehicleClass = "Helicopters_Medium";
		accuracy = 0.5;
		driverAction = "ChopperMedium_R_static_H";
		cargoAction[] = {"chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_01_H","chopperMedium_C_01_H","chopperMedium_C_01_H","chopperMedium_C_01_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H"};
		castCargoShadow = 1;
		transportSoldier = 11;
		fuelCapacity = 1251;
		fuelConsumptionRate = 0.0939;
		extCameraPosition[] = {0,-1,-20};
		class ViewPilot: ViewPilot
		{
			minMoveX = -0.3;
			maxMoveX = 0.3;
			minMoveZ = -0.1;
			maxMoveZ = 0.175;
			visionMode[] = {"Normal", "NVG"};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				memoryPointGunnerOptics = "";
				optics = 0;
				class ViewOptics: ViewPilot 
				{
					minAngleX = -65;
					maxAngleX = 85;
					initAngleX = 0;
					minAngleY = -150;
					maxAngleY = 150;
					initAngleY = 0;
					minFov = 0.3;
					maxFov = 1.2;
					initFov = 1;
				};
			};
		};
		cost = 10000000;
		maxSpeed = 259;
		driverDoor = "Pilot_Door";
		preciseGetInOut = 1;
		cargopreciseGetInOut[] = {0};//
		cargoDoors[] = {"Door_LB","Door_RB","Door_LB","Door_RB","Door_LB","Door_RB","Door_LB","Door_RB","Door_LB","Door_RB","Door_LB"};
		getInAction = "ChopperMedium_R_GetIn_H";//
		getOutAction = "ChopperMedium_R_GetOut_H";//
		usePreciseGetInAction = 1;
		hiddenSelections[] = {"camo1","camo2","camo3"};
		hiddenSelectionsTextures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_1_ext1_co.paa"};
		class ViewOptics: ViewOptics 
		{
			initAngleX = 0;
			minAngleX = -30;
			maxAngleX = 30;
			initAngleY = 0;
			minAngleY = -100;
			maxAngleY = 100;
			initFov = 0.466;
			minFov = 0.1;
			maxFov = 0.7;
			visionMode[] = {"Normal"};
			thermalMode[] = {0, 0};
		};
		LockDetectionSystem = 8;
		IncommingMisslieDetectionSystem = 0;
		irScanRangeMin = 500;
		irScanRangeMax = 1000;
		irScanToEyeFactor = 2;
		occludeSoundsWhenIn = 1;//0.56234133
		obstructSoundsWhenIn = 1;//0.31622776
		insideSoundCoef = 1;
		attenuationEffectType = "TankAttenuation";
		slingLoadMaxCargoMass = 1300;
		soundGetIn[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-get",1,1};
		soundGetOut[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-get",1,1,40};
		soundDammage[] = {"A3PL_Planes\Helicopters_Medium\Sounds\warning",5,1};
		starterClickInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\starter_click2_int",0.0056234132,1.0};
		starterClickExt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\starter_click2",316.22775,1.0,600};
		starterClick[] = {"starterClickInt","starterClickExt"};
		idleStartInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_idle_start",0.011220183,1.0};
		idleStartExt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_idle_start",1.0,1.0,600};
		idleThrottle[] = {"idleStartInt","idleStartExt"};
		transmissionDamageInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_transmission_int_2",1.0,1.0};
		transmissionDamageOut[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_transmission_ext_2",1.0,1.0,300};
		transmissionDamage[] = {"transmissionDamageInt","transmissionDamageOut"};
		rotorDamageInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_rotor_int",1.0,1.0};
		rotorDamageOut[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_rotor_ext",1.0,1.0,300};
		rotorDamage[] = {"rotorDamageInt","rotorDamageOut"};
		engineDamageInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_engine_int_2",1.0,1.0};
		engineDamageOut[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_engine_ext_2",1.0,1.0,300};
		engineDamage[] = {"engineDamageInt","engineDamageOut"};
		starterDamageInt[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_starter_int",1.0,1.0};
		starterDamageOut[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_starter_ext",1.0,1.0,300};
		starterDamage[] = {"starterDamageInt","starterDamageOut"};
		startDuration = 40;
		landingSoundInt0[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing1_int",1.0,1.0};
		landingSoundInt1[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing2_int",1.0,1.0};
		landingSoundInt2[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing3_int",1.0,1.0};
		landingSoundInt[] = {"landingSoundInt0",0.33,"landingSoundInt1",0.33,"landingSoundInt2",0.333};
		landingSoundOut0[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing1_ext",1.0,1.0,200};
		landingSoundOut1[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing2_ext",1.0,1.0,200};
		landingSoundOut2[] = {"A3PL_Planes\Helicopters_Medium\Sounds\landing3_ext",1.0,1.0,200};
		landingSoundOut[] = {"landingSoundOut0",0.33,"landingSoundOut1",0.33,"landingSoundOut2",0.33};
		class Sounds: Sounds
		{
				class Engine
				{
					sound[] = {"",1,1,1};
					frequency = "1";
					volume = "1";
				};
				class StarterLoopExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_starter_loop",1.0,1.0,300};
					volume = "camPos * (rpmStarter factor [200, 800])/10";
					frequency = 1.0;
				};
				class StarterLoopExt1
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_starter_loop_2",1.0,1.0,300};
					volume = "camPos * (rpmStarter1 factor [200, 800])/10";
					frequency = 1.0;
				};
				class EngineIdleOut
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_engine_1a_idle",5.623413,1,1500};
					frequency = "(0.8)+(0.2*(rpm factor[800, 3000]))";
					volume = "camPos*((rpm factor [800, 2000])*(rpm factor [3500,1800]))/10";
				};
				class EngineFullOut
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_engine_1a_full",10.0,1,1500};
					frequency = "(0.8)+(0.2*(rpm factor[2800, 5000]))";
					volume = "camPos * (rpm factor [2800, 4600])/10";
				};
				class EngineIdleOut2
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_engine2_idle",5.623413,1.05,1100};
					frequency = "(0.8)+(0.2*(rpm1 factor[800, 3000]))";
					volume = "camPos*((rpm1 factor [800, 2000])*(rpm1 factor [3500,1800]))/10";
				};
				class EngineFullOut2
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_ext_engine2_full",5.623413,1.05,1100};
					frequency = "(0.8)+(0.2*(rpm1 factor[2800, 5000]))";
					volume = "camPos * (rpm1 factor [2800, 4600])/10";
				};
				class EngineHumOut
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_hum",0.056234132,1,5};
					frequency = "1";
					volume = "(rotorSpeed factor [0.6, 0.85])/10";
				};
				class RotorStarterExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-ext-starter3",3.1622777,1,1200};
					frequency = "0.5 + (0.5*(rotorSpeed factor[0.05, 0.2]))";
					volume = "(camPos)*(rotorSpeed factor [0.001, 0.3]) * (rotorSpeed factor[0.6, 0.3])/10";
				};
				class RotorIdleExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-ext-idle",3.1622777,1,1600};
					frequency = 1;
					volume = "(camPos)*(rotorSpeed factor [0.15, 0.5]) * (rotorSpeed factor[0.8, 0.65])/10";
					cone[] = {1.8,3.14,2.0,0.9};
				};
				class RotorFullExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-ext-full2",10.0,1,1800};
					frequency = 1;
					volume = "(camPos)*(rotorSpeed factor [0.6, 0.85])/10";
					cone[] = {1.8,3.14,2.0,0.9};
				};
				class TransmissionDamageExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_transmission_ext_2",1.0,1.0,100};
					volume = "(camPos)*(transmissionDamage factor [0.4 , 1])/10";
					frequency = 1.0;
				};
				class MotorDamageExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_engine_ext_2",0.031622775,1.0,100};
					volume = "(camPos)*(motorDamage factor [0.4 , 1])/10";
					frequency = 1.0;
				};
				class RotorBrakeExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\rotor_break_ext_2",1.0,1.0,100};
					volume = "(camPos)*(rotorBrake)*(rotorSpeed)/10";
					frequency = 1.0;
				};
				class EngineExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine", 1.41254, 1, 800};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "camPos*((rotorSpeed-0.72)*4)/10";
				};
				class RotorExt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor", 1, 1, 1500};
					frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)/10";
					cone[] = {1.6, 3.14, 1.6, 0.95};
				};
				class RotorNoiseExt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\swist1-efected-high",1.0,1,450};
					frequency = 1;
					volume = "(rotorSpeed factor [0.6, 0.85])/10";
					cone[] = {0.3,1.0,1.0,0};
				};
				class TransmissionDamageExt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", 1, 1, 150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])/10";
				};
				class TransmissionDamageExt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", 1, 1, 150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])/10";
				};
				class StarterLoopInt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_starter_loop",3.1622777,1.0};
					volume = "(1-camPos)*(rpmStarter factor [200, 800])/60";
					frequency = 1.0;
				};
				class StarterLoopInt1
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_starter_loop_2",3.1622777,1.0};
					volume = "(1-camPos)*(rpmStarter1 factor [200, 800])/60";
					frequency = 1.0;
				};
				class EngineIdleIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_engine_1a_idle",56.23413,1};
					frequency = "(0.8)+(0.2*(rpm factor[800, 3000]))";
					volume = "(1-camPos)*((rpm factor [800, 2000])*(rpm factor [3500,1800]))/60";
				};
				class EngineFullIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_engine_1a_full",100.0,1};
					frequency = "(0.8)+(0.2*(rpm factor[2800, 5000]))";
					volume = "(1-camPos)*(rpm factor [2800, 4600])/60";
				};
				class EngineIdleIn2
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_engine2_idle",56.23413,1.05};
					frequency = "(0.8)+(0.2*(rpm1 factor[800, 3000]))";
					volume = "(1-camPos)*((rpm1 factor [800, 2000])*(rpm1 factor [3500,1800]))/60";
				};
				class EngineFullIn2
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_int_engine2_full",100.0,1.05};
					frequency = "(0.8)+(0.2*(rpm1 factor[2800, 5000]))";
					volume = "(1-camPos)*(rpm1 factor [2800, 4600])/60";
				};
				class EngineHumIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium_hum",1.0,1};
					frequency = "1";
					volume = "(rotorSpeed factor [0.6, 0.85])/60";
				};
				class RotorStarterIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-int-starter3",56.23413,1};
					frequency = "0.5 + (0.5*(rotorSpeed factor[0.05, 0.15]))";
					volume = "(1-camPos)*(rotorSpeed factor [0.001, 0.3]) * (rotorSpeed factor[0.6, 0.3])/60";
				};
				class RotorIdleIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-int-idle",56.23413,1};
					frequency = 1;
					volume = "(1-camPos)*(rotorSpeed factor [0.15, 0.5]) * (rotorSpeed factor[0.8, 0.65])/60";
				};
				class RotorFullIn
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\medium-rotor-int-full2",100.0,1};
					frequency = 1;
					volume = "(1-camPos)*(rotorSpeed factor [0.6, 0.85])/60";
				};
				class TransmissionDamageInt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_transmission_int_2",1.0,1.0};
					volume = "(1-camPos)*(transmissionDamage factor [0.4 , 1])/60";
					frequency = 1.0;
				};
				class MotorDamageInt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\damage_engine_int_2",0.031622775,1.0};
					volume = "(1-camPos)*(motorDamage factor [0.4 , 1])/60";
					frequency = 1.0;
				};
				class RotorBrakeInt
				{
					sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\rotor_break_int_2",1.0,1.0};
					volume = "(1-camPos)*(rotorBrake)*(rotorSpeed)/60";
					frequency = 1.0;
				};
				class EngineInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine", 1, 1};
					frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
					volume = "(1-camPos)*((rotorSpeed-0.75)*4)/60";
				};
				class RotorInt
				{
					sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor", 0.501187, 1};
					frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
					volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9/60";
				};
				class TransmissionDamageInt_phase1
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", 1, 1, 150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])/60";
				};
				class TransmissionDamageInt_phase2
				{
					sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", 1, 1, 150};
					frequency = "0.66 + rotorSpeed / 3";
					volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])/60";
				};
		};
		class SoundsExt: SoundsExt
		{
				class SoundEvents {};
				class Sounds
				{
					class EngineInt
					{
						sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_engine", 1, 1};
						frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
						volume = "(1-camPos)*((rotorSpeed-0.75)*4)/60";
					};
					class RotorInt
					{
						sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_int_rotor", 0.501187, 1};
						frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
						volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)*0.9/60";
					};
					class TransmissionDamageInt_phase1
					{
						sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", 1, 1, 150};
						frequency = "0.66 + rotorSpeed / 3";
						volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])/60";
					};
					class TransmissionDamageInt_phase2
					{
						sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", 1, 1, 150};
						frequency = "0.66 + rotorSpeed / 3";
						volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])/60";
					};
					class EngineExt
					{
						sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_engine", 1.41254, 1, 800};
						frequency = "rotorSpeed*(1+rotorThrust/6)*0.8";
						volume = "camPos*((rotorSpeed-0.72)*4)/10";
					};
					class RotorExt
					{
						sound[] = {"A3\Sounds_F\vehicles\air\Heli_Transport_01\Heli_Transport_01_ext_rotor", 1, 1, 1500};
						frequency = "rotorSpeed * (1-rotorThrust/5) * 1.2";
						volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)/10";
						cone[] = {1.6, 3.14, 1.6, 0.95};
					};
					class RotorNoiseExt
					{
						sound[] = {"A3PL_Planes\Helicopters_Medium\Sounds\swist1-efected-high",1.0,1,450};
						frequency = 1;
						volume = "(rotorSpeed factor [0.6, 0.85])/10";
						cone[] = {0.3,1.0,1.0,0};
					};
					class TransmissionDamageExt_phase1
					{
						sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", 1, 1, 150};
						frequency = "0.66 + rotorSpeed / 3";
						volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])/10";
					};
					class TransmissionDamageExt_phase2
					{
						sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", 1, 1, 150};
						frequency = "0.66 + rotorSpeed / 3";
						volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])/10";
					};
				};
		};
		class SoundNoises
		{
			noise0[] = {"A3PL_Planes\Helicopters_Medium\Sounds\heli-int-G1",1.7782794,1.0};
			noise1[] = {"A3PL_Planes\Helicopters_Medium\Sounds\heli-int-G2",1.7782794,1.0};
			noise2[] = {"A3PL_Planes\Helicopters_Medium\Sounds\heli-int-G3",1.7782794,1.0};
			noise3[] = {"A3PL_Planes\Helicopters_Medium\Sounds\heli-int-G4",1.7782794,1.0};
			sounds[] = {"noise0",0.1,"noise1",0.1,"noise2",0.4,"noise3",0.4};
			limitUp = "2";
			limitDown = "-2";
			timeDelay = "2";
			expression = "(engineOn*(1-camPos))*gmeterZ";
		};
		destrType = "DestructWreck";
		class AnimationSources: AnimationSources
		{
			class CoPilot_Door
			{
				source = "door";
				animPeriod = 0.6;
			};
			class Door_LB2
			{
				source = "door";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Door_LB
			{
				source = "door";
				animPeriod = 1;
				initPhase = 0;
			};
			class Inspect_Panel1_1
			{
				source = "user";
				animPeriod = 0.6;
				initPhase = 0;
			};
			class Pilot_Door: CoPilot_Door{};
			class Door_RB2: Door_LB2{};
			class Door_RB: Door_LB{};
			class Inspect_Panel2_1: Inspect_Panel1_1{};
			class Inspect_HitHRotor1
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class Inspect_HitVRotor1
			{
				source = "user";
				animPeriod = 1.5;
				initPhase = 0;
			};
			class RotorCover_Hide
			{
				source = "user";
				animPeriod = 1e-005;
				initPhase = 0;
			};
		};
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			RTDconfig = "A3PL_Planes\Helicopters_Medium\Medium-GenHeli600-DesktopSim.xml";
			defaultCollective = 0.75;
			starterTime = 20;
			throttleOffToIdle = 10;
			throttleIdleToOff = 10;
			throttleIdleToFull = 8;
			throttleFullToIdle = 15;
			autoHoverCorrection[] = {5,2.4,0};
			maxTorque = 2168;
			maxMainRotorStress = 130000;
			maxTailRotorStress = 10000;
			retreatBladeStallWarningSpeed = 71.597;
			class Procedures
			{
				class Startup
				{
					class RotorBrakeOff
					{
						delayFromCondition = 0;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
						bypass = "[4, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
					};
					class BatteriesOn
					{
						delayFromCondition = 1;
						condition = "[0, _this] call (uiNamespace getVariable 'BIS_fnc_batteriesOn')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_batteriesOn')";
						bypass = "[4, _this] call (uiNamespace getVariable 'BIS_fnc_batteriesOn')";
					};
					class StarterOn0
					{
						delayFromCondition = 2;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
					};
					class ThrottleIdle0
					{
						delayFromCondition = 1;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
					};
					class StarterOff0
					{
						delayFromCondition = 0;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
					};
					class StarterOn1
					{
						delayFromCondition = 2;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_starterOn1')";
					};
					class ThrottleIdle1
					{
						delayFromCondition = 1;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
					};
					class StarterOff1
					{
						delayFromCondition = 0;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_starterOff1')";
					};
					class WarmupStart
					{
						delayFromCondition = 2;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_warmupStart')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_warmupStart')";
					};
					class ThrottleFull0
					{
						delayFromCondition = 17;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
					};
					class ThrottleFull1
					{
						delayFromCondition = 0;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleFull1')";
					};
					class EnginesOn
					{
						delayFromCondition = 0;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_enginesOn')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_enginesOn')";
					};
				};
				class Shutdown
				{
					class ThrottleIdle0
					{
						delayFromCondition = 0;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
					};
					class ThrottleIdle1
					{
						delayFromCondition = 0;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleIdle1')";
					};
					class CoolDownStart
					{
						delayFromCondition = 0;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_cooldownStart')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_cooldownStart')";
					};
					class ThrottleClosed0
					{
						delayFromCondition = 10;
						condition = "[2, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
						statement = "[3, _this select 0, 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
						bypass = "[4, _this, 0] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
					};
					class ThrottleClosed1
					{
						delayFromCondition = 0;
						condition = "[2, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
						statement = "[3, _this select 0, 1, _this select 1] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
						bypass = "[4, _this, 1] call (uiNamespace getVariable 'BIS_fnc_throttleOff1')";
					};
					class RotorBrakeOn
					{
						delayFromCondition = 0;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOn')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOn')";
						bypass = "[4, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOn')";
					};
					class RotorBrakeOff
					{
						delayFromCondition = 0;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
						bypass = "[4, _this] call (uiNamespace getVariable 'BIS_fnc_rotorBrakeOff')";
					};
					class BatteriesOff
					{
						delayFromCondition = 0;
						condition = "[0, _this] call (uiNamespace getVariable 'BIS_fnc_batteriesOff')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_batteriesOff')";
						bypass = "[4, _this] call (uiNamespace getVariable 'BIS_fnc_batteriesOff')";
					};
					class EnginesOff
					{
						delayFromCondition = 2;
						condition = "[2, _this] call (uiNamespace getVariable 'BIS_fnc_enginesOff')";
						statement = "[3, _this select 0, _this select 1] call (uiNamespace getVariable 'BIS_fnc_enginesOff')";
					};
				};
			};
		};
		class Inspection
		{
			compartments = 2;
			
			class Panels
			{
				class Panel1
				{
					componentCount = 1;
					animTimingOpen[] = {0};
					animTimingClose[] = {0};
					accessToCompartment = 1;
				};
				class Panel2: Panel1
				{
					accessToCompartment = 2;
				};
			};
			class Obstructions
			{
				class Obstruction1
				{
					compartment = 0;
					visuals[] = {"Nest_H"};
				};
				class Obstruction2: Obstruction1{};
			};
		};
		class RopePositions
		{
			class Fastrope
			{
				class Fastrope0
				{
					position = "fastrope0";
					offset = -2;
					animations[] = {"Door_RB2",1,"Door_RB",1};
				};
				class Fastrope1
				{
					position = "fastrope1";
					offset = -2;
					animations[] = {"Door_LB2",1,"Door_LB",1};
				};
			};
			class Winch
			{
				class winch0
				{
					position = "winch0";
					animations[] = {"Door_RB2",1,"Door_RB",1};
				};
			};
		};
	};
	class Heli_Medium01_H: Heli_Medium01_Base_H
	{
		ambientType = 1;
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 0,"AddWinch", 0,"AddSheriffLabel", 0,"AddFLIR", 0};
		class textureSources
		{
			class Larkin_Aviation
			{
				author = "Jonzie";
				factions[] = {"CIV_F"};
				displayName = "Larkin Aviation";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_wave_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_wave_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_wave_co.paa"};
			};
			class Black: Larkin_Aviation
			{
				displayName = "Black";
				textures[] = {"#(argb,8,8,3)color(0,0,0,1,ca)","#(argb,8,8,3)color(0,0,0,1,ca)","#(argb,8,8,3)color(0,0,0,1,ca)"};
			};
			class Flamingo: Larkin_Aviation
			{
				displayName = "Flamingo";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_flamingo_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_flamingo_1_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_flamingo_2_co.paa"};
			};
			class Frostfire: Larkin_Aviation
			{
				displayName = "Frostfire";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_frostfire_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_frostfire_1_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_frostfire_2_co.paa"};
			};
			class Parrot: Larkin_Aviation
			{
				displayName = "Parrot";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_parrot_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_parrot_1_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium_parrot_2_co.paa"};
			};
			class Red: Larkin_Aviation
			{
				displayName = "Red";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_red_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_red_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_red_co.paa"};
			};
			class Redlines: Larkin_Aviation
			{
				displayName = "Redlines";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_redlines_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_redlines_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_redlines_co.paa"};
			};
			class Shark: Larkin_Aviation
			{
				displayName = "Shark";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_shark_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_shark_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_shark_co.paa"};
			};
			class Sun: Larkin_Aviation
			{
				displayName = "Sun";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_sun_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_sun_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_sun_co.paa"};
			};
			class Twilight: Larkin_Aviation
			{
				displayName = "Twilight";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_twilight_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_twilight_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_twilight_co.paa"};
			};
			class Wasp: Larkin_Aviation
			{
				displayName = "Wasp";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_wasp_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_wasp_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_wasp_co.paa"};
			};
			class Luxury: Larkin_Aviation
			{
				displayName = "Luxury";
				textures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_LUX_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_LUX_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_LUX_ext1_co.paa"};
			};
			class Vrana: Larkin_Aviation
			{
				displayName = "Vrana Corp Executive";
				textures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_vrana_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_vrana_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_vrana_co.paa"};
			};
			class Military: Larkin_Aviation
			{
				displayName = "Military";
				textures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext1_co.paa"};
			};
			class Veteran: Larkin_Aviation
			{
				displayName = "Veteran Transport";
				textures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_medium01_vietnam_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_medium01_vietnam_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext1_co.paa"};
			};
		};
		textureList[] = {"Larkin_Aviation", 1,"Black", 1,"Flamingo", 1,"Frostfire", 1,"Parrot", 1,"Red", 1,"Redlines", 1,"Shark", 1,"Sun", 1,"Twilight", 1,"Wasp", 1,"Luxury", 1,"Vrana", 1,"Military", 1,"Veteran", 1};
		class AnimationSources: AnimationSources
		{
			class AddCargoHook_cover {initPhase = 0;displayName = "Add Cargo Hook Cover";source = "user";animPeriod = 0.001;forceAnimatePhase = 1;forceAnimate[] = {"AddCargoHook", 0};};
			class AddCargoHook: AddCargoHook_cover {initPhase = 1;displayName = "Add Cargo Hook";forceAnimate[] = {"AddCargoHook_cover", 1};};
			class AddSearchLight: AddCargoHook_cover {initPhase = 0;displayName = "Add SearchLight";forceAnimate[] = {};};
			class AddWinch: AddCargoHook_cover {initPhase = 0;displayName = "Add Winch";forceAnimate[] = {};};
			class AddSheriffLabel: AddCargoHook_cover {initPhase = 0;displayName = "Add Sheriff Label";forceAnimate[] = {};};
			class AddFLIR: AddCargoHook_cover {initPhase = 0;displayName = "Add FLIR";forceAnimate[] = {};};
			class FLIR_HRot
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class FLIR_VRot
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class SearchLight_HRot
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
			class SearchLight_VRot
			{
				source = "user";
				animPeriod = 1e-007;
				initPhase = 0;
			};
		};
	};
	class Heli_Medium01_Coastguard_H: Heli_Medium01_H
	{
		displayName = "Bell 412 (CoastGuard)";
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 1,"AddWinch", 1,"AddSheriffLabel", 0,"AddFLIR", 0};
		hiddenSelectionsTextures[] = {"\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_main_cg_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext_cg_co.paa","\A3PL_Planes\Helicopters_Medium\data\skins\Heli_medium01_ext1_cg_co.paa"};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body = "searchLight_HRot";
				gun = "searchLight_VRot";
				animationSourceBody = "searchLight_HRot";
				animationSourceGun = "searchLight_VRot";
				cameraBegin = "z_searchlight_pos";
				cameraEnd = "z_searchlight_dir";
				memoryPointGunnerOptics = "z_searchlight_cam";
				primaryObserver = 1;
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
				optics = 1;
				class ViewOptics: ViewOptics {};
			};
		};
		class Reflectors 
		{
            class landinglight01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "landinglight01";
                selection = "landinglight01";
				size = 1;
				innerAngle = 120;
				outerAngle = 180;
				coneFadeCoef = 2;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 150;
				};
			};
			class Searchlight
			{
				color[] = {300,300,300};
				ambient[] = {30,30,30};
				position = "z_searchlight_pos";
				direction = "z_searchlight_dir";
				hitpoint = "light";
				selection = "z_searchlight_cone";
				size = 1;
				innerAngle = 1.5;
				outerAngle = 4;
				coneFadeCoef = 5;
				intensity = 1000;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0.01;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
			class Searchlight_Flare: Searchlight
			{
				innerAngle = 22;//2
				outerAngle = 90;//8
				coneFadeCoef = 1;
				intensity = 1;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 1000;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
        };
		class AnimationSources: AnimationSources
		{
			class AddSearchLight: AddSearchLight {initPhase = 1;};
			class AddWinch: AddWinch {initPhase = 1;};
		};
	};
	class Heli_Medium01_Sheriff_H: Heli_Medium01_H
	{
		displayName = "Bell 412 (Sheriff Dept.)";
		ambientType = 1;
		class Armory
		{
			description = "A medium helicopter variant - custom-tailored for the State Sheriff's Office - identified by its unique paint scheme and markings. It comes equipped with a powerful searchlight to illuminate the environment in low-visibility conditions.&lt;br /&gt;&lt;br /&gt;This helicopter is also frequently used to deploy tactical law enforcement officers by means of fast-rope insertion. The ropes are attached to both sides of the cabin, enabling officers to quickly rope down. Once everyone is safely on the ground, the ropes are detached.";
		};
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 1,"AddWinch", 0,"AddSheriffLabel", 1,"AddFLIR", 1};
		class Reflectors 
		{
            class landinglight01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "landinglight01";
                selection = "landinglight01";
				size = 1;
				innerAngle = 120;
				outerAngle = 180;
				coneFadeCoef = 2;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 150;
				};
			};
			class Searchlight
			{
				color[] = {300,300,300};
				ambient[] = {30,30,30};
				position = "z_searchlight_pos";
				direction = "z_searchlight_dir";
				hitpoint = "light";
				selection = "z_searchlight_cone";
				size = 1;
				innerAngle = 1.5;
				outerAngle = 4;
				coneFadeCoef = 5;
				intensity = 1000;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0.01;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
			class Searchlight_Flare: Searchlight
			{
				innerAngle = 22;//2
				outerAngle = 90;//8
				coneFadeCoef = 1;
				intensity = 1;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 1000;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
        };
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body = "searchLight_HRot";
				gun = "searchLight_VRot";
				animationSourceBody = "searchLight_HRot";
				animationSourceGun = "searchLight_VRot";
				cameraBegin = "z_searchlight_pos";
				cameraEnd = "z_searchlight_dir";
				memoryPointGunnerOptics = "z_searchlight_cam";
				primaryObserver = 1;
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
				optics = 1;
				class ViewOptics: ViewOptics {};
			};
		};
		hiddenSelectionsTextures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_medium01_SHERIFF_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_medium01_SHERIFF_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_medium01_SHERIFF_ext1_co.paa"};
		class AnimationSources: AnimationSources
		{
			class AddSearchLight: AddSearchLight {initPhase = 1;};
			class AddSheriffLabel: AddSheriffLabel {initPhase = 1;};
		};
	};
	class Heli_Medium01_Luxury_H: Heli_Medium01_H
	{
		model = "\A3PL_Planes\Helicopters_Medium\Heli_Medium01_luxury_H.p3d";
		displayName = "Bell 412 (Luxury)";
		ambientType = 1;
		transportSoldier = 5;
		cargoAction[] = {"chopperMedium_C_Relax_static_H"};
		class CargoSpec
		{
			class Cargo1
			{
				showHeadPhones = 0;
			};
		};
		class Armory
		{
			description = "The executive and VIP market is expanding rapidly, and these types of client require more luxurious and comfortable helicopter configurations.&lt;br /&gt;&lt;br /&gt;The executive model of the medium helicopter has an interior cabin with large leather seats and high quality interior finishing and details.";
		};
	};
	class Heli_Medium01_Medic_H: Heli_Medium01_H
	{
		displayName = "Bell 412 (Air Ambulance)";
		model = "\A3PL_Planes\Helicopters_Medium\Heli_Medium01_medic_H.p3d";
		ambientType = 1;
		transportSoldier = 4;
		cargoAction[] = {"chopperMedium_CIN_static_H","chopperMedium_C_Relax_static_H","chopperMedium_C_Relax_static_H","chopperMedium_C_Relax_static_H"};
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 1,"AddWinch", 1,"AddSheriffLabel", 0,"AddFLIR", 0};
		class Reflectors 
		{
            class landinglight01
			{
				color[] = {1900,1800,1700};
				ambient[] = {5,5,5};
				position = "landinglight01_pos";
				direction = "landinglight01_dir";
				hitpoint = "landinglight01";
                selection = "landinglight01";
				size = 1;
				innerAngle = 120;
				outerAngle = 180;
				coneFadeCoef = 2;
				intensity = 1;
				useFlare = 1;
				dayLight = 0;
				flareSize = 1;
				class Attenuation
				{
					start = 2.0;
					constant = 0;
					linear = 0.1;
					quadratic = 0.05;
					hardLimitStart = 50;
					hardLimitEnd = 150;
				};
			};
			class Searchlight
			{
				color[] = {300,300,300};
				ambient[] = {30,30,30};
				position = "z_searchlight_pos";
				direction = "z_searchlight_dir";
				hitpoint = "light";
				selection = "z_searchlight_cone";
				size = 1;
				innerAngle = 1.5;
				outerAngle = 4;
				coneFadeCoef = 5;
				intensity = 1000;
				useFlare = 0;
				dayLight = 1;
				flareSize = 0;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0.01;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
			class Searchlight_Flare: Searchlight
			{
				innerAngle = 22;//2
				outerAngle = 90;//8
				coneFadeCoef = 1;
				intensity = 1;
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 1000;
				class Attenuation {start = 1;constant = 0;linear = 0;quadratic = 0;hardLimitStart = 800;hardLimitEnd = 1000;};
			};
        };
		class AnimationSources: AnimationSources
		{
			class AddSearchLight: AddSearchLight {initPhase = 1;};
			class AddWinch: AddWinch {initPhase = 1;};
		};
		class Armory
		{
			description = "This is the specially-equipped Search and Rescue variant of the medium class of helicopters. Its interior caters for in-flight medical assistance, and it features wider side-doors that offer more cabin space to patients on stretchers.&lt;br /&gt;&lt;br /&gt;Finding casualties stranded in hard-to-reach locations is assisted by a searchlight. Getting them aboard can be achieved through the use of a winch system, which lowers a rescue-worker down, attaches the casualty to his harness and raises them both towards the helicopter.";
		};
		hiddenSelectionsTextures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_medic_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_medic_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_medic_ext1_co.paa"};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				body = "searchLight_HRot";
				gun = "searchLight_VRot";
				animationSourceBody = "searchLight_HRot";
				animationSourceGun = "searchLight_VRot";
				memoryPointGunnerOptics = "z_searchlight_cam";
				primaryObserver = 1;
				minElev = -74;
				maxElev = 14;
				initElev = -5;
				minTurn = -171;
				maxTurn = 171;
				initTurn = 0;
				optics = 1;
				class ViewOptics: ViewOptics {};
			};
		};
	};
	class Heli_Medium01_Military_Base_H: Heli_Medium01_H
	{
		model = "\A3PL_Planes\Helicopters_Medium\Heli_Medium01_military_H.p3d";
		icon = "\A3PL_Planes\Helicopters_Medium\data\UI\icons\heli_medium02_CA.paa";
		picture = "\A3PL_Planes\Helicopters_Medium\data\UI\pictures\heli_medium02_CA.paa";
		cargoCanEject = 1;
		cargoAction[] = {"chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_01_H"};
		enableManualFire = 0;
		transportSoldier = 9;
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 0,"AddWinch", 0,"AddSheriffLabel", 0,"AddFLIR", 0,"AddMILITARY_cargoseats", 1,"AddVeteranLabel", 0};
		class AnimationSources: AnimationSources
		{
			class AddMILITARY_cargoseats: AddCargoHook_cover {initPhase = 1;displayName = "Add Military Cargo Seats";forceAnimate[] = {};};
			class AddVeteranLabel: AddCargoHook_cover {initPhase = 0;displayName = "Add Veteran Label";forceAnimate[] = {};};
		};
		hiddenSelectionsTextures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext1_co.paa"};
	};
	class Heli_Medium01_Military_H: Heli_Medium01_Military_Base_H
	{
		displayName = "Bell 412 (Ex-Military)";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			defaultCollective = 0.8;
		};
		class Armory
		{
			description = "While often used in civilian roles, the medium helicopter is perhaps even more well-known for its military service. This armed variant features unguided rocket pods on both sides, as well as heavy multi-barrel machine guns for door gunners.&lt;br /&gt;&lt;br /&gt;It can be expanded by various advanced systems and components, such as Forward-Looking InfraRed, a searchlight, a winch and cargo hooks.";
		};
		cargoAction[] = {"chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_Straight_static_H","chopperMedium_C_01_H"};
	};
	class Heli_Medium01_Veteran_H: Heli_Medium01_Military_Base_H
	{
		displayName = "Bell 412 (Veteran Transport)";
		hiddenSelectionsTextures[] = {"A3PL_Planes\Helicopters_Medium\data\Heli_medium01_vietnam_main_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_medium01_vietnam_ext_co.paa","A3PL_Planes\Helicopters_Medium\data\Heli_Medium01_military_ext1_co.paa"};
		class Armory
		{
			description = "Used primarily in air shows and memorial events, this is a heavily modified military helicopter. Its distinct shape reminds all of those who took part in them of various military conflicts around the world.&lt;br /&gt;&lt;br /&gt;The striking shark's mouth paint scheme was used to express a form of individuality, but also caused fear in the enemy forces encountering the aircraft.";
		};
		animationList[] = {"AddCargoHook_cover", 1,"AddCargoHook", 0,"AddSearchLight", 0,"AddWinch", 0,"AddSheriffLabel", 0,"AddFLIR", 0,"AddMILITARY_cargoseats", 1,"AddVeteranLabel", 1};
		class AnimationSources: AnimationSources
		{
			class AddVeteranLabel: AddVeteranLabel {initPhase = 1;};
		};
	};
};