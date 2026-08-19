class CfgPatches
{
	class A3FL_Air_AS_365
	{
		units[] = {"A3FL_AS_365"};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars","A3_Air_F","A3_Weapons_F","A3_Soft_F"};
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
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class RscControlsGroup;
class RscText;
class RangeText: RscText
{
};
class RscPicture;
class RscOpticsText;
class RscIGProgress;
class RscOpticsValue;
class VScrollbar;
class HScrollbar;
class RscLadderPicture;
class RscInGameUI
{
	class RscUnitInfo;
	class RscOptics_AS365_FLIR: RscUnitInfo
	{
		idd=300;
		controls[]=
		{
			"CA_IGUI_elements_group"
		};
		class CA_IGUI_elements_group: RscControlsGroup
		{
			idc=170;
			class VScrollbar: VScrollbar
			{
				width=0;
			};
			class HScrollbar: HScrollbar
			{
				height=0;
			};
			x="0 * 		(0.01875 * SafezoneH) + 		(SafezoneX + ((SafezoneW - SafezoneH) / 2))";
			y="0 * 		(0.025 * SafezoneH) + 		(SafezoneY)";
			w="53.5 * 		(0.01875 * SafezoneH)";
			h="40 * 		(0.025 * SafezoneH)";
			class controls
			{
				class CamText: RscText
				{
					style=0;
					sizeEx="0.02*SafezoneH";
					shadow=0;
					font="EtelkaMonospacePro";
					idc=10010;
				};
				class CamText_Output: CamText
				{
					font="EtelkaMonospaceProBold";
					colorBackground[]={0,0,0,0.30000001};
				};
				class CamText_Red: CamText_Output
				{
					colorText[]={1,0,0,1};
				};
				class TimeText: CamText
				{
					idc=10011;
					Text="Time:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="3 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class ValueTime: CamText
				{
					idc=190;
					text="20:28:35";
					x="4.64 * 		(0.01875 * SafezoneH)";
					y="3.8 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextSpd: CamText
				{
					idc=1009;
					text="SPD [KM/H]:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="10 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Speed: CamText_Output
				{
					idc=188;
					text="120";
					x="5 * 		(0.01875 * SafezoneH)";
					y="11 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextAlt: CamText
				{
					idc=1007;
					text="ALT [AGL]:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="12 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Alt: CamText_Output
				{
					idc=189;
					text="3825";
					x="5 * 		(0.01875 * SafezoneH)";
					y="13 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextGrid: CamText
				{
					idc=1005;
					text="ACFT POS:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="14 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid: CamText_Output
				{
					idc=171;
					text="382546";
					x="5 * 		(0.01875 * SafezoneH)";
					y="15 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class ModeText: CamText
				{
					idc=1002;
					text="CAM MODE:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="20 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_VisionMode: CamText_Output
				{
					idc=179;
					style=0;
					text="DTV";
					x="5 * 		(0.01875 * SafezoneH)";
					y="21 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_FlirMode: CamText_Output
				{
					idc=153;
					style=0;
					text="BHOT";
					x="5 * 		(0.01875 * SafezoneH)";
					y="22 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextMag: CamText
				{
					idc=1011;
					text="ZOOM:";
					x="5 * 		(0.01875 * SafezoneH)";
					y="23 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_OpticsZoom: CamText_Output
				{
					idc=180;
					text="28x";
					x="5 * 		(0.01875 * SafezoneH)";
					y="24 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextBearing: CamText
				{
					idc=10006;
					text="BEARING:";
					x="45 * 		(0.01875 * SafezoneH)";
					y="10 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Heading: CamText_Red
				{
					idc=156;
					text="023";
					x="45 * 		(0.01875 * SafezoneH)";
					y="11 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class TextGrid_Target: CamText
				{
					idc=10005;
					text="TGT POS:";
					x="45 * 		(0.01875 * SafezoneH)";
					y="12 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class ValueGrid_Target: CamText_Red
				{
					idc=172;
					x="45 * 		(0.01875 * SafezoneH)";
					y="13 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class RangeText: CamText
				{
					idc=1000;
					text="TGT RANGE:";
					x="45 * 		(0.01875 * SafezoneH)";
					y="14 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Distance: CamText_Red
				{
					idc=151;
					text="2456";
					x="45 * 		(0.01875 * SafezoneH)";
					y="15 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev_text: CamText
				{
					idc=1013;
					text="ELEVATION:";
					x="45 * 		(0.01875 * SafezoneH)";
					y="16 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Elev: CamText_Red
				{
					idc=175;
					text="80.5";
					x="45 * 		(0.01875 * SafezoneH)";
					y="17 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
				class CA_Laser: RscText
				{
					idc=158;
					style="0x30 + 0x800";
					sizeEx="0.038*SafezoneH";
					colorText[]={0.70599997,0.074500002,0.0196,1};
					shadow=0;
					font="EtelkaMonospacePro";
					text="\A3\ui_f\data\igui\rscingameui\rscoptics\laser_designator_iconLaserOn.paa";
					x="26 * 		(0.01875 * SafezoneH)";
					y="21 * 		(0.025 * SafezoneH)";
					w="5 * 		(0.01875 * SafezoneH)";
					h="1 * 		(0.025 * SafezoneH)";
				};
			};
		};
	};
};
class cfgWeapons
{
	class Default;
	class Laserdesignator_mounted;
	class Laserdesignator_AS365: Laserdesignator_mounted
	{
		displayName="Laser Designator";
		shotFromTurret=1;
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
		nameSound="laserdesignator";
	};
	class MasterSafe: Default
	{
		scope=2;
		displayName="Mastersafe";
		cursor="EmptyCursor";
		cursorAim="EmptyCursor";
	};
};
class RCWSOptics;
class CfgVehicles
{
	class B_Heli_Transport_01_F;
	class A3PL_Helicopter_Medium_Base: B_Heli_Transport_01_F
	{
		class Components;
		class Sounds;
		class SoundsExt;
		class Turrets;
		class HitPoints;
		class RotorLibHelicopterProperties;
		class AnimationSources;
		ejectDamageLimit = 0.75;
		ejectSpeed[] = {900,900,900};
	};

	class A3FL_AS_365: A3PL_Helicopter_Medium_Base
	{
		scope=2;
		displayName="Eurocopter AS 365";
		model="\A3FL_Air\AS_365\A3FL_AS_365";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"A3FL_Air\AS_365\data\as365_body_co.paa"};
		driveOnComponent[] = {"wheel_front","wheel_right","wheel_left"};
		numberPhysicalWheels=3;
		preciseGetInOut=0;
		usePreciseGetInAction=0;
		cargoPreciseGetInOut[]={0};
		cargoGetInAction[]={"GetInLow"};
		cargoGetOutAction[]={"GetOutLow"};
		getInAction="GetInLow";
		getOutAction="GetOutLow";
		driverDoor = "Pilot_Door";
		cargoDoors[]= {""};
		driverAction="pilot_Heli_Light_02";
		driverInAction="pilot_Heli_Light_02";
		memoryPointsGetInDriver = "pos pilot";
		memoryPointsGetInDriverDir = "pos pilot dir";

		driverRightHandAnimName = "stick_pilot";
		driverLeftHandAnimName = "lever_pilot";
		driverLeftLegAnimName = "pedall";
		driverRightLegAnimName = "pedalr";

		weapons[]= {"CMFlareLauncher"};
		magazines[]= {"168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine","168Rnd_CMFlare_Chaff_Magazine"};

		cargoAction[] = {"passenger_apc_narrow_generic03","passenger_apc_narrow_generic01","passenger_apc_generic04","gunner_Heli_Transport_01","gunner_Heli_Transport_01"};
		transportSoldier=5;
		hideWeaponsCargo=0;
		ejectDeadCargo=0;
		class TransportBackpacks{};
		class TransportMagazines{};
		class TransportWeapons{};
		class TransportItems{};
		maximumLoad=5000;
		mainRotorSpeed=1.5;
		backRotorSpeed=1.8;
		cargoCanEject=1;
		mainBladeRadius=6.0;
		tailBladeRadius=0.7;
		maxFordingDepth=0.65;
		maxSpeed=306;
		fuelCapacity=350;
		fuelConsumptionRate=0.085;
		slingLoadMaxCargoMass=5000;
		extCameraPosition[]={0,5,-21};
		headAimDown=9;
		gearRetracting=1;
		gearUpTime=2;
		gearDownTime=2;
		liftForceCoef=1.5;
		attenuationEffectType = "HeliAttenuation";
		class RotorLibHelicopterProperties: RotorLibHelicopterProperties
		{
			maxTorque = 1700;
			defaultCollective=1;
		};
		class Damage
		{
			tex[]={};
			mat[]={"A3PL_Cars\Common\rvmats\car_paint_old.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat","A3PL_Cars\Common\rvmats\Car_paint_mat.rvmat","A3PL_Cars\Common\rvmats\Body_damage.rvmat","A3PL_Cars\Common\rvmats\Body_destruct.rvmat"};
		};
		occludeSoundsWhenIn = 0.562341;
		obstructSoundsWhenIn = 0.316228;
		radarType = 2;
		radarTarget = 1;
		radarTargetSize = 2;		
		receiveRemoteTargets = 1;
		reportRemoteTargets = 1;
		reportOwnPosition = 1;
		showAllTargets = 2;
		showCrewAim = 0;
		visualTarget = 1;
		visualTargetSize = 2;
		canUseScanners = 1;
		incomingMissileDetectionSystem = "0";
		irTarget = 1;
		irTargetSize = 2;
		weaponLockSystem = 0;
		driverCanSee = 1+4+8+16;
		gunnerCanSee = 1+4+8+16;
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
		memoryPointDriverOptics="slingCamera";
		class MFD {};
		class pilotCamera {};
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
				position = "Light_R_pos";
				direction = "Light_R_dir";
				hitpoint = "Light_R_hitpoint";
				selection = "Light_R";
				useFlare = true;
				flareSize = 10;
				flareMaxDistance = 250;
				dayLight = false;
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
			class Left: Right
			{
				position = "Light_L_pos";
				direction = "Light_L_dir";
				hitpoint = "Light_L_hitpoint";
				selection = "Light_L";
			};
			
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
		class Exhausts
		{
			class Exhaust1
			{
				position="exhaust1";
				direction="exhaust1_dir";
				effect="ExhaustsEffectHeliBig";
			};
			class Exhaust2
			{
				position="exhaust2";
				direction="exhaust2_dir";
				effect="ExhaustsEffectHeliBig";
			};
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
			class Door_LB2
			{
				source="door";
				animPeriod=1.5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class Door_RB2
			{
				source="door";
				animPeriod=1.5;
				initPhase=0;
				sound="ServoRampSound_2";
			};
			class Door_LB
			{
				source="door";
				animPeriod=0.60000002;
				sound="";
			};
			class Door_RB
			{
				source="door";
				animPeriod=0.60000002;
				sound="";
			};
			class HitGlass1
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass1";
			};
			class HitGlass2
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass2";
			};
			class HitGlass3
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass3";
			};
			class HitGlass4
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass4";
			};
			class HitGlass5
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass5";
			};
			class HitGlass6
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass6";
			};
			class HitGlass7
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass7";
			};
			class HitGlass8
			{
				raw=1;
				source="hit";
				hitpoint="HitGlass8";
			};
			class Collision_Lights
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class battery
			{
				source="user";
				animperiod=0.5;
				initPhase=0;
			};
			class gen1: battery {};
			class gen2: gen1 {};
			class gen3: gen1 {};
			class ecs: battery {};
			class fuelpump: battery {};
			class ignition_switch: battery {};
			class apucontrol: battery {};
			class head_lights: battery {};
			class lightswitch: battery {};
			class Solid_Red1
			{
				source="MarkerLight";
				markerLight="Solid_Red1";
			};
			class Solid_White1: Solid_Red1
			{
				markerLight="Solid_White1";
			};
			class Solid_Green1: Solid_Red1
			{
				markerLight="Solid_Green1";
			};
			class Blinking_Red1: Solid_Red1
			{
				markerLight="Blinking_Red1";
			};
			class SearchLight_HRot
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class SearchLight_VRot: SearchLight_HRot {};
			class Common
			{
				source="user";
				animPeriod=0.001;
				initPhase=0;
			};
			class Spotlight: Common
			{
			};
		};
		class EventHandlers
		{
			init="if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class Library{libTextDesc = "";};
		class CargoTurret;
		class CopilotTurret;
		class Turrets: Turrets
		{
			class CopilotTurret: CopilotTurret
			{
				CanEject = 1;
				gunnerAction = "copilot_Heli_Light_02";
				gunnerInAction = "copilot_Heli_Light_02";
				memoryPointsGetInGunner = "pos copilot";
				memoryPointsGetInGunnerDir = "pos copilot dir";
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
			};
			class CargoTurret_01: CargoTurret /// position for Firing from Vehicles
			{
                gunnerAction = "passenger_inside_3";
                gunnerCompartments = "";
				memoryPointsGetInGunner = "pos gunner3";
				memoryPointsGetInGunnerDir = "pos gunner3 dir";
                playerPosition = 4;
                soundAttenuationTurret = "";
                disableSoundAttenuation = 1;
                gunnerGetInAction = "GetInHeli_Light_01bench";
                gunnerName = "Right Gunner";
				GunnerDoor = "";
                proxyIndex = 6;
				maxElev=10;
				minElev=-70;
				maxTurn=-30;
				minTurn=-110;
                isPersonTurret = 1;
                ejectDeadGunner = 1;
                memoryPointGunnerOptics = "eye";
				enabledByAnimationSource="Door_RB2";
                class dynamicViewLimits{};
			};
			class CargoTurret_02: CargoTurret_01
			{
                gunnerAction = "passenger_inside_3";
				memoryPointsGetInGunner = "pos gunner4";
				memoryPointsGetInGunnerDir = "pos gunner4 dir";
                playerPosition = 4;
                gunnerName = "Left Gunner";
                proxyIndex = 7;
				maxElev=10;
				minElev=-70;
				maxTurn=110;
				minTurn=30;
				enabledByAnimationSource="Door_LB2";
			};
		};
		class MarkerLights
		{
			class Solid_Red1
			{
				color[]={1,0,0};
				ambient[]={0.5,0,0};
				intensity=75;
				name="Solid_Red1_pos";
				activeLight=1;
				blinking=0;
				blinkingPattern[]={0.2,1.3};
				blinkingPatternGuarantee=1;
				blinkingStartsOn=1;
				drawLight=1;
				drawLightSize=0.25;
				drawLightCenterSize=0.079999998;
				dayLight=0;
				useFlare=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=25;
					quadratic=50;
					hardLimitStart=0.75;
					hardLimitEnd=1;
				};
			};
			class Solid_White1: Solid_Red1
			{
				color[]={1,1,1};
				ambient[]={0.1,0.1,0.1};
				name="Solid_White1_pos";
			};
			class Solid_White2: Solid_White1
			{
				name="Solid_White2_pos";
			};
			class Solid_Green1: Solid_Red1
			{
				color[]={0,0.80000001,0};
				ambient[]={0,0.079999998,0};
				name="Solid_Green1_pos";
			};
		};
	};
};