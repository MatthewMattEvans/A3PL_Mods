class CfgPatches
{
	class A3FL_Andrew_Bridge
	{
		author="Andrew Axel";
		name="ArmA 3 Fishers Life Andrew";
		url="https://arma3fisherslife.net";
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3FL_Buildings"};
	};
};
class CfgVehicles {
	#include "cfgVehicles.hpp"
	class Land_A3FL_Bridge : A3FL_Buildings {
		model = "A3FL_Andrew\Bridge\A3FL_Bridge.p3d";
		displayName = "A3FL Bridge One Lane";
		scope = 2;
	};
	class Land_A3FL_Bridge2 : A3FL_Buildings {
		model = "A3FL_Andrew\Bridge\A3FL_Bridge2.p3d";
		displayName = "A3FL Bridge Empty One Lane";
		scope = 2;
	};
};