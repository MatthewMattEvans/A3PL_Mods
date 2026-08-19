class CfgPatches {
    class A3FL_Resources {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[] = {"A3PL_Houses"};
    };
};
class CfgVehicles {
    class All;
    class ThingX;
    class A3PL_Houses;
    class A3FL_Resources: ThingX {
        displayName = "A3FL_Resources";
        vehicleclass = "A3FL_Resources";
        model = "";
        scope = 1;
        scopeCurator = 0;
        scopeArsenal = 2;
        author = "Nick";
        placement = "vertical";
        armor = 999999;
        picture = "\A3PL_Characters\A3PL_Logo.paa";
    };
    /////////////////////////////////////////////////////////////////////////Small Ores///////////////////////////////////////////////////////////////////////////////
    class A3PL_Resource_Ore_Coal_Small: A3FL_Resources {
        model = "\A3FL_Resources\A3PL_ore_alt_small.p3d";
        displayName = "Coal Ore Small";
        hiddenSelections[] = {
            "camo",
            "mat"
        };
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_coal_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_coal.rvmat"
        };
    };
    class A3PL_Resource_Ore_Iron_Small: A3PL_Resource_Ore_Coal_Small {
        displayName = "Iron Ore Small";
        model = "\A3FL_Resources\A3PL_ore_main_small.p3d";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_iron_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_iron.rvmat"
        };
    };
    class A3PL_Resource_Ore_Suphur_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Sulphur Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_sulphur_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_sulphur.rvmat"
        };
    };
    class A3PL_Resource_Ore_Bauxite_Small: A3PL_Resource_Ore_Coal_Small {
        displayName = "Bauxite (Aluminium Ore)";
        model = "\A3FL_Resources\A3PL_ore_third_small.p3d";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_bauxite_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_bauxite.rvmat"
        };
    };
    class A3PL_Resource_Ore_Sapphire_Small: A3PL_Resource_Ore_Bauxite_Small {
        displayName = "Sapphire Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_sapphire_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_sapphire.rvmat"
        };
    };
    class A3PL_Resource_Ore_Gold_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Gold Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_gold_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_gold.rvmat"
        };
    };
    class A3PL_Resource_Ore_Amethyst_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Amethyst Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_amethyst_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_amethyst.rvmat"
        };
    };
    class A3PL_Resource_Ore_Vivianite_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Vivianite Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_vivianite_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_vivianite.rvmat"
        };
    };
    class A3PL_Resource_Ore_Emerald_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Emerald Ore Small";
        hiddenSelectionsTextures[] = {
        	"\A3FL_Resources\data\ores\ore_emerald_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"\A3FL_Resources\data\ores\ore_emerald.rvmat"
        };
    };
    class A3PL_Resource_Ore_Titanium_Small: A3PL_Resource_Ore_Iron_Small {
        displayName = "Emerald Ore Small";
        hiddenSelectionsTextures[] = {
            "\A3FL_Resources\data\ores\ore_titanium_co.paa"
        };
        hiddenSelectionsMaterials[] = {
            "",
            "\A3FL_Resources\data\ores\ore_titanium.rvmat"
        };
    };
    /////////////////////////////////////////////////////////////////////////Ores///////////////////////////////////////////////////////////////////////////////
    class A3PL_Resource_Ore_Coal: A3PL_Houses {
        model = "\A3FL_Resources\A3PL_ore_alt";
        displayName = "Coal Ore";
        hiddenSelections[] = {
            "camo",
            "camo1",
            "mat"
        };
        armor = 1000;
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0,0,0,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_coal_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_coal.rvmat"
        };
        class AnimationSources {
            class HitPickAxe {
                source = "Hit";
                hitpoint = "HitPickAxe";
                raw = 1;
            };
            class HitShovel: HitPickAxe {
                hitpoint = "HitShovel";
            };
        };
        class HitPoints {
            class HitPickAxe //60 Hits
            {
                name = "HitPickAxe";
                armor = 0.048;
                material = -1;
                passThrough = 0;
                explosionShielding = 4;
                radius = 0.25;
                visual = "";
            };
            class HitShovel: HitPickAxe {
                name = "HitShovel";
                armor = 0.012;
            }; //30 Hits
        };
    };
    class A3PL_Resource_Ore_Iron: A3PL_Resource_Ore_Coal {
        displayName = "Iron Ore";
        model = "\A3FL_Resources\A3PL_ore_main";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0.976471,0.690196,0.541176,1.0,co)",
            "\A3FL_Resources\data\ores\ore_iron_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_iron.rvmat"
        };
    };
    class A3PL_Resource_Ore_Sulphur: A3PL_Resource_Ore_Iron {
        displayName = "Sulphur Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(1,1,0,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_sulphur_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_sulphur.rvmat"
        };
    };
    class A3PL_Resource_Ore_Bauxite: A3PL_Resource_Ore_Coal {
        displayName = "Bauxite (Aluminium Ore)";
        model = "\A3FL_Resources\A3PL_ore_third";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(1,0.501961,0,1.0,co)",
            "\A3FL_Resources\data\ores\ore_bauxite_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_bauxite.rvmat"
        };
    };
    class A3PL_Resource_Ore_Sapphire: A3PL_Resource_Ore_Bauxite {
        displayName = "Sapphire Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0,0,1,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_sapphire_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_sapphire.rvmat"
        };
    };
    class A3PL_Resource_Ore_Gold: A3PL_Resource_Ore_Iron {
        displayName = "Gold Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0.831,0.686,0.216,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_gold_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_gold.rvmat"
        };
    };
    class A3PL_Resource_Ore_Amethyst: A3PL_Resource_Ore_Iron {
        displayName = "Amethyst Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0.486,0.043,0.576,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_amethyst_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_amethyst.rvmat"
        };
    };
    class A3PL_Resource_Ore_Vivianite: A3PL_Resource_Ore_Iron {
        displayName = "Vivianite Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0.220,0.373,0.067,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_vivianite_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_vivianite.rvmat"
        };
    };
    class A3PL_Resource_Ore_Emerald: A3PL_Resource_Ore_Iron {
        displayName = "Emerald Ore";
        hiddenSelectionsTextures[] = {
            "#(argb,8,8,3)color(0.016,1.000,0.000,1.0,CO)",
            "\A3FL_Resources\data\ores\ore_emerald_co.paa"
        };
        hiddenSelectionsMaterials[] = {
        	"",
        	"",
        	"\A3FL_Resources\data\ores\ore_emerald.rvmat"
        };
    };
    /////////////////////////////////////////////////////////////////////////Ingots///////////////////////////////////////////////////////////////////////////////
    class A3PL_Ingot_Coal: A3FL_Resources {
        displayName = "Coal Ingot";
        model = "\A3FL_Resources\A3PL_Ingot";
        hiddenSelections[] = {"ingot"};
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_coal.paa"
        };
    };
    class A3PL_Ingot_Titanium: A3PL_Ingot_Coal {
        displayName = "Titanium Ingot";
        hiddenSelectionsTextures[] = {
        	"#(argb,8,8,3)color(0.0392157,0.0392157,0.0392157,1.0,co)"
        };
    };
	class A3PL_Ingot_Aluminium: A3PL_Ingot_Coal {
        displayName = "Aluminium Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_aluminum.paa"
        };
    };
	class A3PL_Ingot_Iron: A3PL_Ingot_Coal {
        displayName = "Iron Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_iron.paa"
        };
    };
	class A3PL_Ingot_Gold: A3PL_Ingot_Coal {
        displayName = "Gold Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_gold.paa"
        };
    };
    class A3PL_Ingot_Sapphire: A3PL_Ingot_Coal {
        displayName = "Sapphire Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_sapphire.paa"
        };
    };
    class A3PL_Ingot_Vivianite: A3PL_Ingot_Coal {
        displayName = "Vivianite Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_vivianite.paa"
        };
    };
    class A3PL_Ingot_Emerald: A3PL_Ingot_Coal {
        displayName = "Emerald Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_emerald.paa"
        };
    };
    class A3PL_Ingot_Amethyst: A3PL_Ingot_Coal {
        displayName = "Amethyst Ingot";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_amethyst.paa"
        };
    };
    /////////////////////////////////////////////////////////////////////////Standard Pallets///////////////////////////////////////////////////////////////////////////////
    class A3PL_Pallet_Steel : A3PL_Ingot_Coal {
		displayName = "Steel Pallet";
		hiddenSelections[] = {"pallettex"};
		model = "A3FL_Resources\A3PL_Pallet.p3d";
		hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Steel.paa"
        };
	};
    class A3PL_Pallet_Titanium: A3PL_Pallet_Steel {
        displayName = "Titanium Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Titanium.paa"
        };
    };
	class A3PL_Pallet_Aluminium: A3PL_Pallet_Steel {
        displayName = "Aluminium Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Aluminium.paa"
        };
    };
    /////////////////////////////////////////////////////////////////////////Ingot Pallets///////////////////////////////////////////////////////////////////////////////
    class A3PL_Ingot_Pallet_Coal: A3PL_Pallet_Steel {
        displayName = "Coal Ingot Pallet";
        model = "\A3FL_Resources\A3PL_Ingot_Pallet.p3d"; //38 Ingots
        hiddenSelections[] = {"ingotpallet"};
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_coal.paa"
        };
    };
    class A3PL_Ingot_Pallet_Titanium: A3PL_Ingot_Pallet_Coal {
        displayName = "Titanium Ingot Pallet";
        hiddenSelectionsTextures[] = {
        	"#(argb,8,8,3)color(0.0392157,0.0392157,0.0392157,1.0,co)"
        };
    };    
    class A3PL_Ingot_Pallet_Aluminium: A3PL_Ingot_Pallet_Coal {
        displayName = "Aluminium Ingot Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_aluminum.paa"
        };
    };
    class A3PL_Ingot_Pallet_Iron: A3PL_Ingot_Pallet_Coal {
        displayName = "Iron Ingot Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_iron.paa"
        };
    };
    class A3PL_Ingot_Pallet_Sapphire: A3PL_Ingot_Pallet_Coal {
        displayName = "Iron Sapphire Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_sapphire.paa"
        };
    };
    class A3PL_Ingot_Pallet_Emerald: A3PL_Ingot_Pallet_Coal {
        displayName = "Iron Emerald Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_emerald.paa"
        };
    };
    class A3PL_Ingot_Pallet_Vivianite: A3PL_Ingot_Pallet_Coal {
        displayName = "Iron Vivianite Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_vivianite.paa"
        };
    };
    class A3PL_Ingot_Pallet_Gold: A3PL_Ingot_Pallet_Coal {
        displayName = "Gold Ingot Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_gold.paa"
        };
    };
    class A3PL_Ingot_Pallet_Amethyst: A3PL_Ingot_Pallet_Coal {
        displayName = "Amethyst Ingot Pallet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\ingot_amethyst.paa"
        };
    };
    /////////////////////////////////////////////////////////////////////////Sheets///////////////////////////////////////////////////////////////////////////////
    class A3PL_Steel: A3PL_Ingot_Pallet_Coal
	{
		displayName = "Steel";
		model = "\A3FL_Resources\A3PL_Metal_Sheet.p3d";
		hiddenSelections[] = {"sheet"};
		hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Steel.paa"
        };
	};
    class A3PL_Titanium: A3PL_Steel {
        displayName = "Titanium";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Titanium.paa"
        };
    };
    class A3PL_Aluminium: A3PL_Steel {
        displayName = "Aluminum";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Aluminium.paa"
        };
    };
    class A3PL_Sheet_Gold: A3PL_Steel {
        displayName = "Gold Sheet";
        hiddenSelectionsTextures[] = {
        	"A3FL_Resources\data\Sheet_Gold.paa"
        };
    };
    
    
};
class CfgVehicleClasses {
    class A3FL_Resources {
        displayName = "A3FL Resources";
    };
};
