class CfgPatches {
	class A3FL_Markers {
		units[] = {};
		weapons[] = {};
		requiredVersion = 1;
		requiredAddons[] = {"A3PL_Common","A3_Data_F"};
	};
};

class CfgMarkerClasses {
	class A3FL_Library {
		displayName = "A3FL (Library)";
	};
};

class CfgMarkers {
	class A3FL_Markers {
		name = "Arma 3 Fishers Life";
		icon = "\A3FL_Markers\markers\A3FL_Logo.paa";
		color[] = {1,1,1,1};
		size = 32;
		scope = 2;
		scopeCurator = 2;
		shadow = 1;
		markerClass = "A3FL_Library";
	};
	class A3FL_Markers_Turtle : A3FL_Markers {
		name = "[A3FL] Turtle Fishing";
		icon = "A3FL_Markers\markers\A3FL_Marker_Turtle.paa";
	};
	class A3FL_Markers_Sharks : A3FL_Markers {
		name = "[A3FL] Shark Fishing";
		icon = "A3FL_Markers\markers\A3FL_Marker_Shark.paa";
	};
	class A3FL_Markers_Mullet : A3FL_Markers {
		name = "[A3FL] Mullet Fishing";
		icon = "A3FL_Markers\markers\A3FL_Marker_Mullet.paa";
	};
	class A3FL_Markers_GangHideout : A3FL_Markers {
		name = "[A3FL] Gang Hideout";
		icon = "A3FL_Markers\markers\A3FL_Marker_GangHideout.paa";
	};
	class A3FL_Markers_ScrapDealer : A3FL_Markers {
		name = "[A3FL] Scrap Dealer";
		icon = "A3FL_Markers\markers\A3FL_Marker_ScrapDealer.paa";
	};
	class A3FL_Markers_ScrapRecovery : A3FL_Markers {
		name = "[A3FL] Scrap Recovery";
		icon = "A3FL_Markers\markers\A3FL_Marker_ScrapRecovery.paa";
	};
	class A3FL_Markers_Mushrooms : A3FL_Markers {
		name = "[A3FL] Mushroom Picking";
		icon = "A3FL_Markers\markers\A3FL_Marker_Mushrooms.paa";
	};
	class A3FL_Markers_CrimeBase : A3FL_Markers {
		name = "[A3FL] Crime Base";
		icon = "A3FL_Markers\markers\A3FL_Marker_CrimeBase.paa";
	};
	class A3FL_Markers_ChemDealer : A3FL_Markers {
		name = "[A3FL] Chemical Dealer";
		icon = "A3FL_Markers\markers\A3FL_Marker_ChemDealer.paa";
	};
	class A3FL_Markers_Moonshine : A3FL_Markers {
		name = "[A3FL] Moonshine";
		icon = "A3FL_Markers\markers\A3FL_Marker_Moonshine.paa";
	};
	class A3FL_Markers_MoonshineShop : A3FL_Markers {
		name = "[A3FL] Moonshine Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_MoonshineShop.paa";
	};
	class A3FL_Markers_PortRobbery : A3FL_Markers {
		name = "[A3FL] Port Robbery";
		icon = "A3FL_Markers\markers\A3FL_Marker_PortRobbery.paa";
	};
	class A3FL_Markers_RobbableStore : A3FL_Markers {
		name = "[A3FL] Robbable Store";
		icon = "A3FL_Markers\markers\A3FL_Marker_RobbableStore.paa";
	};
	class A3FL_Markers_DealershipRobbery : A3FL_Markers {
		name = "[A3FL] Dealership Robbery";
		icon = "A3FL_Markers\markers\A3FL_Marker_DealershipRobbery.paa";
	};
	class A3FL_Markers_Lumberjack : A3FL_Markers {
		name = "[A3FL] Lumberjack";
		icon = "A3FL_Markers\markers\A3FL_Marker_Lumberjack.paa";
	};
	class A3FL_Markers_WoodArea : A3FL_Markers {
		name = "[A3FL] Wood Area";
		icon = "A3FL_Markers\markers\A3FL_Marker_WoodArea.paa";
	};
	class A3FL_Markers_TruckingJob : A3FL_Markers {
		name = "[A3FL] Trucking Job";
		icon = "A3FL_Markers\markers\A3FL_Marker_TruckingJob.paa";
	};
	class A3FL_Markers_AirFreightJob : A3FL_Markers {
		name = "[A3FL] Air Freight Job";
		icon = "A3FL_Markers\markers\A3FL_Marker_AirFreightJob.paa";
	};
	class A3FL_Markers_PostalServices : A3FL_Markers {
		name = "[A3FL] Postal Services";
		icon = "A3FL_Markers\markers\A3FL_Marker_PostalServices.paa";
	};
	class A3FL_Markers_RoadsideServices : A3FL_Markers {
		name = "[A3FL] Roadside Services";
		icon = "A3FL_Markers\markers\A3FL_Marker_RoadsideServices.paa";
	};
	class A3FL_Markers_JobCenter : A3FL_Markers {
		name = "[A3FL] Job Center";
		icon = "A3FL_Markers\markers\A3FL_Marker_JobCenter.paa";
	};
	class A3FL_Markers_Taxi : A3FL_Markers {
		name = "[A3FL] Taxi Depot";
		icon = "A3FL_Markers\markers\A3FL_Marker_Taxi.paa";
	};
	class A3FL_Markers_FerryCaptain : A3FL_Markers {
		name = "[A3FL] Ferry Captain";
		icon = "A3FL_Markers\markers\A3FL_Marker_FerryCaptain.paa";
	};
	class A3FL_Markers_WasteManagement : A3FL_Markers {
		name = "[A3FL] Waste Management";
		icon = "A3FL_Markers\markers\A3FL_Marker_GarbageMan.paa";
	};
	class A3FL_Markers_Exterminator : A3FL_Markers {
		name = "[A3FL] Exterminator";
		icon = "A3FL_Markers\markers\A3FL_Marker_Exterminator.paa";
	};
	class A3FL_Markers_ChemicalPlant : A3FL_Markers {
		name = "[A3FL] Chemical Plant";
		icon = "A3FL_Markers\markers\A3FL_Marker_ChemFactory.paa";
	};
	class A3FL_Markers_FoodFactory : A3FL_Markers {
		name = "[A3FL] Food Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_FoodFactory.paa";
	};
	class A3FL_Markers_GoodsFactory : A3FL_Markers {
		name = "[A3FL] Goods Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_GoodsFactory.paa";
	};
	class A3FL_Markers_MarineFactory : A3FL_Markers {
		name = "[A3FL] Marine Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_MarineFactory.paa";
	};
	class A3FL_Markers_VehicleFactory : A3FL_Markers {
		name = "[A3FL] Vehicle Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_VehicleFactory.paa";
	};
	class A3FL_Markers_AircraftFactory : A3FL_Markers {
		name = "[A3FL] Aircraft Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_AircraftFactory.paa";
	};
	class A3FL_Markers_OilFactory : A3FL_Markers {
		name = "[A3FL] Oil Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_OilFactory.paa";
	};
	class A3FL_Markers_SteelMill : A3FL_Markers {
		name = "[A3FL] Steel Mill";
		icon = "A3FL_Markers\markers\A3FL_Marker_SteelMill.paa";
	};
	class A3FL_Markers_ClothingFactory : A3FL_Markers {
		name = "[A3FL] Clothing Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_ClothingFactory.paa";
	};
	class A3FL_Markers_WeaponsFactory : A3FL_Markers {
		name = "[A3FL] Weapons Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_WeaponsFactory.paa";
	};
	class A3FL_Markers_HighEndWeaponsFactory : A3FL_Markers {
		name = "[A3FL] High End Weapons Factory";
		icon = "A3FL_Markers\markers\A3FL_Marker_HighEndWeaponsFactory.paa";
	};
	class A3FL_Markers_ImportExport : A3FL_Markers {
		name = "[A3FL] Import/Export";
		icon = "A3FL_Markers\markers\A3FL_Marker_ImportExport.paa";
	};
	class A3FL_Markers_SecurityServices : A3FL_Markers {
		name = "[A3FL] Security Services";
		icon = "A3FL_Markers\markers\A3FL_Marker_SecurityServices.paa";
	};
	class A3FL_Markers_Goats : A3FL_Markers {
		name = "[A3FL] Goats";
		icon = "A3FL_Markers\markers\A3FL_Marker_Goats.paa";
	};
	class A3FL_Markers_Sheep : A3FL_Markers {
		name = "[A3FL] Sheep";
		icon = "A3FL_Markers\markers\A3FL_Marker_Sheep.paa";
	};
	class A3FL_Markers_Wildboar : A3FL_Markers {
		name = "[A3FL] Wild Boars";
		icon = "A3FL_Markers\markers\A3FL_Marker_Boars.paa";
	};
	class A3FL_Markers_Cows : A3FL_Markers {
		name = "[A3FL] Cows";
		icon = "A3FL_Markers\markers\A3FL_Marker_Cows.paa";
	};
	class A3FL_Markers_FarmingStore : A3FL_Markers {
		name = "[A3FL] Farming Store";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreFarming.paa";
	};
	class A3FL_Markers_HuntingStore : A3FL_Markers {
		name = "[A3FL] Hunting Store";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreHunting.paa";
	};
	class A3FL_Markers_SandGathering : A3FL_Markers {
		name = "[A3FL] Sand Gathering";
		icon = "A3FL_Markers\markers\A3FL_Marker_SandGathering.paa";
	};
	class A3FL_Markers_MiningMike : A3FL_Markers {
		name = "[A3FL] Mining Mike";
		icon = "A3FL_Markers\markers\A3FL_Marker_MiningMike.paa";
	};
	class A3FL_Markers_McFishers : A3FL_Markers {
		name = "[A3FL] McFishers";
		icon = "A3FL_Markers\markers\A3FL_Marker_McFishers.paa";
	};
	class A3FL_Markers_TacoHell : A3FL_Markers {
		name = "[A3FL] Taco Hell";
		icon = "A3FL_Markers\markers\A3FL_Marker_TacoHell.paa";
	};
	class A3FL_Markers_FurnShop : A3FL_Markers {
		name = "[A3FL] Furniture Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_FurnitureShop.paa";
	};
	class A3FL_Markers_Supermarket : A3FL_Markers {
		name = "[A3FL] Supermarket";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreSupermarket.paa";
	};
	class A3FL_Markers_GeneralStore : A3FL_Markers {
		name = "[A3FL] General Store";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreGeneral.paa";
	};
	class A3FL_Markers_FishingShop : A3FL_Markers {
		name = "[A3FL] Fishing Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreFishing.paa";
	};
	class A3FL_Markers_BigDicksSports : A3FL_Markers {
		name = "[A3FL] Big Dicks Sporting Goods";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreBigDicks.paa";
	};
	class A3FL_Markers_HardwareStore : A3FL_Markers {
		name = "[A3FL] ";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreHardware.paa";
	};
	class A3FL_Markers_MotorheadPerk : A3FL_Markers {
		name = "[A3FL] Motorhead Perk";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreMotorhead.paa";
	};
	class A3FL_Markers_BetterBuy : A3FL_Markers {
		name = "[A3FL] Better Buy";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreBetterBuy.paa";
	};
	class A3FL_Markers_BarberShop : A3FL_Markers {
		name = "[A3FL] Barber Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreBarber.paa";
	};
	class A3FL_Markers_FishersTelecom : A3FL_Markers {
		name = "[A3FL] Fishers Telecom";
		icon = "A3FL_Markers\markers\A3FL_Marker_StorePhone.paa";
	};
	class A3FL_Markers_ClothingShop : A3FL_Markers {
		name = "[A3FL] Clothing Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreClothing.paa";
	};
	class A3FL_Markers_CCPShop : A3FL_Markers {
		name = "[A3FL] CCP Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreCCP.paa";
	};
	class A3FL_Markers_GasStation : A3FL_Markers {
		name = "[A3FL] Gas Station";
		icon = "A3FL_Markers\markers\A3FL_Marker_GasStation.paa";
	};
	class A3FL_Markers_CompanyShop : A3FL_Markers {
		name = "[A3FL] Company Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_CompanyShop.paa";
	};
	class A3FL_Markers_CompanyShopOpened : A3FL_Markers {
		name = "[A3FL] Company Shop OPENED";
		icon = "A3FL_Markers\markers\A3FL_Marker_CompanyShopOpened.paa";
	};
	class A3FL_Markers_CompanyShopClosed : A3FL_Markers {
		name = "[A3FL] Company Shop CLOSED";
		icon = "A3FL_Markers\markers\A3FL_Marker_CompanyShopClosed.paa";
	};
	class A3FL_Markers_ThingsPerkShop : A3FL_Markers {
		name = "[A3FL] Things Perk Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreThingsPerk.paa";
	};
	class A3FL_Markers_JewelryStore : A3FL_Markers {
		name = "[A3FL] Jewelry Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_StoreJewelry.paa";
	};
	class A3FL_Markers_Paintball : A3FL_Markers {
		name = "[A3FL] Paintball";
		icon = "A3FL_Markers\markers\A3FL_Marker_Paintball.paa";
	};
	class A3FL_Markers_PirateShip : A3FL_Markers {
		name = "[A3FL] Pirate Ship";
		icon = "A3FL_Markers\markers\A3FL_Marker_PirateShip.paa";
	};
	class A3FL_Markers_ShipwreckLegal : A3FL_Markers {
		name = "[A3FL] Legal Shipwreck";
		icon = "A3FL_Markers\markers\A3FL_Marker_ShipwreckLegal.paa";
	};
	class A3FL_Markers_ShipwreckIllegal : A3FL_Markers {
		name = "[A3FL] Illegal Shipwreck";
		icon = "A3FL_Markers\markers\A3FL_Marker_ShipwreckIllegal.paa";
	};
	class A3FL_Markers_PlanewreckLegal : A3FL_Markers {
		name = "[A3FL] Legal Planewreck";
		icon = "A3FL_Markers\markers\A3FL_Marker_PlaneCrashLegal.paa";
	};
	class A3FL_Markers_PlanewreckIllegal : A3FL_Markers {
		name = "[A3FL] Illegal Planewreck";
		icon = "A3FL_Markers\markers\A3FL_Marker_PlaneCrashIllegal.paa";
	};
	class A3FL_Markers_ImpoundLot : A3FL_Markers {
		name = "[A3FL] Impound Lot";
		icon = "A3FL_Markers\markers\A3FL_Marker_ImpoundLot.paa";
	};
	class A3FL_Markers_ModShop : A3FL_Markers {
		name = "[A3FL] Mod Shop";
		icon = "A3FL_Markers\markers\A3FL_Marker_ModShop.paa";
	};
	class A3FL_Markers_Bank : A3FL_Markers {
		name = "[A3FL] Bank";
		icon = "A3FL_Markers\markers\A3FL_Marker_Bank.paa";
	};
	class A3FL_Markers_OwnedLocker : A3FL_Markers {
		name = "[A3FL] Owned Locker";
		icon = "A3FL_Markers\markers\A3FL_Marker_OwnedLocker.paa";
	};
	class A3FL_Markers_OwnedHouse : A3FL_Markers {
		name = "[A3FL] Owned House";
		icon = "A3FL_Markers\markers\A3FL_Marker_OwnedHouse.paa";
	};
	class A3FL_Markers_OwnedWarehouse : A3FL_Markers {
		name = "[A3FL] Owned Warehouse";
		icon = "A3FL_Markers\markers\A3FL_Marker_OwnedWarehouse.paa";
	};
	class A3FL_Markers_AptBuilding : A3FL_Markers {
		name = "[A3FL] Apartment Building";
		icon = "A3FL_Markers\markers\A3FL_Marker_AptBuilding.paa";
	};
	class A3FL_Markers_UnownedHouse : A3FL_Markers {
		name = "[A3FL] Unowned House";
		icon = "A3FL_Markers\markers\A3FL_Marker_SellHouse.paa";
	};
	class A3FL_Markers_UnownedWarehouse : A3FL_Markers {
		name = "[A3FL] Unowned Warehouse";
		icon = "A3FL_Markers\markers\A3FL_Marker_SellWarehouse.paa";
	};
	class A3FL_Markers_TruckTrailer : A3FL_Markers {
		name = "[A3FL] Truck & Trailer";
		icon = "A3FL_Markers\markers\A3FL_Marker_TruckNTrailer.paa";
	};
	class A3FL_Markers_BoatGarage : A3FL_Markers {
		name = "[A3FL] Boat Garage";
		icon = "A3FL_Markers\markers\A3FL_Marker_BoatGarage.paa";
	};
	class A3FL_Markers_BoatImpound : A3FL_Markers {
		name = "[A3FL] Boat Impound";
		icon = "A3FL_Markers\markers\A3FL_Marker_BoatImpound.paa";
	};
	class A3FL_Markers_AircraftImpound : A3FL_Markers {
		name = "[A3FL] Aircraft Impound";
		icon = "A3FL_Markers\markers\A3FL_Marker_AircraftImpound.paa";
	};
	class A3FL_Markers_AircraftGarage : A3FL_Markers {
		name = "[A3FL] Aircraft Garage";
		icon = "A3FL_Markers\markers\A3FL_Marker_AircraftGarage.paa";
	};
	class A3FL_Markers_AircraftPaint : A3FL_Markers {
		name = "[A3FL] Aircraft Paint";
		icon = "A3FL_Markers\markers\A3FL_Marker_AircraftPaint.paa";
	};
	class A3FL_Markers_CityHall : A3FL_Markers {
		name = "[A3FL] City Hall";
		icon = "A3FL_Markers\markers\A3FL_Marker_CityHall.paa";
	};
	class A3FL_Markers_Cemetary : A3FL_Markers {
		name = "[A3FL] Cemetary";
		icon = "A3FL_Markers\markers\A3FL_Marker_Cemetary.paa";
	};
	class A3FL_Markers_ResourceMarker : A3FL_Markers {
		name = "[A3FL] Resource Marker";
		icon = "A3FL_Markers\markers\A3FL_Marker_ResourceMarker.paa";
	};
	class A3FL_Markers_ResourceMarker2 : A3FL_Markers {
		name = "[A3FL] Resource Marker2";
		icon = "A3FL_Markers\markers\A3FL_Marker_ResourceMarker2.paa";
	};
	class A3FL_Markers_ResourceMarker3 : A3FL_Markers {
		name = "[A3FL] Resource Marker3";
		icon = "A3FL_Markers\markers\A3FL_Marker_ResourceMarker3.paa";
	};
	class A3FL_Markers_CGBase : A3FL_Markers {
		name = "[A3FL] USCG Base";
		icon = "A3FL_Markers\markers\A3FL_Marker_CGBase.paa";
	};
	class A3FL_Markers_Clinic : A3FL_Markers {
		name = "[A3FL] Clinic";
		icon = "A3FL_Markers\markers\A3FL_Marker_Clinic.paa";
	};
	class A3FL_Markers_FireStation : A3FL_Markers {
		name = "[A3FL] Fire Station";
		icon = "A3FL_Markers\markers\A3FL_Marker_FireStation.paa";
	};
	class A3FL_Markers_Courthouse : A3FL_Markers {
		name = "[A3FL] Courthouse";
		icon = "A3FL_Markers\markers\A3FL_Marker_Courthouse.paa";
	};
	class A3FL_Markers_DOC : A3FL_Markers {
		name = "[A3FL] DOC";
		icon = "A3FL_Markers\markers\A3FL_Marker_DOC.paa";
	};
	class A3FL_Markers_SDStation : A3FL_Markers {
		name = "[A3FL] FISD SubStation";
		icon = "A3FL_Markers\markers\A3FL_Marker_SDStation.paa";
	};
	class A3FL_Markers_HQFISD : A3FL_Markers {
		name = "[A3FL] FISD HQ";
		icon = "A3FL_Markers\markers\A3FL_Marker_FISD_Logo.paa";
	};
	class A3FL_Markers_HQFIFR : A3FL_Markers {
		name = "[A3FL] FIFR HQ";
		icon = "A3FL_Markers\markers\A3FL_Marker_FIFR_Logo.paa";
	};
	class A3FL_Markers_HQDOJ : A3FL_Markers {
		name = "[A3FL] DOJ HQ";
		icon = "A3FL_Markers\markers\A3FL_Marker_DOJ_Logo.paa";
	};
	class A3FL_Markers_HQFIMS : A3FL_Markers {
		name = "[A3FL] FIMS HQ";
		icon = "A3FL_Markers\markers\A3FL_Marker_FIMS_Logo.paa";
	};
	class A3FL_Markers_HQUSCG : A3FL_Markers {
		name = "[A3FL] USCG HQ";
		icon = "A3FL_Markers\markers\A3FL_Marker_USCG_Logo.paa";
	};
	class A3FL_Markers_911Call : A3FL_Markers {
		name = "[A3FL] 911 Call";
		icon = "A3FL_Markers\markers\A3FL_Marker_911Call.paa";
	};
	class A3FL_Markers_Hydrant : A3FL_Markers {
		name = "[A3FL] Hydrant";
		icon = "A3FL_Markers\markers\A3FL_Marker_Hydrant.paa";
	};
	class A3FL_Markers_Fire : A3FL_Markers {
		name = "[A3FL] Fire";
		icon = "A3FL_Markers\markers\A3FL_Marker_Fire.paa";
	};
	class A3FL_Markers_Medical : A3FL_Markers {
		name = "[A3FL] Medical";
		icon = "A3FL_Markers\markers\A3FL_Marker_Medical.paa";
	};
	class A3FL_Markers_ApplePicking : A3FL_Markers {
		name = "[A3FL] Apple Picking";
		icon = "A3FL_Markers\markers\A3FL_Marker_ApplePicking.paa";
	};
	class A3FL_Markers_EvidenceLocker : A3FL_Markers {
		name = "[A3FL] Evidence Locker";
		icon = "A3FL_Markers\markers\A3FL_Marker_EvidenceLocker.paa";
	};
	class A3FL_Markers_Tornado : A3FL_Markers {
		name = "[A3FL] Tornado";
		icon = "A3FL_Markers\markers\A3FL_Marker_Tornado.paa";
	};
	class A3FL_Markers_RedBox : A3FL_Markers {
		name = "[A3FL] Red Box Dealer";
		icon = "A3FL_Markers\markers\A3FL_Marker_RedBox.paa";
	};
	class A3FL_Markers_VehImpound : A3FL_Markers {
		name = "[A3FL] Vehicle to Impound";
		icon = "A3FL_Markers\markers\A3FL_Marker_VehImpound.paa";
	};
	class A3FL_Markers_CivShootingRange : A3FL_Markers {
		name = "[A3FL] Civilian Shooting Range";
		icon = "A3FL_Markers\markers\A3FL_Marker_CivShootingRange.paa";
	};
	class A3FL_Markers_OilDrilling : A3FL_Markers {
		name = "[A3FL] Oil Drilling Area";
		icon = "A3FL_Markers\markers\A3FL_Marker_OilDrilling.paa";
	};
	class A3FL_Markers_PanicButton : A3FL_Markers {
		name = "[A3FL] Panic Button";
		icon = "A3FL_Markers\markers\A3FL_Marker_PanicButton.paa";
	};
	class A3FL_Markers_PlaneDistress : A3FL_Markers {
		name = "[A3FL] Plane In Distress";
		icon = "A3FL_Markers\markers\A3FL_Marker_PlaneDistress.paa";
	};
};