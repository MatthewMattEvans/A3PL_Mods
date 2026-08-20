class CfgPatches
{
	class FYD_JL_Buildings
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Houses"
		};
	};
};

class CfgVehicles
{
	class A3PL_Houses;
	class Land_FYD_IllegalCargo: A3PL_Houses
	{
		displayName="Illegal Container";
		model="FYD_JL_Buildings\illegalCargo\FYD_Illegalcargo.p3d";
	};
	class Land_FYD_Courthouse: A3PL_Houses
	{
		displayName="FYD Courthouse";
		model="FYD_JL_Buildings\Courthouse\FYD_courthouse.p3d";
		ladders[]=
		{
			
			{
				"Ladder_1_start",
				"Ladder_1_end"
			},
			
			{
				"Ladder_2_start",
				"Ladder_1_end"
			}
		};
		class MarkerLights
		{
			class Light_4
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 1;
				name = "Light_4";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_3
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 3;
				name = "Light_3";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_2
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 3;
				name = "Light_2";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_1
			{
				color[] = {255,255,255};
				ambient[] = {255,255,255};
				intensity = 15;
				name = "Light_1";
				useFlare = 0;
				flareSize = 0;
				flareMaxDistance = 0;
				activeLight = 1;
				dayLight = 0;
				drawLight = 0;
				blinking = 0;
				class Attenuation
				{
					start = 0;
					constant = 50;
					linear = 5;
					quadratic = 1;
					hardLimitStart = 0;
					hardLimitEnd = 0;
				};
			};
			class Light_red_1
			{
				color[] = {0.95,0,0};
				ambient[] = {0,0,0};
				intensity = 8;
				name = "light_red_1";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.08;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
			class Light_green_1
			{
				color[] = {0,0.95,0};
				ambient[] = {0,0,0};
				intensity = 12;
				name = "light_green_1";
				drawLight = 1;
				drawLightSize = 0.2;
				drawLightCenterSize = 0.08;
				activeLight = 0;
				blinking = 0;
				dayLight = 1;
				useFlare = 0;
			};
		};
	};
	class Land_FYD_Firestation: A3PL_Houses
	{
		displayName="FYD Fire Station";
		model="FYD_JL_Buildings\Firestation\FYD_Firestation.p3d";

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,1000,1200};
				ambient[]={6,5,4};
				intensity=5;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
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
				position="light_2_pos";
				direction="light_2_dir";
				hitpoint="light_2";
				selection="light_2";
			};
			class Light_3: Light_1
			{
				position="light_3_pos";
				direction="light_3_dir";
				hitpoint="light_3";
				selection="light_3";
			};
			class Light_4: Light_1
			{
				position="light_4_pos";
				direction="light_4_dir";
				hitpoint="light_4";
				selection="light_4";
			};
			class Light_5: Light_1
			{
				position="light_5_pos";
				direction="light_5_dir";
				hitpoint="light_5";
				selection="light_5";
			};
			class Light_6: Light_1
			{
				position="light_6_pos";
				direction="light_6_dir";
				hitpoint="light_6";
				selection="light_6";
			};
			class Light_7: Light_1
			{
				position="light_7_pos";
				direction="light_7_dir";
				hitpoint="light_7";
				selection="light_7";
			};
			class Light_8: Light_1
			{
				position="light_8_pos";
				direction="light_8_dir";
				hitpoint="light_8";
				selection="light_8";
			};
			class Light_9: Light_1
			{
				position="light_9_pos";
				direction="light_9_dir";
				hitpoint="light_9";
				selection="light_9";
			};
			class Light_10: Light_1
			{
				position="light_10_pos";
				direction="light_10_dir";
				hitpoint="light_10";
				selection="light_10";
			};
			class Light_11: Light_1
			{
				position="light_11_pos";
				direction="light_11_dir";
				hitpoint="light_11";
				selection="light_11";
			};
			class Light_12: Light_1
			{
				position="light_12_pos";
				direction="light_12_dir";
				hitpoint="light_12";
				selection="light_12";
			};
			class Light_13: Light_1
			{
				position="light_13_pos";
				direction="light_13_dir";
				hitpoint="light_13";
				selection="light_13";
			};
			class Light_14: Light_1
			{
				position="light_14_pos";
				direction="light_14_dir";
				hitpoint="light_14";
				selection="light_14";
			};
			class Light_15: Light_1
			{
				position="light_15_pos";
				direction="light_15_dir";
				hitpoint="light_15";
				selection="light_15";
			};
			class Light_16: Light_1
			{
				position="light_16_pos";
				direction="light_16_dir";
				hitpoint="light_16";
				selection="light_16";
			};
			class Light_17: Light_1
			{
				position="light_17_pos";
				direction="light_17_dir";
				hitpoint="light_17";
				selection="light_17";
			};
			class Light_18: Light_1
			{
				position="light_18_pos";
				direction="light_18_dir";
				hitpoint="light_18";
				selection="light_18";
			};
			class Light_19: Light_1
			{
				position="light_19_pos";
				direction="light_19_dir";
				hitpoint="light_19";
				selection="light_19";
			};
			class Light_20: Light_1
			{
				position="light_20_pos";
				direction="light_20_dir";
				hitpoint="light_20";
				selection="light_20";
			};
			class Light_21: Light_1
			{
				position="light_21_pos";
				direction="light_21_dir";
				hitpoint="light_21";
				selection="light_21";
			};
			class Light_22: Light_1
			{
				position="light_22_pos";
				direction="light_22_dir";
				hitpoint="light_22";
				selection="light_22";
			};
			class Light_23: Light_1
			{
				position="light_23_pos";
				direction="light_23_dir";
				hitpoint="light_23";
				selection="light_23";
			};
			class Light_24: Light_1
			{
				position="light_24_pos";
				direction="light_24_dir";
				hitpoint="light_24";
				selection="light_24";
			};
			class Light_25: Light_1
			{
				position="light_25_pos";
				direction="light_25_dir";
				hitpoint="light_25";
				selection="light_25";
			};
			class Light_26: Light_1
			{
				position="light_26_pos";
				direction="light_26_dir";
				hitpoint="light_26";
				selection="light_26";
			};
			class Light_27: Light_1
			{
				position="light_27_pos";
				direction="light_27_dir";
				hitpoint="light_27";
				selection="light_27";
			};
			class Light_28: Light_1
			{
				position="light_28_pos";
				direction="light_28_dir";
				hitpoint="light_28";
				selection="light_28";
			};
			class Light_29: Light_1
			{
				position="light_29_pos";
				direction="light_29_dir";
				hitpoint="light_29";
				selection="light_29";
			};
			class Light_30: Light_1
			{
				position="light_30_pos";
				direction="light_30_dir";
				hitpoint="light_30";
				selection="light_30";
			};
			class Light_31: Light_1
			{
				position="light_31_pos";
				direction="light_31_dir";
				hitpoint="light_31";
				selection="light_31";
			};
			class Light_32: Light_1
			{
				position="light_32_pos";
				direction="light_32_dir";
				hitpoint="light_32";
				selection="light_32";
			};
			class Light_33: Light_1
			{
				position="light_33_pos";
				direction="light_33_dir";
				hitpoint="light_33";
				selection="light_33";
			};
			class Light_34: Light_1
			{
				position="light_34_pos";
				direction="light_34_dir";
				hitpoint="light_34";
				selection="light_34";
			};
			class Light_35: Light_1
			{
				position="light_35_pos";
				direction="light_35_dir";
				hitpoint="light_35";
				selection="light_35";
			};
			class Light_36: Light_1
			{
				position="light_36_pos";
				direction="light_36_dir";
				hitpoint="light_36";
				selection="light_36";
			};
			class Light_37: Light_1
			{
				position="light_37_pos";
				direction="light_37_dir";
				hitpoint="light_37";
				selection="light_37";
			};
			class Light_38: Light_1
			{
				position="light_38_pos";
				direction="light_38_dir";
				hitpoint="light_38";
				selection="light_38";
			};
			class Light_39: Light_1
			{
				position="light_39_pos";
				direction="light_39_dir";
				hitpoint="light_39";
				selection="light_39";
			};
			class Light_40: Light_1
			{
				position="light_40_pos";
				direction="light_40_dir";
				hitpoint="light_40";
				selection="light_40";
			};
			class Light_41: Light_1
			{
				position="light_41_pos";
				direction="light_41_dir";
				hitpoint="light_41";
				selection="light_41";
			};
			class Light_42: Light_1
			{
				position="light_42_pos";
				direction="light_42_dir";
				hitpoint="light_42";
				selection="light_42";
			};
			class Light_43: Light_1
			{
				position="light_43_pos";
				direction="light_43_dir";
				hitpoint="light_43";
				selection="light_43";
			};
			class Light_44: Light_1
			{
				position="light_44_pos";
				direction="light_44_dir";
				hitpoint="light_44";
				selection="light_44";
			};
		};
		aggregateReflectors[]=
		{
			{
				"Light_1",
				"Light_2",
				"Light_3",
				"Light_38",
				"Light_39",
				"Light_40",
				"Light_41",
				"Light_42",
				"Light_43",
				"Light_44"
			},
			
			{
				"Light_4",
				"Light_5",
				"Light_6",
				"Light_7"
			},
			
			{
				"Light_8",
				"Light_9",
				"Light_10",
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
				"Light_18"
			},

			{
				"Light_19",
				"Light_20",
				"Light_21",
				"Light_22",
				"Light_23"
			},

			{
				"Light_24",
				"Light_25",
				"Light_26",
				"Light_27",
				"Light_28"
			},

			{
				"Light_24",
				"Light_25",
				"Light_26",
				"Light_27",
				"Light_28"
			},

			{
				"Light_29",
				"Light_30",
				"Light_31",
				"Light_32",
				"Light_33",
				"Light_34",
				"Light_35",
				"Light_36",
				"Light_37"
			}
		};
		ladders[]=
		{
			{
				"Ladder_1_start",
				"Ladder_1_end"
			}
		};
	};
	class Land_FYD_UFC: A3PL_Houses
	{
		author="Jl_Kenzo";
		displayName="Ring UFC";
		model="FYD_JL_Buildings\Ring_UFC\FYD_UFC.p3d";
	};
};
