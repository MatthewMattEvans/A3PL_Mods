class CfgPatches
{
	class A3FL_Drugs_Weed_Plant
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
class cfgVehicles
{
	class A3FL_Objects;
	class A3PL_Cannabis_Bud: A3FL_Objects
	{
		model="A3FL_Drugs\Weed\Plant\A3FL_Cannabis_Bud";
		displayName="A3FL Cannabis Bud";
	};
	class A3FL_Cannabis_Plant: A3FL_Objects
	{
		model="A3FL_Drugs\Weed\Plant\A3FL_Cannabis_Plant";
		displayName="A3FL Cannabis Plant";
		armor=9999999;
		class AnimationSources
		{
			class Plant_Growth
			{
				source="user";
				animPeriod=900;
				initPhase=0;
			};
		};
	};
	class A3FL_Cannabis_Plant_Hanging_Stage1: A3FL_Objects
	{
		model="A3FL_Drugs\Weed\Plant\A3FL_Cannabis_Plant_Hanging";
		displayName="A3FL Hanging Cannabis Plant Stage 1";
		armor=9999999;
		hiddenSelections[]=
        {
            "camo"
        };
        hiddenSelectionsTextures[]=
        {
            "A3FL_Drugs\Weed\Plant\data\plant_1_co.paa"
        };
	};
	class A3FL_Cannabis_Plant_Hanging_Stage2: A3FL_Cannabis_Plant_Hanging_Stage1
	{
		displayName="A3FL Hanging Cannabis Plant Stage 2";
        hiddenSelectionsTextures[]=
        {
            "A3FL_Drugs\Weed\Plant\data\plant_2_co.paa"
        };
	};
	class A3FL_Cannabis_Plant_Hanging_Stage3: A3FL_Cannabis_Plant_Hanging_Stage1
	{
		displayName="A3FL Hanging Cannabis Plant Stage 3";
        hiddenSelectionsTextures[]=
        {
            "A3FL_Drugs\Weed\Plant\data\plant_3_co.paa"
        };
	};
	class A3FL_Cannabis_Plant_Hanging_Stage4: A3FL_Cannabis_Plant_Hanging_Stage1
	{
		displayName="A3FL Hanging Cannabis Plant Stage 4";
        hiddenSelectionsTextures[]=
        {
            "A3FL_Drugs\Weed\Plant\data\plant_4_co.paa"
        };
	};
	
};