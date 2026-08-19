class CfgPatches
{
    class A3PL_John_Houses
    {
        units[]={"Land_John_House_Grey","Land_John_House_Blue","Land_John_House_Red","Land_John_House_Green"};
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

class CfgVehicles
{
    class A3PL_Houses;
    class Land_John_House_Grey: A3PL_Houses
    {
        scope = 2;
        model="\A3PL_John_Buildings\house\John_House_Grey.p3d";
        icon = "\A3PL_John_Buildings\house\Textures\a3pl.paa";
        displayName="A3PL John House Grey";
        class AnimationSources {
            class Common
            {
              source="user";
              animPeriod=0.001;
              initPhase=0;
            };
            class room_1: Common {};
            class room_2: Common {};
            class room_3: Common {};
            class room_4: Common {};
            class door
            {
              source="user";
              animPeriod=2;
              initPhase=0;
            };
            class Door_1: door {};
            class Door_2: door {};
            class Door_3: door {};
            class Door_4: door {};
            class Door_5: door {};
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
        };
    };
    class Land_John_House_Blue: Land_John_House_Grey
    {
    	 displayName="A3PL John House Blue";
    	 model="\A3PL_John_Buildings\house\John_House_Blue.p3d";
    };
    class Land_John_House_Red: Land_John_House_Grey
    {
    	 displayName="A3PL John House Red";
    	 model="\A3PL_John_Buildings\house\John_House_Red.p3d";
    };
    class Land_John_House_Green: Land_John_House_Grey
    {
    	 displayName="A3PL John House Green";
    	 model="\A3PL_John_Buildings\house\John_House_Green.p3d";
    };
};