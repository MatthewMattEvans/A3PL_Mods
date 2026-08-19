class CfgPatches
{
	class A3PL_Fridge
	{
		units[]=
		{
			"A3PL_Fridge"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3PL_Objects"
		};
	};
};
class CfgVehicles
{
	class All
	{
	};
	class Static: All
	{
	};
	class Building: Static
	{
	};
	class A3PL_Fridge: Building
	{
		scope=2;
		displayName="A3PL Fridge";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_Fridge\A3PL_Fridge.p3d";
	};
};
