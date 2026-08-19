class CfgPatches
{
    class A3PL_Houses_Bank
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
	class Land_A3PL_Bank: A3PL_Houses
	{
        model = "\A3PL_Houses\Bank\A3PL_Bank";
        scope = 1;
        displayName = "A3PL Bank";
		ladders[] = {{"ladder_1_1", "ladder_1_2"}};
	};
};