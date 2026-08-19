class CfgPatches
{
	class A3PL_Objects_Heist
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars"};
		requiredVersion = 0.1;
	};	
};
class cfgVehicles
{
	class A3PL_Objects;
	class A3PL_Houses;
	class A3PL_Drill_Bit:A3PL_Houses
	{
		model = "\A3PL_Objects\heist\A3PL_DrillBit";
		displayName = "A3PL Drill Bit";		
		class animationSources {};
	};
	class A3PL_PileCash:A3PL_Houses
	{
		model = "\A3PL_Objects\heist\A3PL_PileCash";
		displayName = "A3PL Pile of Cash";		
		class animationSources {};		
	};
	class A3PL_Drill_Bank:A3PL_Houses
	{
		model = "\A3PL_Objects\heist\A3PL_Drill";
		displayName = "A3PL Bank drill";	
		class animationSources
		{
			class drill_bit {source = "user";animPeriod = 0.001;initPhase = 0;};
			class drill_handle:drill_bit {animPeriod = 61;};
		};
	};
	class A3PL_Bank_Cash:A3PL_Objects
	{
		model = "\A3PL_Objects\heist\A3PL_Bag";
		displayName = "A3PL Bank Money";		
	};
	
	class A3PL_CCTV:A3PL_Houses
	{
		model = "\A3PL_Objects\heist\A3PL_CCTV";
		displayName = "A3PL CCTV Camera";
		scope = 2;
	};
};
