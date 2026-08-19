class CfgPatches {

	class A3FL_Accessories {
		author = "Carter Reddington";
		name = "Arma3FishersLife Beards";
		url = "https://arma3fisherslife.net";
		units = {"A3FL_Beard1_Black", "A3FL_Beard1_Blonde", "A3FL_Beard1_Brown", "A3FL_Beard1_White", "A3FL_Beard2_Black", "A3FL_Beard2_Blonde", "A3FL_Beard2_Brown", "A3FL_Beard2_White", "A3FL_Beard3_Black", "A3FL_Beard3_Blonde", "A3FL_Beard3_Brown", "A3FL_Beard3_White", "A3FL_Beard4_Black", "A3FL_Beard4_Blonde", "A3FL_Beard4_Brown", "A3FL_Beard4_White", "A3FL_Beard5_Black", "A3FL_Beard5_Blonde", "A3FL_Beard5_Brown", "A3FL_Beard5_White", "A3FL_Hair1_Black", "A3FL_Hair1_Blonde", "A3FL_Hair1_Brown", "A3FL_Hair1_White", "A3FL_Hair2_Black", "A3FL_Hair2_Blonde", "A3FL_Hair2_Brown", "A3FL_Hair2_White", "A3FL_Hair3_Blonde", "A3FL_Hair3_Brown", "A3FL_Hair5_Dreads" };
		weapons = {};
		requiredVersion = 0.1; 
        requiredAddons[] = {"A3_Data_F"};
	};
};

class CfgWeapons {
	class Binocular;
	class NVGoggles: Binocular {
	    class ItemInfo;
	};

