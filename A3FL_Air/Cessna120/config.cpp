class CfgPatches
{
	class A3FL_Air_Cesna120
	{
		units[] = {"A3FL_Cessna120"};
		weapons[] = {};
		requiredVersion = 3.2;
		requiredAddons[] = {"A3_Soft_F","A3PL_Planes"};
	};
};

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions {cessna_pilot = "cessna_pilot";};
};

class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class cessna_pilot: Crew
		{
			file = "\a3pl_planes\cessna172\anim\cessnaPilot.rtm";
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1}; 			
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			interpolateTo[] = {"",1};
			leaning = "crewShake_shoulders";
		};	
	};
};

class CfgVehicles {
	class Plane;
	class Plane_Base_F: Plane
	{
		class Turrets;
		class NewTurret;
		class ViewGunner;
		class AnimationSources;
	};
	class A3FL_Cessna120: Plane_Base_F
	{
		displayName = "Cessna 120";
		model = "\A3FL_Air\Cessna120\A3FL_Cessna120";
		accuracy = 0.2;
		//icon = "A3FL_Air\Cessna120\icon.paa";
		//picture = "A3FL_Air\Cessna120\picture.paa";
		scope = 2;
		author = "A3FL Winston";
		hiddenSelections[] = {"camo0"};
		hiddenselectionstextures[]={"A3FL_Air\Cessna120\data\cessna120_body_dif.paa"};
		extCameraPosition[] = {0,1.3,-8};

		transportSoldier = 1;
		getInAction = "GetInLow";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetOutLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		driverDoor = "Door_LF";
		nightVision = true;

		driverAction = "cessna_pilot";
		cargoAction[] = {passenger_apc_narrow_generic03,passenger_apc_generic02,passenger_apc_narrow_generic03};
		gearRetracting = false;
		cargoCanEject = 1;		
		driverCanEject = 1;	
		driveOnComponent[] = {"wheel_1","wheel_2","wheel_3"};
		
		driverLeftHandAnimName = "stick_pilot";
		driverRightHandAnimName = "stick_pilot";
		driverLeftLegAnimName = "rudder_pilot1";
		driverRightLegAnimName = "rudder_pilot2";

		insideSoundCoef = 0.6;
		landingSpeed = 180;
		maxSpeed = 290;
		armor = 100;
		ejectSpeed[] = {0,0,-0.6};
		flapsFrictionCoef = 3.5;
		wheelSteeringSensitivity = 0.3; //was 0.7
		type = "VAir";
		threat[] = {0.1,1,0.7};
		aileronSensitivity = 0.5;
		elevatorSensitivity = 0.09;
		noseDownCoef = 2.01;
		landingAoa = "7*3.1415/180";
		envelope[] = {0,0.2,0.9,2.1,2.5,3.3,3.5,3.5,3.5,3.0,2.5,2.0};
		irTarget = 1;
		irScanRange = 2000;
		irScanGround = 1;
		weapons[] = {};
		magazines[] = {};
		
		class RenderTargets {};
		attenuationEffectType = "HeliAttenuation";
		soundEngineOnInt[] = {"\A3FL_Air\Cessna120\sound\engstart.ogg", 1.0, 1.0};
		soundEngineOnExt[] = {"\A3FL_Air\Cessna120\sound\engstart.ogg", 1.77828, 1.0, 500};
		soundEngineOffInt[] = {"\A3FL_Air\Cessna120\sound\engstop.ogg", 1.0, 1.0};
		soundEngineOffExt[] = {"\A3FL_Air\Cessna120\sound\engstop.ogg", 1.77828, 1.0, 500};
		soundLocked[] = {"", db-0, 1};
		soundIncommingMissile[] = {"", db-0, 1.5};
		soundGearDown[] = {};
		soundGearUp[] = {};
		soundFlapsUp[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Up", db-4, 1.0, 100};
		soundFlapsDown[] = {"A3\Sounds_F_EPC\CAS_02\Flaps_Down", db-4, 1.0, 100};
		
		class Sounds
		{
			class Engine
			{
				sound[] = {"\A3FL_Air\Cessna120\sound\low.ogg",2.23872,1,900};
				frequency = "(1-randomizer*0.05)*(thrust+0.5)*rpm";
				volume = "camPos*(thrust+0.5)";
			};
			class EngineIn
			{
				sound[] = {"\A3FL_Air\Cessna120\sound\low.ogg",1,1};
				frequency = "(1-randomizer*0.05)*(thrust+0.5)*rpm";
				volume = "(1-camPos)*thrust";
			};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "exhaust_1";
				direction = "exhaust_1_dir";
				effect = "ExhaustsEffect";
			};
			class Exhaust2
			{
				position= "exhaust_2";
				direction = "exhaust_2_dir";
				effect = "ExhaustsEffect";
			};
		};
		class Turrets {};
		class WingVortices
		{
			class WingTipLeft
			{
				effectName = "WingVortices";
				position = "body_vapour_L_E";
			};
			class WingTipRight
			{
				effectName = "WingVortices";
				position = "body_vapour_R_E";
			};
			class BodyLeft
			{
				effectName = "BodyVortices";
				position = "body_vapour_L_S";
			};

			class BodyRight
			{
				effectName = "BodyVortices";
				position = "body_vapour_R_S";
			};
		};
		class Reflectors
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1};
				ambient[] = {100, 100, 100};
				position = "Light_L";
				direction = "Light_L_end";
				hitpoint = "Light_L";
				selection = "Light_L";
				innerAngle = 20;
				outerAngle = 60;
				coneFadeCoef = 10;
				intensity = 50;
				useFlare = true;
				dayLight = false;
				FlareSize = 4;
				size = 1;
				class Attenuation
				{
					start = 1;
					constant = 0;
					linear = 0;
					quadratic = 4;
					hardLimitStart = 150;
					hardLimitEnd = 300;
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
		/*class MarkerLights
		{
			class RedStill
			{
				activeLight = 0;
				ambient[] = {0.08,0,0};
				blinking = 0;
				color[] = {0.8,0,0};
				dayLight = 0;
				drawLight = 1;
				drawLightCenterSize = 0.05;
				drawLightSize = 0.6;
				intensity = 50;
				name = "PositionLight_Red1_pos";
				useFlare = 0;
			};
			class GreenStill: RedStill
			{
				name = "PositionLight_Green_pos";
				color[] = {0,0.8,0};
				ambient[] = {0,0.08,0};
			};
			class RedStill2: RedStill
			{
				name = "PositionLight_Red2_pos";
			};
		};*/
		class AnimationSources {};
	};
};