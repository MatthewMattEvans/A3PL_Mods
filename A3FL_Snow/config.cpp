class CfgPatches
{
	class A3FL_Snow
	{
		name="A3FL_Snow";
		requiredAddons[]=
		{
			"A3_Map_Data",
			"A3_Sounds_F",
			"A3_3DEN"
		};
		requiredVersion=0.1;
		units[]=
		{
			"A3FL_ice",
			"A3FL_Snowman"
		};
		weapons[]={};
		worlds[]={};
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class RainParticles
		{
			dropColor[]={0.1,0.1,0.1,1};
			dropHeight=0.050000001;
			dropSpeed=0.80000001;
			dropWidth=0.050000001;
			effectRadius=20;
			lumSunBack=0.1;
			lumSunFront=0.1;
			minRainDensity=0.0099999998;
			rainDropTexture="A3FL_Snow\snowflake_ca.paa";
			refractCoef=0.5;
			refractSaturation=0.30000001;
			rndDir=0.57999998;
			rndSpeed=0.5;
			texDropCount=2;
			windCoef=0.80000001;
		};
	};
};
class CfgEnvSounds
{
	soundSetEnvironment[]=
	{
		"Meadows_Low_SoundSet",
		"Meadows_High_SoundSet",
		"Forest_Low_SoundSet",
		"Forest_High_SoundSet",
		"Forest_Rattles_SoundSet",
		"Greek_Crickets_Day_SoundSet",
		"Greek_Crickets_Night_SoundSet",
		"Birds_Forest_Day_SoundSet",
		"Birds_Meadows_Day_SoundSet",
		"Wind_Low_SoundSet",
		"Wind_High_SoundSet",
		"Sea_SoundSet",
		"Coast_SoundSet"
	};
	class CfgEnvSpatialSounds
	{
		class sound_bush_leaves_small
		{
			memPoint="sound_bush_leaves_small";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet"
			};
		};
		class sound_bush_leaves_medium
		{
			memPoint="sound_bush_leaves_medium";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet"
			};
		};
		class sound_tree_leaves_small
		{
			memPoint="sound_tree_leaves_small";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Wind_LeavesA_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_tree_leaves_medium
		{
			memPoint="sound_tree_leaves_medium";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Wind_LeavesB_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_tree_wide_leaves_medium
		{
			memPoint="sound_tree_wide_leaves_medium";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Wind_LeavesA_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_tree_wide_leaves_small1
		{
			memPoint="sound_tree_wide_leaves_small1";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Wind_LeavesA_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_tree_wide_leaves_small2
		{
			memPoint="sound_tree_wide_leaves_small2";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Wind_LeavesA_SoundSet"
			};
		};
		class sound_tree_leaves_palm
		{
			memPoint="sound_tree_leaves_palm";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_tree_stem
		{
			memPoint="sound_tree_stem";
			soundSets[]=
			{
				"Wind_Tree_Creacking_SoundSet"
			};
		};
		class sound_tree_conifer
		{
			memPoint="sound_tree_conifer";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet"
			};
		};
		class sound_tree_wide_conifer
		{
			memPoint="sound_tree_wide_conifer";
			soundSets[]=
			{
				"Crickets_Stratis_Night_SoundSet",
				"Crickets_Stratis_SingleA_Day_SoundSet",
				"Crickets_Stratis_GroupA_Day_SoundSet",
				"Forest_Birds_Day_SoundSet",
				"Forest_Birds_Night_SoundSet",
				"Meadows_Birds_Day_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_1
		{
			memPoint="sound_rain_metalTin_tiny_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet",
				"Rock_DebrisWind_Small_SoundShader"
			};
		};
		class sound_rain_metalTin_tiny_2
		{
			memPoint="sound_rain_metalTin_tiny_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_3
		{
			memPoint="sound_rain_metalTin_tiny_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_4
		{
			memPoint="sound_rain_metalTin_tiny_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_5
		{
			memPoint="sound_rain_metalTin_tiny_5";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_6
		{
			memPoint="sound_rain_metalTin_tiny_6";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_7
		{
			memPoint="sound_rain_metalTin_tiny_7";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_8
		{
			memPoint="sound_rain_metalTin_tiny_8";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_9
		{
			memPoint="sound_rain_metalTin_tiny_9";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_10
		{
			memPoint="sound_rain_metalTin_tiny_10";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_11
		{
			memPoint="sound_rain_metalTin_tiny_11";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_12
		{
			memPoint="sound_rain_metalTin_tiny_12";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_13
		{
			memPoint="sound_rain_metalTin_tiny_13";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_14
		{
			memPoint="sound_rain_metalTin_tiny_14";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_15
		{
			memPoint="sound_rain_metalTin_tiny_15";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_16
		{
			memPoint="sound_rain_metalTin_tiny_16";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_17
		{
			memPoint="sound_rain_metalTin_tiny_17";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_18
		{
			memPoint="sound_rain_metalTin_tiny_18";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_19
		{
			memPoint="sound_rain_metalTin_tiny_19";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_20
		{
			memPoint="sound_rain_metalTin_tiny_20";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_21
		{
			memPoint="sound_rain_metalTin_tiny_21";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_22
		{
			memPoint="sound_rain_metalTin_tiny_22";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_tiny_23
		{
			memPoint="sound_rain_metalTin_tiny_23";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_1
		{
			memPoint="sound_rain_metalTin_small_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_2
		{
			memPoint="sound_rain_metalTin_small_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_3
		{
			memPoint="sound_rain_metalTin_small_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_4
		{
			memPoint="sound_rain_metalTin_small_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_narrow_1
		{
			memPoint="sound_rain_metalTin_small_narrow_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_narrow_2
		{
			memPoint="sound_rain_metalTin_small_narrow_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_narrow_3
		{
			memPoint="sound_rain_metalTin_small_narrow_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_small_narrow_4
		{
			memPoint="sound_rain_metalTin_small_narrow_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_1
		{
			memPoint="sound_rain_metalTin_medium_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_2
		{
			memPoint="sound_rain_metalTin_medium_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_3
		{
			memPoint="sound_rain_metalTin_medium_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_4
		{
			memPoint="sound_rain_metalTin_medium_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_5
		{
			memPoint="sound_rain_metalTin_medium_5";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_narrow_1
		{
			memPoint="sound_rain_metalTin_medium_narrow_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_narrow_2
		{
			memPoint="sound_rain_metalTin_medium_narrow_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_narrow_3
		{
			memPoint="sound_rain_metalTin_medium_narrow_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_medium_narrow_4
		{
			memPoint="sound_rain_metalTin_medium_narrow_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Medium_SoundSet"
			};
		};
		class sound_rain_metalTin_large_1
		{
			memPoint="sound_rain_metalTin_large_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_2
		{
			memPoint="sound_rain_metalTin_large_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_3
		{
			memPoint="sound_rain_metalTin_large_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_4
		{
			memPoint="sound_rain_metalTin_large_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_narrow_1
		{
			memPoint="sound_rain_metalTin_large_narrow_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_narrow_2
		{
			memPoint="sound_rain_metalTin_large_narrow_2";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_narrow_3
		{
			memPoint="sound_rain_metalTin_large_narrow_3";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalTin_large_narrow_4
		{
			memPoint="sound_rain_metalTin_large_narrow_4";
			soundSets[]=
			{
				"Metal_DebrisWind_Large_SoundSet"
			};
		};
		class sound_rain_metalPlate_small_1
		{
			memPoint="sound_rain_metalPlate_small_1";
			soundSets[]=
			{
				"Rain_PlateA_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_small_2
		{
			memPoint="sound_rain_metalPlate_small_2";
			soundSets[]=
			{
				"Rain_PlateA_Heavy_SoundSet"
			};
		};
		class sound_metal_stairs_1
		{
			memPoint="sound_metal_stairs_1";
			soundSets[]=
			{
				"Metal_Stress_High_SoundSet",
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_metal_stairs_2
		{
			memPoint="sound_metal_stairs_2";
			soundSets[]=
			{
				"Metal_Stress_High_SoundSet",
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_metal_stairs_3
		{
			memPoint="sound_metal_stairs_3";
			soundSets[]=
			{
				"Metal_Stress_High_SoundSet",
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_metal_stairs_solid_1
		{
			memPoint="sound_metal_stairs_solid_1";
			soundSets[]=
			{
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_metal_stairs_solid_2
		{
			memPoint="sound_metal_stairs_solid_2";
			soundSets[]=
			{
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_metal_stairs_solid_3
		{
			memPoint="sound_metal_stairs_solid_3";
			soundSets[]=
			{
				"Metal_StressWind_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_1
		{
			memPoint="sound_rain_metalPlate_medium_1";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_2
		{
			memPoint="sound_rain_metalPlate_medium_2";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_3
		{
			memPoint="sound_rain_metalPlate_medium_3";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_4
		{
			memPoint="sound_rain_metalPlate_medium_4";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_5
		{
			memPoint="sound_rain_metalPlate_medium_5";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_medium_6
		{
			memPoint="sound_rain_metalPlate_medium_6";
			soundSets[]=
			{
				"Rain_PlateBn_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_large_1
		{
			memPoint="sound_rain_metalPlate_large_1";
			soundSets[]=
			{
				"Rain_PlateB_Heavy_SoundSet"
			};
		};
		class sound_rain_metalPlate_large_2
		{
			memPoint="sound_rain_metalPlate_large_2";
			soundSets[]=
			{
				"Rain_PlateB_Heavy_SoundSet"
			};
		};
		class sound_gutter_1
		{
			memPoint="sound_gutter_1";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_2
		{
			memPoint="sound_gutter_2";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_3
		{
			memPoint="sound_gutter_3";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_4
		{
			memPoint="sound_gutter_4";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_5
		{
			memPoint="sound_gutter_5";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_6
		{
			memPoint="sound_gutter_6";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_7
		{
			memPoint="sound_gutter_7";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_gutter_8
		{
			memPoint="sound_gutter_8";
			soundSets[]=
			{
				"Water_Gutter_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_air_condition_1
		{
			memPoint="sound_air_condition_1";
			soundSets[]=
			{
				"Rain_MetalT_Heavy_SoundSet"
			};
		};
		class sound_air_condition_2
		{
			memPoint="sound_air_condition_2";
			soundSets[]=
			{
				"Rain_MetalT_Heavy_SoundSet"
			};
		};
		class sound_air_condition_3
		{
			memPoint="sound_air_condition_3";
			soundSets[]=
			{
				"Rain_MetalT_Heavy_SoundSet"
			};
		};
		class sound_air_condition_4
		{
			memPoint="sound_air_condition_4";
			soundSets[]=
			{
				"Rain_MetalT_Heavy_SoundSet"
			};
		};
		class sound_air_condition_5
		{
			memPoint="sound_air_condition_5";
			soundSets[]=
			{
				"Rain_MetalT_Heavy_SoundSet"
			};
		};
		class sound_electric_box_1
		{
			memPoint="sound_electric_box_1";
			soundSets[]=
			{
				"Electric_Box_SoundSet"
			};
		};
		class sound_electric_box_2
		{
			memPoint="sound_electric_box_2";
			soundSets[]=
			{
				"Electric_Box_SoundSet"
			};
		};
		class sound_electric_box_3
		{
			memPoint="sound_electric_box_3";
			soundSets[]=
			{
				"Electric_Box_SoundSet"
			};
		};
		class sound_electric_box_4
		{
			memPoint="sound_electric_box_4";
			soundSets[]=
			{
				"Electric_Box_SoundSet"
			};
		};
		class sound_electric_box_5
		{
			memPoint="sound_electric_box_5";
			soundSets[]=
			{
				"Electric_Box_SoundSet"
			};
		};
		class sound_metal_tension_1
		{
			memPoint="sound_metal_tension_1";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_2
		{
			memPoint="sound_metal_tension_2";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_3
		{
			memPoint="sound_metal_tension_3";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_4
		{
			memPoint="sound_metal_tension_4";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_5
		{
			memPoint="sound_metal_tension_5";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_6
		{
			memPoint="sound_metal_tension_6";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_7
		{
			memPoint="sound_metal_tension_7";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_8
		{
			memPoint="sound_metal_tension_8";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_9
		{
			memPoint="sound_metal_tension_9";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_10
		{
			memPoint="sound_metal_tension_10";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_metal_tension_11
		{
			memPoint="sound_metal_tension_11";
			soundSets[]=
			{
				"Metal_Stress_SoundSet",
				"Metal_StressWind_SoundSet"
			};
		};
		class sound_ruins_1
		{
			memPoint="sound_ruins_1";
			soundSets[]=
			{
				"Rock_Debris_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_ruins_2
		{
			memPoint="sound_ruins_2";
			soundSets[]=
			{
				"Rock_Debris_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_ruins_3
		{
			memPoint="sound_ruins_3";
			soundSets[]=
			{
				"Rock_Debris_High_SoundSet",
				"Metal_DebrisWind_Small_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_stone_small_1
		{
			memPoint="sound_rain_stone_small_1";
			soundSets[]=
			{
				"Rock_Debris_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_rain_stone_medium_1
		{
			memPoint="sound_rain_stone_medium_1";
			soundSets[]=
			{
				"Rock_Debris_SoundSet",
				"Rock_DebrisWind_Small_SoundSet"
			};
		};
		class sound_head
		{
			memPoint="sound_head";
			soundSets[]=
			{
				"Forest_Birds_Temp_SoundSet"
			};
		};
		class sound_clothes_1
		{
			memPoint="sound_clothes_1";
			soundSets[]=
			{
				"ClothesWind_SoundSet"
			};
		};
		class sound_clothes_2
		{
			memPoint="sound_clothes_2";
			soundSets[]=
			{
				"ClothesWind_SoundSet"
			};
		};
		class sound_net_fence_1
		{
			memPoint="sound_net_fence_1";
			soundSets[]=
			{
				"MetalFenceWind_SoundSet"
			};
		};
		class sound_shed_1
		{
			memPoint="sound_shed_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
		class sound_slum_1
		{
			memPoint="sound_slum_1";
			soundSets[]=
			{
				"Metal_DebrisWind_Small_SoundSet"
			};
		};
	};
	class BattlefieldExplosions3
	{
		sound[]=
		{
			"A3\Sounds_F\environment\ambient\battlefield\battlefield_explosions3",
			0.31622776,
			1
		};
		titles[]={};
	};
	class WindFast
	{
		name="$STR_A3_CfgEnvSounds_WindFast0";
		sound[]=
		{
			"A3\sounds_f\ambient\winds\wind-synth-fast",
			0.031622775,
			1
		};
		volume="(windy factor[0.66,1])-(night*0.25)";
	};
};
class Cfg3DEN
{
	class Mission
	{
		class Intel
		{
			class AttributeCategories
			{
				class Rain
				{
					displayName="Snow";
					collapsed=1;
					class Attributes;
				};
			};
		};
	};
};
class CfgVehicles
{
	class Strategic;
	class A3FL_ice: Strategic
	{
		author="John Doe";
		scope=2;
		model="\A3FL_Snow\ice\ice.p3d";
		displayName="JD: Ice";
	};
	class A3FL_Snowman: A3FL_ice
	{
		model="\A3FL_Snow\snowman\snowman.p3d";
		displayName="JD: Snowman";
	};
};
