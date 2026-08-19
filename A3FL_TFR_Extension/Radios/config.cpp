#include "radio_ids.hpp"
class CfgPatches
{
	class A3PL_TFR_Ext_Radios
	{
		units[]={"A3PL_LR","Item_A3PL_Cellphone"};
		weapons[]={"A3PL_Cellphone"};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Modules_F","A3_Structures_F_Items_Electronics","A3_Weapons_F_ItemHolders","tfar_core","tfar_static_radios"};
	};
};
class CfgVehicles
{
	class B_Carryall_oli;
	class Item_Base_F;
	class A3PL_LR: B_Carryall_oli
	{
		tf_dialogUpdate="call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio=1;
		scope=2;
		scopeCurator=2;
		tf_range=100000;
		tf_encryptionCode="A3FL_FactionsLR_Code";
		tf_dialog="rt1523g_radio_dialog";
		tf_subtype="digital_lr";
		model="a3\weapons_f\empty.p3d";
		maximumLoad=0;
		author="A3FL Development Team";
		displayName="LR Radio";
		picture="";
		hiddenSelectionsTextures[]={""};
		hiddenSelectionsMaterials[]={""};
	};
	class Item_A3PL_Cellphone: Item_Base_F
	{
		scope=2;
		scopeCurator=2;
		displayName="Smart Phone";
		author="A3FL Development Team";
		vehicleClass="Items";
		class TransportItems
		{
			class A3PL_Cellphone
			{
				name="A3PL_Cellphone";
				count=1;
			};
		};
	};
};
class CfgWeapons
{
	class ItemRadio;
	class A3PL_Cellphone: ItemRadio
	{
		author="A3FL Development Team";
		displayName="Smart Phone";
		descriptionShort="Fishers Island Smart Phone";
		scope=2;
		scopeCurator=2;
		model="\A3PL_Objects\phone\A3PL_Phone";
		picture="\A3PL_Objects\phone\phone_ui.paa";
		tf_prototype=1;
		tf_range=100000;
		tf_dialog="A3PL_Cellphone";
		tf_encryptionCode="A3FL_Phones_Code";
		tf_dialogUpdate="";
		tf_subtype="digital";
		tf_parent="A3PL_Cellphone";
		tf_additional_channel=1;
	};
	TF_RADIO_IDS(A3PL_Cellphone,SmartPhone)
};