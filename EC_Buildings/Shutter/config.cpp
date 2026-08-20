class CfgPatches
{
	class EC_Buildings_RadioTowerGate
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / Gallery";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_Gallery_Shutters","Land_EC_Gallery_Shutters_Half","Land_EC_Gallery_Shutters_Third","Land_EC_Gallery_Shutters_2"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_Gallery_Shutters: House_F
	{
		scope = 2;
		scopeCurator = 2;
		author = "Toxic";
		model = "\EC_Buildings\Shutter\EC_Gallery_Shutters";
		displayName = "Gallery Shutters";
		class AnimationSources
		{
			class bottomdoor
			{
				source = "user";
				initPhase = 0;
				animPeriod = 5;
			};
			class bottomdoor_shut
			{
				source = "user";
				initPhase = 0;
				animPeriod = 5;
			};
		};
	};
	class Land_EC_Gallery_Shutters_Half: Land_EC_Gallery_Shutters
	{
		model = "\EC_Buildings\Shutter\EC_Gallery_Shutters_Half";
		displayName = "Gallery Shutters (Half)";
	};
	class Land_EC_Gallery_Shutters_Third: Land_EC_Gallery_Shutters
	{
		model = "\EC_Buildings\Shutter\EC_Gallery_Shutters_Third";
		displayName = "Gallery Shutters (3/4)";
	};
	class Land_EC_Gallery_Shutters_2: Land_EC_Gallery_Shutters
	{
		model = "\EC_Buildings\Shutter\EC_Gallery_Shutters_2";
		displayName = "Gallery Shutters 2";
	};
};
