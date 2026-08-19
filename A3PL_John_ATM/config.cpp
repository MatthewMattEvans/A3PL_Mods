class CfgPatches
{
	class A3PL_John_ATM
	{
		units[]=
		{
			"A3PL_John_ATM"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Common"
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
	class A3PL_John_ATM: Building
	{
		scope=2;
		displayName="ATM";
		vehicleclass="";
		model="\A3PL_John_ATM\Data\Model\John_ATM";
	};
};