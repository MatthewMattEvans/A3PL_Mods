class CfgPatches
{
    class A3FL_Drugs_Crack
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3FL_Objects",
            "A3_Soft_F",
            "A3_Soft_F_Orange"
        };
    };
};
class DefaultEventhandlers;
class CfgVehicles
{
    class A3FL_Objects;
    class A3FL_BakingSoda: A3FL_Objects
	{
		_generalMacro="A3FL_BakingSoda";
		model="A3FL_Drugs\Crack\A3FL_BakingSoda";
		displayName="Baking Soda";
	};
    class A3FL_Pot: A3FL_Objects
    {
        _generalMacro="A3FL_Pot";
        model="A3FL_Drugs\Crack\A3FL_Pot";
        displayName="Cooking Pot";
    };
    class A3FL_Generator: A3FL_Objects
    {
        author="Nick Parker";
        displayName="Generator";
        model="A3FL_Drugs\Crack\A3FL_Generator";
        hiddenSelections[] = {
            "red",
            "green"
        };
        hiddenSelectionsTextures[] = {
            //Green - #(argb,8,8,3)color(0,0.835294,0,1.0,co)
            "#(argb,8,8,3)color(1,0,0,1.0,co)",
            "#(argb,8,8,3)color(0.156863,0.156863,0.156863,1.0,co)"

            /*
            #(argb,8,8,3)color(0,0.835294,0,1.0,co)
            
//Red
generator setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.733333,0,0,1.0,co)"]; 
generator setObjectTextureGlobal [1,"#(argb,8,8,3)color(0.266667,0.266667,0.266667,1.0,co)"]; 
 
 
generator setObjectMaterial [0,"a3pl_cars\common\rvmats\car_beacon_red_emit.rvmat"]; 
generator setObjectMaterial [1,"a3fl_props\shopsigns\data\metallic.rvmat"];

//Green
generator setObjectTextureGlobal [0,"#(argb,8,8,3)color(0.266667,0.266667,0.266667,1.0,co)"];
generator setObjectTextureGlobal [1,"#(argb,8,8,3)color(0,0.835294,0,1.0,co)"];


generator setObjectMaterial [0,"a3fl_props\shopsigns\data\metallic.rvmat"];
generator setObjectMaterial [1,"a3pl_cars\common\rvmats\car_beacon_green_emit.rvmat"];


            */
        };
    };
    class Sound_Alarm;
    class A3FL_GEN_1: Sound_Alarm
    {
        author="A3FL Nick";
        _generalMacro="Generator";
        sound="A3FL_GEN_1";
        displayName="A3FL_GEN_1";
    };
};

class CfgSFX
{
    class A3FL_GEN_1
    {
        sounds[]={"Generator"};
        name="A3FL_GEN_1";
        Generator[]={"A3FL_Drugs\Crack\sound\generator.ogg",1.1,1,250,1,0,0,0};
        empty[]={"",0,0,0,0,0,0,0};
    };
};