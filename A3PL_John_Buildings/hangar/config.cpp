class CfgPatches
{
    class A3PL_John_Hangar
    {
        units[]={
            "Land_John_Hangar"
        };
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3PL_Cars",
            "A3_Data_F",
            "A3_Structures_F",
            "A3_Signs_F",
            "A3_Structures_F_Civ",
            "A3_Structures_F_Civ_Lamps",
            "A3_Structures_F_Walls",
            "A3PL_Houses"
        };
    };
};
class CfgVehicleClasses { 
    class A3PL_John_Buildings {
        displayName = "A3PL_John_Buildings";
    };
};

class CfgVehicles
{
    class A3PL_Houses;
    class Land_John_Hangar: A3PL_Houses
    {
        scope = 2;
        model="\A3PL_John_Buildings\hangar\John_Hangar.p3d";
        icon = "\A3PL_John_Buildings\house\Textures\a3pl.paa";
        displayName="A3PL John Hangar";
        vehicleClass = "A3PL_John_Buildings";
        class AnimationSources {
            class Common
            {
              source="user";
              animPeriod=0.001;
              initPhase=0;
            };
            class room_1: Common {};

            class door
            {
              source="user";
              animPeriod=2;
              initPhase=0;
            };
            class Door_1: door {};
            class Door_2: door {};
            class hangardoor
            {
            	source="user";
				animPeriod=10;
				initPhase=0;
            };

        };
        class Reflectors
        {
            class Light_1
            {
                color[]={50,50,50};
                ambient[]={10,10,10};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_1";
                direction="Light_1_dir";
                selection = "Light_1";
                hitpoint = "Light_1";
                useFlare=1;
                flareSize=0.80000001;
                flareMaxDistance=250;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
            class Light_2: Light_1
            {
                position="Light_2";
                direction="Light_2_dir";
                selection = "Light_2";
                hitpoint = "Light_2";
            };
            class Light_3: Light_1
            {
                position="Light_3";
                direction="Light_3_dir";
                selection = "Light_3";
                hitpoint = "Light_3";
            };
            class Light_4: Light_1
            {
                position="Light_4";
                direction="Light_4_dir";
                selection = "Light_4";
                hitpoint = "Light_4";
            };
            class Light_5: Light_1
            {
                position="Light_5";
                direction="Light_5_dir";
                selection = "Light_5";
                hitpoint = "Light_5";
            };
            class Light_6: Light_1
            {
                position="Light_6";
                direction="Light_6_dir";
                selection = "Light_6";
                hitpoint = "Light_6";
            };
            class Light_7: Light_1
            {
                position="Light_7";
                direction="Light_7_dir";
                selection = "Light_7";
                hitpoint = "Light_7";
            };
            class Light_8: Light_1
            {
                position="Light_8";
                direction="Light_8_dir";
                selection = "Light_8";
                hitpoint = "Light_8";
            };
            class Light_9: Light_1
            {
                position="Light_9";
                direction="Light_9_dir";
                selection = "Light_9";
                hitpoint = "Light_9";
            };
        };
    };
};