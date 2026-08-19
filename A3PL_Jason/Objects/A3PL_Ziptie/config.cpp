class CfgPatches
{
	class A3PL_Ziptie
	{
		units[]=
		{
			"A3PL_Ziptie"
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
	class All{};
	class Static: All {};
	class A3PL_Objects;
	class A3PL_Ziptie: A3PL_Objects
	{
		_generalMacro="A3PL_Ziptie";
		model="\A3PL_Jason\Objects\A3PL_Ziptie\A3PL_Ziptie.p3d";
		displayName="Ziptie";
	};
};
