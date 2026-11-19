class CfgPatches
{
	class A3FL_RaindeerMask
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={
			"A3_Characters_F"
		};
	};
};

class CfgWeapons {
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_Cap_marshal;
	class A3FL_ReindeerMask: H_Cap_marshal
	{
		author="Andrew Axel";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Reindeer Mask";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		icon="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3FL_Christmas\ReindeerMask\A3FL_ReindeerMask";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={""};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3FL_Christmas\ReindeerMask\A3FL_ReindeerMask";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={""};
		};
	};
};