class CfgPatches
{
    class CatalinaObjects
    {
            units[] = {};
            weapons[] = {};
            requiredVersion = 0.1;
			requiredAddons[] = {"A3PL_Cars","A3PL_Houses"};
    };
};
class CfgVehicleClasses
{
    class CatalinaObjects
    {
        displayName = "CatalinaObjects";
    };
};
class CfgVehicles
{
	class A3PL_Houses;
	class Land_Dumpster_DED_Dumpster_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Dumpster_DED_Dumpster_01_F.p3d";
		displayName="Dumpster";
	};
	class Land_Fancysidewalk_DED_Fancysidewalk_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Fancysidewalk_DED_Fancysidewalk_01_F.p3d";
		displayName="FancySideWalk1";
	};
	class Land_Fancysidewalk_DED_Fancysidewalk_02_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Fancysidewalk_DED_Fancysidewalk_02_F.p3d";
		displayName="FancySideWalk2";
	};
	class Land_Fancysidewalk_DED_Fancysidewalk_03_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Fancysidewalk_DED_Fancysidewalk_03_F.p3d";
		displayName="FancySideWalk3";
	};
	class Land_Home1g_DED_Home1g_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Home1g_DED_Home1g_01_F.p3d";
		displayName="Home1g";
	};
	class Land_Home2b_DED_Home2b_01_F: Land_Home1g_DED_Home1g_01_F
	{
		model="\CatalinaObjects\DED_Simple_01\Home2b_DED_Home2b_01_F.p3d";
		displayName="Home2b";
	};
	class Land_Home3r_DED_Home3r_01_F: Land_Home1g_DED_Home1g_01_F
	{
		model="\CatalinaObjects\DED_Simple_01\Home3r_DED_Home3r_01_F.p3d";
		displayName="Home3r";
	};
	class Land_Home4w_DED_Home4w_01_F: Land_Home1g_DED_Home1g_01_F
	{
		model="\CatalinaObjects\DED_Simple_01\Home4w_DED_Home4w_01_F.p3d";
		displayName="Home4w";
	};
	class Land_Home5y_DED_Home5y_01_F: Land_Home1g_DED_Home1g_01_F
	{
		model="\CatalinaObjects\DED_Simple_01\Home5y_DED_Home5y_01_F.p3d";
		displayName="Home5y";
	};
	class Land_Home6b_DED_Home6b_01_F: Land_Home3r_DED_Home3r_01_F
	{
		model="\CatalinaObjects\DED_Simple_01\Home6b_DED_Home6b_01_F.p3d";
		displayName="Home6b";
	};
	class Land_Mailbox_DED_Mailbox_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Mailbox_DED_Mailbox_01_F.p3d";
		displayName="MailBox";
	};
	class land_market_ded_market_01_f: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_01_F.p3d";
		displayName="McFishers";
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
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_9";
				direction = "Light_9_dir";
				selection = "Light_9";
				hitpoint = "Light_9";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
			class Light_12: Light_1
			{
				position="Light_12";
				direction="Light_12_dir";
				hitpoint="Light_12";
				selection="Light_12";
			};
			class Light_13: Light_1
			{
				position="Light_13";
				direction="Light_13_dir";
				hitpoint="Light_13";
				selection="Light_13";
			};
			class Light_14: Light_1
			{
				position = "Light_14";
				direction = "Light_14_dir";
				selection = "Light_14";
				hitpoint = "Light_14";
			};
			class Light_15: Light_1
			{
				position = "Light_15";
				direction = "Light_15_dir";
				selection = "Light_15";
				hitpoint = "Light_15";
			};
			class Light_16: Light_1
			{
				position = "Light_16";
				direction = "Light_16_dir";
				selection = "Light_16";
				hitpoint = "Light_16";
			};
			class Light_17: Light_1
			{
				position = "Light_17";
				direction = "Light_17_dir";
				selection = "Light_17";
				hitpoint = "Light_17";
			};
		};
		aggregateReflectors[]={{"Light_1","Light_2","Light_3","Light_4"},{"Light_5","Light_6","Light_7","Light_8","Light_9","Light_10","Light_11","Light_12","Light_13"},{"Light_14","Light_15"},{"Light_16","Light_17"}};
	};
	class land_market_ded_market_01_SEP: land_market_ded_market_01_f
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_01_SEP.p3d";	
	};
	class Land_Market_DED_Market_02_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_02_F.p3d";
		displayName="Market2";
	};
	class Land_Market_DED_Market_03_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_03_F.p3d";
		displayName="Market3";
	};
	class Land_Market_DED_Market_04_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_04_F.p3d";
		displayName="Market4";
	};
	class land_market_ded_market_05_f: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_05_F.p3d";
		displayName="Market5";
	};
	class Land_Market_DED_Market_06_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Market_DED_Market_06_F.p3d";
		displayName="Market6";
	};
	class Land_Planter_DED_Planter_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Planter_DED_Planter_01_F.p3d";
		displayName="Planter";
	};
	class Land_sidewalk_DED_sidewalk_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\sidewalk_DED_sidewalk_01_F.p3d";
		displayName="Sidewalk1";
	};
	class Land_sidewalk_DED_sidewalk_02_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\sidewalk_DED_sidewalk_02_F.p3d";
		displayName="Sidewalk2";
	};
	class Land_sidewalk_DED_sidewalk_03_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\sidewalk_DED_sidewalk_03_F.p3d";
		displayName="Sidewalk3";
	};
	class land_smallshop_ded_smallshop_01_f: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Simple_01\Smallshop_DED_Smallshop_01_F.p3d";
		displayName="SmallShop1";
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
		aggregateReflectors[]={{"Light_1"}};
	};
	class land_smallshop_ded_smallshop_02_f: land_smallshop_ded_smallshop_01_f
	{
		model="\CatalinaObjects\DED_Simple_01\Smallshop_DED_Smallshop_02_F.p3d";
		displayName="SmallShop2";
	};
	/*class Land_Bank_DED_House_01_F: A3PL_Houses
	{
		armor = 2000;
		model="\CatalinaObjects\DED_House_01\Bank_DED_House_01_F.p3d";
		displayName="Bank";
		ladders[] = {{"start1", "end1"}};
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
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
		};
		aggregateReflectors[]={{"Light_1","Light_2","Light_3"},{"Light_4"}};
	};*/
	class Land_Taco_DED_Taco_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Taco_01\Taco_DED_Taco_01_F.p3d";
		displayName="TacoHell";
		class Reflectors
		{
			class Light_1
			{
				color[] = {24,22,20};
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
				position = "Light_4";
				direction = "Light_4_dir";
				selection = "Light_4";
				hitpoint = "Light_4";
			};
			class Light_5: Light_1
			{
				position = "Light_5";
				direction = "Light_5_dir";
				selection = "Light_5";
				hitpoint = "Light_5";
			};
			class Light_6: Light_1
			{
				position = "Light_6";
				direction = "Light_6_dir";
				selection = "Light_6";
				hitpoint = "Light_6";
			};
			class Light_7: Light_1
			{
				position = "Light_7";
				direction = "Light_7_dir";
				selection = "Light_7";
				hitpoint = "Light_7";
			};
			class Light_8: Light_1
			{
				position = "Light_8";
				direction = "Light_8_dir";
				selection = "Light_8";
				hitpoint = "Light_8";
			};
			class Light_9: Light_1
			{
				position = "Light_9";
				direction = "Light_9_dir";
				selection = "Light_9";
				hitpoint = "Light_9";
			};
			class Light_10: Light_1
			{
				position = "Light_10";
				direction = "Light_10_dir";
				selection = "Light_10";
				hitpoint = "Light_10";
			};
			class Light_11: Light_1
			{
				position = "Light_11";
				direction = "Light_11_dir";
				selection = "Light_11";
				hitpoint = "Light_11";
			};
		};
		aggregateReflectors[]={{"Light_1","Light_2"},{"Light_3"},{"Light_4","Light_5"},{"Light_6","Light_7"},{"Light_8","Light_9","Light_10","Light_11"}};
	};
	class Land_Taco_DED_SEP: Land_Taco_DED_Taco_01_F
	{
		model="\CatalinaObjects\DED_Taco_01\Taco_DED_SEP.p3d";		
	};
	class Land_Coffee_DED_Coffee_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Coffee_01\Coffee_DED_Coffee_01_F.p3d";
		ladders[] = {{"Ladder_1_start", "Ladder_1_end"}};
		displayName="CoffeeShop";
	};
	class Land_Coffee_DED_Coffee_02_F: Land_Coffee_DED_Coffee_01_F
	{
		model="\CatalinaObjects\DED_Coffee_01\Coffee_DED_Coffee_02_F.p3d";
	};
	class Land_Ranch_DED_Ranch_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Ranch_01\Ranch_DED_Ranch_01_F.p3d";
		displayName="RanchHouse1";
	};
	class Land_Ranch_DED_Ranch_02_F: Land_Ranch_DED_Ranch_01_F
	{
		model="\CatalinaObjects\DED_Ranch_01\Ranch_DED_Ranch_02_F.p3d";
	};
	class Land_Shop_DED_Shop_01_F: A3PL_Houses
	{
		model="\CatalinaObjects\DED_Shop_01\Shop_DED_Shop_01_F.p3d";
		displayName="Shop1";
	};
	class Land_Shop_DED_Shop_02_F: Land_Shop_DED_Shop_01_F
	{
		model="\CatalinaObjects\DED_Shop_01\Shop_DED_Shop_02_F.p3d";
		displayName="Shop2";
	};

};