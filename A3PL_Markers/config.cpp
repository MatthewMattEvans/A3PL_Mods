#include "BIS_AddonInfo.hpp"
class CfgPatches {
	class A3PL_Markers {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3PL_Common","A3_Data_F"};
	};
};

class CfgMarkerClasses {
	class A3PL_Library {
		displayName = "A3PL (Library)";
	};
};

class CfgMarkers {
	class A3PL_Markers {
		name = "Arma 3 Project Life";
		icon = "\A3PL_Markers\icons\A3PL.paa";
		color[] = {1,1,1,1};
		size = 32;
		scope = 2;
		scopeCurator = 2;
		shadow = 1;
		markerClass = "A3PL_Library";
	};
	class A3PL_Markers_Factory : A3PL_Markers {
		name = "[A3PL] Factory";
		icon = "\A3PL_Markers\icons\A3PL_Factory.paa";
	};
	class A3PL_Markers_Business : A3PL_Markers {
		name = "[A3PL] Business";
		icon = "\A3PL_Markers\icons\A3PL_Business.paa";
	};
	class A3PL_Markers_Gun : A3PL_Markers {
		name = "[A3PL] Gun";
		icon = "\A3PL_Markers\icons\A3PL_Gun.paa";
	};
	class A3PL_Markers_Fish : A3PL_Markers {
		name = "[A3PL] Fish";
		icon = "\A3PL_Markers\icons\A3PL_Fish.paa";
	};
	class A3PL_Markers_Fishing : A3PL_Markers {
		name = "[A3PL] Fishing";
		icon = "\A3PL_Markers\icons\A3PL_Fishing.paa";
	};
	class A3PL_Markers_GasStation : A3PL_Markers {
		name = "[A3PL] Gas Station";
		icon = "\A3PL_Markers\icons\A3PL_GasStation.paa";
	};
	class A3PL_Markers_Oil : A3PL_Markers {
		name = "[A3PL] Oil";
		icon = "\A3PL_Markers\icons\A3PL_Oil.paa";
	};
	class A3PL_Markers_Trashbin : A3PL_Markers {
		name = "[A3PL] Trashbin";
		icon = "\A3PL_Markers\icons\A3PL_Trashbin.paa";
	};
	class A3PL_Markers_Bowling : A3PL_Markers {
		name = "[A3PL] Bowling";
		icon = "\A3PL_Markers\icons\A3PL_Bowling.paa";
	};
	class A3PL_Markers_Graveyard : A3PL_Markers {
		name = "[A3PL] Graveyard";
		icon = "\A3PL_Markers\icons\A3PL_Graveyard.paa";
	};
	class A3PL_Markers_Candy : A3PL_Markers {
		name = "[A3PL] Halloween Candy";
		icon = "\A3PL_Markers\icons\A3PL_Candy.paa";
	};
	class A3PL_Markers_Truck : A3PL_Markers {
		name = "[A3PL] Truck";
		icon = "\A3PL_Markers\icons\A3PL_Truck.paa";
	};
	class A3PL_Markers_Roadworker : A3PL_Markers {
		name = "[A3PL] Road Worker";
		icon = "\A3PL_Markers\icons\A3PL_Roadworker.paa";
	};
	class A3PL_Markers_Boat : A3PL_Markers {
		name = "[A3PL] Boat";
		icon = "\A3PL_Markers\icons\A3PL_Boat.paa";
	};
	class A3PL_Markers_Car : A3PL_Markers {
		name = "[A3PL] Car";
		icon = "\A3PL_Markers\icons\A3PL_Car.paa";
	};
	class A3PL_Markers_Clinic : A3PL_Markers {
		name = "[A3PL] Clinic";
		icon = "\A3PL_Markers\icons\A3PL_Clinic.paa";
	};
	class A3PL_Markers_Plane : A3PL_Markers {
		name = "[A3PL] Airport";
		icon = "\A3PL_Markers\icons\A3PL_Plane.paa";
	};
	class A3PL_Markers_Bank : A3PL_Markers {
		name = "[A3PL] Bank";
		icon = "\A3PL_Markers\icons\A3PL_Bank.paa";
	};
	class A3PL_Markers_Food : A3PL_Markers {
		name = "[A3PL] Supermarket";
		icon = "\A3PL_Markers\icons\A3PL_Food.paa";
	};
	class A3PL_Markers_Apple : A3PL_Markers {
		name = "[A3PL] Apple";
		icon = "\A3PL_Markers\icons\A3PL_Apple.paa";
	};
	class A3PL_Markers_Motel : A3PL_Markers {
		name = "[A3PL] Motel";
		icon = "\A3PL_Markers\icons\A3PL_Motel.paa";
	};
	class A3PL_Markers_Diamond : A3PL_Markers {
		name = "[A3PL] Diamond";
		icon = "\A3PL_Markers\icons\A3PL_Diamond.paa";
	};
	class A3PL_Markers_FishingPole : A3PL_Markers {
		name = "[A3PL] Fishing Pole";
		icon = "\A3PL_Markers\icons\A3PL_FishingPole.paa";
	};
	class A3PL_Markers_Hunting : A3PL_Markers {
		name = "[A3PL] Hunting";
		icon = "\A3PL_Markers\icons\A3PL_Hunting.paa";
	};
	class A3PL_Markers_Shop : A3PL_Markers {
		name = "[A3PL] Shop";
		icon = "\A3PL_Markers\icons\A3PL_Shopping.paa";
	};
	class A3PL_Markers_Karting : A3PL_Markers {
		name = "[A3PL] Karting";
		icon = "\A3PL_Markers\icons\A3PL_Karting.paa";
	};
	class A3PL_Markers_Job : A3PL_Markers {
		name = "[A3PL] Job";
		icon = "\A3PL_Markers\icons\A3PL_Job.paa";
	};
	class A3PL_Markers_Axe : A3PL_Markers {
		name = "[A3PL] Axe";
		icon = "\A3PL_Markers\icons\A3PL_Axe.paa";
	};
	class A3PL_Markers_Pickaxe : A3PL_Markers {
		name = "[A3PL] Pickaxe";
		icon = "\A3PL_Markers\icons\A3PL_Pickaxe.paa";
	};
	class A3PL_Markers_TownHall : A3PL_Markers {
		name = "[A3PL] Town Hall";
		icon = "\A3PL_Markers\icons\A3PL_TownHall.paa";
	};
	class A3PL_Markers_Shovel : A3PL_Markers {
		name = "[A3PL] Shovel";
		icon = "\A3PL_Markers\icons\A3PL_Shovel.paa";
	};
	class A3PL_Markers_Prison : A3PL_Markers {
		name = "[A3PL] Prison";
		icon = "\A3PL_Markers\icons\A3PL_Prison.paa";
	};
	class A3PL_Markers_DOJ : A3PL_Markers {
		name = "[A3PL] DOJ";
		icon = "\A3PL_Markers\icons\A3PL_DOJ.paa";
	};
	class A3PL_Markers_FISD : A3PL_Markers {
		name = "[A3PL] FISD";
		icon = "\A3PL_Markers\icons\A3PL_FISD.paa";
	};
	class A3PL_Markers_FIFD : A3PL_Markers {
		name = "[A3PL] FIFD";
		icon = "\A3PL_Markers\icons\A3PL_FIFD.paa";
	};
	class A3PL_Markers_USCG : A3PL_Markers {
		name = "[A3PL] USCG";
		icon = "\A3PL_Markers\icons\A3PL_USCG.paa";
	};
};