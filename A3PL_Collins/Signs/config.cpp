enum {
	STABILIZEDINAXESNONE = 0,
	STABILIZEDINAXISX = 1,
	STABILIZEDINAXISY = 2,
	STABILIZEDINAXESBOTH = 3,
	STABILIZEDINAXESXYZ = 4,
};

class CfgPatches {
	class A3PL_Collins_Signs {
		requiredAddons[] = {"A3_Structures_F", "A3_Data_F"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles {
	class House;
	class House_F : House {};
	
	class A3PL_BL15 : House_F {
		scope = 2;
		displayName = "Limitation Pont - 15 mph";
		model = "A3PL_Collins\Signs\A3PL_BL15.p3d";
		author = "Collins Eren";
		destrType = "DestructTree";
		vehicleClass = "Structures";
		mapSize = 5;
		cost = 1500;
	};
	
	class A3PL_DNP : A3PL_BL15 {
		displayName = "Panneau - Do not Pass";
		model = "A3PL_Collins\Signs\A3PL_DNP.p3d";
	};
	
	class A3PL_E10 : A3PL_BL15 {
		displayName = "Limitation Fin - 10 mph";
		model = "A3PL_Collins\Signs\A3PL_E10.p3d";
	};
	
	class A3PL_E20 : A3PL_BL15 {
		displayName = "Limitation Fin - 20 mph";
		model = "A3PL_Collins\Signs\A3PL_E20.p3d";
	};
	
	class A3PL_E30 : A3PL_BL15 {
		displayName = "Limitation Fin - 30 mph";
		model = "A3PL_Collins\Signs\A3PL_E30.p3d";
	};
	
	class A3PL_E40 : A3PL_BL15 {
		displayName = "Limitation Fin - 40 mph";
		model = "A3PL_Collins\Signs\A3PL_E40.p3d";
	};
	
	class A3PL_E50 : A3PL_BL15 {
		displayName = "Limitation Fin - 50 mph";
		model = "A3PL_Collins\Signs\A3PL_E50.p3d";
	};
	
	class A3PL_E55 : A3PL_BL15 {
		displayName = "Limitation Fin - 55 mph";
		model = "A3PL_Collins\Signs\A3PL_E55.p3d";
	};
	
	class A3PL_E60 : A3PL_BL15 {
		displayName = "Limitation Fin - 60 mph";
		model = "A3PL_Collins\Signs\A3PL_E60.p3d";
	};
	
	class A3PL_E80 : A3PL_BL15 {
		displayName = "Limitation Fin - 80 mph";
		model = "A3PL_Collins\Signs\A3PL_E80.p3d";
	};
	
	class A3PL_E90 : A3PL_BL15 {
		displayName = "Limitation Fin - 90 mph";
		model = "A3PL_Collins\Signs\A3PL_E90.p3d";
	};
	
	class A3PL_N20 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 20 mph";
		model = "A3PL_Collins\Signs\A3PL_N20.p3d";
	};
	
	class A3PL_N30 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 30 mph";
		model = "A3PL_Collins\Signs\A3PL_N30.p3d";
	};
	
	class A3PL_N40 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 40 mph";
		model = "A3PL_Collins\Signs\A3PL_N40.p3d";
	};
	
