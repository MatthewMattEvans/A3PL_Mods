class CfgPatches
{
	class G506_Marshal_Vest
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

class cfgWeapons
{
	class InventoryItem_Base_F;
	class ItemCore;
	class VestItem: InventoryItem_Base_F
	{
		class HitpointsProtectionInfo {
			class Body;
		};
	};
	class Vest_Camo_Base: ItemCore
	{
		class ItemInfo: VestItem {};
	};
	class G506_Marshal_Vest: Vest_Camo_Base
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Marshal Vest / Belt Combo";
		descriptionShort="Marshal Vest / Belt Combo";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Marshal_Vest\G506_Marshal_Vest";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"",""};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Marshal_Vest\G506_Marshal_Vest";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"",""};
			containerClass="Supply80";
			mass=10;
		};
	};
};
