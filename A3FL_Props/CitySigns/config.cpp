class CfgPatches
{
	class A3FL_City_Signs
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3FL_Objects"
		};
		requiredVersion=0.1;
	};
};
class cfgVehicles
{
	class A3FL_Objects;
	class A3FL_CitySign_Blackwood: A3FL_Objects
	{
		scope=2;
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Blackwood.p3d";
		displayName="A3FL Blackwood Sign";
	};
	class A3FL_CitySign_BeachValley: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_BeachValley.p3d";
		displayName="A3FL Beach Valley Sign";
	};
	class A3FL_CitySign_Deadwood: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Deadwood.p3d";
		displayName="A3FL Deadwood Sign";
	};
	class A3FL_CitySign_Elk: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Elk.p3d";
		displayName="A3FL Elk Sign";
	};
	class A3FL_CitySign_Jamestown: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Jamestown.p3d";
		displayName="A3FL Jamestown Sign";
	};
	class A3FL_CitySign_Lakeview: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Lakeview.p3d";
		displayName="A3FL Lakeview Estates Sign";
	};
	class A3FL_CitySign_Northdale: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Northdale.p3d";
		displayName="A3FL Northdale Sign";
	};
	class A3FL_CitySign_StoneyCreek: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Stoney.p3d";
		displayName="A3FL Stoney Creek Sign";
	};
	class A3FL_CitySign_Silverton: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Silverton.p3d";
		displayName="A3FL Silverton Sign";
	};
	class A3FL_CitySign_Springfield: A3FL_CitySign_Blackwood
	{
		model="\A3FL_Props\CitySigns\A3FL_CitySign_Springfield.p3d";
		displayName="A3FL Springfield Sign";
	};
};