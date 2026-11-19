class CfgPatches
{
    class A3FL_Hydrant
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.2;
		requiredAddons[] = {"A3PL_Houses"};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_FireHydrant: A3PL_Houses
		{
			model = "\A3FL_Hydrant\A3PL_FireHydrant";
			displayName = "Fire Hydrant";
			hiddenSelections[] = {};
			hiddenSelectionsTextures[] = {};
			class animationSources
			{
				class cap_hide
				{
					source = "user";
					initPhase = 0;
					animPeriod = 0;
				};				
			};
		};
};