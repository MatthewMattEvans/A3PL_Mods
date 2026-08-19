class CfgPatches
{
	class A3PL_DOCSign
	{
		units[]=
		{
			"A3PL_DOCSign"
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
	class A3PL_DOCSign: Building
	{
		scope=2;
		displayName="A3PL DOC Sign";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_DOCSign\A3PL_DOCSign.p3d";
	};
};
