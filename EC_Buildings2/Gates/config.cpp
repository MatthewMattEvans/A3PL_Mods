class CfgPatches
{
	class Land_EC_Gates
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / Gates";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_DoubleVehicleGate","Land_EC_PersonGate","Land_EC_NoParkingDecal","Land_EC_NoParkingDecal2","Land_EC_PoliceWall4m","Land_EC_PoliceWall8m","Land_EC_PoliceWallCorner","Land_EC_PoliceWallPost","Land_EC_PoliceWall2m"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_DoubleVehicleGate: House_F
	{
		scope = 2;
		scopeCurator = 2;
		mapSize = 2;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Gates\EC_DoubleVehicleGate";
		displayName = "EC Double Vehicle Gate";
		hiddenSelections[] = {"wall_banner_left","wall_banner_right","entrancelightgreen","entrancelightred","exitlightgreen","exitlightred"};
		hiddenSelectionsTextures[] = {"\EC_Buildings2\Gates\Data\wall_banner_co.paa","\EC_Buildings2\Gates\Data\wall_banner_co.paa","\EC_Buildings2\Gates\Data\led_off_co.paa","\EC_Buildings2\Gates\Data\led_red_co.paa","\EC_Buildings2\Gates\Data\led_off_co.paa","\EC_Buildings2\Gates\Data\led_red_co.paa"};
		class AnimationSources
		{
			class default
			{
				source = "user";
				initPhase = 0;
			};
			class gate_right: default
			{
				animPeriod = 5;
			};
			class gate_left: gate_right{};
		};
	};
	class Land_EC_PersonGate: Land_EC_DoubleVehicleGate
	{
		mapSize = 1;
		model = "\EC_Buildings2\Gates\EC_PersonGate";
		displayName = "EC Person Gate";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class AnimationSources
		{
			class default
			{
				source = "user";
				initPhase = 0;
			};
			class gate: default
			{
				animPeriod = 3;
			};
		};
	};
	class Land_EC_NoParkingDecal: House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Gates\EC_NoParkingDecal";
		displayName = "EC No Parking Decal";
	};
	class Land_EC_NoParkingDecal2: House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Gates\EC_NoParkingDecal2";
		displayName = "EC No Parking Decal 2";
	};
	class Land_EC_PoliceWall4m: House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Gates\EC_PoliceWall4m";
		displayName = "EC Police Wall (4m)";
	};
	class Land_EC_PoliceWall8m: Land_EC_PoliceWall4m
	{
		model = "\EC_Buildings2\Gates\EC_PoliceWall8m";
		displayName = "EC Police Wall (8m)";
	};
	class Land_EC_PoliceWall2m: Land_EC_PoliceWall4m
	{
		model = "\EC_Buildings2\Gates\EC_PoliceWall2m";
		displayName = "EC Police Wall (2m)";
	};
	class Land_EC_PoliceWallCorner: Land_EC_PoliceWall4m
	{
		model = "\EC_Buildings2\Gates\EC_PoliceWallCorner";
		displayName = "EC Police Corner";
	};
	class Land_EC_PoliceWallPost: Land_EC_PoliceWall4m
	{
		model = "\EC_Buildings2\Gates\EC_PoliceWallPost";
		displayName = "EC Police Wall Post";
	};
};
