class CfgPatches
{
	class A3FL_Drugs_Weed_Small
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3PL_Cars","A3FL_Objects"};
		requiredVersion = 0.1;
	};	
};
class cfgVehicles
{
	class A3FL_Objects;
	class A3FL_Blunt: A3FL_Objects
	{
        model = "\A3FL_Drugs\Weed\Small\A3FL_Blunt.p3d";
        displayName = "Joint";		
	};	
	class A3FL_Swishers: A3FL_Objects
	{
        model = "\A3FL_Drugs\Weed\Small\A3FL_Swishers.p3d";
        displayName = "Feuille OCB";		
	};
	class A3FL_Grinded_Marijuana_Empty: A3FL_Objects
	{
        model = "\A3FL_Drugs\Weed\Small\A3FL_Grinded_Bottle.p3d";
        displayName = "Sachet de marijuana (Vide)";		
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
	class A3FL_Grinded_Marijuana_5: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (5g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa"
        };
    };
    class A3FL_Grinded_Marijuana_10: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (10g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_15: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (15g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_20: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (20g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\2.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_25: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (25g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\2.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_30: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (30g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\3.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_35: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (35g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\3.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_40: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (40g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\4.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_45: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (45g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\4.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_50: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (50g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_55: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (55g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_60: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (60g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\6.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_65: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (65g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\6.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_70: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (70g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\7.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_75: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (75g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\7.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_80: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (80g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\8.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_85: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (85g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\8.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_90: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (90g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\9.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
    class A3FL_Grinded_Marijuana_95: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (95g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\empty_ca.paa",
            "a3fl_drugs\weed\small\data\numbers\9.paa",
            "a3fl_drugs\weed\small\data\numbers\5.paa"
        };
    };
    class A3FL_Grinded_Marijuana_100: A3FL_Grinded_Marijuana_Empty
    {
        displayName = "Sachet de marijuana (100g)";
        hiddenSelectionsTextures[]=
        {
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\grinded_weed_co.paa",
            "a3fl_drugs\weed\small\data\numbers\1.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa",
            "a3fl_drugs\weed\small\data\numbers\0.paa"
        };
    };
};
