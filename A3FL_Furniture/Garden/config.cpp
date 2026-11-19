class CfgPatches
{
	class A3FL_Furniture_Garden
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
	class A3PL_Garden_Campfire: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_Campfire";
		model="\A3FL_Furniture\Garden\A3PL_Campfire.p3d";
		displayName="Campfire(Garden perk)";
	};
	class A3PL_Garden_StatueGod: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_StatueGod";
		model="\A3FL_Furniture\Garden\A3PL_Statue_God.p3d";
		displayName="Budha Statue (Garden perk)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_god_stone_co.paa"
		};
	};
	class A3PL_Garden_StatueGod2: A3PL_Garden_StatueGod
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_god_bronze2_co.paa"
		};
		displayName="Alt Bronze Budha Statue (Garden perk)";
	};
	class A3PL_Garden_StatueGod3: A3PL_Garden_StatueGod
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_god_bronze_co.paa"
		};
		displayName="Bronze Budha Statue (Garden perk)";
	};
	class A3PL_Garden_StatueGod4: A3PL_Garden_StatueGod
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_god_stone_ivy_co.paa"
		};
		displayName="Stone Budha Statue w/ Ivy (Garden perk)";
	};
	class A3PL_Garden_StatueMonk: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_StatueMonk";
		model="\A3FL_Furniture\Garden\A3PL_Statue_Monk.p3d";
		displayName="Monk Statue (Garden perk)";
	};
	class A3PL_Garden_StatueViking: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_StatueViking";
		model="\A3FL_Furniture\Garden\A3PL_Statue_Viking.p3d";
		displayName="Viking Statue (Garden perk)";
	};
	class A3PL_Garden_StatueViking2: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_StatueViking2";
		model="\A3FL_Furniture\Garden\A3PL_Statue_Viking2.p3d";
		displayName="Viking Statue 2 (Garden perk)";
	};
	class A3PL_Garden_StatueWoman: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_StatueWoman";
		model="\A3FL_Furniture\Garden\A3PL_Statue_Woman.p3d";
		displayName="Woman Statue (Garden perk)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_woman_stone_co.paa"
		};
	};
	class A3PL_Garden_StatueWoman2: A3PL_Garden_StatueWoman
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_woman_granite_co.paa"
		};
		displayName="Granite Woman Statue (Garden perk)";
	};
	class A3PL_Garden_StatueWoman3: A3PL_Garden_StatueWoman
	{
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Garden\data\statue_woman_bronze_co.paa"
		};
		displayName="Bronze WomanStatue (Garden perk)";
	};
	class A3PL_Garden_Treebench: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_Treebench";
		model="\A3FL_Furniture\Garden\A3PL_Treebench.p3d";
		displayName="Tree bench (Garden perk)";
	};
	class A3PL_Garden_VinesLarge: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_VinesLarge";
		model="\A3FL_Furniture\Garden\A3PL_Vines_Large.p3d";
		displayName="Large Vines (Garden perk)";
	};
	class A3PL_Garden_VinesMedium: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_VinesMedium";
		model="\A3FL_Furniture\Garden\A3PL_Vines_Medium.p3d";
		displayName="Medium Vines (Garden perk)";
	};
	class A3PL_Garden_VinesSmall: A3FL_Objects
	{
		_generalMacro="A3PL_Garden_VinesSmall";
		model="\A3FL_Furniture\Garden\A3PL_Vines_Small.p3d";
		displayName="Small Vines (Garden perk)";
	};
};
