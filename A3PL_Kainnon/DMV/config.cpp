class CfgPatches
{
	class A3PL_Kainnon_DMV
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
	class Land_A3PL_Kainnon_DMV: A3PL_Houses
	{
		displayName="A3PL DMV Building";
		model="\A3PL_Kainnon\DMV\A3PL_Kainnon_DMV.p3d";
	};
};
