class CfgPatches
{
	class G506_Character_Worker_Belts
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
	class G506_Worker_Belt: Vest_Camo_Base
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		displayName="Worker Belt";
		descriptionShort="Worker Belt";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_008_a_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_008_a_uni.paa"};
			containerClass="Supply80";
			mass=5;
		};
	};
	class G506_Worker_Belt2_Brown: G506_Worker_Belt
	{
		displayName="Work Belt (Brown/Tan)";
		descriptionShort="Work Belt (Brown/Tan)";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_a_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_a_uni.paa"};
		};
	};
	class G506_Worker_Belt2_Black: G506_Worker_Belt
	{
		displayName="Work Belt (Black/Grey)";
		descriptionShort="Work Belt (Black/Grey)";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_b_uni.paa"};
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
	class G506_NV_Worker_Belt: NVGoggles
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		visionMode[]={"Normal"};
		displayName="(Work) Worker Belt";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_008_a_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt";
			modelOff="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_008_a_uni.paa"};
		};
	};
	class G506_NV_Worker_Belt2_Brown: G506_NV_Worker_Belt
	{
		displayName="(Work) Work Belt (Brown/Tan)";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_a_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			modelOff="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_a_uni.paa"};
		};
	};
	class G506_NV_Worker_Belt2_Black: G506_NV_Worker_Belt
	{
		displayName="(Work) Work Belt (Black/Grey)";
		model="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
		hiddenSelections[]={"camo"};
		hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_b_uni.paa"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			modelOff="\A3FL_G506_Characters\Worker_Belt\G506_Worker_Belt2";
			hiddenSelections[]={"camo"};
			hiddenSelectionsTextures[]={"\A3FL_G506_Characters\Worker_Belt\Textures\accs_diff_009_b_uni.paa"};
		};
	};
};
