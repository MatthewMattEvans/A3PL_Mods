class CfgPatches
{
	class G506_Witch1_H
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
	class G506_Witch1_H: H_Cap_marshal
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Better Witch Hat";
		picture="\G506_Halloween\G506_Logo.paa";
		icon="\G506_Halloween\G506_Logo.paa";
		model="\G506_Halloween\Witch1\G506_Witch1_H";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"G506_Halloween\Witch1\Textures\BlueMagic Hat_BaseColor.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\G506_Halloween\Witch1\G506_Witch1_H";
			hiddenSelections[]={"camo"};
		};
	};
};