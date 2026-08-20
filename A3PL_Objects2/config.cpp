#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3PL_Objects2
	{
		units[]={"Land_A3PL_hw_pumpkin_green","Land_A3PL_hw_pumpkin_orange","Land_A3PL_hw_pumpkin_red","Land_A3PL_hw_pumpkinhat_red","Land_A3PL_hw_pumpkinhat_orange","Land_A3PL_hw_pumpkinhat_green"};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Objects",
			"A3_Structures_F_Civ_Lamps",
			"A3PL_Characters",
			"A3PL_Weapons"
		};
	};
};
class CfgVehicles
{
	class A3PL_Houses;
	class A3PL_Objects;
	class Lamps_base_F;
	class A3PL_Camping_Light;
	class A3PL_Man_Base;
	class A3PL_hw_candybucket: A3PL_Objects
	{
		displayName="Candy bucket";
		model="\A3PL_Objects2\Halloween\A3PL_hw_candybucket.p3d";
	};
	class Land_A3PL_hw_AngelAttack: A3PL_Houses
	{
		displayName="A3PL Angel Attack";
		model="\A3PL_Objects2\Halloween\A3PL_hw_AngelAttack.p3d";
	};
	class Land_A3PL_hw_AngelIdle: A3PL_Houses
	{
		displayName="A3PL Angel Idle";
		model="\A3PL_Objects2\Halloween\A3PL_hw_AngelIdle.p3d";
	};
	class Land_A3PL_hw_AngelPoint: A3PL_Houses
	{
		displayName="A3PL Angel Point";
		model="\A3PL_Objects2\Halloween\A3PL_hw_AngelPoint.p3d";
	};
	class Land_A3PL_hw_house1: A3PL_Houses
	{
		displayName="A3PL Halloween House 1";
		model="\A3PL_Objects2\Halloween\A3PL_hw_house1.p3d";
	};
	class Land_A3PL_hw_house2: A3PL_Houses
	{
		displayName="A3PL Halloween House 2";
		model="\A3PL_Objects2\Halloween\A3PL_hw_house2.p3d";
	};
	class Land_A3PL_hw_house3: A3PL_Houses
	{
		displayName="A3PL Halloween House 3";
		model="\A3PL_Objects2\Halloween\A3PL_hw_house3.p3d";
	};
	class Land_A3PL_hw_house4: A3PL_Houses
	{
		displayName="A3PL Halloween House 4";
		model="\A3PL_Objects2\Halloween\A3PL_hw_house4.p3d";
	};
	class A3PL_hw_cauldron: A3PL_Objects
	{
		displayName="A3PL Couldron";
		model="\A3PL_Objects2\Halloween\A3PL_hw_cauldron.p3d";
	};
	class A3PL_hw_lantern: A3PL_Camping_Light
	{
		displayName="Lantern";
		model="\A3PL_Objects2\Halloween\A3PL_hw_lantern.p3d";
		waterResistanceCoef=0.5;
		class MarkerLights
		{
			class Light_1
			{
				color[]={1,0.498,0.093999997};
				ambient[]={0.0099999998,0.0049800002,0.00094};
				intensity=500;
				name="Light_1_pos";
				useFlare=1;
				flareSize=0.30000001;
				flareMaxDistance=150;
				activeLight=1;
				blinking=0;
				dayLight=0;
				drawLight=0;
				class Attenuation
				{
					start=0;
					constant=0;
					linear=1;
					quadratic=0.2;
					hardLimitStart=1;
					hardLimitEnd=15;
				};
			};
		};
	};
	class Land_A3PL_hw_skeletonCauldron: A3PL_Houses
	{
		displayName="A3PL Couldron w/ Skeleton";
		model="\A3PL_Objects2\Halloween\A3PL_hw_skeletonCauldron.p3d";
	};
	class Land_A3PL_Grave1: A3PL_Houses
	{
		displayName="A3PL Grave 1";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave1.p3d";
	};
	class Land_A3PL_Grave2: A3PL_Houses
	{
		displayName="A3PL Grave 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave2.p3d";
	};
	class Land_A3PL_Grave3: A3PL_Houses
	{
		displayName="A3PL Grave 3";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave3.p3d";
	};
	class Land_A3PL_Grave4: A3PL_Houses
	{
		displayName="A3PL Grave 4";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave4.p3d";
	};
	class Land_A3PL_Grave5: A3PL_Houses
	{
		displayName="A3PL Grave 5";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave5.p3d";
	};
	class Land_A3PL_Grave6: A3PL_Houses
	{
		displayName="A3PL Grave 6";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave6.p3d";
	};
	class Land_A3PL_Grave7: A3PL_Houses
	{
		displayName="A3PL Grave 7";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave7.p3d";
	};
	class Land_A3PL_Grave8: A3PL_Houses
	{
		displayName="A3PL Grave 8";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave8.p3d";
	};
	class Land_A3PL_Grave9: A3PL_Houses
	{
		displayName="A3PL Grave 9";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave9.p3d";
	};
	class Land_A3PL_Grave10: A3PL_Houses
	{
		displayName="A3PL Grave 10";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave10.p3d";
	};
	class Land_A3PL_Grave11: A3PL_Houses
	{
		displayName="A3PL Grave 11";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave11.p3d";
	};
	class Land_A3PL_Grave12: A3PL_Houses
	{
		displayName="A3PL Grave 12";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave12.p3d";
	};
	class Land_A3PL_Grave13: A3PL_Houses
	{
		displayName="A3PL Grave 13";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave13.p3d";
	};
	class Land_A3PL_Grave14: A3PL_Houses
	{
		displayName="A3PL Grave 14";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave14.p3d";
	};
	class Land_A3PL_Grave15: A3PL_Houses
	{
		displayName="A3PL Grave 15";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave15.p3d";
	};
	class Land_A3PL_Grave16: A3PL_Houses
	{
		displayName="A3PL Grave 16";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave16.p3d";
	};
	class Land_A3PL_Grave17: A3PL_Houses
	{
		displayName="A3PL Grave 17";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave17.p3d";
	};
	class Land_A3PL_Grave18: A3PL_Houses
	{
		displayName="A3PL Grave 18";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave18.p3d";
	};
	class Land_A3PL_Grave19: A3PL_Houses
	{
		displayName="A3PL Grave 19";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave19.p3d";
	};
	class Land_A3PL_Grave20: A3PL_Houses
	{
		displayName="A3PL Grave 20";
		model="\A3PL_Objects2\Cemetery\A3PL_Grave20.p3d";
	};
	class Land_A3PL_Tomb1: A3PL_Houses
	{
		displayName="A3PL Tomb 1";
		model="\A3PL_Objects2\Cemetery\A3PL_Tomb1.p3d";
	};
	class Land_A3PL_Tomb2: A3PL_Houses
	{
		displayName="A3PL Tomb 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Tomb2.p3d";
	};
	class Land_A3PL_Tomb3: A3PL_Houses
	{
		displayName="A3PL Tomb 3";
		model="\A3PL_Objects2\Cemetery\A3PL_Tomb3.p3d";
	};
	class Land_A3PL_Tomb4: A3PL_Houses
	{
		displayName="A3PL Tomb 4";
		model="\A3PL_Objects2\Cemetery\A3PL_Tomb4.p3d";
	};
	class Land_A3PL_Tomb5: A3PL_Houses
	{
		displayName="A3PL Tomb 5";
		model="\A3PL_Objects2\Cemetery\A3PL_Tomb5.p3d";
	};
	class Land_A3PL_Walls_Column: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Column";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Column.p3d";
	};
	class Land_A3PL_Walls_Gate: A3PL_Houses
	{
		displayName="A3PL Cemetery Gate";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Gate.p3d";
	};
	class Land_A3PL_Walls_Round: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Round";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Round.p3d";
	};
	class Land_A3PL_Walls_SectionLong: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Long";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionLong.p3d";
	};
	class Land_A3PL_Walls_SectionShort: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Short";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionShort.p3d";
	};
	class Land_A3PL_Walls_SectionLongCombined: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Long";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionLongCombined.p3d";
	};
	class Land_A3PL_Walls_SectionShortCombined: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Short";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionShortCombined.p3d";
	};
	class Land_A3PL_Walls_Column2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Column 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Column2.p3d";
	};
	class Land_A3PL_Walls_Gate2: A3PL_Houses
	{
		displayName="A3PL Cemetery Gate 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Gate2.p3d";
	};
	class Land_A3PL_Walls_Round2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Round 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_Round2.p3d";
	};
	class Land_A3PL_Walls_SectionLong2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Long 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionLong2.p3d";
	};
	class Land_A3PL_Walls_SectionShort2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Short 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionShort2.p3d";
	};
	class Land_A3PL_Walls_SectionLongCombined2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Long 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionLongCombined2.p3d";
	};
	class Land_A3PL_Walls_SectionShortCombined2: A3PL_Houses
	{
		displayName="A3PL Cemetery Walls Section Short 2";
		model="\A3PL_Objects2\Cemetery\A3PL_Walls_SectionShortCombined2.p3d";
	};
	class Land_A3PL_hw_pumpkin_green: Lamps_base_F
	{
		mapSize=1.38;
		author="A3PL";
		_generalMacro="Land_A3PL_hw_pumpkin_green";
		scope=1;
		scopeCurator=2;
		displayName="A3PL Halloween Pumpkin Green";
		destrType="DestructTree";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkin_green.p3d";
		armor=400;
		aggregateReflectors[]={};
		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=3;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
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
	class Land_A3PL_hw_pumpkin_orange: Land_A3PL_hw_pumpkin_green
	{
		displayName="A3PL Halloween Pumpkin Orange";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkin_orange.p3d";
	};
	class Land_A3PL_hw_pumpkin_red: Land_A3PL_hw_pumpkin_green
	{
		displayName="A3PL Halloween Pumpkin Red";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkin_red.p3d";
	};
	class Land_A3PL_hw_pumpkinhat_red: Land_A3PL_hw_pumpkin_green
	{
		displayName="A3PL Halloween Pumpkin Hat Red";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkinhat_red.p3d";
	};
	class Land_A3PL_hw_pumpkinhat_orange: Land_A3PL_hw_pumpkin_green
	{
		displayName="A3PL Halloween Pumpkin Hat Orange";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkinhat_orange.p3d";
	};
	class Land_A3PL_hw_pumpkinhat_green: Land_A3PL_hw_pumpkin_green
	{
		displayName="A3PL Halloween Pumpkin Hat Green";
		model="\A3PL_Objects2\Halloween\A3PL_hw_pumpkinhat_green.p3d";
	};
	class Land_A3PL_Birdfountain: A3PL_Houses
	{
		displayName="A3PL Bird Fountain";
		model="\A3PL_Objects2\Props\A3PL_BirdFountain.p3d";
	};
	class Land_A3PL_Fence: A3PL_Houses
	{
		displayName="A3PL Fence";
		model="\A3PL_Objects2\Props\A3PL_Fence.p3d";
	};
	class Land_A3PL_Fence_Half: A3PL_Houses
	{
		displayName="A3PL Fence Half";
		model="\A3PL_Objects2\Props\A3PL_Fence_Half.p3d";
	};
	class Land_A3PL_Fence_Column: A3PL_Houses
	{
		displayName="A3PL Fence";
		model="\A3PL_Objects2\Props\A3PL_Fence_Column.p3d";
	};
	class Land_A3PL_Fence2: A3PL_Houses
	{
		displayName="A3PL Fence 2";
		model="\A3PL_Objects2\Props\A3PL_Fence2.p3d";
	};
	class Land_A3PL_Fence2_Half: A3PL_Houses
	{
		displayName="A3PL Fence 2 Half";
		model="\A3PL_Objects2\Props\A3PL_Fence2_Half.p3d";
	};
	class Land_A3PL_Fence2_Column: A3PL_Houses
	{
		displayName="A3PL Fence Column 2";
		model="\A3PL_Objects2\Props\A3PL_Fence2_Column.p3d";
	};
	class Land_A3PL_Fence3: A3PL_Houses
	{
		displayName="A3PL Fence 3";
		model="\A3PL_Objects2\Props\A3PL_Fence3.p3d";
	};
	class Land_A3PL_Fence3_Half: A3PL_Houses
	{
		displayName="A3PL Fence 3 Half";
		model="\A3PL_Objects2\Props\A3PL_Fence3_Half.p3d";
	};
	class Land_A3PL_Fence3_Column: A3PL_Houses
	{
		displayName="A3PL Fence Column 3";
		model="\A3PL_Objects2\Props\A3PL_Fence3_Column.p3d";
	};
	class Land_A3PL_Fence4: A3PL_Houses
	{
		displayName="A3PL Fence 4";
		model="\A3PL_Objects2\Props\A3PL_Fence4.p3d";
	};
	class Land_A3PL_Fence4_Half: A3PL_Houses
	{
		displayName="A3PL Fence 4 Half";
		model="\A3PL_Objects2\Props\A3PL_Fence4_Half.p3d";
	};
	class Land_A3PL_Fence4_Column: A3PL_Houses
	{
		displayName="A3PL Fence Column 4";
		model="\A3PL_Objects2\Props\A3PL_Fence4_Column.p3d";
	};
	class Land_A3PL_Fountain_Big: A3PL_Houses
	{
		displayName="A3PL Fountain Big";
		model="\A3PL_Objects2\Props\A3PL_Fountain_Big.p3d";
	};
	class Land_A3PL_Fountain_Little: A3PL_Houses
	{
		displayName="A3PL Fountain Small";
		model="\A3PL_Objects2\Props\A3PL_Fountain_Little.p3d";
	};
	class Land_A3PL_Gate: A3PL_Houses
	{
		displayName="A3PL Gate";
		model="\A3PL_Objects2\Props\A3PL_Gate.p3d";
	};
	class Land_A3PL_Gate2: A3PL_Houses
	{
		displayName="A3PL Gate 2";
		model="\A3PL_Objects2\Props\A3PL_Gate2.p3d";
	};
	class Land_A3PL_Girlstatue: A3PL_Houses
	{
		displayName="A3PL Girlstatue";
		model="\A3PL_Objects2\Props\A3PL_GirlStatue.p3d";
	};
	class A3PL_Mapleleaves: A3PL_Houses
	{
		displayName="A3PL Mapleleaves";
		model="\A3PL_Objects2\Props\A3PL_Mapleleaves.p3d";
	};
	class Land_A3PL_StoneWalkway_Long: A3PL_Houses
	{
		displayName="A3PL Stone Walkway Long";
		model="\A3PL_Objects2\Props\A3PL_StoneWalkway_Long.p3d";
	};
	class Land_A3PL_StoneWalkway_Short: A3PL_Houses
	{
		displayName="A3PL Stone Walkway Short";
		model="\A3PL_Objects2\Props\A3PL_StoneWalkway_Short.p3d";
	};
	class Land_A3PL_Streetlamp: Lamps_base_F
	{
		mapSize=1.38;
		author="A3PL";
		_generalMacro="Land_A3PL_Streetlamp";
		scope=1;
		scopeCurator=2;
		displayName="A3PL Streetlamp";
		destrType="DestructTree";
		model="\A3PL_Objects2\Props\A3PL_Streetlamp.p3d";
		armor=400;
		aggregateReflectors[]={};
		class Reflectors
		{
			class Light_1
			{
				color[]={1000,650,400};
				ambient[]={10,6.5,4};
				intensity=5;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1_hitpoint";
				selection="Light_1_hide";
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
	class Land_A3PL_Woodencart: A3PL_Houses
	{
		displayName="A3PL Wooden Cart";
		model="\A3PL_Objects2\Props\A3PL_Woodencart.p3d";
	};
	class A3PL_Diamond: A3PL_Objects
	{
		displayName="A3PL Diamond";
		model="\A3PL_Objects2\Objects\A3PL_Diamond.p3d";
	};
	class A3PL_Diamond_Alex: A3PL_Objects
	{
		displayName="A3PL Diamond Alex";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Alex.p3d";
	};
	class A3PL_Diamond_Aqua: A3PL_Objects
	{
		displayName="A3PL Diamond Aqua";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Aqua.p3d";
	};
	class A3PL_Diamond_Emerald: A3PL_Objects
	{
		displayName="A3PL Diamond Emerald";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Emerald.p3d";
	};
	class A3PL_Diamond_Ruby: A3PL_Objects
	{
		displayName="A3PL Diamond Ruby";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Ruby.p3d";
	};
	class A3PL_Diamond_Sapphire: A3PL_Objects
	{
		displayName="A3PL Diamond Sapphire";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Sapphire.p3d";
	};
	class A3PL_Diamond_Tourmaline: A3PL_Objects
	{
		displayName="A3PL Diamond Tourmaline";
		model="\A3PL_Objects2\Objects\A3PL_Diamond_Tourmaline.p3d";
	};
};