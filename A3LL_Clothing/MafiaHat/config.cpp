class CfgPatches
{
	class Andrew_MafiaHat
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Characters_F",
			"A3_Characters_F_Common",
			"A3_Data_F"
		};
		magazines[]={};
		ammo[]={};
	};
};
class CfgWeapons {
	class InventoryItem_Base_F;
	class HeadgearItem;
	class H_Cap_marshal;
	class Andrew_MafiaHat: H_Cap_marshal
	{
		author="Andrew Harris";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Fedora";
		picture="\A3LL_Clothing\logo.paa";
		model="\A3LL_Clothing\MafiaHat\Andrew_MafiaHat";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3LL_Clothing\MafiaHat\data\Andrew_MafiaHat_co.paa"};
		hiddenSelectionsMaterials[]={"\A3LL_Clothing\MafiaHat\data\Andrew_MafiaHat.rvmat"};
		class ItemInfo: HeadgearItem
		{
			uniformModel="\A3LL_Clothing\MafiaHat\Andrew_MafiaHat";
			hiddenSelections[]={"camo"};
		};
	};
};