class CfgPatches
{
	class A3FL_M_900
	{
		units[] = {"A3FL_M_900_Base_F"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Air_F"
		};
	};
};
class CfgVehicles
{
	class C_Heli_Light_01_civil_F;
	class A3PL_HeliL_Base: C_Heli_Light_01_civil_F
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
		class Eventhandlers;
	};
	class A3FL_M_900_Base_F: A3PL_HeliL_Base
	{
		author = "Henry Indelicato";
		scope = 1;
		displayName="M-900";
		model = "\A3FL_Air\A3FL_M_900\A3FL_Heli_Light_01_civil_F.p3d";
		driverDoor = "Pilot_Door";
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";
		cargoDoors[]= {"Door_RB","Door_LB"};
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		memoryPointsGetInCargoPrecise[] = 
		{
			"GetIn_Cargo1",
			"GetIn_Cargo2"
		};
		hiddenSelections[] = 
		{
			"Body"
		};
		hiddenSelectionsTextures[] = 
		{
			"A3\Air_F\Heli_Light_01\Data\Heli_Light_01_ext_co.paa"
		};
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
				animPeriod=0.5;
				sound="";
			};
			class Door_RB
			{
				source="door";
				animPeriod=0.5;
				sound="";
			};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight="Solid_Green1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
			class Blinking_Red1: Solid_Red1
			{
				markerLight="Blinking_Red1";
			};
			class Blinking_White1: Solid_Red1
			{
				markerLight="Blinking_White1";
			};
			
			class Collision_Lights
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			
			class fold
			{
				source="user";
				animperiod=0.5;
				initPhase=0;
			};
			class ignition_switch: fold {};
			class head_lights: fold {};
			class lightswitch: fold {};
		};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class Reflectors
		{
			class Right
			{
				color[] = {7000,7500,10000};
				ambient[] = {70,75,100};
				intensity = 50;
				size = 1;
				innerAngle = 15;
				outerAngle = 65;
				coneFadeCoef = 10;
				position = "Light_pos";
				direction = "Light_dir";
				hitpoint = "Light_hitpoint";
				selection = "Light";
				useFlare = 1;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = 0;
				class Attenuation
				{
					start = 0;
					constant = 0;
					linear = 1;
					quadratic = 1;
					hardLimitStart = 100;
					hardLimitEnd = 200;
				};
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
			class Solid_Green1: Solid_Red1
			{
				color[] = {0.0,0.8,0.0};
				ambient[] = {0.0,0.08,0.0};
				name = "Solid_Green1_pos";
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
			class Blinking_Red1: Solid_Red1
			{
				name = "Blinking_Red1_pos";
				blinking = 1;
				blinkingPattern[] = {1,2};
				blinkingPatternGuarantee = 1;
				drawLightSize = 0.4;
				drawLightCenterSize = 0.08;
			};
			class Blinking_White1: Blinking_Red1
			{
				color[] = {1.0,1.0,1.0};
				ambient[] = {0.1,0.1,0.1};
				name = "Blinking_White1_pos";
				blinkingPattern[] = {0.05,0.1,0.05,1};
			};
		};
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 1;
				gunnerAction = "Chopperlight_R_Static_H";
				gunnerInAction = "Chopperlight_R_Static_H";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
				gunnerGetInAction = "Chopperlight_R_In_H";
				gunnerGetOutAction = "GetOutLow";
				selectionFireAnim = "";
				preciseGetInOut = 1;
				GunnerDoor = "CoPilot_Door";
				gunnerLeftHandAnimName = "lever_copilot";
				gunnerRightHandAnimName = "stick_copilot";
				proxyIndex = 1;
				commanding = -1;
				
				gunnerForceOptics=0;
				startEngine=1;
				usePip=1;
				canUseScanners = 1;
				minElev = -50;
				maxElev = +30;
				initElev = 11;
				minTurn = -170;
				maxTurn = 170;
				initTurn = 0;
			};
		};
		class TransportBackpacks
		{
			class _xx_B_Parachute
			{
				backpack = "B_Parachute";
				count = 4;
			};
		};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
	};
};
