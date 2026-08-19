class CfgPatches
{
	class A3FL_PalletLifter
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 3.2;
		requiredAddons[] = {"A3PL_Cars","A3_Soft_F"};
	};
};

class CfgVehicles {
    class All;
    class ThingX;
    class A3FL_PalletLifter : ThingX {
    	scope = 2;
    	author = "Winston";
		displayName = "Pallet Lifter";
		armor = 999999;
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		hiddenSelections[] = {"body"};
		model = "A3FL_Air\PalletLifter\A3FL_PalletLifter";
		hiddenSelectionsTextures[] = {"A3FL_Air\PalletLifter\data\MetalBody_co.paa"};
        slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
	};
};