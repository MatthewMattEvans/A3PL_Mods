class CfgPatches
{
	class cnd_grainbin_large
	{
		requiredAddons[]=
		{
			"A3_Structures_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"Land_grainbin_large"
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	class Ruins;
	class NonStrategic;
	class HouseBase;
	class House: HouseBase
	{
		class DestructionEffects;
	};
	class Land_grainbin_large_ruins: Ruins
	{
		scope=1;
		displayname="Grain Bin Large Ruins";
		model="\A3\Structures_F\Ind\DieselPowerPlant\dp_bigTank_ruins_F.p3d";
		editorcategory="sturctures_usa";
		editorSubcategory="ruins";
		keepHorizontalPlacement=1;
		icon="iconObject_Circle";
	};
	class Land_grainbin_large: House
	{
		scope=2;
		model="ProjectAmerica\rural\grainbin_large\grainbin_large.p3d";
		displayName="Grain Bin Large";
		picture="pictureStaticObject";
		icon="iconObject_Circle";
		mapSize=20;
		destrType="DestructBuilding";
		editorcategory="sturctures_usa";
		editorSubcategory="rural";
		armor=180;
		keepHorizontalPlacement=1;
		class DestructionEffects: DestructionEffects
		{
			class Ruin137456331932
			{
				simulation="ruin";
				type="\A3\Structures_F\Ind\DieselPowerPlant\dp_bigTank_ruins_F.p3d";
				position="";
				intensity=1;
				interval=1;
				lifeTime=1;
			};
		};
		class SimpleObject
		{
			eden=1;
			animate[]={};
			hide[]={};
			verticalOffset=0;
			verticalOffsetWorld=0;
			init="''";
		};
	};
};
