class CfgPatches
{
        class A3PL_Objects_BusStop
        {
                units[] = {};
                weapons[] = {};
                requiredVersion = 0.1;
                requiredAddons[] = {"A3PL_Cars"};				
//				requiredAddons[] = {"A3PL_Objects","A3_Data_F","A3_Structures_F","A3_Signs_F","A3_Structures_F_Civ","A3_Structures_F_Civ_Lamps","A3_Structures_F_Walls","A3PL_Donator"};
        };
};
class CfgVehicles
{
    class A3PL_Houses;
	class Land_A3PL_BusStop:A3PL_Houses
	{
        model = "\A3PL_Objects\Street\bus_stop\A3PL_BusStop";
        scope = 2;
        displayName = "A3PL Bus Stop";
        vehicleclass = "A3PL_Houses";	
		animated = 1;

		class AnimationSources
		{
			class advert_roll
			{
				source = "user";
				animPeriod = 19;
				initPhase = 0.35;
			};
		};
    };
};