class CfgPatches
{
	class A3FL_Weed_Rack
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars","A3FL_Objects"};
		requiredVersion = 0.1;
	};	
};
class cfgVehicles
{
	class A3FL_Objects;
	class A3FL_Weed_Rack: A3FL_Objects
	{
		_generalMacro = "A3FL_Weed_Rack";
        model = "\A3FL_Drugs\Weed\Rack\A3FL_Weed_Rack.p3d";
        displayName = "Etendoir";		
	};	
};
