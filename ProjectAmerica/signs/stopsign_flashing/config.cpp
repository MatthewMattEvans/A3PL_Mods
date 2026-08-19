class CfgPatches
{
	class cnd_pa_ssflashing
	{
		name="Project America Stop Sign Flashing";
		author="Country Doggo";
		units[]=
		{
			"Land_stopsign_flashing"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
	};
};
class CfgVehicles
{
	class Building;
	class Lamps_base_F;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class NonStrategic;
	class ThingX;
	class Wall_F;
	class Wall;
	class Items_base_F;
	class Static;
	class Ruins_F;
	class All;
	class Ruins;
	class Land_stopsign_flashing: Static
	{
		mapSize=1;
		picture="pictureStaticObject";
		class SimpleObject
		{
			eden=0;
			animate[]=
			{
				
				{
					"light_on",
					0
				}
			};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		scope=2;
		displayName="Stop Sign Flashing";
		model="ProjectAmerica\signs\stopsign_flashing\stopsign_flashing.p3d";
		icon="iconObject_10x1";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
		class AnimationSources
		{
			class light_on_source
			{
				source="::time";
				initPhase=0;
				animPeriod=5;
			};
		};
	};
};
