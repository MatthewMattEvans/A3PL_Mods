class CfgPatches
{
	class A3PL_Kainnon_ERT
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3PL_Houses",
			"A3PL_MultiMats_1"
		};
	};
};
class CfgFunctions
{
	class Long
	{
		tag = "Long";
		class Joshi
		{
			file = "A3PL_Kainnon\ERT\scripts";
			class elevator{};
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_Kainnon_ERT: A3PL_Houses
	{
		displayName = "ERT Headquarters";
		model = "\A3PL_Kainnon\ERT\A3PL_Kainnon_ERT.p3d";
		class AnimationSources
		{
			class elev_inside_source
			{
				source = "user";
				initPhase = 1;
				animPeriod = 2.5;
				sound = "";
			};
			class elev_top_source: elev_inside_source
			{
				initPhase = 0;
			};
			class elev_bot_source: elev_inside_source
			{
				initPhase = 1;
			};
			class elevator_source
			{
				source = "user";
				initPhase = 0;
				animPeriod = 8;
				sound = "";
			};
		};
		class UserActions
		{
			class EleavtorActionUp
			{
				displayName = "Elevator Up";
				position = "ElevatorTriggerUp";
				priority = 0.3;
				radius = 2;
				onlyForPlayer = 1;
				condition = "((this animationSourcePhase ""elevator_source"") == 0)";
				statement = "([ this, 'up' ] spawn Long_fnc_elevator)";
			};
			class EleavtorActionDown: EleavtorActionUp
			{
				displayName = "Elevator Down";
				position = "ElevatorTriggerDown";
				condition = "((this animationSourcePhase ""elevator_source"") == 1)";
				statement = "([ this, 'down' ] spawn Long_fnc_elevator)";
			};
			class CallActionUp: EleavtorActionUp
			{
				displayName = "Call Elevator Up";
				position = "CallTriggerUp";
				condition = "((this animationSourcePhase ""elevator_source"") == 0)";
				statement = "([ this, 'up' ] spawn Long_fnc_elevator)";
			};
			class CallActionDown: EleavtorActionUp
			{
				displayName = "Call Elevator Down";
				position = "CallTriggerDown";
				condition = "((this animationSourcePhase ""elevator_source"") == 1)";
				statement = "([ this, 'down' ] spawn Long_fnc_elevator)";
			};
		};
	};
};
