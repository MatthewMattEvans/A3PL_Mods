class CfgPatches
{
	class A3PL_BodyDead
	{
		units[]=
		{
			"A3PL_BodyDead"
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
	class A3PL_BodyDead: Building
	{
		scope=2;
		displayName="A3PL BodyDead";
		vehicleclass="";
		model="\A3PL_Jason\Objects\A3PL_BodyDead\A3PL_BodyDead.p3d";
	};
};
