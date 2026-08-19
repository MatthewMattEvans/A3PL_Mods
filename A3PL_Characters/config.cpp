#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class A3PL_Characters
	{
		units[]={};
		weapons[]={};
		requiredAddons[]={};
		requiredVersion=0.1;
	};
};
class CfgVehicles
{
	class C_man_1;
	class A3PL_Man_Base: C_man_1
	{
		author="A3PL Development Team";
		editorPreview="\A3PL_Characters\A3PL_Logo.paa";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3\characters_F\civil\c_citizen1";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="A3PL_Man_Base";
		hiddenSelections[]=
		{
			"Camo",
			"insignia"
		};
		uniformClass="A3PL_Uniform_Base";
		hiddenSelectionsTextures[]=
		{
			"A3\Characters_F\Civil\Data\c_poloshirt_2_co.paa"
		};
	};
	class A3PL_Survival_Man_Base: A3PL_Man_Base
	{
		displayName="A3PL_Survival_Man_Base";
		model="\A3PL_Characters\Survival\b_soldier_survival_01.p3d";
		uniformClass="A3PL_Survival_Uniform_Base";
		hiddenSelections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\blufor\data\clothing1_co.paa",
			"a3\characters_f\common\data\diver_suit_nato_co.paa",
			"a3\characters_f\common\data\basicbody_green_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
	};
	class A3PL_Diver_Man_Base: A3PL_Man_Base
	{
		displayName="A3PL_Diver_Man_Base";
		model="\A3PL_Characters\Wetsuit\diver_slotable.p3d";
		uniformClass="A3PL_Wetsuit_Uniform_Base";
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"insignia"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\diver_suit_nato_co.paa",
			"\A3\Characters_F\Common\Data\diver_equip_nato_co.paa"
		};
		hiddenUnderwaterSelections[]=
		{
			"hide"
		};
		shownUnderwaterSelections[]=
		{
			"unhide",
			"unhide2"
		};
		hiddenUnderwaterSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\common\data\diver_equip_nato_co.paa",
			"\A3\characters_f\data\visors_ca.paa"
		};
		selectionPersonality="personality";
	};
	class A3PL_Bikinigirl_Man: A3PL_Man_Base
	{
		uniformClass="A3PL_Bikinigirl_Uniform";
		model="\A3PL_Objects2\HalloweenUniforms\A3PL_Bikinigirl";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects2\HalloweenUniforms\data\BikiniGirl_body_co.paa",
			""
		};
	};
	class A3PL_Jumpsuit_Man: A3PL_Man_Base
	{
		uniformClass="A3PL_Jumpsuit_Uniform";
		model="\A3PL_Objects2\HalloweenUniforms\A3PL_Jumpsuit";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects2\HalloweenUniforms\data\jumpsuit_co.paa",
			""
		};
	};
	class A3PL_Mummy_Man: A3PL_Man_Base
	{
		uniformClass="A3PL_Mummy_Uniform";
		model="\A3PL_Objects2\HalloweenUniforms\A3PL_Mummy";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects2\HalloweenUniforms\data\mummy_co.paa",
			""
		};
	};
	class A3PL_Skeleton_Man: A3PL_Man_Base
	{
		uniformClass="A3PL_Skeleton_Uniform";
		model="\A3PL_Objects2\HalloweenUniforms\A3PL_Skeleton";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects2\HalloweenUniforms\data\skeleton_co.paa",
			""
		};
	};
	class A3PL_Zombie_Man: A3PL_Man_Base
	{
		uniformClass="A3PL_Zombie_Uniform";
		model="\A3PL_Objects2\HalloweenUniforms\A3PL_Zombie";
		hiddenSelectionsTextures[]=
		{
			"A3PL_Objects2\HalloweenUniforms\data\Gym_teacher_body.paa",
			""
		};
	};
	class B_Messenger_Black_F;
	class B_Messenger_Coyote_F;
	class B_Messenger_Gray_F;
	class B_Messenger_Olive_F;
	class B_Messenger_IDAP_F;
	class B_LegStrapBag_black_F;
	class B_LegStrapBag_coyote_F;
	class B_LegStrapBag_olive_F;
	class A3PL_B_Messenger_Black_F: B_Messenger_Black_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_Messenger_Coyote_F: B_Messenger_Coyote_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_Messenger_Gray_F: B_Messenger_Gray_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_Messenger_Olive_F: B_Messenger_Olive_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_Messenger_IDAP_F: B_Messenger_IDAP_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_LegStrapBag_black_F: B_LegStrapBag_black_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_LegStrapBag_coyote_F: B_LegStrapBag_coyote_F
	{
		DLC="";
		maximumLoad=0;
	};
	class A3PL_B_LegStrapBag_olive_F: B_LegStrapBag_olive_F
	{
		DLC="";
		maximumLoad=0;
	};
};
class CfgWeapons
{
	class U_C_Poloshirt_burgundy
	{
		class ItemInfo;
	};
	class ItemCore;
	class UniformItem;
	class HeadgearItem;
	class V_RebreatherB;
	class H_RacingHelmet_1_F;
	class Vest_Camo_Base;
	class VestItem;
	class A3PL_Helmet_Base: ItemCore
	{
		author="A3PL Development Team";
		displayName="A3PL_Helmet_Base";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		hiddenSelections[]=
		{
			"Camo"
		};
		hiddenSelectionsTextures[]={};
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_camo";
			modelSides[]={3,1};
			hiddenSelections[]=
			{
				"Camo"
			};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=6;
					passThrough=0.5;
				};
			};
		};
	};
	class A3PL_Hat_Base: A3PL_Helmet_Base
	{
		author="A3PL Development Team";
		displayName="A3PL_Hat_Base";
		model="\A3\Characters_F\Civil\hat";
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Civil\hat";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class A3PL_BCap_Base: A3PL_Helmet_Base
	{
		author="A3PL Development Team";
		displayName="A3PL_BCap_Base";
		model="\A3\Characters_F\Civil\hat";
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Civil\hat";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=0;
					passThrough=1;
				};
			};
		};
	};
	class A3PL_Vest_Base: Vest_Camo_Base
	{
		author="A3PL Development Team";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		weaponPoolAvailable=1;
		allowedslots[]={701,801,901};
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3\Weapons_F\Ammo\mag_univ.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		descriptionShort="$STR_A3_SP_NOARMOR";
		class ItemInfo: VestItem
		{
			containerClass="Supply50";
			uniformModel="\A3\Characters_F\BLUFOR\equip_b_bandolier";
			hiddenSelections[]=
			{
				"camo"
			};
			mass=0;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					hitpointName="HitChest";
					armor=0;
					passThrough=1;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=0;
					passThrough=1;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=0;
					passThrough=1;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=1;
				};
			};
		};
	};
	class A3PL_Uniform_Base: U_C_Poloshirt_burgundy
	{
		author="A3PL Development Team";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="A3PL_Uniform_Base";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_civilian_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\c_poloshirt_2_co.paa"
		};
		allowedslots[]={701,801,901};
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			containerClass="Supply400";
			uniformClass="A3PL_Man_Base";
		};
	};
	class A3PL_Survival_Uniform_Base: A3PL_Uniform_Base
	{
		displayName="A3PL_Survival_Uniform_Base";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="A3PL_Survival_Man_Base";
			containerClass="Supply40";
			uniformType="Neopren";
			mass=60;
		};
	};
	class A3PL_Wetsuit_Uniform_Base: A3PL_Uniform_Base
	{
		displayName="A3PL_Wetsuit_Uniform_Base";
		class ItemInfo: ItemInfo
		{
			uniformModel="-";
			uniformClass="A3PL_Diver_Man_Base";
			containerClass="Supply20";
			uniformType="Neopren";
			mass=60;
		};
	};
	class A3PL_Sheriff_Hat_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Sheriff_Hat_Base";
		picture="\A3PL_Characters\Sheriff\Data\UI\gear_x_sheriff_hat_ca.paa";
		model="\A3PL_Characters\Sheriff\sheriff_hat.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Sheriff\sheriff_hat.p3d";
		};
	};
	class A3PL_Backwards_Cap_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Backwards_Cap_Base";
		picture="\A3PL_Characters\A3PL_Logo.paa";
		model="\A3PL_Characters\backwardshat\A3_backwards_hat.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\backwardshat\A3_backwards_hat.p3d";
		};
	};
	class A3PL_Cap_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Cap_Base";
		hiddenSelectionsTextures[]=
		{
			"\A3PL_Textures_Clothing\Capb\Sheriff_Cap_Black.paa"
		};
		model="\A3\Characters_F\common\capb";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\common\capb";
		};
	};
	class A3PL_Booniehat_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Booniehat_Base";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Bootcamp\Civil\Data\booniehat_khk_co.paa"
		};
		model="\A3\Characters_F\Common\booniehat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Common\booniehat";
		};
	};
	class A3PL_Crew_Helmet_Base: A3PL_Helmet_Base
	{
		displayName="A3PL_Crew_Helmet_Base";
		picture="\A3\characters_F_Beta\Data\UI\icon_H_I_Helmet_crew_ca.paa";
		model="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Beta\Indep\Data\headgear_ia_helmet_crew_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			modelSides[]={2,3};
			uniformModel="\A3\Characters_F_Beta\INDEP\headgear_ia_helmet_crew";
		};
	};
	class A3PL_Helmet_Light_Base: A3PL_Helmet_Base
	{
		picture="\A3\Characters_F\data\ui\icon_H_HelmetB_light_ca.paa";
		displayName="A3PL_Helmet_Light_Base";
		model="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		class ItemInfo: ItemInfo
		{
			mass=20;
			uniformModel="\A3\Characters_F\BLUFOR\headgear_b_helmet_light";
		};
	};
	class A3PL_Stealth_Combat_Helmet_Base: A3PL_Helmet_Base
	{
		picture="\A3\Characters_F_Exp\BLUFOR\Data\UI\icon_H_HelmetB_TI_tna_F_ca.paa";
		displayName="A3PL_Stealth_Combat_Helmet_Base";
		model="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		class ItemInfo: ItemInfo
		{
			mass=50;
			uniformModel="\A3\Characters_F_Exp\BLUFOR\H_HelmetB_TI_tna_F.p3d";
		};
	};
	class A3PL_FD_Helmet_Old_Base: A3PL_Helmet_Base
	{
		displayName="A3PL_FD_Helmet_Old_Base";
		picture="\A3PL_Characters\Fire_Protective\fd_helmet_icon_ca.paa";
		model="\A3PL_Characters\Fire_Protective\firefighter_helmet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Fire_Protective\firefighter_helmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=10;
					passThrough=0.5;
				};
			};
		};
	};
	class A3PL_FD_Helmet_Base: A3PL_Helmet_Base
	{
		displayName="A3PL_FD_Helmet_Base";
		model="\A3PL_Characters\Head_Gear\A3PL_FireHelmet.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Head_Gear\A3PL_FireHelmet.p3d";
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName="HitHead";
					armor=12;
					passThrough=0.5;
				};
			};
		};
	};
	class A3PL_CrewHelmetHeli_Base: A3PL_Helmet_Base
	{
		displayName="A3PL_CrewHelmetHeli_Base";
		picture="\A3\Characters_F\data\ui\icon_H_Crew_Helmet_Heli_B_CA.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli_shield";
		hiddenSelectionsTextures[]=
		{
			"\A3\characters_f\common\data\helmet_heli_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=50;
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli_shield";
			modelSides[]={3,1};
		};
	};
	class A3PL_PilotHelmetHeli_Base: A3PL_Helmet_Base
	{
		displayName="A3PL_PilotHelmetHeli_Base";
		picture="\A3\characters_f\Data\UI\icon_H_Pilot_Helmet_Heli_B_CA.paa";
		model="A3\Characters_F\Common\headgear_helmet_heli";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\helmet_heli_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=30;
			uniformModel="A3\Characters_F\Common\headgear_helmet_heli";
			modelSides[]={3,1};
		};
	};
	class A3PL_Fedora_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Fedora_Base";
		hiddenSelections[]=
		{
			"camo"
		};
		picture="\A3\Characters_F_Bootcamp\Data\UI\icon_H_Hat_blue_ca.paa";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Civil\Data\hat_blue_co.paa"
		};
		model="\A3\Characters_F\Civil\hat";
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={901,701,605};
			uniformModel="\A3\Characters_F\Civil\hat";
			modelSides[]={6};
		};
	};
	class A3PL_Cap_headphones_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Cap_headphones_Base";
		hiddenSelections[]=
		{
			"camo"
		};
		picture="\A3\Characters_F\data\ui\icon_H_Cap_headphones_khk_CA.paa";
		model="\A3\Characters_F\common\capb_headphones.p3d";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\common\data\capb_headphones_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=8;
			uniformModel="\A3\Characters_F\common\capb_headphones.p3d";
			modelSides[]={6};
			allowedSlots[]={801,901,701,605};
		};
	};
	class A3PL_Watchcap_Base: A3PL_Hat_Base
	{
		displayName="A3PL_Watchcap_Base";
		picture="\A3\characters_f\Data\UI\icon_H_Cap_beanie_CA.paa";
		model="\A3\Characters_F\Civil\headgear_beaniehat01";
		hiddenSelectionsTextures[]=
		{
			"\a3\characters_f\common\data\woolhat_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			mass=6;
			allowedSlots[]={801,901,701,605};
			uniformModel="\A3\Characters_F\Civil\headgear_beaniehat01";
			modelSides[]={6};
		};
	};
	class A3PL_Rangemaster_belt_Base: A3PL_Vest_Base
	{
		displayName="A3PL_Rangemaster_belt_Base";
		picture="\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
		model="\A3PL_Characters\Vests\equip_b_belt";
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\blufor\data\vests_rgr_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_b_belt";
			mass=5;
		};
	};
	class A3PL_Chestrig_Base: A3PL_Vest_Base
	{
		displayName="A3PL_Chestrig_Base";
		picture="\A3\characters_F\data\ui\icon_V_FChestrig_blk_CA.paa";
		model="\A3\Characters_F\Common\equip_chestrig";
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\equip_chestrig_blk_co.paa",
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F\Common\equip_chestrig.p3d";
			mass=20;
			hiddenSelections[]=
			{
				"camo1",
				"camo2"
			};
		};
	};
	class A3PL_TacVestIR_Base: A3PL_Vest_Base
	{
		displayName="A3PL_TacVestIR_Base";
		picture="\A3\characters_f\Data\UI\icon_V_TacVestIR_blk_CA.paa";
		model="\A3PL_Characters\Vests\equip_ir_vest01";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"a3\characters_f\opfor\data\clothing_rus_co.paa",
			"a3\characters_f\opfor\data\tech_rus_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_ir_vest01";
			mass=50;
		};
	};
	class A3PL_TacVest_Base: A3PL_Vest_Base
	{
		displayName="A3PL_TacVest_Base";
		picture="\A3\characters_f\Data\UI\icon_V_TacVest_blk_CA.paa";
		model="\A3PL_Characters\Vests\equip_tacticalvest";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\Common\Data\tacticalvest_black_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_tacticalvest";
			mass=40;
		};
	};
	class A3PL_PlateCarrier_Base: A3PL_Vest_Base
	{
		displayName="A3PL_PlateCarrier_Base";
		picture="\A3\Characters_F\data\ui\icon_V_plate_carrier_2_blk_CA.paa";
		model="\A3PL_Characters\Vests\equip_b_vest01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_b_vest01";
			mass=100;
		};
	};
	class A3PL_PlateCarrier_Lite_Base: A3PL_Vest_Base
	{
		displayName="A3PL_PlateCarrier_Lite_Base";
		picture="\A3\Characters_F\data\ui\icon_V_PlateCarrier1_blk_ca.paa";
		model="\A3PL_Characters\Vests\equip_b_vest02.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F\BLUFOR\Data\vests_blk_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_b_vest02";
			mass=80;
		};
	};
	class A3PL_Press_Vest_Base: A3PL_Vest_Base
	{
		picture="\A3\Characters_F_EPC\Data\UI\icon_V_PressVest_CA.paa";
		displayName="A3PL_Press_Vest_Base";
		model="\A3PL_Characters\Vests\equip_press_vest_01.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_EPC\Civil\Data\equip_press_vest_01_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Characters\Vests\equip_press_vest_01.p3d";
			mass=40;
		};
	};
	class A3PL_Safety_Vest_Base: A3PL_Vest_Base
	{
		displayName="A3PL_Safety_Vest_Base";
		picture="\A3\Characters_F_Orange\Vests\Data\UI\icon_V_Safety_yellow_CA.paa";
		model="\A3\Characters_F_Orange\Vests\V_Safety_cloth_F.p3d";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Orange\Vests\Data\V_Safety_yellow_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Orange\Vests\V_Safety_cloth_F.p3d";
			mass=5;
		};
	};
	class A3PL_DeckCrew_base: A3PL_Vest_Base
	{
		model="\A3\Characters_F_Jets\Vests\V_DeckCrew_F.p3d";
		hiddenSelections[]=
		{
			"camo"
		};
		displayName="A3PL_DeckCrew_base";
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Jets\Vests\Data\V_DeckCrew_white_CO.paa"
		};
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3\Characters_F_Jets\Vests\V_DeckCrew_F.p3d";
			containerClass="Supply50";
			mass=100;
		};
	};
	class A3PL_FD_Oxygen: V_RebreatherB
	{
		author="A3PL Development Team";
		scope=1;
		scopeCurator=0;
		scopeArsenal=2;
		displayName="FIFD SCBA Tank";
		picture="\A3PL_Characters\Fire_Protective\fd_back_icon_ca.paa";
		model="\A3PL_Characters\Fire_Protective\firefighter_back.p3d";
		descriptionShort="Self-Contained Breathing Apparatus Tank";
		hiddenSelections[]={};
		hiddenSelectionsTextures[]={};
		hiddenUnderwaterSelections[]={};
		shownUnderwaterSelections[]={};
		hiddenUnderwaterSelectionsTextures[]={};
		class ItemInfo: UniformItem
		{
			containerClass="Supply0";
			mass=80;
			showHolsteredPistol=0;
			type=701;
			uniformModel="\A3PL_Characters\Fire_Protective\firefighter_back.p3d";
			uniformType="Default";
			vestType="Rebreather";
		};
	};
	class A3PL_Conehat: A3PL_Hat_Base
	{
		displayName="Conehat";
		picture="\A3PL_Objects2\Hats\Cone_Head\data\Cone_Head_Icon.paa";
		model="\A3PL_Objects2\Hats\Cone_Head\conehead";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Cone_Head\conehead";
		};
	};
	class A3PL_Cowboy: A3PL_Hat_Base
	{
		displayName="cowboy hat";
		picture="\A3PL_Objects2\Hats\Cowboy\data\cowboy_hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Cowboy\cowboyhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Cowboy\cowboyhat";
		};
	};
	class A3PL_Crown: A3PL_Hat_Base
	{
		displayName="Holy Crown";
		picture="\A3PL_Objects2\Hats\Crown\data\Crown_Icon.paa";
		model="\A3PL_Objects2\Hats\Crown\crown";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Crown\crown";
		};
	};
	class A3PL_Elfhat: A3PL_Hat_Base
	{
		displayName="Elf Hat";
		picture="\A3PL_Objects2\Hats\Elf_Hat\data\Elf_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Elf_Hat\elfhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Elf_Hat\elfhat";
		};
	};
	class A3PL_Ghosthat: A3PL_Hat_Base
	{
		displayName="Ghost Hat";
		picture="\A3PL_Objects2\Hats\Ghost_hat\data\Ghost_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Ghost_hat\ghost_hat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Ghost_hat\ghost_hat";
		};
	};
	class A3PL_Mexicanhat: A3PL_Hat_Base
	{
		displayName="Mexican Hat";
		picture="\A3PL_Objects2\Hats\Mexican_Hat\data\Mexican_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Mexican_Hat\mexicanhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Mexican_Hat\mexicanhat";
		};
	};
	class A3PL_Partyhat: A3PL_Hat_Base
	{
		displayName="Party Hat";
		picture="\A3PL_Objects2\Hats\party_hat\data\Party_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\party_hat\party_hat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\party_hat\party_hat";
		};
	};
	class A3PL_Piratehat: A3PL_Hat_Base
	{
		displayName="Pirate Hat";
		picture="\A3PL_Objects2\Hats\Pirate_Hat\data\Pirate_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Pirate_Hat\piratehat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Pirate_Hat\piratehat";
		};
	};
	class A3PL_Horse_Mask: A3PL_Hat_Base
	{
		displayName="Horse Mask";
		picture="\A3PL_Objects2\Hats\Horse_Mask\data\horse_mask_Icon.paa";
		model="\A3PL_Objects2\Hats\Horse_Mask\horse_mask";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Horse_Mask\horse_mask";
		};
	};
	class A3PL_Pumpkinhat: A3PL_Hat_Base
	{
		displayName="Pumpkin Hat";
		picture="\A3PL_Objects2\Hats\Pumpkin_Hat\data\Pumpkin_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Pumpkin_Hat\pumpkinhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Pumpkin_Hat\pumpkinhat";
		};
	};
	class A3PL_Rangehat: A3PL_Hat_Base
	{
		displayName="Range Hat";
		picture="\A3PL_Objects2\Hats\Range_Hat\data\Range_hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Range_Hat\rangehat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Range_Hat\rangehat";
		};
	};
	class A3PL_Russianhat: A3PL_Hat_Base
	{
		displayName="Ushanka";
		picture="\A3PL_Objects2\Hats\Russian_Hat\data\Russian_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Russian_Hat\russianhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Russian_Hat\russianhat";
		};
	};
	class A3PL_Santahat: A3PL_Hat_Base
	{
		displayName="Santa Hat";
		picture="\A3PL_Objects2\Hats\Santa_Hat\data\Santa_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Santa_Hat\santahat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Santa_Hat\santahat";
		};
	};
	class A3PL_Santahatbeard: A3PL_Hat_Base
	{
		displayName="Santa Hat + Beard";
		picture="\A3PL_Objects2\Hats\Santa_Hat_Beard\data\Santa_Hat_Beard_Icon.paa";
		model="\A3PL_Objects2\Hats\Santa_Hat_Beard\santahatbeard";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Santa_Hat_Beard\santahatbeard";
		};
	};
	class A3PL_Sargehat: A3PL_Hat_Base
	{
		displayName="Sarge hat";
		picture="\A3PL_Objects2\Hats\Sarge_Hat\data\Sarge_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Sarge_Hat\sargehat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Sarge_Hat\sargehat";
		};
	};
	class A3PL_Sombrero: A3PL_Hat_Base
	{
		displayName="Sombrero";
		picture="\A3PL_Objects2\Hats\Sombrero\data\Sombrero_Icon.paa";
		model="\A3PL_Objects2\Hats\Sombrero\sombrero";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Sombrero\sombrero";
		};
	};
	class A3PL_Tiara: A3PL_Hat_Base
	{
		displayName="<3 Tiara <3";
		picture="\A3PL_Objects2\Hats\tiara\data\Tiara_Icon.paa";
		model="\A3PL_Objects2\Hats\tiara\tiara";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\tiara\tiara";
		};
	};
	class A3PL_WitchHat: A3PL_Hat_Base
	{
		displayName="Witch Hat";
		picture="\A3PL_Objects2\Hats\Witch_Hat\data\Witch_Hat_Icon.paa";
		model="\A3PL_Objects2\Hats\Witch_Hat\witchhat";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Hats\Witch_Hat\witchhat";
		};
	};
	class A3PL_SpookyVest: A3PL_Vest_Base
	{
		displayName="Spooky Pets";
		picture="\A3PL_Objects2\Vests\spooky_vest\data\spooky_vest_icon.paa";
		model="\A3PL_Objects2\Vests\spooky_vest\spooky_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Vests\spooky_vest\spooky_vest.p3d";
		};
	};
	class A3PL_SpiderVest: A3PL_Vest_Base
	{
		displayName="Spider Pets";
		picture="\A3PL_Objects2\Vests\spider_vest\data\spider_vest_icon.paa";
		model="\A3PL_Objects2\Vests\spider_vest\spider_vest.p3d";
		class ItemInfo: ItemInfo
		{
			uniformModel="\A3PL_Objects2\Vests\spider_vest\spider_vest.p3d";
		};
	};
	class A3PL_Bikinigirl_Uniform: A3PL_Uniform_Base
	{
		displayName="Bikinigirl Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="A3PL_Bikinigirl_Man";
		};
	};
	class A3PL_Jumpsuit_Uniform: A3PL_Uniform_Base
	{
		displayName="Jumpsuit Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="A3PL_Jumpsuit_Man";
		};
	};
	class A3PL_Mummy_Uniform: A3PL_Uniform_Base
	{
		displayName="Mummy Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="A3PL_Mummy_Man";
		};
	};
	class A3PL_Skeleton_Uniform: A3PL_Uniform_Base
	{
		displayName="Skeleton Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="A3PL_Skeleton_Man";
		};
	};
	class A3PL_Zombie_Uniform: A3PL_Uniform_Base
	{
		displayName="Zombie Uniform";
		class ItemInfo: ItemInfo
		{
			uniformClass="A3PL_Zombie_Man";
		};
	};
};
class Extended_Init_EventHandlers
{
	class Man
	{
		Player_Help_init="[] call BIS_fnc_IsOutsideArea;";
	};
};
class CfgFunctions
{
	class A3_EPA
	{
		class IsOutsideArea
		{
			file="\A3PL_Characters";
			class IsOutsideArea
			{
				preinit=1;
			};
		};
	};
};
