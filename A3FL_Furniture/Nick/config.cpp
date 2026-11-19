class CfgPatches
{
	class A3FL_Furniture_Garden
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
	///////////////////////////////////////////Fridges///////////////////////////////////////////
	class A3FL_Fridge_2door_2_Black: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_2door_2_Black";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_2door_2.p3d";
		displayName="2 Door Fridge (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\fridges\data\fridge1.paa"
		};
	};
	class A3FL_Fridge_2door_2_Gray: A3FL_Fridge_2door_2_black
	{
		_generalMacro="A3FL_Fridge_2door_2_Gray";
		displayName="2 Door Fridge (Gray)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\fridges\data\fridge2.paa"
		};
	};
	class A3FL_Fridge_2door_2_Silver: A3FL_Fridge_2door_2_black
	{
		_generalMacro="A3FL_Fridge_2door_2_Silver";
		displayName="2 Door Fridge (Silver)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\fridges\data\fridge3.paa"
		};
	};
	class A3FL_Fridge_Retro_Black: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_Retro";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_retro.p3d";
		displayName="Retro Fridge (Black)";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.101961,0.101961,0.101961,1.0,co)"
		};
	};
	class A3FL_Fridge_Retro_Red: A3FL_Fridge_Retro_Black
	{
		_generalMacro="A3FL_Fridge_Retro";
		displayName="Retro Fridge (Red)";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.501961,0,0,1.0,co)"
		};
	};
	class A3FL_Fridge_Retro_White: A3FL_Fridge_Retro_Black
	{
		_generalMacro="A3FL_Fridge_Retro";
		displayName="Retro Fridge (White)";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.882353,0.882353,0.882353,1.0,co)"
		};
	};
	class A3FL_Fridge_Single_Gray: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_Single_Gray";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_single.p3d";
		displayName="Single Stack Fridge (Gray)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\fridges\data\fridge5.paa",
			"A3FL_Furniture\Nick\Kitchen\fridges\data\side5.paa"
		};
	};
	class A3FL_Fridge_Single_Silver: A3FL_Fridge_Single_Gray
	{
		_generalMacro="A3FL_Fridge_2door_2_Silver";
		displayName="Single Stack Fridge (Silver)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\fridges\data\fridge5-1.paa",
			"A3FL_Furniture\Nick\Kitchen\fridges\data\side5-1.paa"
		};
	};
	class A3FL_Fridge_2door: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_2door";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_2door.p3d";
		displayName="2 Door Fridge";
	};
	class A3FL_Fridge_3door: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_3door";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_3door.p3d";
		displayName="2 Door Fridge";
	};
	class A3FL_Fridge_Single_Simple: A3FL_Objects
	{
		_generalMacro="A3FL_Fridge_Single_Simple";
		model="\A3FL_Furniture\Nick\Kitchen\Fridges\a3fl_fridge_single_simple.p3d";
		displayName="Single Stack Fridge";
	};
	///////////////////////////////////////////Stoves///////////////////////////////////////////
	class A3FL_Range_DarkGray: A3FL_Objects
	{
		_generalMacro="A3FL_Range_DarkGray";
		model="\A3FL_Furniture\Nick\Kitchen\Stoves\a3fl_range.p3d";
		displayName="Kitchen Range (Standard/Dark Gray)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\top_darkgray.paa",
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\front_darkgray.paa"
		};
	};
	class A3FL_Range_Black: A3FL_Range_DarkGray
	{
		_generalMacro="A3FL_Range_Black";
		displayName="Kitchen Range (Standard/Black)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\top_black.paa",
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\front_black.paa"
		};
	};
	class A3FL_Range_Silver: A3FL_Range_DarkGray
	{
		_generalMacro="A3FL_Range_Silver";
		displayName="Kitchen Range (Standard/Silver)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\top_silver.paa",
			"A3FL_Furniture\Nick\Kitchen\Stoves\data\front_silver.paa"
		};
	};

	class A3FL_Modern_Range_Black: A3FL_Objects
	{
		_generalMacro="A3FL_Modern_Range_Black";
		model="\A3FL_Furniture\Nick\Kitchen\Stoves\a3fl_modern_range.p3d";
		displayName="Kitchen Range (Modern/Black)";
		hiddenSelections[]=
		{
			"camo",
			"camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\Fridges\data\metal_co.paa",
			"#(argb,8,8,3)color(0.101961,0.101961,0.101961,1.0,co)"
		};
	};
	class A3FL_Modern_Range_Red: A3FL_Modern_Range_Black
	{
		_generalMacro="A3FL_Modern_Range_Red";
		displayName="Kitchen Range (Modern/Red)";
		hiddenSelectionsTextures[]=
		{
			"A3FL_Furniture\Nick\Kitchen\Fridges\data\metal_co.paa",
			"#(argb,8,8,3)color(0.501961,0,0,1.0,co)"
		};
	};
	class A3FL_Modern_Range_White: A3FL_Modern_Range_Black
	{
		_generalMacro="A3FL_Modern_Range_White";
		displayName="Kitchen Range (Modern/White)";
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0.101961,0.101961,0.101961,1.0,co)",
			"#(argb,8,8,3)color(0.882353,0.882353,0.882353,1.0,co)"
		};
	};
	///////////////////////////////////////////TVs///////////////////////////////////////////
	class A3FL_Television_Large: A3FL_Objects
	{
		_generalMacro="A3FL_Television_Large";
		model="\A3FL_Furniture\Nick\TV\a3fl_television_1.p3d";
		displayName="Television (Large)";
	};
	class A3FL_Television_Medium: A3FL_Objects
	{
		_generalMacro="A3FL_Television_Medium";
		model="\A3FL_Furniture\Nick\TV\a3fl_television_2.p3d";
		displayName="Television (Medium)";
	};
	class A3FL_Television_Small: A3FL_Objects
	{
		_generalMacro="A3FL_Television_Small";
		model="\A3FL_Furniture\Nick\TV\a3fl_television_3.p3d";
		displayName="Television (Small)";
	};
	////////////////////////////////////////Laundry Room////////////////////////////////////////
	class A3FL_Modern_Dryer: A3FL_Objects
	{
		_generalMacro="A3FL_Modern_Dryer";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_Modern_Dryer.p3d";
		displayName="Dryer (Modern)";
	};
	class A3FL_Modern_Washer: A3FL_Objects
	{
		_generalMacro="A3FL_Modern_Washer";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_Modern_Washer.p3d";
		displayName="Washer (Modern)";
	};
	class A3FL_Old_Dryer: A3FL_Objects
	{
		_generalMacro="A3FL_Old_Dryer";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_Old_Dryer.p3d";
		displayName="Dryer (Old)";
	};
	class A3FL_Old_Dryer_2: A3FL_Objects
	{
		_generalMacro="A3FL_Old_Dryer_2";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_Old_Dryer_2.p3d";
		displayName="Dryer (Old)";
	};
	class A3FL_Old_Washer: A3FL_Objects
	{
		_generalMacro="A3FL_Old_Washer";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_Old_Washer.p3d";
		displayName="Washer (Old)";
	};
	class A3FL_WaterHeater: A3FL_Objects
	{
		_generalMacro="A3FL_WaterHeater";
		model="\A3FL_Furniture\Nick\Laundry\A3FL_WaterHeater.p3d";
		displayName="Water Heater";
	};
};
