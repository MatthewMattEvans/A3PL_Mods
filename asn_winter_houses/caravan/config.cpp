class CfgPatches {
	class caravan {
		units[] = {"asn_caravana"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};

class CfgVehicleClasses
{
	class asn_houses
	{
		displayName="ASN Houses";
	};
};

class CfgVehicles {	
	class House;	
	class House_F;
	class asn_caravana: House_F
	{
		model = "asn_winter_houses\caravan\caravana";
		scope = 2;
		displayName = "Caravan 1";
		vehicleClass = "asn_houses";
		mapSize = 0.1;
		author = "Winter";
		cost = 100;
		armor = 100000;
		animated = true;
		
		class AnimationSources
		{
			class Zeroanimation
			{
				source = "user";
				animPeriod = 0;
				initPhase = 0;
			};
			class fast_func
			{
				source = "user";
				animPeriod = 1;
				initPhase = 0;
			};
		};
		
		
		class UserActions {
			class open_door_1
			{
				displayName = "Open Door";
				position = "Door_1_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_1') < 0.5) && ((this getVariable ['bis_disabled_Door_1',0]) != 1)";
				statement = "this animate [""Door_1"", 1]";
			};
			class close_door_1
			{
				displayName = "Close Door";
				position = "Door_1_Trigger";
				radius = 2;
				onlyForplayer = "true";
				condition = "((this animationPhase 'Door_1') == 1)";
				statement = "this animate [""Door_1"", 0]";
			};
			

		};
		class EventHandlers
		{
			init="['asn_winter_houses',_this select 0]call{if(isServer AND isDedicated)then{params['_modname','_object'];if(isNil'BIS_fnc_validateAssets')exitWith{_object spawn{waitUntil{!((netId _this)isEqualTo'0:0')};deleteVehicle _this};};[_modname,_object]call BIS_fnc_validateAssets;};};";	 
		};
		actionBegin1 = "open_door_1";
		actionEnd1 = "open_door_1";

		numberOfDoors = 1;
	};
	
};