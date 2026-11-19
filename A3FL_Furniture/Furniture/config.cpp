class CfgPatches {
    class A3FL_Objects_Furniture {
        units[] = {};
        weapons[] = {};
        requiredAddons[] = {
            "A3PL_Cars",
            "A3FL_Objects",
            "A3PL_Objects"
        };
        requiredVersion = 0.1;
    };
};
class cfgVehicles {
    class A3FL_Objects;
    class A3PL_AmmoBox_Base;
    class A3PL_Chair1: A3FL_Objects {
        _generalMacro = "A3PL_Chair1";
        model = "\A3FL_Furniture\furniture\A3PL_Chair1.p3d";
        displayName = "Chair";
    };
    class A3PL_Bed1: A3FL_Objects {
        _generalMacro = "A3PL_Bed1";
        model = "\A3FL_Furniture\furniture\A3PL_bed1.p3d";
        displayName = "Bed";
    };
    class A3PL_Bed2: A3FL_Objects {
        _generalMacro = "A3PL_Bed2";
        model = "\A3FL_Furniture\furniture\A3PL_bed2.p3d";
        displayName = "Bed";
    };
    class A3PL_Cabinet1: A3FL_Objects {
        _generalMacro = "A3PL_Cabinet1";
        model = "\A3FL_Furniture\furniture\A3PL_Cabinet1.p3d";
        displayName = "Cabinet";
    };
    class A3PL_Cabinet2: A3FL_Objects {
        _generalMacro = "A3PL_Cabinet2";
        model = "\A3FL_Furniture\furniture\A3PL_Cabinet2.p3d";
        displayName = "Cabinet";
        class RenderTargets {
            class CabinetMirror {
                renderTarget = "rendertarget0";
                class CameraView1 {
                    pointPosition = "PIP0_pos";
                    pointDirection = "PIP0_dir";
                    renderQuality = 2;
                    renderVisionMode = 0;
                    fov = 0.7;
                };
            };
        };
    };
    class A3PL_Cabinet3: A3FL_Objects {
        _generalMacro = "A3PL_Cabinet3";
        model = "\A3FL_Furniture\furniture\A3PL_Cabinet3.p3d";
        displayName = "Cabinet";
    };
    class A3PL_Chair2: A3FL_Objects {
        _generalMacro = "A3PL_Chair2";
        model = "\A3FL_Furniture\furniture\A3PL_Chair2.p3d";
        displayName = "Chair";
    };
    class A3PL_Chair3: A3FL_Objects {
        _generalMacro = "A3PL_Chair3";
        model = "\A3FL_Furniture\furniture\A3PL_Chair3.p3d";
        displayName = "Chair";
    };
    class A3PL_Chair4: A3FL_Objects {
        _generalMacro = "A3PL_Chair4";
        model = "\A3FL_Furniture\furniture\A3PL_Chair4.p3d";
        displayName = "Chair";
    };
    class A3PL_coffeeTable1: A3FL_Objects {
        _generalMacro = "A3PL_coffeeTable1";
        model = "\A3FL_Furniture\furniture\A3PL_coffeeTable1.p3d";
        displayName = "Coffee Table";
    };
    class A3PL_coffeeTable2: A3FL_Objects {
        _generalMacro = "A3PL_coffeeTable2";
        model = "\A3FL_Furniture\furniture\A3PL_coffeeTable2.p3d";
        displayName = "Coffee Table";
    };
    class A3PL_coffeeTable3: A3FL_Objects {
        _generalMacro = "A3PL_coffeeTable3";
        model = "\A3FL_Furniture\furniture\A3PL_coffeeTable3.p3d";
        displayName = "Coffee Table";
    };
    class A3PL_coffeeTable4: A3FL_Objects {
        _generalMacro = "A3PL_coffeeTable4";
        model = "\A3FL_Furniture\furniture\A3PL_coffeeTable4.p3d";
        displayName = "Coffee Table";
    };
    class A3PL_CornerSova: A3FL_Objects {
        _generalMacro = "A3PL_CornerSova";
        model = "\A3FL_Furniture\furniture\A3PL_CornerSova.p3d";
        displayName = "Corner Sova";
    };
    class A3PL_DryingTowel: A3FL_Objects {
        _generalMacro = "A3PL_DryingTowel";
        model = "\A3FL_Furniture\furniture\A3PL_DryingTowel.p3d";
        displayName = "Drying Towerl";
    };
    class A3PL_Flasket: A3FL_Objects {
        _generalMacro = "A3PL_Flasket";
        model = "\A3FL_Furniture\furniture\A3PL_Flasket.p3d";
        displayName = "Flasket";
    };
    class A3PL_KitchenChair1: A3FL_Objects {
        _generalMacro = "A3PL_KitchenChair1";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenChair1.p3d";
        displayName = "Kitchen Chair";
    };
    class A3PL_KitchenChair2: A3FL_Objects {
        _generalMacro = "A3PL_KitchenChair2";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenChair2.p3d";
        displayName = "Kitchen Chair";
    };
    class A3PL_KitchenShelf1: A3FL_Objects {
        _generalMacro = "A3PL_KitchenShelf1";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenShelf1.p3d";
        displayName = "Kitchen Shelf";
    };
    class A3PL_KitchenShelf2: A3FL_Objects {
        _generalMacro = "A3PL_KitchenShelf2";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenShelf2.p3d";
        displayName = "Kitchen Shelf";
    };
    class A3PL_KitchenShelf3: A3FL_Objects {
        _generalMacro = "A3PL_KitchenShelf3";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenShelf3.p3d";
        displayName = "Kitchen Shelf";
    };
    class A3PL_KitchenShelfCorner: A3FL_Objects {
        _generalMacro = "A3PL_KitchenShelfCorner";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenShelfCorner.p3d";
        displayName = "Kitchen Shelf Corner";
    };
    class A3PL_KitchenTable1: A3FL_Objects {
        _generalMacro = "A3PL_KitchenTable1";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenTable1.p3d";
        displayName = "Kitchen Table";
    };
    class A3PL_KitchenTable2: A3FL_Objects {
        _generalMacro = "A3PL_KitchenTable2";
        model = "\A3FL_Furniture\furniture\A3PL_KitchenTable2.p3d";
        displayName = "Kitchen Table";
    };
    class A3PL_Lamp1: A3FL_Objects {
        _generalMacro = "A3PL_Lamp1";
        model = "\A3FL_Furniture\furniture\A3PL_Lamp1.p3d";
        displayName = "Lamp";
    };
    class A3PL_Lamp2: A3FL_Objects {
        _generalMacro = "A3PL_Lamp2";
        model = "\A3FL_Furniture\furniture\A3PL_Lamp2.p3d";
        displayName = "Lamp";
    };
    class A3PL_Mirror: A3FL_Objects {
        _generalMacro = "A3PL_Mirror";
        model = "\A3FL_Furniture\furniture\A3PL_Mirror.p3d";
        displayName = "Mirror";
    };
    class A3PL_ModularKitchen1: A3FL_Objects {
        _generalMacro = "A3PL_ModularKitchen1";
        model = "\A3FL_Furniture\furniture\A3PL_ModularKitchen1.p3d";
        displayName = "Modular Kitchen 1";
    };
    class A3PL_ModularKitchen2: A3FL_Objects {
        _generalMacro = "A3PL_ModularKitchen1";
        model = "\A3FL_Furniture\furniture\A3PL_ModularKitchen2.p3d";
        displayName = "Modular Kitchen 2";
    };
    class A3PL_ModularKitchen3: A3FL_Objects {
        _generalMacro = "A3PL_ModularKitchen3";
        model = "\A3FL_Furniture\furniture\A3PL_ModularKitchen3.p3d";
        displayName = "Modular Kitchen 3";
    };
    class A3PL_ModularKitchen4: A3FL_Objects {
        _generalMacro = "A3PL_ModularKitchen4";
        model = "\A3FL_Furniture\furniture\A3PL_ModularKitchen4.p3d";
        displayName = "Modular Kitchen 4";
    };
    class A3PL_Pouf: A3FL_Objects {
        _generalMacro = "A3PL_Pouf";
        model = "\A3FL_Furniture\furniture\A3PL_Pouf.p3d";
        displayName = "Pouf";
    };
    class A3PL_Rack1: A3FL_Objects {
        _generalMacro = "A3PL_Rack1";
        model = "\A3FL_Furniture\furniture\A3PL_Rack1.p3d";
        displayName = "Rack 1";
    };
    class A3PL_Rack2: A3FL_Objects {
        _generalMacro = "A3PL_Rack2";
        model = "\A3FL_Furniture\furniture\A3PL_Rack2.p3d";
        displayName = "Rack 2";
    };
    class A3PL_Sofa1: A3FL_Objects {
        _generalMacro = "A3PL_Sofa1";
        model = "\A3FL_Furniture\furniture\A3PL_Sofa1.p3d";
        displayName = "Sofa 1";
    };
    class A3PL_Sofa2: A3FL_Objects {
        _generalMacro = "A3PL_Sofa2";
        model = "\A3FL_Furniture\furniture\A3PL_Sofa2.p3d";
        displayName = "Sofa 2";
    };
    class A3PL_Sofa3: A3FL_Objects {
        _generalMacro = "A3PL_Sofa3";
        model = "\A3FL_Furniture\furniture\A3PL_Sofa3.p3d";
        displayName = "Sofa 3";
    };
    class A3PL_Sofa4: A3FL_Objects {
        _generalMacro = "A3PL_Sofa4";
        model = "\A3FL_Furniture\furniture\A3PL_Sofa4.p3d";
        displayName = "Sofa 4";
    };
    class A3PL_Table1: A3FL_Objects {
        _generalMacro = "A3PL_Table1";
        model = "\A3FL_Furniture\furniture\A3PL_Table1.p3d";
        displayName = "Table 1";
    };
    class A3PL_Table2: A3FL_Objects {
        _generalMacro = "A3PL_Table2";
        model = "\A3FL_Furniture\furniture\A3PL_Table2.p3d";
        displayName = "Table 2";
    };
    class A3PL_TvTable1: A3FL_Objects {
        _generalMacro = "A3PL_TvTable1";
        model = "\A3FL_Furniture\furniture\A3PL_TvTable1.p3d";
        displayName = "Tv Table 1";
    };
    class A3PL_TvTable2: A3FL_Objects {
        _generalMacro = "A3PL_TvTable2";
        model = "\A3FL_Furniture\furniture\A3PL_TvTable2.p3d";
        displayName = "Tv Table 2";
    };
    class A3PL_TvTable3: A3FL_Objects {
        _generalMacro = "A3PL_TvTable3";
        model = "\A3FL_Furniture\furniture\A3PL_TvTable3.p3d";
        displayName = "Tv Table 3";
    };
    class A3PL_PlasticCase_Large: A3PL_AmmoBox_Base {
        displayName = "Plastic Case";
        model = "\A3FL_Furniture\Furniture\A3PL_PlasticCase_Large.p3d";
    };

};