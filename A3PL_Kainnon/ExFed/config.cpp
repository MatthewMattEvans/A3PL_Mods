class CfgPatches
{
	class A3PL_Kainnon_Fedex
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"A3PL_Houses",
			"A3PL_MultiMats_1"
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_Kainnon_Fedex: A3PL_Houses
	{
		model = "A3PL_Kainnon\ExFed\A3PL_Kainnon_Fedex.p3d";
		displayName = "Fedex";
		ladders[] = 
		{
			{"Ladder_1_start",
			"Ladder_1_end"}
		};
	};
};
