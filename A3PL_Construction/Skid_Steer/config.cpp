class CfgPatches 
{
	class A3PL_Steer
	{
		units[] = {"A3PL_Steer"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3_Soft_F"};
	};
};

class CfgVehicles {
	class LandVehicle;
	class Tank: LandVehicle {
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank {
		class Turrets {
			class MainTurret:NewTurret {
				class Turrets {
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
		class HitPoints: HitPoints {
			class HitHull;
			class HitEngine;
			class HitLTrack;
			class HitRTrack;
		};
		class Sounds: Sounds {
			class Engine;
			class Movement;
		};
	};
	
	class A3PL_Steer_base: Tank_F {
		displayName = "Skidsteer";
		accuracy = 0.3;
		model = "\A3PL_Construction\Skid_Steer\A3PL_Steer";
		picture =	"\A3\armor_f_gamma\MBT_02\Data\UI\MBT_02_Base_ca.paa";
		icon =	"\A3\armor_f_gamma\MBT_02\Data\UI\map_MBT_02_ca.paa";
		simulation			= tankX;
		enginePower			= 150;
		maxOmega 			= 100;
		peakTorque 			= 50;
		hasDriver = true;	// default
		hasGunner = false;	// default
		hasCommander =false;
		driverAction = "ManActTestDriverOut";
		driverInAction = "ManActTestDriver";
		driverIsCommander = true;
		driverForceOptics = false;
		ejectDeadDriver = true;
		forceHideDriver = false;
		torqueCurve[] 		= {
			{0, 0},
			{(1600/2640), (2650/2850)},
			{(1800/2640), (2800/2850)},
			{(1900/2640), (2850/2850)},
			{(2000/2640), (2800/2850)},
			{(2200/2640), (2750/2850)},
			{(2400/2640), (2600/2850)},
			{(2640/2640), (2350/2850)}
		};
		thrustDelay			= 0.1;  
		clutchStrength 		= 180.0;
		fuelCapacity		= 10;
		brakeIdleSpeed		= 1.78; 
		latency 			= 0.1;
		tankTurnForce		= 32329; //11xmass

		/// Gearbox and transmission
		idleRpm = 700; // RPM at which the engine idles.
		redRpm = 2640; // RPM at which the engine redlines.

		engineLosses = 25; // power losses on the engine's crank-shaft (before the gearbox) in Nm. (Multiplied by the gear ratio)
		transmissionLosses = 15; // power losses on wheel axis (in/after the gearbox) in Nm. (Constant)

		class complexGearbox {
			GearboxRatios[]    = {"R2",-3.9,"N",0,"D1",4.7,"D2",3.5,"D3",2.6,"D4",2.0,"D5",1.5,"D6",1.125,"D7",0.85};
			TransmissionRatios[] = {"High",15};
			gearBoxMode        = "auto"; //gearbox can be of type: full-auto (only requires 'W' or 'S'), auto (requires shift between drive and reverse), semi-auto, manual
			moveOffGear        = 1; // defines what gear an automatic or semi-automatic gearbox will move off from stationary in. 1 by default.
			driveString        = "D"; // string to display in the HUD for forward gears.
			neutralString      = "N"; // string to display in the HUD for neutral gear.
			reverseString      = "R"; // string to display in the HUD for reverse gears.
			transmissionDelay  = 0.1;
		};
		/// end of gearbox

		class Wheels {
			class L2 {
				boneName = "wheel_podkoloL1";
				center   = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				damping  = 75.0;
				// tanks do not have steerable wheels
				steering = 0;
				/// We need to distinguish the side to apply the right thrust value
				side = "left";
				/// weight of the wheel is defined per wheel, it reduces overall mass of vehicle
				weight = 150;
				mass = 150;
				MOI = 25;
				latStiffX = 25;
				latStiffY = 280;
				longitudinalStiffnessPerUnitGravity = 100000;
				maxBrakeTorque = 40000;
				sprungMass = 4000.0;
				springStrength = 324000;
				springDamperRate = 36000;
				dampingRate = 1.0;
				dampingRateInAir = 8830.0;
				dampingRateDamaged = 10.0;
				dampingRateDestroyed = 10000.0;
				maxDroop = 0.15;
				maxCompression = 0.15;
			};
			class L1: L2 {
				boneName = "wheel_podkoloL2";
				center   = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				side = "left";
			};
			class R2: L2 {
				boneName = "wheel_podkolop1";
				center   = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				side = "right";
			};
			class R1: R2 {
				boneName = "wheel_podkolop2";
				center   = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				side = "right";
			};
		};
		
		cost = 1500000;
		damageResistance = 0.02;
		crewVulnerable = false;
		armor = 500;
		armorStructural = 6;
		
		class HitPoints: HitPoints {
			class HitHull: HitHull {	// Handle internal damage
				armor=0.8;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.14;
				explosionShielding = 2.0;
				radius = 0.25;
			};
			class HitEngine: HitEngine {
				armor=1;
				material=-1;
				name="motor";
				passThrough=0.8;
				minimalHit = 0.24;
				explosionShielding = 1;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="pas_L";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="pas_P";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
		};
		class Turrets: Turrets {
			class MainTurret: MainTurret {
				class Turrets: Turrets {
					class CommanderOptics: CommanderOptics {
						// Animation class
						body = "obsTurret";
						gun = "obsGun";

						// Animation source
						animationSourceBody = "obsTurret";
						animationSourceGun = "obsGun";

						// Servos
						maxHorizontalRotSpeed = 1.8;	// 1 = 45°/sec
						maxVerticalRotSpeed = 1.8;		// 1 = 45°/sec
						stabilizedInAxes = StabilizedInAxesBoth;
						soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};
						minElev=-05;
						maxElev=+60;
						initElev=0;
						minTurn=-360;
						maxTurn=+360;
						initTurn=0;

						// Weapon and magazines
						memoryPointGun = "usti hlavne3";
						gunBeg = "usti hlavne3";
						gunEnd = "konec hlavne3";
						weapons[] = {HMG_NSVT, SmokeLauncher};	// you may need different weapon class to provide firing effects emit from proper position.
						magazines[] = {450Rnd_127x108_Ball, 450Rnd_127x108_Ball, SmokeLauncherMag};


						// FCS
						turretInfoType = "RscWeaponRangeZeroing";
						discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
						discreteDistanceInitIndex = 2;

						// Optics view
						memoryPointGunnerOutOptics = "commanderview";
						memoryPointGunnerOptics= "commanderview";
						gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
						gunnerOutOpticsModel = "";	// leave "" to disable optics view
						gunnerOpticsEffect[] = {};	// post processing effets
						gunnerHasFlares = 1;	// flare visual effect when looking at light source
						class ViewOptics: ViewOptics {
							initAngleX=0;
							minAngleX=-30;
							maxAngleX=+30;
							initAngleY=0;
							minAngleY=-100;
							maxAngleY=+100;
							// Field of view values: 1 = 120°
							initFov=0.155;
							minFov=0.034;
							maxFov=0.155;
							visionMode[] = {"Normal","TI"};
							thermalMode[] = {0,1};
						};

						// Gunner operations
						gunnerAction = mbt2_slot2b_out;
						gunnerInAction = mbt2_slot2b_in;
						gunnerGetInAction = GetInHigh;
						gunnerGetOutAction = GetOutHigh;
						startEngine = 0;	// Turning this turret should not turn engine on.
						viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.
						outGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.
						inGunnerMayFire = 1;	// Turn off to make player able to look around freely outside optics view.

						class HitPoints {
							class HitTurret	{
								armor = 0.3;
								material = -1;
								name = "vezVelitele";
								visual="vezVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
							class HitGun	{
								armor = 0.3;
								material = -1;
								name = "zbranVelitele";
								visual="zbranVelitele";
								passThrough = 0;
								minimalHit = 0.03;
								explosionShielding = 0.6;
								radius = 0.25;
							};
						};
						selectionFireAnim = "zasleh3";
					};
				};

				// Coaxial gun
				memoryPointGun = "usti hlavne2";
				selectionFireAnim = "zasleh2";

				// Main gun
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";

				// Weapons and magazines
				weapons[]={cannon_120mm,LMG_M200};
				magazines[]={32Rnd_120mm_APFSDS_shells_Tracer_Red, 16Rnd_120mm_HE_shells_Tracer_Red, 2000Rnd_65x39_belt};

				// Turret servos
				minElev=-5;
				maxElev=+20;
				initElev=10;
				soundServo[]= {"A3\Sounds_F\vehicles\armor\noises\servo_best", db-40, 1.0,50};

				// FCS
				turretInfoType = "RscWeaponRangeZeroing";
				discreteDistance[] = {
					100,200,300,400,500,600,700,800,
					900,1000,1100,1200,1300,1400,1500,1600,
					1700,1800,1900,2000,2100,2200,2300,2400
				};
				discreteDistanceInitIndex = 5;	// start at 600 meters

				// Optics view
				memoryPointGunnerOptics= "gunnerview";
				gunnerOutOpticsModel = "";
				gunnerOutOpticsEffect[] = {};
				gunnerOpticsEffect[] = {};
				gunnerForceOptics = 1;

				// Field of view values: 1 = 120°
				class OpticsIn {
					class Wide: ViewOptics {
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=+30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=+100;
						initFov=0.3;
						minFov=0.3;
						maxFov=0.3;
						visionMode[] = {"Normal","Ti"};
						thermalMode[] = {4,5}; //red hot chilli
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_w_F.p3d";
						gunnerOpticsEffect[] = {};
					};
					class Medium: Wide {
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_m_F.p3d";
						initFov=0.07;
						minFov=0.07;
						maxFov=0.07;
					};
					class Narrow: Wide {
						gunnerOpticsModel = "\A3\Weapons_F\Reticle\Optics_Gunner_MTB_02_n_F.p3d";
						initFov=0.028;
						minFov=0.028;
						maxFov=0.028;
					};
				};

				// Gunner operations and animations
				gunnerAction = mbt2_slot2a_out;
				gunnerInAction = mbt2_slot2a_in;
				forceHideGunner = 0;
				inGunnerMayFire = 1;	// set to 0 to let gunner look around the internal compartment if modeled
				viewGunnerInExternal = 1; // Needed to make gunner possible to be killed with penetrating rounds.

				class HitPoints {
					class HitTurret	{
						armor = 0.8;
						material = -1;
						name = "vez";
						visual="vez";
						passThrough = 0;
						minimalHit = 0.02;
						explosionShielding = 0.3;
						radius = 0.25;
					};
					class HitGun	{
						armor = 0.3;
						material = -1;
						name = "zbran";
						visual="";
						passThrough = 0;
						minimalHit = 0;
						explosionShielding = 1;
						radius = 0.25;
					};
				};
			};
		};
		class AnimationSources : AnimationSources{};

		class Damage {};

		smokeLauncherGrenadeCount = 8; //Number of smoke shells launched at once
		smokeLauncherVelocity = 14; //Velocity which smoke shells are launched at
		smokeLauncherOnTurret = 1; //0 if smoke launchers are on hull, 1 if on turret
		smokeLauncherAngle = 120; //Angle within which smoke grenades are launched (actual spacing may end up smaller so use slighty higher number)

		class ViewOptics: ViewOptics {
			visionMode[] = {};
		};

		class Exhausts {
			class Exhaust1 {
				position = "exhaust";
				direction = "exhaust_dir";
				effect = "ExhaustEffectTankBack";
			};
		};

		class Reflectors {
			class Left {
				color[] 	= {1900, 1300, 950};
				ambient[]	= {5,5,5};
				position 	= "Light_L";
				direction 	= "Light_L_end";
				hitpoint 	= "Light_L";
				selection	= "Light_L";
				size 		= 1;
				innerAngle 	= 100;
				outerAngle 	= 179;
				coneFadeCoef = 10;
				intensity 	= 1; //17.5
				useFlare 	= 0;
				dayLight 	= 0;
				flareSize 	= 1.0;
				class Attenuation {
					start 		= 1.0;
					constant 	= 0;
					linear 		= 0;
					quadratic 	= 0.25;
					hardLimitStart = 30;
					hardLimitEnd = 60;
				};
			};
			class Right: Left {
				position 	= "Light_R";
				direction 	= "Light_R_end";
				hitpoint 	= "Light_R";
				selection 	= "Light_R";
			};
			class Right2: Right {
				position 	= "light_R_flare";
				useFlare 	= 1;
			};
			class Left2: Left {
				position 	= "light_L_flare";
				useFlare 	= 1;
			};
		};
		aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
	};

	class A3PL_Steer: A3PL_Steer_base {
		scope = 2;
		scopeCurator = 2;
		accuracy = 1000;
		displayName = "Skidsteer";
	};
};