	class A3FL_Beard1_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard Black";
		descriptionUse = "A3FL Beard1 Black";
		model = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			modelOff = "A3FL_Accessories\Hair\beard1\beard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard1_Blonde: A3FL_Beard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard Blonde";
		descriptionUse = "A3FL Beard1 Blonde";
		model = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard1_Brown: A3FL_Beard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard Brown";
		descriptionUse = "A3FL Beard1 Brown";
		model = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard1_White: A3FL_Beard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard White";
		descriptionUse = "A3FL Beard1 White";
		model = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard1\beard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard2_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short Black";
		descriptionUse = "A3FL Beard2 Black";
		model = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			modelOff = "A3FL_Accessories\Hair\beard2\beard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard2_Blonde: A3FL_Beard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short Blonde";
		descriptionUse = "A3FL Beard2 Blonde";
		model = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard2_Brown: A3FL_Beard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short Brown";
		descriptionUse = "A3FL Beard2 Brown";
		model = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard2_White: A3FL_Beard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short White";
		descriptionUse = "A3FL Beard2 White";
		model = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard2\beard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard3_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long Black";
		descriptionUse = "A3FL Beard3 Black";
		model = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			modelOff = "A3FL_Accessories\Hair\beard3\beard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard3_Blonde: A3FL_Beard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long Blonde";
		descriptionUse = "A3FL Beard3 Blonde";
		model = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard3_Brown: A3FL_Beard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long Brown";
		descriptionUse = "A3FL Beard3 Brown";
		model = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard3_White: A3FL_Beard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long White";
		descriptionUse = "A3FL Beard3 White";
		model = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\beard3\beard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard4_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard Black";
		descriptionUse = "A3FL Beard4 Black";
		model = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
			modelOff = "A3FL_Accessories\Hair\beard4\beard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard4_Blonde: A3FL_Beard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard Blonde";
		descriptionUse = "A3FL Beard4 Blonde";
		model = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
			modelOff = "A3FL_Accessories\Hair\beard4\beard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard4_Brown: A3FL_Beard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard Brown";
		descriptionUse = "A3FL Beard4 Brown";
		model = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
			modelOff = "A3FL_Accessories\Hair\beard4\beard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard4_White: A3FL_Beard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard White";
		descriptionUse = "A3FL Beard4 White";
		model = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard4\beard4.p3d";
			modelOff = "A3FL_Accessories\Hair\beard4\beard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard5_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard Black";
		descriptionUse = "A3FL Beard5 Black";
		model = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
			modelOff = "A3FL_Accessories\Hair\beard5\beard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard5_Blonde: A3FL_Beard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard Blonde";
		descriptionUse = "A3FL Beard5 Blonde";
		model = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
			modelOff = "A3FL_Accessories\Hair\beard5\beard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard5_Brown: A3FL_Beard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard Brown";
		descriptionUse = "A3FL Beard5 Brown";
		model = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
			modelOff = "A3FL_Accessories\Hair\beard5\beard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Beard5_White: A3FL_Beard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard White";
		descriptionUse = "A3FL Beard5 White";
		model = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\beard5\beard5.p3d";
			modelOff = "A3FL_Accessories\Hair\beard5\beard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair1_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Man Bun Black";
		descriptionUse = "A3FL Hair1 Black";
		model = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair1_Blonde: A3FL_Hair1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair1 Blonde";
		model = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair1_Brown: A3FL_Hair1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair1 Brown";
		model = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair1_White: A3FL_Hair1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Man Bun White";
		descriptionUse = "A3FL Hair1 White";
		model = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair1\hair1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair2_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Mohawk Black";
		descriptionUse = "A3FL Hair2 Black";
		model = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair2_Blonde: A3FL_Hair2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Mohawk Blonde";
		descriptionUse = "A3FL Hair2 Blonde";
		model = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair2_Brown: A3FL_Hair2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Mohawk Brown";
		descriptionUse = "A3FL Hair2 Brown";
		model = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair2_White: A3FL_Hair2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Mohawk White";
		descriptionUse = "A3FL Hair2 White";
		model = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair2\hair2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair3_Blonde: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Womens Wig Blonde";
		descriptionUse = "A3FL Hair3 Blonde";
		model = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Blonde2.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair3_Brown: A3FL_Hair3_Blonde {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Womens Wig Brown";
		descriptionUse = "A3FL Hair3 Brown";
		model = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown2.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair3\hair3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Hair5_Dreads: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Dreadlocks";
		descriptionUse = "A3FL Hair5 Dreads";
		model = "\A3FL_Accessories\Hair\hair5\hair5.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Dreads.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hair5\hair5.p3d";
			modelOff = "\A3FL_Accessories\Hair\hair5\hair5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache1_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Handlebar Mustache Black";
		descriptionUse = "A3FL mustache1 Black";
		model = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL mustache Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			modelOff = "A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache1_Blonde: A3FL_mustache1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Handlebar Mustache Blonde";
		descriptionUse = "A3FL mustache1 Blonde";
		model = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL mustache Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache1_Brown: A3FL_mustache1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Handlebar Mustache Brown";
		descriptionUse = "A3FL mustache1 Brown";
		model = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL mustache Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache1_White: A3FL_mustache1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Handlebar Mustache White";
		descriptionUse = "A3FL mustache1 White";
		model = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL mustache White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache1\mustache1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache2_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Bandito Mustache Black";
		descriptionUse = "A3FL mustache2 Black";
		model = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL mustache Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			modelOff = "A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache2_Blonde: A3FL_mustache2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Bandito Mustache Blonde";
		descriptionUse = "A3FL mustache2 Blonde";
		model = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL mustache Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache2_Brown: A3FL_mustache2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Bandito Mustache Brown";
		descriptionUse = "A3FL mustache2 Brown";
		model = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL mustache Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_mustache2_White: A3FL_mustache2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Bandito Mustache White";
		descriptionUse = "A3FL mustache2 White";
		model = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL mustache White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			modelOff = "\A3FL_Accessories\Hair\mustache2\mustache2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Chain1: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Gold Ak47 Chain";
		descriptionUse = "AK47 Chain1";
		model = "\A3FL_Accessories\Jewelry\chains\chain1\chain1.p3d";
		picture = "\A3FL_Accessories\data\icochain.paa";
		descriptionShort = "AK47 Chain1";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\Jewelry\chains\data\chain1.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Jewelry\chains\chain1\chain1.p3d";
			modelOff = "\A3FL_Accessories\Jewelry\chains\chain1\chain1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Nosering1: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Septum Piercing";
		descriptionUse = "A3FL Nosering1";
		model = "\A3FL_Accessories\Jewelry\rings\nosering1\nosering1.p3d";
		picture = "\A3FL_Accessories\data\icoseptum.paa";
		descriptionShort = "A3FL Nosering1";
		visionMode = {"Normal"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Jewelry\rings\nosering1\nosering1.p3d";
			modelOff = "\A3FL_Accessories\Jewelry\rings\nosering1\nosering1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Earing1: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Cross Earrings";
		descriptionUse = "A3FL Earing1";
		model = "\A3FL_Accessories\Jewelry\rings\earing1\earing1.p3d";
		picture = "\A3FL_Accessories\data\icoearing1.paa";
		descriptionShort = "A3FL Earing1";
		visionMode = {"Normal"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Jewelry\rings\earing1\earing1.p3d";
			modelOff = "\A3FL_Accessories\Jewelry\rings\earing1\earing1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Neck_Camera: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Camera Necklace";
		descriptionUse = "Camera Necklace";
		model = "\A3FL_Accessories\Misc\camera\camera.p3d";
		picture = "\A3FL_Accessories\data\icocamera.paa";
		descriptionShort = "Camera Necklace";
		visionMode = {"Normal"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\camera\camera.p3d";
			modelOff = "\A3FL_Accessories\Misc\camera\camera.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Airpods: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Fishers Airpods";
		descriptionUse = "Airpods";
		model = "\A3FL_Accessories\Misc\airpods\airpods.p3d";
		picture = "\A3FL_Accessories\data\icopods.paa";
		descriptionShort = "Airpods";
		visionMode = {"Normal"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\airpods\airpods.p3d";
			modelOff = "\A3FL_Accessories\Misc\airpods\airpods.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Earpiece: NVGoggles {
		scope = 2;
		author = "Winston";
		displayName = "Earpiece";
		descriptionUse = "Earpiece";
		model = "\A3FL_Accessories\Misc\earpiece\earpiece.p3d";
		picture = "\A3FL_Accessories\data\icopiece.paa";
		descriptionShort = "Earpiece";
		visionMode = {"Normal"};
		class ItemInfo: ItemInfo {
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\earpiece\earpiece.p3d";
			modelOff = "\A3FL_Accessories\Misc\earpiece\earpiece.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_Earpiece_Blk: A3FL_Earpiece {
		displayName = "Earpiece Black";
		descriptionUse = "Earpiece Black";
		model = "\A3FL_Accessories\Misc\earpiece\earpiece_blk.p3d";
		class ItemInfo: ItemInfo {
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\earpiece\earpiece_blk.p3d";
			modelOff = "\A3FL_Accessories\Misc\earpiece\earpiece_blk.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard1_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Hipster Man Bun Black";
		descriptionUse = "A3FL Hair Beard1 Black";
		model = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard1_Blonde: A3FL_HairBeard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair Beard1 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard1_Brown: A3FL_HairBeard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair Beard1 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard1_White: A3FL_HairBeard1_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Hipster Man Bun White";
		descriptionUse = "A3FL Hair Beard1 White";
		model = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard1\hairbeard1.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard2_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Hipster Man Bun Black";
		descriptionUse = "A3FL Hair Beard2 Black";
		model = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard2_Blonde: A3FL_HairBeard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair Beard2 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard2_Brown: A3FL_HairBeard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair Beard2 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard2_White: A3FL_HairBeard2_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Hipster Man Bun White";
		descriptionUse = "A3FL Hair Beard2 White";
		model = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard2\hairbeard2.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard3_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Hipster Man Bun Black";
		descriptionUse = "A3FL Hair Beard3 Black";
		model = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			modelOff = "A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard3_Blonde: A3FL_HairBeard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair Beard3 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard3_Brown: A3FL_HairBeard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair Beard3 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard3_White: A3FL_HairBeard3_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Hipster Man Bun White";
		descriptionUse = "A3FL Hair Beard3 White";
		model = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard3\hairbeard3.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard4_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Hipster Man Bun Black";
		descriptionUse = "A3FL Hair Beard4 Black";
		model = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard4_Blonde: A3FL_HairBeard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair Beard4 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard4_Brown: A3FL_HairBeard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair Beard4 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard4_White: A3FL_HairBeard4_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Hipster Man Bun White";
		descriptionUse = "A3FL Hair Beard4 White";
		model = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard4\hairbeard4.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard5_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Hipster Man Bun Black";
		descriptionUse = "A3FL Hair Beard5 Black";
		model = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard5_Blonde: A3FL_HairBeard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Hipster Man Bun Blonde";
		descriptionUse = "A3FL Hair Beard5 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard5_Brown: A3FL_HairBeard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Hipster Man Bun Brown";
		descriptionUse = "A3FL Hair Beard5 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard5_White: A3FL_HairBeard5_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Hipster Man Bun White";
		descriptionUse = "A3FL Hair Beard5 White";
		model = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard5\hairbeard5.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard6_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Mohawk Black";
		descriptionUse = "A3FL Hair Beard6 Black";
		model = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard6_Blonde: A3FL_HairBeard6_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Mohawk Blonde";
		descriptionUse = "A3FL Hair Beard6 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard6_Brown: A3FL_HairBeard6_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Mohawk Brown";
		descriptionUse = "A3FL Hair Beard6 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard6_White: A3FL_HairBeard6_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Garibaldi Beard w/ Mohawk White";
		descriptionUse = "A3FL Hair Beard6 White";
		model = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard6\hairbeard6.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard7_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Mohawk Black";
		descriptionUse = "A3FL Hair Beard7 Black";
		model = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard7_Blonde: A3FL_HairBeard7_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Mohawk Blonde";
		descriptionUse = "A3FL Hair Beard7 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard7_Brown: A3FL_HairBeard7_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Mohawk Brown";
		descriptionUse = "A3FL Hair Beard7 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard7_White: A3FL_HairBeard7_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Short w/ Mohawk White";
		descriptionUse = "A3FL Hair Beard7 White";
		model = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard7\hairbeard7.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard8_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Mohawk Black";
		descriptionUse = "A3FL Hair Beard8 Black";
		model = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			modelOff = "A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard8_Blonde: A3FL_HairBeard8_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Mohawk Blonde";
		descriptionUse = "A3FL Hair Beard8 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard8_Brown: A3FL_HairBeard8_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Mohawk Brown";
		descriptionUse = "A3FL Hair Beard8 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard8_White: A3FL_HairBeard8_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Goatee Long w/ Mohawk White";
		descriptionUse = "A3FL Hair Beard8 White";
		model = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard8\hairbeard8.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard9_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Mohawk Black";
		descriptionUse = "A3FL Hair Beard9 Black";
		model = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard9_Blonde: A3FL_HairBeard9_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Mohawk Blonde";
		descriptionUse = "A3FL Hair Beard9 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard9_Brown: A3FL_HairBeard9_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Mohawk Brown";
		descriptionUse = "A3FL Hair Beard9 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard9_White: A3FL_HairBeard9_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Hipster Beard w/ Mohawk White";
		descriptionUse = "A3FL Hair Beard9 White";
		model = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard9\hairbeard9.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard10_Black: NVGoggles {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Mohawk Black";
		descriptionUse = "A3FL Hair Beard10 Black";
		model = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
		picture = "\A3FL_Accessories\data\icoblack.paa";
		descriptionShort = "A3FL Hair Beard Black";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard10_Blonde: A3FL_HairBeard10_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Mohawk Blonde";
		descriptionUse = "A3FL Hair Beard10 Blonde";
		model = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
		picture = "\A3FL_Accessories\data\icoblonde.paa";
		descriptionShort = "A3FL Hair Beard Blonde";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[]= {"A3FL_Accessories\data\Blonde.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard10_Brown: A3FL_HairBeard10_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Mohawk Brown";
		descriptionUse = "A3FL Hair Beard10 Brown";
		model = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
		picture = "\A3FL_Accessories\data\icobrown.paa";
		descriptionShort = "A3FL Hair Beard Brown";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\Brown.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_HairBeard10_White: A3FL_HairBeard10_Black {
		scope = 2;
		author = "Carter Reddington";
		displayName = "Lumberjack Beard w/ Mohawk White";
		descriptionUse = "A3FL Hair Beard10 White";
		model = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
		picture = "\A3FL_Accessories\data\icowhite.paa";
		descriptionShort = "A3FL Hair Beard White";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\data\White.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			modelOff = "\A3FL_Accessories\Hair\hairbeard10\hairbeard10.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_CovidMask_Blue: NVGoggles {
		scope = 2;
		author = "Andrew Axel";
		displayName = "Blue Covid Mask";
		descriptionUse = "A3FL Blue Covid Mask";
		model = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		descriptionShort = "A3FL Blue Covid Mask";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\Misc\covidmask\data\blue.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
			modelOff = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
			mass = 0.100000;
		};
	};
	class A3FL_CovidMask_Black: A3FL_CovidMask_Blue {
		scope = 2;
		author = "Andrew Axel";
		displayName = "Blue Covid Mask";
		descriptionUse = "A3FL Black Covid Mask";
		model = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		descriptionShort = "A3FL Blue Covid Mask";
		visionMode = {"Normal"};
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"A3FL_Accessories\Misc\covidmask\data\black.paa"};

		class ItemInfo: ItemInfo {
			hiddenSelections[] = {"Camo"};
			type = 616;
			hmdType = 16;
			uniformModel = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
			modelOff = "\A3FL_Accessories\Misc\covidmask\A3FL_CovidMask.p3d";
			mass = 0.100000;
		};
	};
};
