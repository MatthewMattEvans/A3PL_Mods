#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3FL_Houses
	{
		author="Henry Indelicato";
		name="Arma3FishersLife Houses";
		url="https://arma3fisherslife.net";
		units[]=
		{
			"Land_A3FL_Warehouse",
			"Land_A3FL_Airport_Hangar",
			"Land_A3FL_Airport_Terminal",
			"Land_A3FL_Barn",
			"Land_A3FL_Brick_Shop_1",
			"Land_A3FL_Brick_Shop_2",
			"Land_A3FL_SheriffPD",
			"Land_A3FL_Office_Building",
			"Land_A3FL_Mansion",
			"Land_A3FL_Anton_Store",
			"Land_A3FL_Anton_Store_Clothing",
			"Land_A3FL_Anton_Store_Interior",
			"Land_A3FL_Anton_Modern_Bungalow",
			"Land_A3FL_House1_Cream",
			"Land_A3FL_House1_Green",
			"Land_A3FL_House1_Blue",
			"Land_A3FL_House1_Brown",
			"Land_A3FL_House1_Yellow",
			"Land_A3FL_House2_Cream",
			"Land_A3FL_House2_Green",
			"Land_A3FL_House2_Blue",
			"Land_A3FL_House2_Brown",
			"Land_A3FL_House2_Yellow",
			"Land_A3FL_House3_Cream",
			"Land_A3FL_House3_Green",
			"Land_A3FL_House3_Blue",
			"Land_A3FL_House3_Brown",
			"Land_A3FL_House3_Yellow",
			"Land_A3FL_House4_Cream",
			"Land_A3FL_House4_Green",
			"Land_A3FL_House4_Blue",
			"Land_A3FL_House4_Brown",
			"Land_A3FL_House4_Yellow"
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
			"catalinaobjects"
		};
	};
};
class CfgVehicles
{
	#include "cfgVehicles.hpp"

