class CfgPatches
{
	class A3PL_Ski
	{
		units[] = {"A3PL_Ski_Base"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Boat_F","A3_Boat_F_Civilian_Boat","A3PL_Ships","A3PL_Cars","A3_Data_F","A3_Characters_F_Common","A3_Characters_F_Heads"};
	};
};
class Extended_Init_EventHandlers
{
	class Man
	{
		Player_Help_init = "[] call BIS_fnc_IsOutsideArea;";
	};
};
class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		ski_driver = "ski_driver";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class ski_driver: Crew
		{
			file = "\A3PL_Ships\Ski\Anim\Driver_ski.rtm";
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			interpolateTo[] = {"ski_driver_KIA",1};
			leaning = "crewShake_shoulders";
		};
		class ski_driver_KIA: Crew
		{
			file = "\A3PL_Ships\Ski\Anim\Driver_ski.rtm";
			leftHandIKCurve[] = {1};
			rightHandIKCurve[] = {1};
			leftLegIKCurve[] = {1};
			rightLegIKCurve[] = {1};
			actions = "DeadActions";
			speed = 1;
			looped = 0;
			terminal = 1;
			soundEnabled = 0;
			connectTo[] = {"Unconscious",0.1};
		};
	};
};
class cfgVehicles
{
	class C_Boat_Civil_01_F;
	class A3PL_Ski_Base: C_Boat_Civil_01_F
	{
		scope = 2;
		class EventHandlers
		{
			init = "if (!isDedicated) then { [_this] spawn {waituntil{sleep 1; !isNil 'A3PL_HandleVehicleInit'}; [_this] call A3PL_HandleVehicleInit}; };";
		};
		class Useractions{};
		model = "\A3PL_Ships\Ski\A3PL_Ski";
		maxSpeed = 80;
		enginePower = 0;
		waterLeakiness = 0.0;
		destrType = "DestructNo";
		turnCoef = 0.24;
		hideWeaponsDriver = 1;
		hideWeaponsCargo = 1;
		driveraction = "ski_driver";
		getInAction = "GetInQuadbike";
		leftFastWaterEffect = "LFastWaterEffects";
		rightFastWaterEffect = "RFastWaterEffects";
		weapons[] = {};
		cargoGetInAction[] = {};
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		_generalMacro = "A3PL_Ski_Base";
		displayName = "A3PL Ski";
		extCameraPosition[] = {0,1.0,-3.0};
		transportSoldier = 0;
		class Exhausts{};
		class Sounds{};
		class AnimationSources
		{
			class wheel
			{
				animperiod = 0;
				initPhase = 0;
			};
		};
	};
};
