class CfgPatches
{
	class A3FL_AS350
	{
		units[] = {"A3FL_AS350_CIV"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Air_F"};
	};
};
class RCWSOptics;
class CfgVehicles
{
	class Helicopter;
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Helicopter_Base_H: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
		};
		class AnimationSources;
		class Eventhandlers;
		class Viewoptics;
		class ViewPilot;
		class Reflectors
		{
			class Right;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
			class HitGlass6;
		};
	};
	class A3FL_AS350_base: Helicopter_Base_H
	{
		altFullForce = 4000;
		altNoForce = 6000;
		maxSpeed = 222;
		fuelCapacity=350;
		fuelConsumptionRate=0.085;
		maxFordingDepth = 0.55;
		mainBladeRadius = 5.1;
		liftForceCoef = 1.1;
		bodyFrictionCoef = 0.69999999;
		cyclicAsideForceCoef = 1.0;
		cyclicForwardForceCoef = 1.0;
		backRotorForceCoef = 1.0;
		accuracy = 0.5;
		crewCrashProtection=0;
		displayName = "AS350 Base";
		model = "A3FL_Air\AS350\A3FL_AS350.p3d";
		driveOnComponent[] = {"Skids"};
		icon = "\A3\Air_F\Heli_Light_02\Data\UI\Map_Heli_Light_02_CA.paa";
		picture = "\A3\Air_F\Heli_Light_02\Data\UI\Heli_Light_02_CA.paa";
		driverAction = "pilot_Heli_Transport_03";
		driverInAction = "pilot_Heli_Transport_03";
		precisegetinout = 1;
		GetInAction = "pilot_Heli_Transport_03_Enter";
		GetOutAction = "pilot_Heli_Transport_03_Exit";
		driverDoor = "Pilot_Door";
		cargoGetInAction[] = {"GetInHeli_Light_01bench"};
		cargoGetOutAction[] = {"GetOutLow"};
		transportSoldier = 3;
		cargoAction[] = {"passenger_apc_narrow_generic03","passenger_apc_narrow_generic01","passenger_generic01_foldhands"};
		memoryPointsGetInCargo[] = {"pos cargo 1","pos cargo 2","pos cargo 2"};
		memoryPointsGetInCargoDir[] = {"pos cargo 1 dir","pos cargo 2 dir","pos cargo 2 dir"};
		hideWeaponsCargo = 1;
		cargoProxyIndexes[] = {1,2,3};
		maximumLoad = 2500;
		cargoCanEject = 1;
		driverCanEject = 1;
		extCameraPosition[] = {0,2,-15};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment2","Compartment2","Compartment2"};
		LockDetectionSystem = 0;
		incomingMissileDetectionSystem = 0;
		memoryPointDriverOptics = "slingCamera";
		slingLoadMaxCargoMass = 500;
		slingLoadMemoryPoint = "slingLoad0";
		enableManualFire = 0;
		attenuationEffectType = "CarAttenuation";
		radarTarget = 1;
		radarTargetSize = 1;
		irTarget = 1;
		irTargetSize = 2;
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\open",
			0.562341,
			1
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\close",
			1,
			1,
			50
		};
		soundEnviron[]=
		{
			"",
			0.031623,
			1
		};
		soundDammage[]=
		{
			"A3\Sounds_F\air\Heli_Light_02\crash",
			0.562341,
			1
		};
		soundEngineOnInt[]=
		{
			"A3FL_Air\AS350\sound\bell_startup.wav",
			0.562341,
			1
		};
		soundEngineOnExt[]=
		{
			"A3FL_Air\AS350\sound\bell_startup.wav",
			0.794328,
			1,
			600
		};
		soundEngineOffInt[]=
		{
			"A3FL_Air\AS350\sound\bell_shutdown.wav",
			0.562341,
			1
		};
		soundEngineOffExt[]=
		{
			"A3FL_Air\AS350\sound\bell_shutdown.wav",
			0.794328,
			1,
			600
		};
		soundLocked[]=
		{
			"",
			0.100000,
			1
		};
		soundIncommingMissile[]=
		{
			"",
			0.100000,
			1
		};
		slingCargoAttach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineDownEndINT",
			1,
			1
		};
		slingCargoAttach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookLock",
			1,
			1,
			80
		};
		slingCargoAttach[]=
		{
			"slingCargoAttach0",
			"slingCargoAttach1"
		};
		slingCargoDetach0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_engineUpEndINT",
			1,
			1
		};
		slingCargoDetach1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_1hookUnlock",
			1,
			1,
			80
		};
		slingCargoDetach[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoDetachAir0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_int",
			1,
			1
		};
		slingCargoDetachAir1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_unhook_air_ext",
			1,
			1,
			80
		};
		slingCargoDetachAir[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		slingCargoRopeBreak0[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_int",
			1,
			1
		};
		slingCargoRopeBreak1[]=
		{
			"A3\Sounds_F\vehicles\air\noises\SL_rope_break_ext",
			1,
			1,
			80
		};
		slingCargoRopeBreak[]=
		{
			"slingCargoDetach0",
			"slingCargoDetach1"
		};
		class Sounds
		{
			class Engine
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor03c.wav",
					1.778279,
					1,
					900
				};
				frequency="rotorSpeed";
				volume="camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorLowOut
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor01f.wav",
					1.412538,
					1,
					1200
				};
				frequency="rotorSpeed";
				volume="camPos*(0 max (rotorSpeed-0.1))";
				cone[]={1.600000,3.140000,1.600000,0.950000};
			};
			class RotorHighOut
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor02f.wav",
					1.778279,
					1,
					1500
				};
				frequency="rotorSpeed";
				volume="camPos*10*(0 max (rotorThrust-0.9))";
				cone[]={1.600000,3.140000,1.600000,0.950000};
			};
			class RotorNoiseExt
			{
				sound[]=
				{
					"",
					1,
					1,
					800
				};
				frequency=1;
				volume="(camPos*(rotorSpeed factor [0.6, 0.85]))";
				cone[]={0.700000,1.300000,1,0};
			};
			class EngineIn
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor03a.wav",
					1,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*((rotorSpeed-0.75)*4)";
			};
			class RotorLowIn
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor01f.wav",
					1.258925,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*(0 max (rotorSpeed-0.1))";
			};
			class RotorHighIn
			{
				sound[]=
				{
					"A3FL_Air\AS350\sound\xbell_rotor02f.wav",
					1.412538,
					1
				};
				frequency="rotorSpeed";
				volume="(1-camPos)*3*(rotorThrust-0.9)";
			};
			class RotorNoiseInt
			{
				sound[]=
				{
					"",
					0.031623,
					1
				};
				frequency=1;
				volume="(rotorSpeed factor [0.6, 0.85])";
				cone[]={0.700000,1.300000,1,0};
			};
		};
		class MFD{};
		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust1";
				direction = "exhaust1_dir";
				effect = "ExhaustsEffectHeliMed";
			};
			class Exhaust2
			{
				position = "exhaust2";
				direction = "exhaust2_dir";
				effect = "ExhaustsEffectHeliMed";
			};
		};
		class Damage
		{
			tex[] = {};
			mat[] = {};
		};
		class CargoTurret;
		class CopilotTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 1;
				gunnerAction = "copilot_Heli_Light_02";
				gunnerInAction = "copilot_Heli_Light_02";
				memoryPointsGetInGunner = "pos codriver";
				memoryPointsGetInGunnerDir = "pos codriver dir";
				gunnerGetInAction = "copilot_Heli_Light_03_Enter";
				gunnerGetOutAction = "copilot_Heli_Light_03_Exit";
				selectionFireAnim = "";
				preciseGetInOut = 1;
				GunnerDoor = "CoPilot_Door";
				gunnerRightHandAnimName = "stick_copilot";
				proxyIndex = 1;
				commanding = -1;
				
				body="Camera_Spin";
				gun="Camera_Lift";
				animationSourceBody="Camera_Spin";
				animationSourceGun="Camera_Lift";
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
				class ViewOptics: RCWSOptics {
					visionMode[] = {"Normal"};
				};
			};
			class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
			{
                gunnerAction = "passenger_inside_3";
                gunnerCompartments = "";
				memoryPointsGetInGunner = "pos gunner1";
				memoryPointsGetInGunnerDir = "pos gunner1 dir";
                playerPosition = 4;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerName = "Right Gunner";
				GunnerDoor = "";
                proxyIndex = 4;
				maxElev=10;
				minElev=-70;
				maxTurn=-30;
				minTurn=-110;
                isPersonTurret = 1;
                ejectDeadGunner = 1;
                memoryPointGunnerOptics = "eye";
				enabledByAnimationSource="Door_RB";
                class dynamicViewLimits{};
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 8;
			};
		};
		class UserActions{};
		class AnimationSources: AnimationSources
		{
			class Copilot_Door
			{
				source="door";
				animPeriod=0.5;
				initPhase=0;
				sound="";
			};
			class Pilot_Door
			{
				source="door";
				animPeriod=0.5;
				initPhase=0;
				sound="";
			};
			class Door_LB
			{
				source="door";
				animPeriod=1.5;
				initPhase=0;
				sound="";
			};
			class Door_RB
			{
				source="door";
				animPeriod=1.5;
				initPhase=0;
				sound="";
			};
		};
		hiddenSelections[] = {"camo1","camo2","glass1","glass2","glass3","glass4","glass5","glass6","glass7","glass8","glass9","glass10"};
		class Reflectors: Reflectors			/// landing lights of the heli, turned on by AI while in night and "careless" or "safe"
		{
			class Right
			{
				color[] = {7000,7500,10000};	/// defines red, green, blue and alpha components of the light
				ambient[] = {70,75,100};		/// the same definition format for colouring the environment around
				intensity = 50;					/// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				size = 1;						/// defines the visible size of light, has not much of an effect now
				innerAngle = 15;				/// angle from light direction vector where the light is at full strength
				outerAngle = 65;				/// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;				/// coefficient of fading the light between inner and outer cone angles

				position = "Light_R_pos";		/// name of memory point in model to take the origin of the light
				direction = "Light_R_dir";		/// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_R_hitpoint";	/// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_R";			/// name of selection in visual lods of the model that are going to be hidden while the light is off

				useFlare = true;				/// boolean switch if the light produces flare or not
				flareSize = 10;					/// how big is the flare, using the same metrics as intensity
				flareMaxDistance = 250;			/// maximum distance where the flare is drawn

				dayLight = false;				/// boolean switch if the light is used during day or not

				class Attenuation
				{
					start = 0;					/// offset of start of the attenuation
					constant = 0;				/// constant attenuation of the light in any distance from source
					linear = 1;					/// coefficient for linear attenuation
					quadratic = 1;				/// coefficient for attenuation with square of distance from source

					hardLimitStart = 100;		/// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 200;			/// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};	
			
		};	
	};
	class A3FL_AS350_CIV: A3FL_AS350_base
	{
		scope = 2;
		side = 3;
		faction = "CIV_F";
		crew = "C_man_pilot_F";
		accuracy = 1.5;
		displayName = "Eurocopter AS 350";
		author = "Andrew";
		icon = "";
		picture = "";
		canFloat = 1;
		waterLeakiness = 0;
		hiddenSelectionsTextures[] = {"A3FL_Air\AS350\data\CIV\as350_sign_civ_co.paa"};
		class AnimationSources: AnimationSources
		{
			class Collision_Lights
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class bat_epu
			{
				source="user";
				animperiod=0.5;
				initPhase=0;
			};
			class dct_bat: bat_epu {};
			class avionic: bat_epu {};
			class gene: bat_epu {};
			class ignition: bat_epu {};
			class lightswitch: bat_epu {};
		};
		class EventHandlers
        {
            init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
        };
	};
};