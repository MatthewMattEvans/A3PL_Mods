class CfgPatches {
	class A3PL_Sthetoscope {
		units[]= {};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]= {"A3_Data_F","A3PL_Objects","A3PL_Cars"};
	};
};

class CfgWeapons {
	class Binocular;
	class NVGoggles: Binocular {
		class ItemInfo;
	};
	class A3PL_Sthetoscope: NVGoggles {
		scope = 2;
		author = "A3FL Development Team";
		displayName = "A3PL Sthetoscope";
		descriptionUse = "A3PL Sthetoscope";
		model = "\A3PL_Jason\Clothings\A3PL_Sthetoscope\A3PL_Sthetoscope";
		picture = "\A3PL_Jason\Clothings\A3PL_Sthetoscope\ui.paa";
		descriptionShort = "A3PL Sthetoscope";
		visionMode[] = {"Normal"};
		hiddenSelections[] = {};
		class ItemInfo: ItemInfo {
			hiddenSelections[] = {};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3PL_Jason\Clothings\A3PL_Sthetoscope\A3PL_Sthetoscope";
			modelOff = "\A3PL_Jason\Clothings\A3PL_Sthetoscope\A3PL_Sthetoscope";
			mass = 0.1;
		};
	};
};