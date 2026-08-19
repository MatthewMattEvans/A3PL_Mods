class CfgPatches
{
	class A3FL_Andrew_C4
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
	class A3FL_C4 : Strategic {
		model = "A3FL_Andrew\C4\A3FL_C4.p3d";
		displayName = "A3FL C4";
		scope = 2;
	};
};