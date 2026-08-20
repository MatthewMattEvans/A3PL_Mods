class CfgPatches
{
	class A3FL_Shield
	{
		units[]={};
		weapons[]=
		{
			"A3FL_Shield"
		};
		requiredAddons[]=
		{
			"A3PL_Weapons2",
			"A3PL_Cars"
		};
		requiredVersion=0.1;
		magazines[]={};
		ammo[]={};
	};
};
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class CfgWeapons
{
	class ItemCore;
	class InventoryFlashLightItem_Base_F;
	class Rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponSlotsInfo;
	};
	class A3FL_Shield: Rifle_Base_F
	{
		scope=2;
		model="\A3FL_Weapons\Shield\A3FL_Shield";
		displayName="FISD Ballistic Shield";
		picture="\A3FL_Weapons\Shield\shield.paa";
		UiPicture="\A3FL_Weapons\Shield\shield.paa";
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\A3FL_Weapons\Shield\data\HoldShield.rtm"
		};
		destrType="DestructNo";
		armor=150;
		passThrough=0.94999999;
		hiddenSelections[]=
		{
			"shield"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3FL_Weapons\Shield\data\FISD_Shield.paa"
		};
	};
};
