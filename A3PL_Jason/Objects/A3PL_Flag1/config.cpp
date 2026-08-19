class CfgPatches
{
	class A3PL_Flag1
	{
		units[]=
		{
			"A3PL_Flag1"
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
	class A3PL_Flag1: Building
	{
		scope=2;
		displayName="A3PL Flag 1";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_Flag1\A3PL_Flag1.p3d";
	};
};
