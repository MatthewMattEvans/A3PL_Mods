class CfgPatches {
	class A3PL_Jason_Barracks {
		units[]={"Land_A3PL_Barracks"};
		weapons[]={};
		requiredAddons[]={"A3PL_Cars","A3PL_Objects"};
		requiredVersion=0.0001;
	};
};

class CfgVehicles {
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class Land_A3PL_Barracks: House_F
	{
		author="$STR_A3_Bohemia_Interactive";
		mapSize=38.73;
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\Land_i_Barracks_V1_F.jpg";
		_generalMacro="Land_A3PL_Barracks";
		scope=2;
		scopeCurator=2;
		displayName="A3PL Barracks";
		model="\A3PL_Jason\Buildings\Barracks\A3PL_Barracks.p3d";
		icon="iconObject_5x2";
		editorCategory="EdCat_Structures_Altis";
		editorSubcategory="EdSubcat_Military";
		vehicleClass="Structures_Military";
		cost=50000;
		numberOfDoors=22;
		numberOfWindows=62;
		selectionDamage="DamT_1";
		replaceDamaged="Land_i_Barracks_V1_dam_F";
		replaceDamagedHitpoints[]= {
			"Hitzone_1_hitpoint",
			"Hitzone_2_hitpoint"
		};
		class DestructionEffects: DestructionEffects {
			class Ruin1 {
				simulation="ruin";
				type="\A3\Structures_F\Mil\Barracks\Barracks_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		ladders[]= {
			{
				"Ladder_1_start",
				"Ladder_1_end",
				2.5,
				"Ladder_1_action"
			}
		};
		class HitPoints
		{
			class Hitzone_1_hitpoint
			{
				armor=0.60000002;
				material=-1;
				name="Dam_1";
				visual="DamT_1";
				passThrough=0.40000001;
				radius=0.40000001;
				convexComponent="Dam_1";
				explosionShielding=20;
				minimalHit=0.02;
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="Dam_1_effects";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
					class DamageAround
					{
						intensity=1;
						interval=1;
						lifeTime=1;
						position="Dam_1_effects";
						simulation="damageAround";
						type="DamageAroundHousePart";
					};
					class Sound
					{
						intensity=1;
						interval=1;
						lifeTime=0.125;
						position="Dam_1_effects";
						simulation="sound";
						type="DestrHousePart";
					};
				};
			};
			class Hitzone_2_hitpoint
			{
				armor=0.60000002;
				material=-1;
				name="Dam_2";
				visual="DamT_2";
				passThrough=0.40000001;
				radius=0.40000001;
				convexComponent="Dam_2";
				explosionShielding=20;
				minimalHit=0.02;
				class DestructionEffects
				{
					class Dust
					{
						simulation="particles";
						type="HousePartDust";
						position="Dam_2_effects";
						intensity=1;
						interval=1;
						lifeTime=0.0099999998;
					};
					class Dust2: Dust
					{
						type="HousePartDustLong";
					};
					class Walls: Dust
					{
						type="HousePartWall";
					};
					class DamageAround
					{
						intensity=1;
						interval=1;
						lifeTime=1;
						position="Dam_2_effects";
						simulation="damageAround";
						type="DamageAroundHousePart";
					};
					class Sound
					{
						intensity=1;
						interval=1;
						lifeTime=0.125;
						position="Dam_2_effects";
						simulation="sound";
						type="DestrHousePart";
					};
				};
			};
			class Glass_1_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_1";
				visual="Glass_1_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_1_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_1_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_2_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_2";
				visual="Glass_2_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_2_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_2_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_3_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_3";
				visual="Glass_3_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_3_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_3_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_4_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_4";
				visual="Glass_4_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_4_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_4_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_5_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_5";
				visual="Glass_5_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_5_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_5_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_6_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_6";
				visual="Glass_6_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_6_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_6_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_7_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_7";
				visual="Glass_7_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_7_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_7_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_8_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_8";
				visual="Glass_8_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_8_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_8_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_9_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_9";
				visual="Glass_9_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_9_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_9_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_10_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_10";
				visual="Glass_10_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_10_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_10_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_11_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_11";
				visual="Glass_11_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_11_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_11_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_12_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_12";
				visual="Glass_12_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_12_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_12_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_13_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_13";
				visual="Glass_13_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_13_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_13_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_14_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_14";
				visual="Glass_14_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_14_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_14_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_15_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_15";
				visual="Glass_15_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_15_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_15_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_16_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_16";
				visual="Glass_16_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_16_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_16_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_17_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_17";
				visual="Glass_17_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_17_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_17_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_18_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_18";
				visual="Glass_18_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_18_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_18_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_19_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_19";
				visual="Glass_19_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_19_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_19_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_20_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_20";
				visual="Glass_20_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_20_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_20_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_21_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_21";
				visual="Glass_21_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_21_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_21_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_22_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_22";
				visual="Glass_22_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_22_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_22_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_23_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_23";
				visual="Glass_23_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_23_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_23_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_24_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_24";
				visual="Glass_24_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_24_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_24_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_25_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_25";
				visual="Glass_25_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_25_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_25_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_26_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_26";
				visual="Glass_26_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_26_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_26_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_27_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_27";
				visual="Glass_27_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_27_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_27_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_28_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_28";
				visual="Glass_28_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_28_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_28_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_29_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_29";
				visual="Glass_29_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_29_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_29_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_30_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_30";
				visual="Glass_30_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_30_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_30_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_31_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_31";
				visual="Glass_31_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_31_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_31_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_32_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_32";
				visual="Glass_32_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_32_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_32_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_33_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_33";
				visual="Glass_33_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_33_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_33_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_34_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_34";
				visual="Glass_34_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_34_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_34_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_35_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_35";
				visual="Glass_35_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_35_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_35_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_36_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_36";
				visual="Glass_36_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_36_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_36_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_37_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_37";
				visual="Glass_37_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_37_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_37_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_38_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_38";
				visual="Glass_38_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_38_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_38_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_39_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_39";
				visual="Glass_39_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_39_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_39_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_40_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_40";
				visual="Glass_40_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_40_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_40_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_41_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_41";
				visual="Glass_41_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_41_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_41_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_42_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_42";
				visual="Glass_42_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_42_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_42_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_43_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_43";
				visual="Glass_43_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_43_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_43_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_44_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_44";
				visual="Glass_44_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_44_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_44_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_45_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_45";
				visual="Glass_45_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_45_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_45_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_46_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_46";
				visual="Glass_46_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_46_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_46_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_47_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_47";
				visual="Glass_47_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_47_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_47_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_48_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_48";
				visual="Glass_48_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_48_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_48_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_49_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_49";
				visual="Glass_49_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_49_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_49_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_50_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_50";
				visual="Glass_50_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_50_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_50_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_51_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_51";
				visual="Glass_51_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_51_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_51_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_52_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_52";
				visual="Glass_52_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_52_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_52_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_53_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_53";
				visual="Glass_53_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_53_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_53_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_54_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_54";
				visual="Glass_54_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_54_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_54_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_55_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_55";
				visual="Glass_55_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_55_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_55_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_56_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_56";
				visual="Glass_56_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_56_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_56_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_57_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_57";
				visual="Glass_57_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_57_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_57_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_58_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_58";
				visual="Glass_58_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_58_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_58_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_59_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_59";
				visual="Glass_59_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_59_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_59_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_60_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_60";
				visual="Glass_60_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_60_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_60_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_61_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_61";
				visual="Glass_61_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_61_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_61_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
			class Glass_62_hitpoint
			{
				armor=0.001;
				material=-1;
				name="Glass_62";
				visual="Glass_62_hide";
				passThrough=0;
				radius=0.40000001;
				convexComponent="Glass_62_hide";
				class DestructionEffects
				{
					class BrokenGlass1
					{
						simulation="particles";
						type="BrokenGlass1N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2
					{
						simulation="particles";
						type="BrokenGlass2N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3
					{
						simulation="particles";
						type="BrokenGlass3N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4
					{
						simulation="particles";
						type="BrokenGlass4N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5
					{
						simulation="particles";
						type="BrokenGlass5N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6
					{
						simulation="particles";
						type="BrokenGlass6N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7
					{
						simulation="particles";
						type="BrokenGlass7N_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass1S
					{
						simulation="particles";
						type="BrokenGlass1S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass2S
					{
						simulation="particles";
						type="BrokenGlass2S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass3S
					{
						simulation="particles";
						type="BrokenGlass3S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass4S
					{
						simulation="particles";
						type="BrokenGlass4S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass5S
					{
						simulation="particles";
						type="BrokenGlass5S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass6S
					{
						simulation="particles";
						type="BrokenGlass6S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
					class BrokenGlass7S
					{
						simulation="particles";
						type="BrokenGlass7S_0900_0950";
						position="Glass_62_effects";
						intensity=0.15000001;
						interval=1;
						lifeTime=0.050000001;
					};
				};
			};
		};
		class Damage
		{
			tex[]=
			{
				"A3\Structures_F\Data\Windows\window_set_CA.paa",
				"A3\Structures_F\Data\Windows\destruct_half_window_set_CA.paa"
			};
			mat[]=
			{
				"A3\Structures_F\Data\Windows\window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_half_window_set.rvmat",
				"A3\Structures_F\Data\Windows\destruct_full_window_set.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\i_barracks_V1_details.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_details.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_details.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\i_barracks_V1_ext.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_ext.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_ext.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\i_barracks_V1_int.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_int.rvmat",
				"A3\Structures_F\Mil\Barracks\Data\destruct_i_barracks_V1_int.rvmat"
			};
		};
		class AnimationSources
		{
			class Door_1_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_1_trigger";
			};
			class Door_1_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_1_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_2_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_2_trigger";
			};
			class Door_2_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_3_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_3_trigger";
			};
			class Door_3_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_3_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_4_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_4_trigger";
			};
			class Door_4_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_4_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_5_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_5_trigger";
			};
			class Door_5_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_5_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_6_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_6_trigger";
			};
			class Door_6_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_6_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_7_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_7_trigger";
			};
			class Door_7_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_7_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_8_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_8_trigger";
			};
			class Door_8_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_8_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_9_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_9_trigger";
			};
			class Door_9_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_9_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_10_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_10_trigger";
			};
			class Door_10_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_10_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_11_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_11_trigger";
			};
			class Door_11_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_11_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_12_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_12_trigger";
			};
			class Door_12_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_12_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_13_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_13_trigger";
			};
			class Door_13_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_13_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_14_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_14_trigger";
			};
			class Door_14_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_14_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_15_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_15_trigger";
			};
			class Door_15_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_15_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_16_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_16_trigger";
			};
			class Door_16_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_16_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_17_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_17_trigger";
			};
			class Door_17_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_17_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_18_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_18_trigger";
			};
			class Door_18_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_18_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_19_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_19_trigger";
			};
			class Door_19_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_19_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_20_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_20_trigger";
			};
			class Door_20_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_20_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_21_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_21_trigger";
			};
			class Door_21_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_21_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Door_22_sound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
				sound="GenericDoorsSound";
				soundPosition="Door_22_trigger";
			};
			class Door_22_noSound_source
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_22_locked_source
			{
				source="user";
				initPhase=0;
				animPeriod=0.80000001;
			};
			class Glass_1_source
			{
				source="Hit";
				hitpoint="Glass_1_hitpoint";
				raw=1;
			};
			class Glass_2_source
			{
				source="Hit";
				hitpoint="Glass_2_hitpoint";
				raw=1;
			};
			class Glass_3_source
			{
				source="Hit";
				hitpoint="Glass_3_hitpoint";
				raw=1;
			};
			class Glass_4_source
			{
				source="Hit";
				hitpoint="Glass_4_hitpoint";
				raw=1;
			};
			class Glass_5_source
			{
				source="Hit";
				hitpoint="Glass_5_hitpoint";
				raw=1;
			};
			class Glass_6_source
			{
				source="Hit";
				hitpoint="Glass_6_hitpoint";
				raw=1;
			};
			class Glass_7_source
			{
				source="Hit";
				hitpoint="Glass_7_hitpoint";
				raw=1;
			};
			class Glass_8_source
			{
				source="Hit";
				hitpoint="Glass_8_hitpoint";
				raw=1;
			};
			class Glass_9_source
			{
				source="Hit";
				hitpoint="Glass_9_hitpoint";
				raw=1;
			};
			class Glass_10_source
			{
				source="Hit";
				hitpoint="Glass_10_hitpoint";
				raw=1;
			};
			class Glass_11_source
			{
				source="Hit";
				hitpoint="Glass_11_hitpoint";
				raw=1;
			};
			class Glass_12_source
			{
				source="Hit";
				hitpoint="Glass_12_hitpoint";
				raw=1;
			};
			class Glass_13_source
			{
				source="Hit";
				hitpoint="Glass_13_hitpoint";
				raw=1;
			};
			class Glass_14_source
			{
				source="Hit";
				hitpoint="Glass_14_hitpoint";
				raw=1;
			};
			class Glass_15_source
			{
				source="Hit";
				hitpoint="Glass_15_hitpoint";
				raw=1;
			};
			class Glass_16_source
			{
				source="Hit";
				hitpoint="Glass_16_hitpoint";
				raw=1;
			};
			class Glass_17_source
			{
				source="Hit";
				hitpoint="Glass_17_hitpoint";
				raw=1;
			};
			class Glass_18_source
			{
				source="Hit";
				hitpoint="Glass_18_hitpoint";
				raw=1;
			};
			class Glass_19_source
			{
				source="Hit";
				hitpoint="Glass_19_hitpoint";
				raw=1;
			};
			class Glass_20_source
			{
				source="Hit";
				hitpoint="Glass_20_hitpoint";
				raw=1;
			};
			class Glass_21_source
			{
				source="Hit";
				hitpoint="Glass_21_hitpoint";
				raw=1;
			};
			class Glass_22_source
			{
				source="Hit";
				hitpoint="Glass_22_hitpoint";
				raw=1;
			};
			class Glass_23_source
			{
				source="Hit";
				hitpoint="Glass_23_hitpoint";
				raw=1;
			};
			class Glass_24_source
			{
				source="Hit";
				hitpoint="Glass_24_hitpoint";
				raw=1;
			};
			class Glass_25_source
			{
				source="Hit";
				hitpoint="Glass_25_hitpoint";
				raw=1;
			};
			class Glass_26_source
			{
				source="Hit";
				hitpoint="Glass_26_hitpoint";
				raw=1;
			};
			class Glass_27_source
			{
				source="Hit";
				hitpoint="Glass_27_hitpoint";
				raw=1;
			};
			class Glass_28_source
			{
				source="Hit";
				hitpoint="Glass_28_hitpoint";
				raw=1;
			};
			class Glass_29_source
			{
				source="Hit";
				hitpoint="Glass_29_hitpoint";
				raw=1;
			};
			class Glass_30_source
			{
				source="Hit";
				hitpoint="Glass_30_hitpoint";
				raw=1;
			};
			class Glass_31_source
			{
				source="Hit";
				hitpoint="Glass_31_hitpoint";
				raw=1;
			};
			class Glass_32_source
			{
				source="Hit";
				hitpoint="Glass_32_hitpoint";
				raw=1;
			};
			class Glass_33_source
			{
				source="Hit";
				hitpoint="Glass_33_hitpoint";
				raw=1;
			};
			class Glass_34_source
			{
				source="Hit";
				hitpoint="Glass_34_hitpoint";
				raw=1;
			};
			class Glass_35_source
			{
				source="Hit";
				hitpoint="Glass_35_hitpoint";
				raw=1;
			};
			class Glass_36_source
			{
				source="Hit";
				hitpoint="Glass_36_hitpoint";
				raw=1;
			};
			class Glass_37_source
			{
				source="Hit";
				hitpoint="Glass_37_hitpoint";
				raw=1;
			};
			class Glass_38_source
			{
				source="Hit";
				hitpoint="Glass_38_hitpoint";
				raw=1;
			};
			class Glass_39_source
			{
				source="Hit";
				hitpoint="Glass_39_hitpoint";
				raw=1;
			};
			class Glass_40_source
			{
				source="Hit";
				hitpoint="Glass_40_hitpoint";
				raw=1;
			};
			class Glass_41_source
			{
				source="Hit";
				hitpoint="Glass_41_hitpoint";
				raw=1;
			};
			class Glass_42_source
			{
				source="Hit";
				hitpoint="Glass_42_hitpoint";
				raw=1;
			};
			class Glass_43_source
			{
				source="Hit";
				hitpoint="Glass_43_hitpoint";
				raw=1;
			};
			class Glass_44_source
			{
				source="Hit";
				hitpoint="Glass_44_hitpoint";
				raw=1;
			};
			class Glass_45_source
			{
				source="Hit";
				hitpoint="Glass_45_hitpoint";
				raw=1;
			};
			class Glass_46_source
			{
				source="Hit";
				hitpoint="Glass_46_hitpoint";
				raw=1;
			};
			class Glass_47_source
			{
				source="Hit";
				hitpoint="Glass_47_hitpoint";
				raw=1;
			};
			class Glass_48_source
			{
				source="Hit";
				hitpoint="Glass_48_hitpoint";
				raw=1;
			};
			class Glass_49_source
			{
				source="Hit";
				hitpoint="Glass_49_hitpoint";
				raw=1;
			};
			class Glass_50_source
			{
				source="Hit";
				hitpoint="Glass_50_hitpoint";
				raw=1;
			};
			class Glass_51_source
			{
				source="Hit";
				hitpoint="Glass_51_hitpoint";
				raw=1;
			};
			class Glass_52_source
			{
				source="Hit";
				hitpoint="Glass_52_hitpoint";
				raw=1;
			};
			class Glass_53_source
			{
				source="Hit";
				hitpoint="Glass_53_hitpoint";
				raw=1;
			};
			class Glass_54_source
			{
				source="Hit";
				hitpoint="Glass_54_hitpoint";
				raw=1;
			};
			class Glass_55_source
			{
				source="Hit";
				hitpoint="Glass_55_hitpoint";
				raw=1;
			};
			class Glass_56_source
			{
				source="Hit";
				hitpoint="Glass_56_hitpoint";
				raw=1;
			};
			class Glass_57_source
			{
				source="Hit";
				hitpoint="Glass_57_hitpoint";
				raw=1;
			};
			class Glass_58_source
			{
				source="Hit";
				hitpoint="Glass_58_hitpoint";
				raw=1;
			};
			class Glass_59_source
			{
				source="Hit";
				hitpoint="Glass_59_hitpoint";
				raw=1;
			};
			class Glass_60_source
			{
				source="Hit";
				hitpoint="Glass_60_hitpoint";
				raw=1;
			};
			class Glass_61_source
			{
				source="Hit";
				hitpoint="Glass_61_hitpoint";
				raw=1;
			};
			class Glass_62_source
			{
				source="Hit";
				hitpoint="Glass_62_hitpoint";
				raw=1;
			};
		};
	};
};