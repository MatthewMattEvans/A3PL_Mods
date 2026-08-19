class CfgPatches
{
	class A3PL_Buildings_CG_Station
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3_Data_F",
			"A3_Structures_F",
			"A3_Signs_F",
			"A3_Structures_F_Civ",
			"A3_Structures_F_Civ_Lamps",
			"A3_Structures_F_Walls"
		};
	};
};

class CfgVehicles
{
	class A3PL_Houses;
	class Land_A3PL_CG_Station: A3PL_Houses
	{
		scope = 2;
		model="\A3PL_Buildings\CoastGuard\a3pl_cg_station";
		displayName="A3PL Coast Guard Station";
		ladders[]=
		{
			{
				"Ladder_1_start",
				"Ladder_1_end"
			}
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
				position="Light_8";
				direction="Light_8_dir";
				selection="Light_8";
				hitpoint="Light_8";
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
		};
		aggregateReflectors[]=
		{
			{
				"Light_1"
			},
			{
				"Light_2"
			},
			{
				"Light_3",
				"Light_4",
				"Light_5"
			},
			{
				"Light_6",
				"Light_7",
				"Light_8"
			},
			{
				"Light_9",
				"Light_10"
			},
			{
				"Light_11",
				"Light_12",
				"Light_13"
			}
		};
	};
};