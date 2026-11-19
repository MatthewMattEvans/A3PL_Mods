class CfgPatches
{
	class G506_ERT_Vest
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
	class G506_ERT_Vest: Vest_Camo_Base
	{
		author="Projets Opacity";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FISD ERT Heavy Vest";
		descriptionShort="FISD ERT Heavy Vest";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\ERT_Vest\G506_ERT_Vest";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"A3FL_G506_Characters\ERT_Vest\Textures\task_diff_001_b_uni.paa","A3FL_G506_Characters\ERT_Vest\Textures\belt.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\ERT_Vest\G506_ERT_Vest";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"A3FL_G506_Characters\ERT_Vest\Textures\task_diff_001_b_uni.paa","A3FL_G506_Characters\ERT_Vest\Textures\belt.paa"};
			containerClass="Supply80";
			mass=10;
		};
	};
	class G506_CRT_Vest: Vest_Camo_Base
	{
		author="Projets Opacity";
		scope=2;
		weaponPoolAvailable=1;
		displayName="FISD CRT Heavy Vest";
		descriptionShort="FISD CRT Heavy Vest";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\ERT_Vest\G506_ERT_Vest";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"A3FL_G506_Characters\ERT_Vest\CRT\task_diff_001_b_uni.paa","A3FL_G506_Characters\ERT_Vest\CRT\belt.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\ERT_Vest\G506_ERT_Vest";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"A3FL_G506_Characters\ERT_Vest\CRT\task_diff_001_b_uni.paa","A3FL_G506_Characters\ERT_Vest\CRT\belt.paa"};
			containerClass="Supply80";
			mass=10;
		};
	};
};
