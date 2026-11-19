class CfgPatches
{
	class G506_Leatherface_G
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
	class G506_Leatherface_G: H_Cap_marshal
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Leatherface Mask";
		picture="\G506_Halloween\G506_Logo.paa";
		icon="\G506_Halloween\G506_Logo.paa";
		model="\G506_Halloween\Leatherface\G506_Leatherface_G";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={""};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\G506_Halloween\Leatherface\G506_Leatherface_G";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={""};
		};
	};
};