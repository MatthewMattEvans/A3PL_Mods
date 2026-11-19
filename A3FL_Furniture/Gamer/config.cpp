class CfgPatches
{
	class A3FL_Furniture_Gamer
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
	class A3PL_Gamer_BilliardTable: A3FL_Objects
	{
		_generalMacro="A3PL_Gamer_BilliardTable";
		model="\A3FL_Furniture\Gamer\A3PL_BilliardTable.p3d";
		displayName="Billiard Table (Gamer perk)";
	};
	class A3PL_Gamer_Dartboard: A3FL_Objects
	{
		_generalMacro="A3PL_Gamer_Dartboard";
		model="\A3FL_Furniture\Gamer\A3PL_Dartboard.p3d";
		displayName="Dart Board (Gamer perk)";
	};
	class A3PL_Gamer_Galaga: A3FL_Objects
	{
		_generalMacro="A3PL_Gamer_Galaga";
		model="\A3FL_Furniture\Gamer\A3PL_Galaga.p3d";
		displayName="Galaga arcade (Gamer perk)";
	};
	class A3PL_Gamer_LCD: A3FL_Objects
	{
		_generalMacro="A3PL_Gamer_LCD";
		model="\A3FL_Furniture\Gamer\A3PL_LCD.p3d";
		displayName="LCD TV (Gamer perk)";
	};
	class A3PL_Gamer_UnicornFloat: A3FL_Objects
	{
		_generalMacro="A3PL_Gamer_UnicornFloat";
		model="\A3FL_Furniture\Gamer\A3PL_UnicornFloat.p3d";
		displayName="Unicorn Float (Gamer perk)";
	};
};