	class Land_A3FL_Warehouse: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Warehouse\A3FL_Warehouse.p3d";
		displayName="A3FL Warehouse";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="MetalOldBigDoorsSound";
				soundPosition="Door_1";
			};
			class Door_2: Door_1
			{
				soundPosition="Door_2";
			};
			class Door_3
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="MetalOldDoorsSound";
				soundPosition="Door_3";
			};
			class Door_4: Door_3
			{
				soundPosition="Door_4";
			};
			class Door_5: Door_1
			{
				soundPosition="Door_5";
			};
			class Door_6: Door_1
			{
				soundPosition="Door_6";
			};
			class Door_7: Door_3
			{
				soundPosition="Door_7";
			};
			class Door_8: Door_3
			{
				soundPosition="Door_8";
			};
		};
	};
	class Land_A3FL_Airport_Hangar: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Airport Hangar\A3FL_Airport_Hangar.p3d";
		displayName="A3FL Airport Hangar";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="MetalDoorsSound";
				soundPosition="Door_1";
			};
			class Door_2
			{
				source="user";
				initPhase=0;
				animPeriod=15;
				sound="RollDoorsSound";
				soundPosition="Door_2";
			};
			class Door_3: Door_2
			{
				soundPosition="Door_3";
			};
		};
	};
	class Land_A3FL_Airport_Terminal: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Airport Terminal\A3FL_Airport_Terminal.p3d";
		displayName="A3FL Airport Terminal";

		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=2;
				sound="GlassMetalDoorsSound";
				soundPosition="Door_1";
			};
			class Door_2: Door_1
			{
				soundPosition="Door_2";
			};
		};
	};
	class Land_A3FL_Barn: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Barn\A3FL_Barn.p3d";
		displayName="A3FL Barn";
	};
	class Land_A3FL_Brick_Shop_1: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Brick Shops\A3FL_Brick_Shop_1.p3d";
		displayName="A3FL Brick Shop 1";
	};
	class Land_A3FL_Brick_Shop_2: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Brick Shops\A3FL_Brick_Shop_2.p3d";
		displayName="A3FL Brick Shop 2";
	};
	class Land_A3FL_SheriffPD: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\SheriffPD\A3FL_SheriffPD.p3d";
		displayName="A3FL SheriffPD";

		class AnimationSources: AnimationSources
		{
			class Laptop_Top
			{
				source="user";
				animPeriod=1.5;
				initPhase=0;
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
				hitpoint="Light_1";
				selection="Light_1";
				useFlare=0;
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
				hitpoint="Light_2";
				selection="Light_2";
			};
			class Light_3: Light_1
			{
				position="Light_3";
				direction="Light_3_dir";
				hitpoint="Light_3";
				selection="Light_3";
			};
			class Light_4: Light_1
			{
				position="Light_4";
				direction="Light_4_dir";
				selection="Light_4";
				hitpoint="Light_4";
			};
			class Light_5: Light_1
			{
				position="Light_5";
				direction="Light_5_dir";
				selection="Light_5";
				hitpoint="Light_5";
			};
			class Light_6: Light_1
			{
				position="Light_6";
				direction="Light_6_dir";
				selection="Light_6";
				hitpoint="Light_6";
			};
			class Light_7: Light_1
			{
				position="Light_7";
				direction="Light_7_dir";
				selection="Light_7";
				hitpoint="Light_7";
			};
			class Light_8: Light_1
			{
				position="Light_8";
				direction="Light_8_dir";
				selection="Light_8";
				hitpoint="Light_8";
			};
			class Light_9: Light_1
			{
				position="Light_9";
				direction="Light_9_dir";
				selection="Light_9";
				hitpoint="Light_9";
			};
			class Light_10: Light_1
			{
				position="Light_10";
				direction="Light_10_dir";
				selection="Light_10";
				hitpoint="Light_10";
			};
			class Light_11: Light_1
			{
				position="Light_11";
				direction="Light_11_dir";
				selection="Light_11";
				hitpoint="Light_11";
			};
			class Light_12: Light_1
			{
				position="Light_12";
				direction="Light_12_dir";
				selection="Light_12";
				hitpoint="Light_12";
			};
			class Light_13: Light_1
			{
				position="Light_13";
				direction="Light_13_dir";
				selection="Light_13";
				hitpoint="Light_13";
			};
			class Light_14: Light_1
			{
				position="Light_14";
				direction="Light_14_dir";
				selection="Light_14";
				hitpoint="Light_14";
			};
			class Light_15: Light_1
			{
				position="Light_15";
				direction="Light_15_dir";
				selection="Light_15";
				hitpoint="Light_15";
			};
			class Light_16: Light_1
			{
				position="Light_16";
				direction="Light_16_dir";
				selection="Light_16";
				hitpoint="Light_16";
			};
			class Light_17: Light_1
			{
				position="Light_17";
				direction="Light_17_dir";
				selection="Light_17";
				hitpoint="Light_17";
			};
			class Light_18: Light_1
			{
				position="Light_18";
				direction="Light_18_dir";
				selection="Light_18";
				hitpoint="Light_18";
			};
			class Light_19: Light_1
			{
				position="Light_19";
				direction="Light_19_dir";
				selection="Light_19";
				hitpoint="Light_19";
			};
		};
		aggregateReflectors[]=
		{

			{
				"Light_1",
				"Light_2",
				"Light_3"
			},

			{
				"Light_4",
				"Light_5",
				"Light_6",
				"Light_7",
				"Light_8",
				"Light_9",
				"Light_10"
			},

			{
				"Light_11",
				"Light_12",
				"Light_13",
				"Light_14",
				"Light_15",
				"Light_16"
			},

			{
				"Light_17"
			},

			{
				"Light_18",
				"Light_19"
			}
		};
	};
	class Land_A3FL_Office_Building: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Office Building\A3FL_Office_Building.p3d";
		displayName="A3FL Office Building";
	};
	class Land_A3FL_Mansion: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\Mansion\A3FL_Mansion.p3d";
		displayName="A3FL Mansion";
	};
	class Land_A3FL_House1_Cream: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House1\A3FL_House1_Cream.p3d";
		displayName="A3FL House1 Cream";
	};
	class Land_A3FL_House1_Green: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House1\A3FL_House1_Green.p3d";
		displayName="A3FL House1 Green";
	};
	class Land_A3FL_House1_Blue: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House1\A3FL_House1_Blue.p3d";
		displayName="A3FL House1 Blue";
	};
	class Land_A3FL_House1_Brown: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House1\A3FL_House1_Brown.p3d";
		displayName="A3FL House1 Brown";
	};
	class Land_A3FL_House1_Yellow: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House1\A3FL_House1_Yellow.p3d";
		displayName="A3FL House1 Yellow";
	};
	class Land_A3FL_House2_Cream: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House2\A3FL_House2_Cream.p3d";
		displayName="A3FL House2 Cream";
	};
	class Land_A3FL_House2_Green: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House2\A3FL_House2_Green.p3d";
		displayName="A3FL House2 Green";
	};
	class Land_A3FL_House2_Blue: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House2\A3FL_House2_Blue.p3d";
		displayName="A3FL House2 Blue";
	};
	class Land_A3FL_House2_Brown: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House2\A3FL_House2_Brown.p3d";
		displayName="A3FL House2 Brown";
	};
	class Land_A3FL_House2_Yellow: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House2\A3FL_House2_Yellow.p3d";
		displayName="A3FL House2 Yellow";
	};
	class Land_A3FL_House3_Cream: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House3\A3FL_House3_Cream.p3d";
		displayName="A3FL House3 Cream";
	};
	class Land_A3FL_House3_Green: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House3\A3FL_House3_Green.p3d";
		displayName="A3FL House3 Green";
	};
	class Land_A3FL_House3_Blue: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House3\A3FL_House3_Blue.p3d";
		displayName="A3FL House3 Blue";
	};
	class Land_A3FL_House3_Brown: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House3\A3FL_House3_Brown.p3d";
		displayName="A3FL House3 Brown";
	};
	class Land_A3FL_House3_Yellow: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House3\A3FL_House3_Yellow.p3d";
		displayName="A3FL House3 Yellow";
	};
	class Land_A3FL_House4_Cream: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House4\A3FL_House4_Cream.p3d";
		displayName="A3FL House4 Cream";
	};
	class Land_A3FL_House4_Green: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House4\A3FL_House4_Green.p3d";
		displayName="A3FL House4 Green";
	};
	class Land_A3FL_House4_Blue: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House4\A3FL_House4_Blue.p3d";
		displayName="A3FL House4 Blue";
	};
	class Land_A3FL_House4_Brown: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House4\A3FL_House4_Brown.p3d";
		displayName="A3FL House4 Brown";
	};
	class Land_A3FL_House4_Yellow: A3FL_Houses
	{
		author="Henry Indelicato";
		model="\A3FL_Houses\House4\A3FL_House4_Yellow.p3d";
		displayName="A3FL House4 Yellow";
	};
	class Land_A3FL_Anton_Store: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Houses\Store1\A3FL_Anton_Store.p3d";
		displayName="A3FL Store";
	};
	class Land_A3FL_Anton_Store_Clothing: Land_A3FL_Anton_Store
	{
		model="\A3FL_Houses\Store1\A3FL_Anton_Store_Clothing.p3d";
	};
	class Land_A3FL_Anton_Store_Interior: Land_A3FL_Anton_Store
	{
		model="\A3FL_Houses\Store1\A3FL_Anton_Store_Interior.p3d";
	};
	class Land_A3FL_Anton_Modern_Bungalow: A3FL_Houses
	{
		author="Anton Peters";
		model="\A3FL_Houses\Modern Bungalow\A3FL_Anton_Modern_Bungalow.p3d";
		displayName="A3FL Modern Bungalow";
	};
};