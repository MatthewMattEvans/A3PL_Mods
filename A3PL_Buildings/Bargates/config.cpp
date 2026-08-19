class CfgPatches
{
	class A3PL_Buildings_Bargates
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3PL_Houses"
		};
	};
};

class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_Bargate_Left: A3PL_Houses
	{
		scope = 2;
		model="\A3PL_Buildings\Bargates\A3PL_Bargate_Left";
		displayName="A3PL Left Bargate";
	};
	class Land_A3PL_Bargate_Right: A3PL_Houses
	{
		scope = 2;
		model="\A3PL_Buildings\Bargates\A3PL_Bargate_Right";
		displayName="A3PL Right Bargate";
	};
};