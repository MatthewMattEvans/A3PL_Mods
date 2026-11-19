class CfgPatches
{
	class A3FL_Food_Drinks
	{
		units[]={"A3PL_VBCan","A3PL_Jimbeam","A3PL_4xGold","A3PL_CarltonDraught","A3PL_Corona","A3PL_Coopers","A3PL_Tooheys","A3FL_Coffee_Cups_Large","A3FL_Coffee_Cups_Medium","A3FL_Coffee_Cups_Small","A3FL_AppleJuice","A3FL_Soda"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"A3FL_Objects"};
	};
};


class CfgVehicles
{
	class A3FL_Objects;
	
	//Can
	class A3PL_VBCan: A3FL_Objects
	{
		displayName = "VB Can";
		model = "\A3FL_Food\Drinks\A3FL_Can";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\vb.paa"
		};
	};
	class A3PL_Jimbeam: A3PL_VBCan
	{
		displayName = "Jim Bean Can";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\jimbeam.paa"
		};
	};
	class A3FL_AppleJuice: A3PL_VBCan
	{
		displayName = "Applejuice Can";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\applejuice.paa"
		};
	};
	class A3FL_Soda: A3PL_VBCan
	{
		displayName = "Soda Can";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\soda_co.paa"
		};
	};

	//Bottle
	class A3PL_4xGold: A3PL_VBCan
	{
	    displayName = "XXXX Gold Stubbie";
		model = "\A3FL_Food\Drinks\A3FL_Bottle";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\4xgold.paa"
		};
	};
	class A3PL_CarltonDraught: A3PL_4xGold
	{
		displayName = "Carlton Draught Stubbie";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\carltondraught.paa"
		};
	};
	class A3PL_Corona: A3PL_4xGold
	{
		displayName = "Corona Stubbie";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\carona.paa"
		};
	};
	class A3PL_Coopers: A3PL_4xGold
	{
		displayName = "Coopers Stubbie";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\coopersale.paa"
		};
	};
	class A3PL_Tooheys: A3PL_4xGold
	{
		displayName = "Tooheys New";
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Food\Drinks\data\tooheysnew.paa"
		};
	};

	//Coffee
	class A3FL_Coffee_Cups_Large: A3FL_Objects
	{
		model="\A3FL_Food\Drinks\A3FL_Coffee_Cups_Large";
		displayName="Large Coffee";
	};
	class A3FL_Coffee_Cups_Medium: A3FL_Objects
	{
		model="\A3FL_Food\Drinks\A3FL_Coffee_Cups_Medium";
		displayName="Medium Coffee";
	};
	class A3FL_Coffee_Cups_Small: A3FL_Objects
	{
		model="\A3FL_Food\Drinks\A3FL_Coffee_Cups_Small";
		displayName="Small Coffee";
	};
};