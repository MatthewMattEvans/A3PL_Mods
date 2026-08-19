class CfgPatches
{
	class A3PL_Hinkley
	{
		author="Alex Hinkley on behalf of Northbridge Interactive LLP";
		url="arma3projectlife.com";
		units[]={};
		weapons[]={};
		requiredAddons[]={
			"A3PL_Common"
		};
		requiredVersion=9.9999997005;
	};
};

class CfgGlasses
{
	class G_Bandanna_aviator;
	class G_Bandanna_Sport;

	class A3PL_Hinkley_Bando_Sport: G_Bandanna_Sport
	{
		scope=2;
		displayName="Hinkley Skull Bandana Sport";
		picture="\A3PL_Hinkley\logo\logo.paa";
		author="Alex Hinkley";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Hinkley\Clothing\Glasses\Hinkley\Hinkley_Bandana_Skull.paa"
			
		};
	};

	class A3PL_Hinkley_Bando_Aviator: G_Bandanna_aviator
	{
		scope=2;
		displayName="Hinkley Skull Bandana Aviator";
		picture="\A3PL_Hinkley\logo\logo.paa";
		author="Alex Hinkley";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Hinkley\Clothing\Glasses\Hinkley\Hinkley_Bandana_Skull.paa"
			
		};
	};
};

class CfgWeapons {
	class Vest_Camo_Base;
	class VestItem;
	class HeadgearItem;
	class ItemCore;

	// ERT Vests
	class A3PL_Sheriff_Plate_Alt: Vest_Camo_Base
	{
		scope = 1;
		displayName = "FISD SERT Sheriff Plate Carrier Alt";
		model = "A3\characters_f\BLUFOR\equip_b_vest01";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
		descriptionShort = "";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Sheriff_Plate.paa"};
		vestType = "Rebreather";
		class ItemInfo: VestItem {
			uniformModel = "A3\characters_f\BLUFOR\equip_b_vest01";
			containerClass = "Supply400";
			mass = 1;
			side = 1;
			passThrough = 0.1;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Sheriff_Plate.paa"};
		};
	};

	class A3PL_Sheriff_Vest: Vest_Camo_Base
	{
		scope = 2;
		displayName = "FISD SERT Sheriff Vest";
		model = "A3\characters_f\BLUFOR\equip_b_vest02";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
		descriptionShort = "";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Sheriff_Plate.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier.rvmat"};
		vestType = "Rebreather";
		class ItemInfo: VestItem {
			uniformModel = "A3\characters_f\BLUFOR\equip_b_vest02";
			containerClass = "Supply400";
			mass = 1;
			side = 1;
			passThrough = 0.1;
			hiddenSelections[] = {"Camo"};
			hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Sheriff_Plate.paa"};
		};
	};

	class A3PL_Sheriff_Plate_Black: A3PL_Sheriff_Vest
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Sheriff Plate Carrier (Black)";
		vestType = "Rebreather";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Black.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier_Sheriff.rvmat"};
	};
	class A3PL_Sheriff_Plate_Black_Alt: A3PL_Sheriff_Plate_Alt
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Sheriff Plate Carrier Alt (Black)";
		vestType = "Rebreather";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Black.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrierAlt_Sheriff.rvmat"};
	};
	class A3PL_SERT_Plate_Black: A3PL_Sheriff_Plate_Black
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier (Black)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Black.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier_SERTB.rvmat"};
	};
	class A3PL_SERT_Plate_Black_Alt: A3PL_Sheriff_Plate_Black_Alt
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier Alt (Black)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Black.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrierAlt_SERTB.rvmat"};
	};
	class A3PL_SERT_Plate_Green: A3PL_Sheriff_Plate_Black
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier (Green)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Green.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier_SERTG.rvmat"};
	};
	class A3PL_SERT_Plate_Green_Alt: A3PL_Sheriff_Plate_Black_Alt
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier Alt (Green)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Green.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrierAlt_SERTG.rvmat"};
	};
	class A3PL_SERT_Plate_Grey: A3PL_Sheriff_Plate_Black
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier (Grey)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Grey.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier_SERTG.rvmat"};
	};
	class A3PL_SERT_Plate_Grey_Alt: A3PL_Sheriff_Plate_Black_Alt
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier Alt (Grey)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Grey.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrierAlt_SERTG.rvmat"};
	};
	class A3PL_SERT_Plate_Multicam: A3PL_Sheriff_Plate_Black
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier (Multicam)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Multicam.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrier_SERTB.rvmat"};
	};
	class A3PL_SERT_Plate_Multicam_Alt: A3PL_Sheriff_Plate_Black_Alt
	{
		scope = 2;
		picture = "\A3PL_Hinkley\logo\logo.paa";
		author = "Oliver Ericsson";
		displayName = "FISD SERT Plate Carrier Alt (Multicam)";
		hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\Platecarrier_Multicam.paa"};
		hiddenSelectionsMaterials[] = {"\A3PL_Hinkley\Clothing\Vests\ERT\PlateCarrierAlt_SERTB.rvmat"};
	};
	// End ERT Vests

	// ERT Headgear
	class A3PL_Civ_HelmetSpec_Base: ItemCore {
		scope = 1;
		displayName = "Basic Helmet";
		picture = "\A3PL_Hinkley\logo\logo.paa";
		model = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"-"};
		class ItemInfo: HeadgearItem {
			uniformModel = "A3\Characters_F\BLUFOR\headgear_b_helmet_ballistic";
			hiddenSelections[] = {"Camo"};
			side = 1;
		};
	};
	class A3PL_Sheriff_Helmet_Black: A3PL_Civ_HelmetSpec_Base
	{
		scope = 2;
		displayName = "FISD SERT Sheriff Helmet Black";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
        hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Headgear\ERT\SERT_Helmet_Black.paa"};
	};
	class A3PL_Sheriff_Helmet_Grey: A3PL_Civ_HelmetSpec_Base
	{
		scope = 2;
		displayName = "FISD SERT Sheriff Helmet Grey";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
        hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Headgear\ERT\SERT_Helmet_Grey.paa"};
	};
	class A3PL_Sheriff_Helmet_Green: A3PL_Civ_HelmetSpec_Base
	{
		scope = 2;
		displayName = "FISD SERT Sheriff Helmet Green";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
        hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Headgear\ERT\SERT_Helmet_Green.paa"};
	};
	class A3PL_Sheriff_Helmet_Multicam: A3PL_Civ_HelmetSpec_Base
	{
		scope = 2;
		displayName = "FISD SERT Sheriff Helmet Multicam";
		author = "Oliver Ericsson";
		picture = "\A3PL_Hinkley\logo\logo.paa";
        hiddenSelectionsTextures[] = {"\A3PL_Hinkley\Clothing\Headgear\ERT\SERT_Helmet_Multicam.paa"};
	};
	// End ERT Headgear
};