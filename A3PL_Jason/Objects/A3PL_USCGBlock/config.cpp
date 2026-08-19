class CfgPatches
{
	class A3PL_USCGBlock
	{
		units[]=
		{
			"A3PL_USCGBlock"
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
	class A3PL_USCGBlock: Building
	{
		scope=2;
		displayName="A3PL USCG Block";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_USCGBlock\A3PL_USCGBlock.p3d";
	};
};
