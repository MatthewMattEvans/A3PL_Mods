class CfgPatches
{
	class G506_Witch_H
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
	class G506_Witch_H: H_Cap_marshal
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Witch Hat (Purple/Pink)";
		picture="\G506_Halloween\G506_Logo.paa";
		icon="\G506_Halloween\G506_Logo.paa";
		model="\G506_Halloween\Witch\G506_Witch_H";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_000_g_uni.paa"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\G506_Halloween\Witch\G506_Witch_H";
			hiddenSelections[]={"camo"};
		};
	};
	class G506_Witch_H_PY: G506_Witch_H
	{
		displayName="Witch Hat (Pink/Yellow)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_000_h_uni.paa"};
	};
	class G506_Witch_H_RY: G506_Witch_H
	{
		displayName="Witch Hat (Red/Yellow)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_002_d_uni.paa"};
	};
	class G506_Witch_H_GB: G506_Witch_H
	{
		displayName="Witch Hat (Green/Blue)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_002_e_uni.paa"};
	};
	class G506_Witch_H_BP: G506_Witch_H
	{
		displayName="Witch Hat (Blue/Pink)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_002_f_uni.paa"};
	};
	class G506_Witch_H_PO: G506_Witch_H
	{
		displayName="Witch Hat (Purple/Orange)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_009_a_uni.paa"};
	};
	class G506_Witch_H_RO: G506_Witch_H
	{
		displayName="Witch Hat (Red/Orange)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_009_c_uni.paa"};
	};
	class G506_Witch_H_DRO: G506_Witch_H
	{
		displayName="Witch Hat (Dark Red/Orange)";
		hiddenSelectionsTextures[]={"G506_Halloween\Witch\Textures\berd_diff_009_b_uni.paa"};
	};
};