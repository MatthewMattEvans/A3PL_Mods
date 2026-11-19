class CfgPatches
{
	class A3FL_Furniture_Winchester
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3FL_Objects"
		};
		requiredVersion=0.1;
	};
};
class cfgVehicles
{
	class A3FL_Objects;
	class A3PL_Winchester_AntiqueChair: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_AntiqueChair";
		model="\A3FL_Furniture\Winchester\A3PL_Antique_Chair.p3d";
		displayName="Antique Chair (Winchester perk)";
	};
	class A3PL_Winchester_AntiqueDesk: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_AntiqueDesk";
		model="\A3FL_Furniture\Winchester\A3PL_Antique_Desk.p3d";
		displayName="Antique Desk (Winchester perk)";
	};
	class A3PL_Winchester_ArmChair: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_ArmChair";
		model="\A3FL_Furniture\Winchester\A3PL_Armchair.p3d";
		displayName="Armchair (Winchester perk)";
	};
	class A3PL_Winchester_Bed1: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Bed1";
		model="\A3FL_Furniture\Winchester\A3PL_Bed_1.p3d";
		displayName="Bed 1 (Winchester perk)";
	};
	class A3PL_Winchester_Bed2: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Bed2";
		model="\A3FL_Furniture\Winchester\A3PL_Bed_2.p3d";
		displayName="Bed 2 (Winchester perk)";
	};
	class A3PL_Winchester_Bedside: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Bedside";
		model="\A3FL_Furniture\Winchester\A3PL_Bedside.p3d";
		displayName="Bedside table (Winchester perk)";
	};
	class A3PL_Winchester_Chair1: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Chair1";
		model="\A3FL_Furniture\Winchester\A3PL_Chair1.p3d";
		displayName="Chair 1 (Winchester perk)";
	};
	class A3PL_Winchester_Chair2: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Chair2";
		model="\A3FL_Furniture\Winchester\A3PL_Chair2.p3d";
		displayName="Chair 2 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_ChestDrawers";
		model="\A3FL_Furniture\Winchester\A3PL_Chest_Drawers.p3d";
		displayName="Chest Drawers (Winchester perk)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_1_co.paa"
		};
	};
	class A3PL_Winchester_ChestDrawers2: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_2_co.paa"
		};
		displayName="Chest Drawers Variation 2 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers3: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_3_co.paa"
		};
		displayName="Chest Drawers Variation 3 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers4: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_4_co.paa"
		};
		displayName="Chest Drawers Variation 4 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers5: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_5_co.paa"
		};
		displayName="Chest Drawers Variation 5 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers6: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_6_co.paa"
		};
		displayName="Chest Drawers Variation 6 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers7: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_7_co.paa"
		};
		displayName="Chest Drawers Variation 7 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers8: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_8_co.paa"
		};
		displayName="Chest Drawers Variation 8 (Winchester perk)";
	};
	class A3PL_Winchester_ChestDrawers9: A3PL_Winchester_ChestDrawers
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\chest_drawers_9_co.paa"
		};
		displayName="Chest Drawers Variation 9 (Winchester perk)";
	};
	class A3PL_Winchester_Drawers: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Drawers";
		model="\A3FL_Furniture\Winchester\A3PL_Drawers.p3d";
		displayName="Drawers (Winchester perk)";
	};
	class A3PL_Winchester_Floorlamp: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Floorlamp";
		model="\A3FL_Furniture\Winchester\A3PL_Floorlamp.p3d";
		displayName="Floorlamp (Winchester perk)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\foorlamp_white_co.paa"
		};
	};
	class A3PL_Winchester_Floorlamp2: A3PL_Winchester_Floorlamp
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\foorlamp_black_co.paa"
		};
		displayName="Black Floorlamp (Winchester perk)";
	};
	class A3PL_Winchester_Floorlamp3: A3PL_Winchester_Floorlamp
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Winchester\data\foorlamp_red_co.paa"
		};
		displayName="Red Floorlamp (Winchester perk)";
	};
	class A3PL_Winchester_Wardrobe: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_Wardrobe";
		model="\A3FL_Furniture\Winchester\A3PL_Wardrobe.p3d";
		displayName="Wardrobe (Winchester perk)";
	};
	class A3PL_Winchester_WineBottles: A3FL_Objects
	{
		_generalMacro="A3PL_Winchester_WineBottles";
		model="\A3FL_Furniture\Winchester\A3PL_WineBottles.p3d";
		displayName="Wine bottles (Winchester perk)";
	};
};
