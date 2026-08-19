class CfgPatches
{
	class A3FL_TransportContainer
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 3.2;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class CfgVehicles {
    class All;
    class ThingX;
    class A3FL_TransportContainer : ThingX {
    	scope = 2;
    	author = "Winston";
		displayName = "Transport Container";
		armor = 999999;
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		hiddenSelections[] = {"body"};
		model = "A3FL_Air\TransportContainer\A3FL_TransportContainer";
		//hiddenSelectionsTextures[] = {"A3FL_Air\TransportContainer\data\MetalBody_co.paa"};
        slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		class AnimationSources {
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
			};
			class Door_2: Door_1 {};
		};
	};
};