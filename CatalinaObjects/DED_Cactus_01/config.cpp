#include "basicdefines_A3.hpp"

class CfgPatches
{
	class DED_Cactus_01
	{
		units[] = {"c_cactus1"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3PL_Cars"};
	};
};
class CfgVehicleClasses {

	class Suburb {
		displayName = "Suburb";
	};
};

class CfgVehicles
{
	class House;
	class House_f: House
	{
	};
	
	class c_cactus1: House_f
	{
		vehicleClass = "Suburb";
		model="\CatalinaObjects\DED_Cactus_01\c_cactus1.p3d";
		scope=1;
		displayName="Cactus";
		armor=999999;
	};
};