	class A3PL_N50 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 50 mph";
		model = "A3PL_Collins\Signs\A3PL_N50.p3d";
	};
	
	class A3PL_N60 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 60 mph";
		model = "A3PL_Collins\Signs\A3PL_N60.p3d";
	};
	
	class A3PL_N70 : A3PL_BL15 {
		displayName = "Limitation Nocturne - 70 mph";
		model = "A3PL_Collins\Signs\A3PL_N70.p3d";
	};
	
	class A3PL_S10 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 10 mph";
		model = "A3PL_Collins\Signs\A3PL_S10.p3d";
	};
	
	class A3PL_S20 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 20 mph";
		model = "A3PL_Collins\Signs\A3PL_S20.p3d";
	};
	
	class A3PL_S30 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 30 mph";
		model = "A3PL_Collins\Signs\A3PL_S30.p3d";
	};
	
	class A3PL_S40 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 40 mph";
		model = "A3PL_Collins\Signs\A3PL_S40.p3d";
	};
	
	class A3PL_S50 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 50 mph";
		model = "A3PL_Collins\Signs\A3PL_S50.p3d";
	};
	
	class A3PL_S55 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 55 mph";
		model = "A3PL_Collins\Signs\A3PL_S55.p3d";
	};
	
	class A3PL_S60 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 60 mph";
		model = "A3PL_Collins\Signs\A3PL_S60.p3d";
	};
	
	class A3PL_S80 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 80 mph";
		model = "A3PL_Collins\Signs\A3PL_S80.p3d";
	};
	
	class A3PL_S90 : A3PL_BL15 {
		displayName = "Limitation de vitesse - 90 mph";
		model = "A3PL_Collins\Signs\A3PL_S90.p3d";
	};
	
	class A3PL_STOP : A3PL_BL15 {
		displayName = "Panneau - STOP";
		model = "A3PL_Collins\Signs\A3PL_STOP.p3d";
	};
	
	class A3PL_STOPAW : A3PL_BL15 {
		displayName = "Panneau - STOP All Way";
		model = "A3PL_Collins\Signs\A3PL_STOPAW.p3d";
	};
	
	class A3PL_YILED : A3PL_BL15 {
		displayName = "Panneau - Yield";
		model = "A3PL_Collins\Signs\A3PL_YILED.p3d";
	};
	
	class A3PL_YILEDTO : A3PL_BL15 {
		displayName = "Panneau - Yield To";
		model = "A3PL_Collins\Signs\A3PL_YILEDTO.p3d";
	};
	
	class A3PL_LS40 : A3PL_BL15 {
		displayName = "Limitation - Start 40 mph";
		model = "A3PL_Collins\Signs\A3PL_LS40.p3d";
	};
	
	class A3PL_TL : A3PL_BL15 {
		displayName = "Panneau - Turn Right";
		model = "A3PL_Collins\Signs\A3PL_TL.p3d";
	};
	
	class A3PL_RL : A3PL_BL15 {
		displayName = "Panneau - Rotate Left";
		model = "A3PL_Collins\Signs\A3PL_RL.p3d";
	};
	
	class A3PL_TLR : A3PL_BL15 {
		displayName = "Panneau - Turn Left then Right";
		model = "A3PL_Collins\Signs\A3PL_TLR.p3d";
	};
	
	class A3PL_ZL : A3PL_BL15 {
		displayName = "Panneau - Zig Left";
		model = "A3PL_Collins\Signs\A3PL_ZL.p3d";
	};
	
	class A3PL_TLOR : A3PL_BL15 {
		displayName = "Panneau - Turn Left or Right";
		model = "A3PL_Collins\Signs\A3PL_TLOR.p3d";
	};
	
	class A3PL_ZZ : A3PL_BL15 {
		displayName = "Panneau - Zig Zag";
		model = "A3PL_Collins\Signs\A3PL_ZZ.p3d";
	};
	
	class A3PL_STOPC : A3PL_BL15 {
		displayName = "Panneau - STOP Comming";
		model = "A3PL_Collins\Signs\A3PL_STOPC.p3d";
	};
	
	class A3PL_YIELDC : A3PL_BL15 {
		displayName = "Panneau - YIELD Comming";
		model = "A3PL_Collins\Signs\A3PL_YIELDC.p3d";
	};
	
	class A3PL_PTR : A3PL_BL15 {
		displayName = "Panneau - Priority Turn Right";
		model = "A3PL_Collins\Signs\A3PL_PTR.p3d";
	};
	
	class A3PL_LIGHT : A3PL_BL15 {
		displayName = "Panneau - Light";
		model = "A3PL_Collins\Signs\A3PL_LIGHT.p3d";
	};
	
	class A3PL_CR : A3PL_BL15 {
		displayName = "Panneau - Crossroad";
		model = "A3PL_Collins\Signs\A3PL_CR.p3d";
	};
	
	class A3PL_RJ : A3PL_BL15 {
		displayName = "Panneau - Road Join";
		model = "A3PL_Collins\Signs\A3PL_RJ.p3d";
	};
	
	class A3PL_RJP : A3PL_BL15 {
		displayName = "Panneau - Road Join Principal";
		model = "A3PL_Collins\Signs\A3PL_RJP.p3d";
	};
	
	class A3PL_TWOD : A3PL_BL15 {
		displayName = "Panneau - Two Direction";
		model = "A3PL_Collins\Signs\A3PL_TWOD.p3d";
	};
	
	class A3PL_HUMAN : A3PL_BL15 {
		displayName = "Panneau - Pieton";
		model = "A3PL_Collins\Signs\A3PL_HUMAN.p3d";
	};
	
	class A3PL_INTER : A3PL_BL15 {
		displayName = "Panneau - Inter";
		model = "A3PL_Collins\Signs\A3PL_INTER.p3d";
	};
	
	class A3PL_RP : A3PL_BL15 {
		displayName = "Panneau - Right Priority";
		model = "A3PL_Collins\Signs\A3PL_RP.p3d";
	};
	
	class A3PL_ROTATION : A3PL_BL15 {
		displayName = "Panneau - Rotation";
		model = "A3PL_Collins\Signs\A3PL_ROTATION.p3d";
	};
	
	class A3PL_INTERT : A3PL_BL15 {
		displayName = "Panneau - Inter T";
		model = "A3PL_Collins\Signs\A3PL_INTERT.p3d";
	};
};
