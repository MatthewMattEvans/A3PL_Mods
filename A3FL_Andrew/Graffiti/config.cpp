class CfgPatches
{
	class A3FL_Andrew_Graffiti
	{
		author="Andrew Axel";
		name="ArmA 3 Fishers Life Andrew";
		url="https://arma3fisherslife.net";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Data"};
	};
};
class CfgVehicles {
	class Strategic;
	class A3FL_Graffiti_Boog : Strategic {
		model = "A3FL_Andrew\Graffiti\A3FL_Graffiti.p3d";
		displayName = "A3FL Boog Graffiti";
		scope = 2;
		hiddenSelections[]={"Graffiti"};
		hiddenSelectionsTextures[]={"A3FL_Andrew\Graffiti\data\Graffiti_boog.paa"};
	};
	class A3FL_Graffiti_BBM : Strategic {
		model = "A3FL_Andrew\Graffiti\A3FL_Graffiti.p3d";
		displayName = "A3FL Boog Graffiti";
		scope = 2;
		hiddenSelections[]={"Graffiti"};
		hiddenSelectionsTextures[]={"A3FL_Andrew\Graffiti\data\Graffiti_BBM.paa"};
	};
};