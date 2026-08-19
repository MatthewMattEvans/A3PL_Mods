class CfgPatches
{
	class A3PL_MiniExcavator
	{
		units[] = {"A3PL_MiniExcavator"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3_Armor_F"};
	};
};
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class CfgVehicles
{
	class LandVehicle;
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class ViewCargo;
		class HeadLimits;
	};
	class APC_Tracked_03_base_F : Tank_F {};
	class I_APC_tracked_03_base_F : APC_Tracked_03_base_F {};
	class I_APC_tracked_03_cannon_F: I_APC_tracked_03_base_F {};
	class A3PL_Tracked_base: I_APC_tracked_03_cannon_F
	{
		class ViewPilot;
		class Turrets;
		class NewTurret;
		class EventHandlers;
	};
	class A3PL_MiniExcavator: A3PL_Tracked_base
	{
		author = "Jonzie";
		model = "\A3PL_Construction\MiniExcavator\A3PL_MiniExcavator.p3d";
		displayName = "Mini Excavator";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		maxSpeed = 10;
		maxOmega = 150;//
		peakTorque = 350;//
		redRPM = 1800;//
		driverAction = "A3PL_Excavator_Driver";
		enableManualFire = 1;
		class EventHandlers: EventHandlers
		{
			init = "if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";    
		};
		class Reflectors
		{
			class LightCarHeadL01
			{
				color[] = {1900,1300,950};
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
			};
		};
		class Turrets: Turrets
		{
			class Cabin: NewTurret
			{
				gunnerAction = "A3PL_Excavator_Driver";
				gunnerLeftHandAnimName = "Ladder_Control_1";
				gunnerRightHandAnimName = "Ladder_Control_2";
				gunnerName = "Operator";
				body = "";
				gun = "frontArm_Gun";
				animationSourceBody = "";
				animationSourceGun = "frontArm_Gun";
				memoryPointGunnerOptics = "gunnerview";
				particlesPos = "Turret1_pos";
				particlesDir = "Turret1_dir";
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance[] = {};
				discreteDistanceInitIndex = 0;
				weapons[] = {"A3PL_Machinery_Bucket","A3PL_Machinery_Pickaxe"};
				magazines[] = {};
				minElev = -50;
				maxElev = 60;
				initElev = -45;
				minTurn = -360;
				maxTurn = 360;
				maxHorizontalRotSpeed = 0.5;
				maxVerticalRotSpeed = 0.5;
				soundServo[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				soundElevation[] = {"\A3PL_Cars\Common\Sounds\A3PL_Hydraulic.ogg",10,1,50};
				selectionFireAnim = "";
				memoryPointsGetInGunner = "pos gunner";
				memoryPointsGetInGunnerDir = "pos gunner dir";
				stabilizedInAxes = 4;
				outGunnerMayFire = 1;
				memoryPointGun = "Turret1_pos";
				gunnerGetInAction = "GetInLow";
				gunnerGetOutAction = "GetOutLow";
				gunBeg = "usti hlavne";
				gunEnd = "konec hlavne";
				gunnerOpticsModel = "\A3\weapons_f\reticle\optics_empty";
				primaryGunner = 1;
				gunnerForceOptics = 0;
				startEngine = 0;
				disableSoundAttenuation = 0;
				enableManualFire = 1;
				class ViewOptics: ViewPilot{};
				class ViewGunner: ViewPilot {};
			};
		};
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2,"N",0,"D1",2};
			TransmissionRatios[] = {"High",70};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			transmissionDelay = 0.1;
		};
	};
};
//};
