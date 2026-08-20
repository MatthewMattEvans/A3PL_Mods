class CfgPatches
{
	class EC_Optics_X300
	{
		addonRootClass = "EC_Optics";
		requiredAddons[] = {"A3_Weapons_F","A3_Weapons_F_Items"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"flashlight_X300","Zasleh2","EC_acc_flashlight"};
	};
};
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryMuzzleItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class acc_flashlight;
	class InventoryFlashLightItem_Base_F;
	class Zasleh2: ItemCore
	{
		scope = 2;
		model = "A3\weapons_f\data\zaslehsdl_proxy.p3d";
	};
	class EC_acc_flashlight: acc_flashlight
	{
		scope = 2;
		displayName = "$STR_A3_cfgWeapons_acc_flashlight0";
		descriptionUse = "$STR_A3_cfgWeapons_use_flashlight0";
		picture = "\A3\weapons_F\Data\UI\gear_accv_flashlight_CA.paa";
		model = "\A3\weapons_f\acc\accv_Flashlight_F";
		descriptionShort = "$STR_A3_cfgWeapons_acc_flashlight1";
	};
	class flashlight_X300: EC_acc_flashlight
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "Surefire X300";
		author = "Davis ABrams";
		editorCategory = "EdCat_WeaponAttachments";
		editorSubcategory = "EdSubcat_SideSlot";
		vehicleClass = "WeaponAccessories";
		model = "EC_Optics\X300\EC_X300.p3d";
		class TransportItems
		{
			class flashlight_X300
			{
				name = "flashlight_X300";
				count = 1;
			};
		};
	};
};
