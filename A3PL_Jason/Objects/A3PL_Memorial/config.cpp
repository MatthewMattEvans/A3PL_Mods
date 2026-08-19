class CfgPatches
{
	class A3PL_Memorial
	{
		units[]=
		{
			"A3PL_Memorial"
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
	class A3PL_Memorial: Building
	{
		scope=2;
		displayName="A3PL Memorial";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_Memorial\A3PL_Memorial.p3d";
	};
};
