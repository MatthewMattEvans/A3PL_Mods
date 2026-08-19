class CfgPatches
{
	class A3PL_USCGSign
	{
		units[]=
		{
			"A3PL_USCGSign"
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
	class A3PL_USCGSign: Building
	{
		scope=2;
		displayName="A3PL USCG Sign";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_USCGSign\A3PL_USCGSign.p3d";
	};
};
