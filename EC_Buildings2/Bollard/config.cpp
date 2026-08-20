class CfgPatches
{
	class EC_Buildings2_Bollards
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Exp_Signs_Traffic"};
		units[] = {"Land_EC_Bollard_Vanilla"};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Land_Bollard_01_F;
	class Land_EC_Bollard_Vanilla: Land_Bollard_01_F
	{
		displayName = "EC Vanilla Bollard";
		destrType = 0;
		model = "\EC_Buildings2\Bollard\EC_Bollard_Vanilla";
	};
};
