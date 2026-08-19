class CfgPatches
{
	class A3PL_Flag2
	{
		units[]=
		{
			"A3PL_Flag2"
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
	class A3PL_Flag2: Building
	{
		scope=2;
		displayName="A3PL Flag 2";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_Flag2\A3PL_Flag2.p3d";
	};
};
