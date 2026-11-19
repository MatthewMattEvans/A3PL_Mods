class CfgPatches
{
	class G506_Character_Hats
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
	class G506_Campaign_Hat: H_Cap_marshal
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FISD Campaign Hat (Green)";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Hats\G506_Campaign_Hat";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Hats\Textures\p_head_diff_013_a.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3FL_G506_Characters\Hats\G506_Campaign_Hat";
			hiddenSelections[]={"camo"};
		};
	};
	class G506_Campaign_Hat_B: G506_Campaign_Hat
	{
		displayName="FISD Campaign Hat (Black)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Hats\Textures\p_head_diff_013_b.paa"};
	};
	class G506_Campaign_Hat_B1: G506_Campaign_Hat
	{
		displayName="FISD Campaign Hat (Black 2)";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Hats\Textures\p_head_diff_013_b1.paa"};
	};
};