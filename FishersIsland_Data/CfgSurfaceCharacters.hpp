class CfgSurfaceCharacters {
	class KlWeatheredTarmac {
		probability[] = { 0.050000001, 0.1 };
		names[] = {
			"c_GrassSmallConc",
			"c_GrassTinyConc"
		};
	};
	class KLSoil {
		probability[] = { 0.050000001, 0.2 };
		names[] = {
			"c_GrassSmallConc",
			"c_GrassTinyConc"
		};
	};
	class KLForestCon {
		probability[] = { 0.32499999, 0.098750003, 0.072499998, 0.12, 0.029999999, 0.1, 0.050000001, 0.2, 0.0024999999, 0.00125 };
		names[] = {
			"Vaccinium",
			"Fern",
			"FernTall",
			"c_branches_picea",
			"c_branchesBig_picea",
			"c_GrassSmall",
			"c_Pines",
			"c_Cones",
			"c_fern_boletus_group",
			"c_fern_amanita_single"
		};
	};
	class KLForestDec {
		probability[] = { 0.14, 0.14, 0.175, 0.175, 0.1, 0.02, 0.079999998, 0.02, 0.1 };
		names[] = {
			"c_leaves_dead",
			"c_leaves_dead_half",
			"c_plantsSmall1",
			"c_plantsSmall2",
			"c_GrassTiny",
			"c_beech_big",
			"c_beech_small",
			"c_beech_mid",
			"c_branches_deciduous"
		};
	};
	class KLField {
		probability[] = { 0.80000001, 0.2 };
		names[] = {
			"Weat",
			"WeatTall"
		};
	};
	class KLStubble {
		probability[] = { 0.94999999, 0.025, 0.025 };
		names[] = {
			"Stubble",
			"c_GrassSmallConc",
			"c_GrassTinyConc"
		};
	};
	class KLGrass1 {
		probability[] = { 0.14, 0.029999999, 0.050000001, 0.12, 0.2, 0.33000001, 0.050000001, 0.050000001, 0.029999999 };
		names[] = {
			"c_Grass",
			"c_GrassPlant1",
			"c_GrassPlant2",
			"c_GrassTall2",
			"c_GrassTall3",
			"c_GrassLow",
			"c_GrassAnthoxanthum",
			"c_GrassAnthoxanthum_bended",
			"c_Grass_flower1"
		};
	};
	class KLGrass2 {
		probability[] = { 0.11, 0.22499999, 0.25, 0.17, 0.029999999, 0.175, 0.039999999 };
		names[] = {
			"c_GrassDry",
			"c_GrassDryTall",
			"c_GrassDryTall2",
			"c_GrassDryHypericum",
			"c_GrassDryCarduus_f",
			"c_GrassDryTall3",
			"c_GrassDryPlant1"
		};
	};
};