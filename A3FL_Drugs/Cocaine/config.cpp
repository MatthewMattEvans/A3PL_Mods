class CfgPatches
{
    class A3FL_Drugs_Cocaine
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
    class A3FL_SulphuricAcid: A3FL_Objects
	{
		_generalMacro="A3FL_SulphuricAcid";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Sulphuric Acid";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.92549,0.796078,0.0509804,1.0,co)"};
	};
	class A3FL_CalciumCarbonate: A3FL_Objects
	{
		_generalMacro="A3FL_CalciumCarbonate";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Calcium Carbonate";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.92549,0.92549,0.92549,1.0,co)"};
	};
	class A3FL_Potassium: A3FL_Objects
	{
		_generalMacro="A3FL_Potassium";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Potassium";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.65098,0.176471,0.639216,1.0,co)"};
	};
	class A3FL_Ammonium: A3FL_Objects
	{
		_generalMacro="A3FL_Ammonium";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Ammonium";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.0196078,0.486275,0.0352941,1.0,co)"};
	};
	class A3FL_Acetone: A3FL_Objects
	{
		_generalMacro="A3FL_Acetone";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Acetone";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.290196,0.215686,0.215686,1.0,co)"};
	};
	class A3FL_HydroAcid: A3FL_Objects
	{
		_generalMacro="A3FL_HydroAcid";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Hydrochloric Acid";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0,0.443137,0.768627,1.0,co)"};
	};
	class A3FL_CocaPaste: A3FL_Objects
	{
		_generalMacro="A3FL_CocaPaste";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Coca Paste";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0,0.282353,0.0431373,1.0,co)"};
	};
	class A3FL_CocainePaste: A3FL_Objects
	{
		_generalMacro="A3FL_CocainePaste";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBottle";
		displayName="Cocaine Paste";
		hiddenSelections[]=	{"label"};
		hiddenSelectionsTextures[]=	{"#(argb,8,8,3)color(0.207843,0.176471,0.176471,1.0,co)"};
	};
	class A3FL_PlasticBarrel: A3FL_Objects
	{
		_generalMacro="A3FL_PlasticBarrel";
		model="A3FL_Drugs\Cocaine\A3FL_PlasticBarrel";
		displayName="Plastic Barrel";
	};
	class A3FL_DrugBag: A3FL_Objects
	{
		_generalMacro="A3FL_DrugBag";
		model="A3FL_Drugs\Cocaine\A3FL_DrugBag";
		displayName="Drug Bag";
	};
};
	