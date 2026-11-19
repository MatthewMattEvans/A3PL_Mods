class CfgPatches
{
    class A3FL_Drugs_Tobacco
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3_Structures_F_Data"
        };
    };
};
class cfgVehicles
{
    class Strategic;
    class A3FL_Tobacco_Plant: Strategic
    {
        model="A3FL_Drugs\Tobacco\A3FL_Tobacco_Plant";
        displayName="A3FL Tobacco Plant";
        armor=9999999;
        class AnimationSources
        {
            class Plant_Growth
            {
                source="user";
                animPeriod=300;
                initPhase=0;
            };
        };
    };
    class A3FL_Tobacco: Strategic
    {
        displayName = "Tobacco";
        model="A3FL_Drugs\Tobacco\A3FL_Tobacco";
    };
    class A3FL_Cigarette: Strategic
    {
        displayName = "Cigarette";
        model="A3FL_Drugs\Tobacco\A3FL_Cigarette";
    };
    class A3FL_Tobacco_Bottle_Empty: Strategic
    {
        model = "\A3FL_Drugs\Tobacco\A3FL_Tobacco_Bottle.p3d";
        displayName = "Grinded Tobacco Container (Empty)";
        hiddenSelections[]=
        {
            "grinded_1",
            "grinded_2",
            "grinded_3",
            "grinded_4",
            "w1",
            "w2",
            "w3"
        };
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa"
        };
    };
    class A3FL_Tobacco_Bottle_5: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (5g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa"
        };
    };
    class A3FL_Tobacco_Bottle_10: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (10g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_15: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (15g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_20: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (20g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\2.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_25: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (25g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\2.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_30: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (30g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\3.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_35: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (35g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\3.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_40: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (40g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\4.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_45: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (45g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\4.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_50: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (50g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_55: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (55g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_60: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (60g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\6.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_65: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (65g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\6.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_70: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (70g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\7.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_75: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (75g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\7.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_80: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (80g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\8.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_85: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (85g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\8.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_90: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (90g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\9.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Tobacco_Bottle_95: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (95g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\9.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Tobacco_Bottle_100: A3FL_Tobacco_Bottle_Empty
    {
        displayName = "Grinded Tobacco Container (100g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\Tobacco\data\tobacco_grinded_co.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
};