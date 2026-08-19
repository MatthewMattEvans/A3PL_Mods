class CfgPatches
{
	class MM_Hospital_01
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
	class Land_MM_Hospital_01: A3PL_Houses
	{
		scope = 2;
		displayName = "Hospital";
		model = "A3PL_Kainnon\Hospital\MM_Hospital_01.p3d";
		ladders[] = 
		{
			{"start1","end1"},
			{"start2","end2"},
			{"start3","end3"}
		};
	};
};
