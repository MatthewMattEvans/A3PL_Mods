class CfgPatches
{
	class A3PL_TFR_Ext_Vehicles
	{
		units[]={};
		weapons[]={};
		requiredAddons[]=
		{
			"A3PL_Cars","A3PL_Cars2","A3PL_Cars3","A3FL_Cars","A3FL_Cars2","A3FL_Cars3","A3FL_Cars4","A3FL_Cars5","A3FL_Air", "A3PL_Planes", "A3PL_Ships", "A3PL_Trucks_N_Trailers"
		};
		requiredVersion=1;
	};
};
class CfgVehicles
{
	class A3PL_Car_Base;
	class A3PL_CVPI;
	class A3PL_CVPI_PD: A3PL_CVPI
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_CVPI_PD_Slicktop: A3PL_CVPI_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Tahoe;
	class A3PL_Tahoe_PD: A3PL_Tahoe
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Tahoe_PD_Slicktop: A3PL_Tahoe_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Tahoe_FD: A3PL_Tahoe
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Mustang;
	class A3PL_Mustang_PD: A3PL_Mustang
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Mustang_PD_Slicktop: A3PL_Mustang_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Charger;
	class A3PL_Charger_PD: A3PL_Charger
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Charger_PD_Slicktop: A3PL_Charger_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_F150;
	class A3PL_F150_PD: A3PL_F150
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Silverado;
	class A3PL_Silverado_PD: A3PL_Silverado
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Silverado_PD_ST: A3PL_Silverado_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Silverado_FD: A3PL_Silverado_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Silverado_FD_Brush: A3PL_Silverado_FD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_VetteZR1;
	class A3PL_VetteZR1_PD: A3PL_VetteZR1
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Truck_Base;
	class A3PL_Pierce_Ladder: A3PL_Truck_Base
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Pierce_Pumper: A3PL_Pierce_Ladder
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Pierce_Heavy_Ladder: A3PL_Pierce_Ladder
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Ship_Base;
	class A3PL_RBM: A3PL_Ship_Base
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Patrol: A3PL_Ship_Base
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Cutter: A3PL_Ship_Base
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class C_Boat_Transport_02_F;
	class A3PL_RHIB: C_Boat_Transport_02_F
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Charger15;
	class A3PL_Charger15_PD: A3PL_Charger15
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Charger15_PD_ST: A3PL_Charger15_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};	
	class A3PL_Charger15_FD: A3PL_Charger15_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Taurus;
	class A3FL_Taurus_PD: A3FL_Taurus
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Taurus_PD_ST: A3FL_Taurus_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Taurus_FD: A3FL_Taurus_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Mustang15;
	class A3FL_Mustang15_PD: A3FL_Mustang15
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Mustang15_PD_ST: A3FL_Mustang15_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Explorer_Platinum_20;
	class A3FL_Explorer_Platinum_PD_20: A3FL_Explorer_Platinum_20
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Explorer_Platinum_PD_Slicktop_20: A3FL_Explorer_Platinum_PD_20
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_Explorer_PD_K9_20: A3FL_Explorer_Platinum_PD_20
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};

	class A3FL_CamaroZL1;
	class A3FL_CamaroZL1_PD: A3FL_CamaroZL1
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_CamaroZL1_PD_ST: A3FL_CamaroZL1_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_F150;
	class A3FL_F150_PD: A3FL_F150
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_F150_PD_ST: A3FL_F150_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3FL_F150_FD: A3FL_F150_PD
	{
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
		tf_hasLRradio=1;
		tf_isolatedAmount=0.5;
		tf_range=50000;
	};

	class A3PL_Helicopter_Medium_Base;
	class A3FL_AS_365: A3PL_Helicopter_Medium_Base {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class Helicopter_Base_H;
	class A3FL_AS350_base: Helicopter_Base_H {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_HeliL_Base;
	class A3FL_M_900_Base_F: A3PL_HeliL_Base {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Jayhawk: A3PL_Helicopter_Medium_Base {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class Heli_Medium01_Base_H;
	class Heli_Medium01_H: Heli_Medium01_Base_H {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};
	class A3PL_Plane_Base;
	class A3PL_Cessna172: A3PL_Plane_Base {
		tf_encryptionCode="A3FL_AirLR_Code";
        tf_subtype = "airborn";
        tf_isolatedAmount=0.5;
		tf_range=50000;
	};

	class A3PL_Prime_Mover_Base;
	class A3FL_T440: A3PL_Truck_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3FL_T440_Gas_Tanker: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3FL_T440_Water_Tanker: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3FL_T440_Tow_Truck: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3FL_T370: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3PL_P362: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
	class A3PL_P362_TowTruck: A3PL_Prime_Mover_Base {
		tf_encryptionCode="A3FL_TrucksLR_Code";
        tf_subtype = "digital_lr";
	};
};
class cfgMods
{
	author="Winston Halstead";
	timepacked="1568758201";
};
