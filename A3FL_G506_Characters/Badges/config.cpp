class CfgPatches
{
	class G506_Character_Badges
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
	class G506_Marshal_Badge_Hip: Vest_Camo_Base
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Marshal Badge / Holster Combo";
		descriptionShort="Marshal Badge / Holster Combo";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Hip";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_005_a_uni.paa","\A3FL_G506_Characters\holsters\textures\teef_diff_005_a_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Hip";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_005_a_uni.paa","\A3FL_G506_Characters\holsters\textures\teef_diff_005_a_uni.paa"};
			containerClass="Supply80";
			mass=5;
		};
	};
	class G506_Sheriff_Badge_Hip: G506_Marshal_Badge_Hip
	{
		displayName="Sheriff Badge / Holster Combo";
		descriptionShort="Sheriff Badge / Holster Combo";
		model="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Hip";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\holsters\textures\teef_diff_005_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Hip";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\holsters\textures\teef_diff_005_b_uni.paa"};
		};
	};

	class Default;
	class Binocular: Default
	{
		class Library;
		class WeaponSlotsInfo;
	};
	class Rangefinder: Binocular
	{
		class Library;
		class WeaponSlotsInfo;
	};
	class NVGoggles: Binocular
	{
		class Library;
		class ItemInfo;
	};
	class G506_Sheriff_Badge_Necklace: NVGoggles
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		visionMode[]={"Normal"};
		displayName="(Sheriff) Necklace Badge";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace";
			modelOff="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		};
	};
	class G506_Sheriff_Badge_Necklace_V: G506_Sheriff_Badge_Necklace
	{
		displayName="(Sheriff) Necklace Vest Badge";
		model="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace_V";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace_V";
			modelOff="\A3FL_G506_Characters\Badges\G506_Sheriff_Badge_Necklace_V";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\task_diff_006_f_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		};
	};
	class G506_Marshal_Badge_Necklace: G506_Sheriff_Badge_Necklace
	{
		displayName="(Marshal) Necklace Badge";
		model="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\hand_diff_007_a_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace";
			modelOff="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\hand_diff_007_a_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		};
	};
	class G506_Marshal_Badge_Necklace_V: G506_Sheriff_Badge_Necklace
	{
		displayName="(Marshal) Necklace Vest Badge";
		model="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace_V";
		hiddenSelections[]={"camo","camo1"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\hand_diff_007_a_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace_V";
			modelOff="\A3FL_G506_Characters\Badges\G506_Marshal_Badge_Necklace_V";
			hiddenSelections[]={"camo","camo1"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\badges\textures\hand_diff_007_a_uni.paa","\A3FL_G506_Characters\badges\textures\accs_diff_005_b_uni.paa"};
		};
	};
};
