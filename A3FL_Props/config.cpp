class CfgPatches
{
	class A3FL_Props
	{
		author="Nick & Mathias";
		name="Arma3FishersLife Buildings";
		url="https://arma3fisherslife.net";
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Data_F","A3_Data_F_Exp","A3_Structures_F","A3FL_Houses"};
	};
};

class CfgVehicles
{
	class A3FL_Houses;
	class Land_A3FL_ShopSign_CCP: A3FL_Houses
	{
		scope=2;
		model="\A3FL_Props\ShopSigns\A3FL_CCP_Sign";
		displayName="A3FL CCP Store Sign";
	};
	class Land_A3FL_ShopSign_Exterminator: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Exterminator_Sign";
		displayName="A3FL Exterminator Sign";
	};
	class Land_A3FL_ShopSign_Fishing: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Fishing_Sign";
		displayName="A3FL Fishing Store Sign";
	};
	class Land_A3FL_ShopSign_General: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_General_Sign";
		displayName="A3FL General Store Sign";
	};
	class Land_A3FL_ShopSign_Hardware: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Hardware_Sign";
		displayName="A3FL Hardware Store Sign";
	};
	class Land_A3FL_ShopSign_Hunting: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Hunting_Sign";
		displayName="A3FL Hunting Store Sign";
	};
	class Land_A3FL_ShopSign_Lumberjack: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Lumber_Sign";
		displayName="A3FL Lumberjack Store Sign";
	};
	class Land_A3FL_ShopSign_Supermarket: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Market_Sign";
		displayName="A3FL Supermarket Sign";
	};
	class Land_A3FL_ShopSign_Mining: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Mining_Sign";
		displayName="A3FL Mining Mike Sign";
	};
	class Land_A3FL_ShopSign_Moonshine: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Moonshine_Sign";
		displayName="A3FL Moonshine Store Sign";
	};
	class Land_A3FL_ShopSign_Security: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Security_Sign";
		displayName="A3FL Security Store Sign";
	};
	class Land_A3FL_ShopSign_Seed: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Seed_Sign";
		displayName="A3FL Seed Store Sign";
	};
	class Land_A3FL_ShopSign_Waste: Land_A3FL_ShopSign_CCP
	{
		model="\A3FL_Props\ShopSigns\A3FL_Waste_Sign";
		displayName="A3FL Waste Management Sign";
	};

	//Pirate Shit
	class A3FL_Coin: A3FL_Houses
	{
		model="\A3FL_Props\coin\A3FL_Coin";
		displayname="Pirate Coin";
	};
	class A3FL_Treasure_Chest: A3FL_Houses
	{
		model="\A3FL_Props\Chest\A3FL_Treasure_Chest";
		displayname="Pirate Chest";
	};
};