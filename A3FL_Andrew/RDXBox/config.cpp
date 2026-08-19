class CfgPatches
{
	class A3FL_Andrew_RDXBox
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
	class A3FL_RDXBox : Strategic {
		model = "A3FL_Andrew\RDXBox\A3FL_RDXBox.p3d";
		displayName = "A3FL RDX Box";
		scope = 2;
	};
};