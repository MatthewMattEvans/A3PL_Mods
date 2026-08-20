class CfgPatches
{
	class Land_EC_Company_Stores
	{
		author = "Eclipse Roleplay Development Team";
		name = "EclipseRoleplay Buildings / Gates";
		url = "www.arma-eclipse.net";
		units[] = {"Land_EC_CompanyStore","Land_EC_CompanyStore_Double"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles
{
	class House_F;
	class Land_EC_CompanyStore: House_F
	{
		scope = 2;
		scopeCurator = 2;
		mapSize = 2;
		author = "ToxicRageTv";
		model = "\EC_Buildings2\Shops\CornerStore\EC_CompanyStore";
		displayName = "EC Company Store";
		hiddenSelections[] = {"Ads"};
		hiddenSelectionsTextures[] = {"\EC_Buildings2\Shops\CornerStore\Data\Company_Store_Single_For_Sale.paa"};
		class AnimationSources
		{
			class default
			{
				source = "user";
				initPhase = 0;
			};
			class door_1: default
			{
				animPeriod = 1.5;
			};
			class door_2: door_1{};
		};
	};
	class Land_EC_CompanyStore_Double: Land_EC_CompanyStore
	{
		model = "\EC_Buildings2\Shops\CornerStore\EC_CompanyStore_Double";
		displayName = "EC Company Store (Double)";
		hiddenSelections[] = {"Ads"};
		hiddenSelectionsTextures[] = {"\EC_Buildings2\Shops\CornerStore\Data\Company_Store_Double_For_Sale.paa"};
		class AnimationSources
		{
			class default
			{
				source = "user";
				initPhase = 0;
			};
			class door_1: default
			{
				animPeriod = 1.5;
			};
			class door_2: door_1{};
			class door_3: door_1{};
			class door_4: door_1{};
		};
	};
};
