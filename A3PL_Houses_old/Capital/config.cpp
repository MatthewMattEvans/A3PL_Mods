class CfgPatches
{
    class A3PL_Houses_Capital
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"A3PL_Cars","A3PL_Houses"};
    };
};

class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_Capital: A3PL_Houses
	{
		model = "\A3PL_Houses\Capital\A3PL_Capital";
		displayName = "A3PL Capital Building";
		scope = 2;
	};	
};