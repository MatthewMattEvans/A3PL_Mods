class CfgPatches
{
	class A3PL_Matthew
	{
		name="A3PL_Matthew";
		author="Matthew";
		url="https://www.arma3projectlife.com";
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3PL_Cars",
			"A3PL_Objects",
			"A3FL_Objects"
		};
		requiredVersion=1.0;
	};
};

class CfgFunctions {
	class A3PL_Matthew_RichPresence {
		tag="A3PL_Matthew";
		class Scripts {
			file = "A3PL_Matthew\DiscordRichPresence";
			class init {preInit=1;};
			class 3den {};
			class update {};
		};
	};
};

class Cfg3DEN {
	class EventHandlers {
		class A3PL_Matthew_RichPresenceEVH {
			onTerrainNew="'onTerrainNew' call A3PL_Matthew_fnc_3den";
			onMissionPreviewEnd="'onMissionPreviewEnd' call A3PL_Matthew_fnc_3den";
			onMissionLoad="'onMissionLoad' call A3PL_Matthew_fnc_3den";
			onMissionNew="'onMissionNew' call A3PL_Matthew_fnc_3den";
			onMissionSave="'onMissionSave' call A3PL_Matthew_fnc_3den";
		};
	};
};

class CfgVehicles
{
	class Static;
	class ThingX;
	class A3FL_Objects;
	class Christmas_Whole_Tree: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Trees\objects\WholeTree.p3d";
	};
	class Christmas_Happy_Snowman: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Snowmans\objects\HappySnowman.p3d";
	};
	class Christmas_Clothed_Snowman_Hat: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Snowmans\objects\ClothesSnowman.p3d";
	};
	class Christmas_Small_Snowman: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Snowmans\objects\SmallSnowman.p3d";
	};
	class Christmas_Huge_Snowman: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Snowmans\objects\HugeSnowman.p3d";
	};
	class Christmas_Sled_Light: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Sleds_and_Sleighs\objects\SledLightBrown.p3d";
	};
	class Christmas_Sled_Red: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Sleds_and_Sleighs\objects\SledRedBrown.p3d";
	};
	class Christmas_Sleigh_Bench: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Sleds_and_Sleighs\objects\SleighBench.p3d";
	};
	class Christmas_Sleigh_Crates: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Sleds_and_Sleighs\objects\SleighCrates.p3d";
	};
	class Christmas_Reindeer_Light: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Reindeers\objects\ReindeerWoodLight.p3d";
	};
	class Christmas_Reindeer_Medium: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Reindeers\objects\ReindeerWoodMedium.p3d";
	};
	class Christmas_Reindeer_Dark: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Reindeers\objects\ReindeerWoodDark.p3d";
	};
	class Christmas_Reindeer_Red: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Reindeers\objects\ReindeerWoodRed.p3d";
	};
	class Christmas_Polar_Bear_Light: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Polar_Bears\objects\PolarBearLight.p3d";
	};
	class Christmas_Polar_Bear_Medium: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Polar_Bears\objects\PolarBearMedium.p3d";
	};
	class Christmas_Polar_Bear_Dark: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Polar_Bears\objects\PolarBearDark.p3d";
	};
	class Christmas_Polar_Bear_Red: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Polar_Bears\objects\PolarBearRed.p3d";
	};
	class Christmas_Penguin_Light: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Penguins\objects\PenguinLight.p3d";
	};
	class Christmas_Penguin_Medium: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Penguins\objects\PenguinMedium.p3d";
	};
	class Christmas_Penguin_Dark: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Penguins\objects\PenguinDark.p3d";
	};
	class Christmas_Penguin_Red: ThingX
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Penguins\objects\PenguinRed.p3d";
	};
	class Christmas_Gift_Small_Gifts: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftSmallGifts.p3d";
	};
	class Christmas_Gift_Small_Stars: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftSmallStars.p3d";
	};
	class Christmas_Gift_Small_Bells: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftSmallBells.p3d";
	};
	class Christmas_Gift_Medium_Pattern: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftMediumPattern.p3d";
	};
	class Christmas_Gift_Medium_Tree: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftMediumTree.p3d";
	};
	class Christmas_Gift_Medium_Wishes: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftMediumWishes.p3d";
	};
	class Christmas_Gift_Big_Gifts: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftBigGifts.p3d";
	};
	class Christmas_Gift_Big_Snowflakes: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftBigSnowflakes.p3d";
	};
	class Christmas_Gift_Big_Snowmen: Static
	{
		scope=1;
		model="\A3PL_Matthew\Christmas\Christmas_Gifts\objects\GiftBigSnowmen.p3d";
	};
	class A3PL_Garage_CarLift: Static
	{
        model = "\A3PL_Matthew\Garage_Lifter\A3PL_Garage_CarLift.p3d";
        displayName = "A3PL Garage Car Lift";
		scope = 1;
		scopeCurator = 0;
		scopeArsenal = 2;
		author = "A3PL Development Team";
		placement = "vertical";
		armor = 999999;
		picture = "\A3PL_Characters\A3PL_Logo.paa";
		class AnimationSources
		{
			class car_lift {
				source = "user";
				animPeriod = 8;
				initPhase = 0;
			};
		};
	};
	class A3PL_Garage_TruckLift: A3PL_Garage_CarLift
	{
        model = "\A3PL_Matthew\Garage_Lifter\A3PL_Garage_TruckLift.p3d";
        displayName = "A3PL Garage Truck Lift";
	};	
};
