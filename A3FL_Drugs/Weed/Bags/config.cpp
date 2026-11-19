class CfgPatches
{
    class A3FL_Drugs_Weed
    {
        units[]={};
        weapons[]={};
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "A3FL_Objects"
        };
    };
};
class CfgVehicles
{
    class A3FL_Objects;
    class A3FL_Drug_Bag_Empty: A3FL_Objects
        {
            model="A3FL_Drugs\Weed\Bags\A3FL_Drug_Bag";
            displayName="Sachet vide";
            hiddenSelections[]=
            {
                "camo"
            };
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\empty.paa"
            };
        };
    class A3FL_Weed_Bag_5g: A3FL_Drug_Bag_Empty
        {
            displayName="5g Sachet de marijuana";
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\5g.paa"
            };
        };
    class A3FL_Weed_Bag_10g: A3FL_Drug_Bag_Empty
        {
            displayName="10g Sachet de marijuana";
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\10g.paa"
            };
        };
    class A3FL_Weed_Bag_25g: A3FL_Drug_Bag_Empty
        {
            displayName="25g Sachet de marijuana";
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\25g.paa"
            };
        };
    class A3FL_Weed_Bag_50g: A3FL_Drug_Bag_Empty
        {
            displayName="50g Sachet de marijuana";
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\50g.paa"
            };
        };
    class A3FL_Weed_Bag_100g: A3FL_Drug_Bag_Empty
        {
            displayName="100g Sachet de marijuana";
            hiddenSelectionsTextures[]=
            {
                "A3FL_Drugs\Weed\Bags\data\100g.paa"
            };
        };
};