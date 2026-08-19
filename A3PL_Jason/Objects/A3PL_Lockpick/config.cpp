class CfgPatches
{
	class A3PL_Lockpick
	{
		units[]=
		{
			"A3PL_Lockpick"
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
	class A3PL_Lockpick: A3PL_Objects
	{
		_generalMacro="A3PL_Lockpick";
		model="\A3PL_Jason\Objects\A3PL_Lockpick\A3PL_Lockpick.p3d";
		displayName="Lockpick";
	};
};
