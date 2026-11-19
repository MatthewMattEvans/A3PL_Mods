class CfgPatches
{
	class A3FL_Gear_CampaignHat
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={
			"A3_Characters_F",
			"A3_Weapons_F"
		};
	};
};

class CfgWeapons {
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_Cap_marshal;
	class A3FL_CampaignHat: H_Cap_marshal
	{
		author="Andrew";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FISD Campaign Hat (Green)";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		icon="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3FL_Gear\CampaignHat\CampaignHat";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_Gear\CampaignHat\data\CampaignHat_CO.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3FL_Gear\CampaignHat\CampaignHat";
			hiddenSelections[]={"camo"};
		};
	};
};