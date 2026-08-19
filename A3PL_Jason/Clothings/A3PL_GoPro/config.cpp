class CfgPatches
{
	class A3PL_GoPro
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3PL_Cars"
		};
	};
};
class CfgWeapons
{
	class Binocular;
	class NVGoggles: Binocular
	{
		class ItemInfo;
	};
	class A3PL_GoPro: NVGoggles
	{
		author="Jason";
		displayName="GoPro HD Hero 4";
		descriptionShort="www.arma3fisherslife.net";
		model="A3PL_Jason\Clothings\A3PL_GoPro\A3PL_GoPro_Off.p3d";
		picture="\A3PL_Jason\Clothings\A3PL_GoPro\data\GoProA3PL.paa";
		visionMode[]=
		{
			"Normal"
		};
		class Library
		{
			libTextDesc="$STR_LIB_NV_GOGGLES";
		};
		class ItemInfo: ItemInfo
		{
			type=616;
			hmdType=16;
			uniformModel="A3PL_Jason\Clothings\A3PL_GoPro\A3PL_GoPro_Off.p3d";
			modelOff="\A3PL_Jason\Clothings\A3PL_GoPro\A3PL_GoPro_Off.p3d";
			mass=2;
		};
	};
};
