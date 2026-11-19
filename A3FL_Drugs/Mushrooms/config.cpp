class CfgPatches
{
    class A3FL_Drugs_Mushrooms
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
    class A3FL_Mushroom: A3FL_Objects
	{
		_generalMacro="A3PL_Mushroom";
		model="A3FL_Drugs\Mushrooms\A3FL_Mushroom";
		displayName="Mushroom";
	};
};