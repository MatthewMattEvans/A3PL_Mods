#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3FL_Buildings
	{
		author="Anton Peters & Nick Parker";
		name="Arma3FishersLife Buildings";
		url="https://arma3fisherslife.net";
		units[]=
		{
			"Land_A3FL_Fishers_Jewelry",
			"Land_A3FL_DOC_Gate",
			"Land_A3FL_Radio_Tower",
			"Land_A3FL_Fishers_Barbershop"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Data_F_Exp",
			"A3_Structures_F",
			"A3PL_Cars",
			"A3PL_Houses",
			"CatalinaObjects"
		};
	};
};
class CfgVehicles
{
	#include "cfgVehicles.hpp"
	class Land_A3FL_Fishers_Jewelry: A3FL_Buildings
	{
		author="Anton Peters";
		model="\A3FL_Buildings\Fishers_Jewelry\A3FL_Fishers_Jewelry.p3d";
		displayName="A3FL Fishers Jewelry";
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2: Door_1
			{
			};
			class Door_3: Door_1
			{
			};
			class Door_4: Door_1
			{
			};
			class Door_5: Door_1
			{
			};
			class Door_6: Door_1
			{
			};
			class Vault_Door
			{
				source="user";
				animPeriod=5;
				initPhase=0;
			};
			class case_break_1: Vault_Door
			{
				animPeriod=0;
			};
			class case_break_2: case_break_1 {};
			class case_break_3: case_break_1 {};
			class case_break_4: case_break_1 {};
			class case_break_5: case_break_1 {};
			class case_break_6: case_break_1 {};
			class case_break_7: case_break_1 {};
			class case_break_8: case_break_1 {};
			class case_break_9: case_break_1 {};
			class jewlery_case_1: case_break_1 {};
			class jewlery_case_2: jewlery_case_1 {};
			class jewlery_case_3: jewlery_case_1 {};
			class jewlery_case_4: jewlery_case_1 {};
			class jewlery_case_5: jewlery_case_1 {};
			class jewlery_case_6: jewlery_case_1 {};
			class jewlery_case_7: jewlery_case_1 {};
			class jewlery_case_8: jewlery_case_1 {};
			class jewlery_case_9: jewlery_case_1 {};
		};
		class Reflectors
		{
		};
		ladders[]=
		{
			{
				"Ladder_1_start",
				"Ladder_1_end"
			}
		};
	};
	class Land_A3FL_DOC_Gate: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Gate\A3FL_DOC_Gate.p3d";
		displayName="A3FL DOC Gate";
		hiddenSelections[]=
		{
		    "console_door1",
		    "console_door2",
		    "console_door3",
		    "console_door4",
		    "console_door5",
		    "console_door6",
		    "console_door7",
		    "console_door8",
		    "console_door9",
		    "console_door10"
		};
		hiddenSelectionsTextures[]=
		{
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)"
		};
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
			class Door_2: Door_1
			{
				animPeriod=3;
			};
            class Door_3: Door_2
			{
			};
            class Door_4: Door_1
			{
			};
            class Door_5: Door_2
			{
			};
            class Door_6: Door_1
			{
			};
            class Door_7: Door_2
			{
			};
            class Door_8: Door_2
			{
			};
            class Door_9: Door_1
			{
			};
            class Door_10: Door_2
			{
			};
			class Door_11: Door_2
			{
			};
			class Door_12: Door_2
			{
			};
			class Door_13: Door_2
			{
			};
			class Door_14: Door_2
			{
			};
			class Gate_1: Door_1
			{
				animPeriod=11;
			};
			class Gate_2: Gate_1
			{
			};
		};
		class Reflectors
		{
            class Light_1
            {
                color[]={50,50,50};
                ambient[]={10,10,10};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_1";
                direction="Light_1_dir";
                selection = "Light_1";
                hitpoint = "Light_1";
                useFlare=1;
                flareSize=0.80000001;
                flareMaxDistance=250;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
            class Light_2: Light_1
            {
                position="Light_2";
                direction="Light_2_dir";
                selection = "Light_2";
                hitpoint = "Light_2";
            };
            class Light_3: Light_1
            {
                position="Light_3";
                direction="Light_3_dir";
                selection = "Light_3";
                hitpoint = "Light_3";
            };
            class Light_4: Light_1
            {
                position="Light_4";
                direction="Light_4_dir";
                selection = "Light_4";
                hitpoint = "Light_4";
            };
		};
			
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    },
		    {
		     	"Ladder_2_start",
		        "Ladder_2_end"
		    }
		};
	};
	class Land_A3FL_DOC_Wall_End: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_End.p3d";
		displayName="A3FL DOC Wall End";
	};
	class Land_A3FL_DOC_Wall_Short: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Short.p3d";
		displayName="A3FL DOC Wall Short";
	};

	class Land_A3FL_DOC_Wall_Med: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Med.p3d";
		displayName="A3FL DOC Wall Medium";
	};

	class Land_A3FL_DOC_Wall_Long: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Long.p3d";
		displayName="A3FL DOC Wall Long";
	};

	class Land_A3FL_DOC_Wall_Corner_90: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Corner_90.p3d";
		displayName="A3FL DOC Wall 90 Degree Corner";
	};

	class Land_A3FL_DOC_Wall_Tower: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Tower.p3d";
		displayName="A3FL DOC Wall Tower";
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    },
		    {
		     	"Ladder_2_start",
		        "Ladder_2_end"
		    }
		};
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
			class Door_2
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
		};
		class Reflectors
		{
			class Light_1
            {
                color[]={50,50,50};
                ambient[]={10,10,10};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_1";
                direction="Light_1_dir";
                selection = "Light_1";
                hitpoint = "Light_1";
                useFlare=1;
                flareSize=0.8;
                flareMaxDistance=100;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_2
            {
                color[]={60,0,0};
                ambient[]={40,0,0};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_2";
                direction="Light_2_dir";
                selection = "Light_2";
                hitpoint = "Light_2";
                useFlare=1;
                flareSize=0.8;
                flareMaxDistance=80;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=20;
                    hardLimitEnd=40;
                };
            };
		};
	};
	class Land_A3FL_DOC_Wall_Tower_Corner: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\DOC_Wall\A3FL_DOC_Wall_Tower_Corner.p3d";
		displayName="A3FL DOC Wall Tower Corner";
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    },
		    {
		     	"Ladder_2_start",
		        "Ladder_2_end"
		    }
		};
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
			class Door_2
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
		};
		class Reflectors
		{
			class Light_1
            {
                color[]={50,50,50};
                ambient[]={10,10,10};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_1";
                direction="Light_1_dir";
                selection = "Light_1";
                hitpoint = "Light_1";
                useFlare=1;
                flareSize=0.80000001;
                flareMaxDistance=250;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_2
            {
                color[]={60,0,0};
                ambient[]={40,0,0};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_2";
                direction="Light_2_dir";
                selection = "Light_2";
                hitpoint = "Light_2";
                useFlare=1;
                flareSize=0.80000001;
                flareMaxDistance=250;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
		};
	};
	class Land_A3FL_High_Wall: A3FL_Buildings
	{
		author="Nick Parker";
		model="\A3FL_Buildings\High_Wall\A3FL_High_Wall.p3d";
		displayName="A3FL High Wall";
	};
	class Land_A3FL_High_Wall_90: Land_A3FL_High_Wall
	{
		model="\A3FL_Buildings\High_Wall\A3FL_High_Wall_90.p3d";
		displayName="A3FL High Wall Corner";
	};
	class Land_A3FL_High_Wall_End: Land_A3FL_High_Wall
	{
		model="\A3FL_Buildings\High_Wall\A3FL_High_Wall_End.p3d";
		displayName="A3FL High Wall End";
	};
	class Land_A3FL_DOC_Warehouse: A3FL_Buildings
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		author="Winston Halstead";
		model="\A3FL_Buildings\DOC_Warehouse\A3FL_DOC_Warehouse";
		displayName="A3FL DOC Warehouse";
		hiddenSelections[]=	{};
		hiddenSelectionsTextures[]={};
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=3;
			};
			class Door_2: Door_1
			{
			};
            class Door_3: Door_2
			{
			};
            class Door_4: Door_1
			{
				animPeriod=6;
			};
		};
		class Reflectors
		{
		};
			
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    }
		};
	};
	class Land_A3FL_Better_Buy: A3FL_Buildings
	{
		author="A3FL Anton";
		model="A3FL_Buildings\Better_Buy\A3FL_Better_Buy";
		displayName="Better Buy";
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2: Door_1
			{
			};
			class Door_3: Door_1
			{
			};
			class Door_4: Door_1
			{
			};
			class Door_5: Door_1
			{
			};
			class Door_6: Door_1
			{
			};
		};
		class Reflectors
		{
		};
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    }
		};
	};
	class Land_A3FL_Radio_Tower: A3FL_Buildings
	{
		author="Winston, Davis, & Nick";
		model="\A3FL_Buildings\Radio_Tower\A3FL_Radio_Tower";
		displayName="A3FL Radio Tower";
		hiddenSelections[]=
		{
			"Camo_1",
			"Camo_2",
			"Camo_3",
			"Camo_4",
			"Camo_5",
			"Radar_Press_1",
			"Radar_Press_2",
			"Radar_Press_3",
			"Radar_Press_4",
			"Radar_Press_5",
			"Radar_Press_6"
		};
		hiddenSelectionsTextures[]=
		{
			"#(argb,8,8,3)color(0,0,0,0.0,co)",
			"#(argb,8,8,3)color(0,0,0,0.0,co)",
			"#(argb,8,8,3)color(0,1,1,1.0,co)",
			"#(argb,8,8,3)color(0.75,0.5,0,1.0,co)",
			"#(argb,8,8,3)color(0.25,0.75,0.25,1.0,co)",
			"#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)",
		    "#(argb,8,8,3)color(1,0,0,1.0,co)"
		};
		hiddenSelectionsMaterials[]=
		{
			"\A3\Data_F\Lights\Lamp_lcd.rvmat",
			"\A3\Data_F\Lights\Lamp_lcd.rvmat",
			"\A3\Props_F_Exp_A\Military\Equipment\Data\DataTerminal_blue.rvmat",
			"\A3\Props_F_Exp_A\Military\Equipment\Data\DataTerminal_orange.rvmat",
			"\A3\Props_F_Exp_A\Military\Equipment\Data\DataTerminal_green.rvmat"
		};
		class AnimationSources: AnimationSources 
		{
			class Crate_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class USB_hide
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Lock_source: Crate_source
			{
				sound="TerminalLockSound";
				soundPosition="Lock_1_axis";
			};
			class Antenna_source: Crate_source
			{
				sound="TerminalAntennaSound";
				soundPosition="Antenna_piston_2_axis";
			};
		};
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    }
		};
	};
	class Land_A3FL_Fishers_Barbershop: A3FL_Buildings
	{
		author="Anton Peters and Henry";
		model="\A3FL_Buildings\Barbershop\A3FL_Fishers_Barbershop.p3d";
		displayName="A3FL Fishers Barbershop";
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2: Door_1
			{
			};
			class Door_3: Door_1
			{
			};
		};
		class Reflectors
		{
			class Light_1
            {
                color[]={50,50,50};
                ambient[]={10,10,10};
                intensity=5;
                size=1;
                innerAngle=90;
                outerAngle=360;
                coneFadeCoef=1;
                position="Light_1";
                direction="Light_1_dir";
                selection = "Light_1";
                hitpoint = "Light_1";
                useFlare=1;
                flareSize=0.80000001;
                flareMaxDistance=250;
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_2: Light_1
            {
                position="Light_2";
                direction="Light_2_dir";
                selection = "Light_2";
                hitpoint = "Light_2";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_3: Light_1
            {
                position="Light_3";
                direction="Light_3_dir";
                selection = "Light_3";
                hitpoint = "Light_3";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_4: Light_1
            {
                position="Light_4";
                direction="Light_4_dir";
                selection = "Light_4";
                hitpoint = "Light_4";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_5: Light_1
            {
                position="Light_5";
                direction="Light_5_dir";
                selection = "Light_5";
                hitpoint = "Light_5";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_6: Light_1
            {
                position="Light_6";
                direction="Light_6_dir";
                selection = "Light_6";
                hitpoint = "Light_6";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_7: Light_1
            {
                position="Light_7";
                direction="Light_7_dir";
                selection = "Light_7";
                hitpoint = "Light_7";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_8: Light_1
            {
                position="Light_8";
                direction="Light_8_dir";
                selection = "Light_8";
                hitpoint = "Light_8";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_9: Light_1
            {
                position="Light_9";
                direction="Light_9_dir";
                selection = "Light_9";
                hitpoint = "Light_9";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_10: Light_1
            {
                position="Light_10";
                direction="Light_10_dir";
                selection = "Light_10";
                hitpoint = "Light_10";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_11: Light_1
            {
                position="Light_11";
                direction="Light_11_dir";
                selection = "Light_11";
                hitpoint = "Light_11";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
			class Light_12: Light_1
            {
                position="Light_12";
                direction="Light_12_dir";
                selection = "Light_12";
                hitpoint = "Light_12";
                class Attenuation
                {
                    start=0;
                    constant=20;
                    linear=0;
                    quadratic=0.5;
                    hardLimitStart=40;
                    hardLimitEnd=60;
                };
            };
		};
		ladders[]=
		{
		    {
				"Ladder_1_start",
				"Ladder_1_end"
		    }
		};
	};
	class Land_A3FL_Sheriff_Office: A3FL_Buildings
	{
		scope=2;
		model="\A3FL_Buildings\Sheriff_Office\A3FL_Sheriff_Office";
		displayName="A3FL Sheriff Office";
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end"
			},
			
			{
				"Ladder_2_start",
				"Ladder_2_end"
			}
		};
	};
	class Land_A3FL_PierLadder: A3FL_Buildings
	{
		model="\A3FL_Buildings\Misc\A3FL_PierLadder";
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end",
				2.5
			}
		};
	};
};
