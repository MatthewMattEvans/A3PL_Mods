class CfgPatches
{
	class G506_SussyBakaChain
	{
		units[]={};
		weapons[]={};
		requiredVersion=1;
		requiredAddons[]={
			"A3_Characters_F",
			"A3_Weapons_F"
		};
	};
};

class CfgWeapons {
	class Default;
	class Binocular: Default
	{
		class Library;
		class WeaponSlotsInfo;
	};
	class Rangefinder: Binocular
	{
		class Library;
		class WeaponSlotsInfo;
	};
	class NVGoggles: Binocular
	{
		class Library;
		class ItemInfo;
	};
	class G506_SussyBakaChain: NVGoggles
	{
		author="Gaming / 76561198123473506";
		scope=2;
		weaponPoolAvailable=1;
		visionMode[]={"Normal"};
		displayName="(Chain) Gold Sussy Baka";
		picture="\A3FL_G506_Characters\G506_Logo.paa";
		icon="\A3FL_G506_Characters\G506_Logo.paa";
		model="\A3FL_G506_Characters\SussyBaka\G506_SussyBakaChain";
		hiddenSelections[]={"camo","camo1","camo2"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3FL_G506_Characters\SussyBaka\G506_SussyBakaChain";
			modelOff="\A3FL_G506_Characters\SussyBaka\G506_SussyBakaChain";
			hiddenSelections[]={"camo","camo1","camo2"};
			hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		};
	};
	class G506_SussyBakaChain_Pink: G506_SussyBakaChain
	{
		displayName="(Chain) Pink Sussy Baka";
		hiddenSelections[]={"camo","camo1","camo2"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0,1,1,co)","#(argb,8,8,3)color(1,0,1,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo","camo1","camo2"};
			hiddenSelectionsTextures[]={"#(argb,8,8,3)color(1,0,1,1,co)","#(argb,8,8,3)color(1,0,1,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		};
	};
	class G506_SussyBakaChain_Blue: G506_SussyBakaChain
	{
		displayName="(Chain) Blue Sussy Baka";
		hiddenSelections[]={"camo","camo1","camo2"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,1,1,co)","#(argb,8,8,3)color(0,0,1,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo","camo1","camo2"};
			hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,1,1,co)","#(argb,8,8,3)color(0,0,1,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		};
	};
	class G506_SussyBakaChain_Copper: G506_SussyBakaChain
	{
		displayName="(Chain) Copper Sussy Baka";
		hiddenSelections[]={"camo","camo1","camo2"};
		hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
		hiddenSelectionsMaterials[]={"A3FL_G506_Characters\SussyBaka\Materials\JD_Copper.rvmat","A3FL_G506_Characters\SussyBaka\Materials\JD_Copper.rvmat","A3FL_G506_Characters\SussyBaka\Materials\JD_Silver.rvmat"};
		class ItemInfo: ItemInfo
		{
			hiddenSelections[]={"camo","camo1","camo2"};
			hiddenSelectionsTextures[]={"#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)","#(argb,8,8,3)color(0,0,0,1,co)"};
			hiddenSelectionsMaterials[]={"A3FL_G506_Characters\SussyBaka\Materials\JD_Copper.rvmat","A3FL_G506_Characters\SussyBaka\Materials\JD_Copper.rvmat","A3FL_G506_Characters\SussyBaka\Materials\JD_Silver.rvmat"};
		};
	};
};