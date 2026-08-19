class CfgPatches
{
	class cnd_propspack
	{
		name="Project America";
		author="Country Doggo";
		units[]=
		{
			"FYD_streetsign_blank",
			"FYD_streetsign_amiral_red",
			"FYD_streetsign_elk_chicago",
			"FYD_streetsign_elk_msr",
			"Land_stopsign",
			"Land_yieldsign",
			"Land_speedlimit10",
			"Land_speedlimit15",
			"Land_speedlimit25",
			"Land_speedlimit35",
			"Land_speedlimit45",
			"Land_speedlimit55",
			"Land_speedlimit55_h",
			"Land_speedlimit65",
			"Land_speedlimit70",
			"Land_notrucks",
			"Land_speedlimit85_h",
			"Land_donotstopontracks",
			"Land_railroadcrossing_sign",
			"Land_railroadcrossing_yield_sign",
			"Land_welcometolimestone_sign",
			"Land_highwayexitsign_generic",
			"Land_fih_entrance",
			"Land_fih_exit",
			"Land_fih_tohighway",
			"Land_fih_tospringfield",
			"welcomesign_elkcity",
			"trollge",
			"Land_deercrossing",
			"Land_pedcrossing",
			"Land_mailbox_v1",
			"Land_mailbox_v2",
			"Land_mailbox_v3",
			"Land_mailbox_v4",
			"Land_mailbox_v5",
			"Land_bridgemayice",
			"Land_laneends_left",
			"Land_laneends_right",
			"Land_mergefromleft",
			"Land_mergefromright",
			"Land_deadend",
			"Land_onewayleft",
			"Land_onewayright",
			"Land_sharetheroad",
			"Land_lightahead",
			"Land_stopahead",
			"Land_usgovnotrespass",
			"reflective_marker_white",
			"reflective_marker_yellow",
			"Land_reflectivediamond",
			"bollardyellow",
			"bollardgreen",
			"bollardbrown",
			"icechest",
			"strawberryrow_fix",
			"farmdirtrow",
			"boofgarbagecan",
			"citygarbagecanblue",
			"citygarbagecangrey",
			"dumpster_blue",
			"dumpster_green",
			"Land_mulch4m",
			"Land_decaltest",
			"Land_lithiarunwaydecal_36",
			"Land_lithiarunwaydecal_arrow",
			"parkingcurb_grey",
			"parkingcurb_blue",
			"parkingcurb_yellow",
			"Land_parking_decal_handicap",
			"Land_parking_line_18ft",
			"Land_stopline3m",
			"711test",
			"measuringstick",
			"measuringstick3axis",
			"ranchentry_v1",
			"ranchentry_v2",
			"Land_driveway_base",
			"Land_driveway_endwide",
			"Land_driveway_d15",
			"Land_driveway_d30",
			"Land_driveway_d45",
			"Land_driveway_d90v1",
			"Land_driveway_d90v3",
			"waterbuffalo",
			"ggwarehouselogo_pt1",
			"ggwarehouselogo_pt2",
			"greengrocerylogo",
			"Land_ruralfence_greenpole_double",
			"Land_ruralfence_greenpole_single",
			"Land_ruralfence_greenpole_pole",
			"Land_ruralfence_greenpole_damaged",
			"Land_chainlinkfence_tall_damaged",
			"Land_chainlinkfence_short_damaged",
			"Land_chainlinkfence_shortblack_damaged",
			"Land_farmbarbedwirefence_v1_damaged",
			"77sign",
			"postoffice_sign",
			"pizzaplace_sign",
			"citywok_sign",
			"Land_disabledparking_sign",
			"Land_15minpickupparking_sign",
			"Land_driveway_narrow",
			"Land_driveway_dd90v2"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_UI_F"
		};
	};
};
class CfgEditorCategories
{
	class sturctures_usa
	{
		displayName="Project America";
	};
};
class CfgEditorSubcategories
{
	class residential
	{
		displayName="Residential";
	};
	class cndfood
	{
		displayName="Things - Food";
	};
	class cndfurniture
	{
		displayName="Furniture";
	};
	class signs
	{
		displayName="Signs";
	};
	class big_city
	{
		displayName="Big City";
	};
	class rural
	{
		displayName="Rural";
	};
	class decals
	{
		displayName="Decals";
	};
	class roads
	{
		displayName="Roads";
	};
	class garbage
	{
		displayName="Garbage";
	};
	class cndflags
	{
		displayName="Flags";
	};
	class cndgrass
	{
		displayName="Nature - Grass";
	};
	class cndbushes
	{
		displayName="Nature - Bushes";
	};
	class cndtrees
	{
		displayName="Nature - Trees";
	};
	class cndrocks
	{
		displayName="Nature - Rocks";
	};
	class cndsea
	{
		displayName="Sea";
	};
	class cndgarden
	{
		displayName="Garden";
	};
};
class CfgVehicles
{
	class Building;
	class Lamps_base_F;
	class House;
	class House_F: House
	{
		class DestructionEffects;
	};
	class NonStrategic;
	class ThingX;
	class Items_base_F;
	class Static;
	class All;
	class Industry_base_F;
	class citygarbagecanblue: Items_base_F
	{
		scope=2;
		model="ProjectAmerica\garbage\citytrashcanblue.p3d";
		displayName="City Garbage Can Blue";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="garbage";
		destrType="DestructNo";
	};
	class citygarbagecangrey: Items_base_F
	{
		scope=2;
		model="ProjectAmerica\garbage\citytrashcangrey.p3d";
		displayName="City Garbage Can Grey";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="garbage";
		destrType="DestructNo";
	};
	class dumpster_blue: Static
	{
		scope=2;
		model="ProjectAmerica\garbage\dumpster_blue.p3d";
		displayName="Dumpster Blue Open";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=2;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="garbage";
		destrType="DestructNo";
	};
	class dumpster_green: Static
	{
		scope=2;
		model="ProjectAmerica\garbage\dumpster_green.p3d";
		displayName="Dumpster Green Open";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=2;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="garbage";
		destrType="DestructNo";
	};
	class strawberryrow_fix: Static
	{
		scope=2;
		model="ProjectAmerica\rural\strawberryrow_fix.p3d";
		displayName="Strawberry Row";
		picture="pictureStaticObject";
		icon="iconObject_1x4";
		mapSize=4;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="rural";
		destrType="DestructNo";
	};
	class farmdirtrow: Static
	{
		scope=2;
		model="ProjectAmerica\rural\farmdirtrow.p3d";
		displayName="Farm Dirt Row";
		picture="pictureStaticObject";
		icon="iconObject_1x4";
		mapSize=4;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="rural";
		destrType="DestructNo";
	};
	class ranchentry_v1: Static
	{
		scope=2;
		model="ProjectAmerica\rural\ranchentry_v1.p3d";
		displayName="Ranch Entryway V1";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=4;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="rural";
		destrType="DestructNo";
	};
	class ranchentry_v2: Static
	{
		scope=2;
		model="ProjectAmerica\rural\ranchentry_v2.p3d";
		displayName="Ranch Entryway V2";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=4;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="rural";
		destrType="DestructNo";
	};
	class FYD_streetsign_blank: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsign_blank.p3d";
		displayName="Street Sign Blank";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		hiddenSelections[] = {"sign"};
		hiddenSelectionsTextures[] = {"ProjectAmerica\signs\streetsigns\textures\streetsign_blank_CO.paa"};
		class Attributes
		{
			class ObjectTextureCustom0
			{
				displayName = "$STR_3den_object_attribute_objecttexturecustom0_displayname";
				tooltip = "$STR_3den_object_attribute_objecttexturecustom_tooltip";
				property = "ObjectTextureCustom0";
				control = "Edit";
				expression = "_this setObjectTextureGlobal [0,_value]";
				defaultValue = "(getObjectTextures _this) param [0,'',['']]";
			};
		};
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_amiral_msr: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_amiral_msr.p3d";
		displayName="Street Sign Amiral Blanca de Sousa Street - Fishers Island MSR";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_amiral_red: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_amiral_red.p3d";
		displayName="Street Sign Amiral Blanca de Sousa Street - Red Tahoe Street";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_elk_chicago: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_elk_chicago.p3d";
		displayName="Street Sign Elk City Avenue - Chicago Road";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_elk_msr: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_elk_msr.p3d";
		displayName="Street Sign Elk City Avenue - Fishers Island MSR";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_elk_red: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_elk_red.p3d";
		displayName="Street Sign Elk City Avenue - Red Tahoe Street";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class FYD_streetsign_elk_amiral: Static
	{
		scope=2;
		model="ProjectAmerica\signs\streetsigns\streetsigns_others\streetsign_elk_msr.p3d";
		displayName="Street Sign Elk City Avenue - Amiral Blanca de Sousa Street";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=100;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_stopsign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\stopsign.p3d";
		displayName="Stop Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_yieldsign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\yieldsign.p3d";
		displayName="Yield Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit10: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit10.p3d";
		displayName="Speed Limit Sign 10 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit15: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit15.p3d";
		displayName="Speed Limit Sign 15 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit25: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit25.p3d";
		displayName="Speed Limit Sign 25 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit35: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit35.p3d";
		displayName="Speed Limit Sign 35 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit45: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit45.p3d";
		displayName="Speed Limit Sign 45 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit55: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit55.p3d";
		displayName="Speed Limit Sign 55 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit55_h: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit55_h.p3d";
		displayName="Highway Speed Limit Sign 55 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit65: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit65.p3d";
		displayName="Speed Limit Sign 65 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit70: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit70.p3d";
		displayName="Speed Limit Sign 70 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_speedlimit85_h: Static
	{
		scope=2;
		model="ProjectAmerica\signs\speedlimit85_h.p3d";
		displayName="Highway Speed Limit Sign 85 MPH";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_notrucks: Static
	{
		scope=2;
		model="ProjectAmerica\signs\notrucks.p3d";
		displayName="No Trucks Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_donotstopontracks: Static
	{
		scope=2;
		model="ProjectAmerica\signs\donotstopontracks.p3d";
		displayName="Do Not Stop On Tracks Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_disabledparking_sign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\disabledparking_sign.p3d";
		displayName="Disabled Parking Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_15minpickupparking_sign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\15minpickupparking_sign.p3d";
		displayName="Pizza place Pick-up Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_railroadcrossing_sign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\railroadcrossing_sign.p3d";
		displayName="Rail Road Crossing Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_railroadcrossing_yield_sign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\railroadcrossing_yield_sign.p3d";
		displayName="Rail Road Crossing Yield Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		KeepHorizontal=1;
		keepHorizontalPlacement=1;
	};
	class Land_welcometolimestone_sign: Static
	{
		scope=2;
		model="ProjectAmerica\signs\welcometolimestone_sign.p3d";
		displayName="Welcome to Limestone Sign";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_fih_entrance: Static
	{
		scope=2;
		model="ProjectAmerica\signs\fih_entrance.p3d";
		displayName="Fishers Island Highway Entry";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_fih_exit: Static
	{
		scope=2;
		model="ProjectAmerica\signs\fih_exit.p3d";
		displayName="Fishers Island Highway End Sign";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_fih_tohighway: Static
	{
		scope=2;
		model="ProjectAmerica\signs\fih_tohighway.p3d";
		displayName="Fishers Island Highway - To Highway Sign";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_fih_tospringfield: Static
	{
		scope=2;
		model="ProjectAmerica\signs\fih_tospringfield.p3d";
		displayName="Fishers Island Highway - To Springfield Sign";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_highwayexitsign_generic: Static
	{
		scope=2;
		model="ProjectAmerica\signs\highwayexitsign_generic.p3d";
		displayName="Highway Exit Sign - Generic";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=200;
		destrType="DestructWall";
		keepHorizontalPlacement=1;
	};
	class Land_usgovnotrespass: Static
	{
		scope=2;
		model="ProjectAmerica\signs\usgovnotresspass.p3d";
		displayName="US GOV No Trespass Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_deadend: Static
	{
		scope=2;
		model="ProjectAmerica\signs\deadend.p3d";
		displayName="Dead End Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_deercrossing: Static
	{
		scope=2;
		model="ProjectAmerica\signs\deercrossing.p3d";
		displayName="Deer Crossing Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_pedcrossing: Static
	{
		scope=2;
		model="ProjectAmerica\signs\pedcrossing.p3d";
		displayName="Pedestrian Crossing Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_bridgemayice: Static
	{
		scope=2;
		model="ProjectAmerica\signs\bridgemayice.p3d";
		displayName="Bridge May Ice Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_laneends_left: Static
	{
		scope=2;
		model="ProjectAmerica\signs\laneends_left.p3d";
		displayName="Left Lane Ends Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_laneends_right: Static
	{
		scope=2;
		model="ProjectAmerica\signs\laneends_right.p3d";
		displayName="Right Lane Ends Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mergefromleft: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mergefromleft.p3d";
		displayName="Merge From Left Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mergefromright: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mergefromright.p3d";
		displayName="Merge From Right Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_onewayleft: Static
	{
		scope=2;
		model="ProjectAmerica\signs\onewayleft.p3d";
		displayName="One Way Left Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_onewayright: Static
	{
		scope=2;
		model="ProjectAmerica\signs\onewayright.p3d";
		displayName="One Way Right Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_lightahead: Static
	{
		scope=2;
		model="ProjectAmerica\signs\lightahead.p3d";
		displayName="Red Light Ahead Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_stopahead: Static
	{
		scope=2;
		model="ProjectAmerica\signs\stopahead.p3d";
		displayName="Stop Sign Ahead";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_sharetheroad: Static
	{
		scope=2;
		model="ProjectAmerica\signs\sharetheroad.p3d";
		displayName="Share the Road Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class reflective_marker_yellow: Static
	{
		scope=2;
		model="ProjectAmerica\signs\reflectivemarker.p3d";
		displayName="Road Marker Yellow";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class reflective_marker_white: Static
	{
		scope=2;
		model="ProjectAmerica\signs\reflectivemarkerwhite.p3d";
		displayName="Road Marker White";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class Land_reflectivediamond: Static
	{
		scope=2;
		model="ProjectAmerica\signs\shortdiamondreflective.p3d";
		displayName="Reflective Diamond Sign";
		picture="pictureStaticObject";
		icon="iconObject_10x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=110;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class bollardyellow: Static
	{
		scope=2;
		model="ProjectAmerica\signs\bollard.p3d";
		displayName="Bollard Pole Yellow";
		picture="pictureStaticObject";
		icon="iconObject_1x2";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
		keepHorizontalPlacement=1;
	};
	class bollardgreen: Static
	{
		scope=2;
		model="ProjectAmerica\signs\bollardgreen.p3d";
		displayName="Bollard Pole Green";
		picture="pictureStaticObject";
		icon="iconObject_1x2";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
		keepHorizontalPlacement=1;
	};
	class bollardbrown: Static
	{
		scope=2;
		model="ProjectAmerica\signs\bollardbrown.p3d";
		displayName="Bollard Pole Brown";
		picture="pictureStaticObject";
		icon="iconObject_1x2";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
		keepHorizontalPlacement=1;
	};
	class parkingcurb_grey: Static
	{
		scope=2;
		model="ProjectAmerica\signs\parkingcurb_grey.p3d";
		displayName="Parking Curb Grey";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class parkingcurb_blue: Static
	{
		scope=2;
		model="ProjectAmerica\signs\parkingcurb_blue.p3d";
		displayName="Parking Curb Blue";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class parkingcurb_yellow: Static
	{
		scope=2;
		model="ProjectAmerica\signs\parkingcurb_yellow.p3d";
		displayName="Parking Curb Yellow";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class welcomesign_elkcity: Static
	{
		scope=2;
		model="ProjectAmerica\signs\welcome_elkcity.p3d";
		displayName="Welcome Sign Elk City";
		picture="pictureStaticObject";
		icon="iconObject_2x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class Land_mailbox_v1: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mailbox_v1.p3d";
		displayName="Mailbox V1";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=80;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mailbox_v2: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mailbox_v2.p3d";
		displayName="Mailbox V2";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=80;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mailbox_v3: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mailbox_v3.p3d";
		displayName="Mailbox V3";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=80;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mailbox_v4: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mailbox_v4.p3d";
		displayName="Mailbox V4";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=80;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class Land_mailbox_v5: Static
	{
		scope=2;
		model="ProjectAmerica\signs\mailbox_v5.p3d";
		displayName="Mailbox V5";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		armor=80;
		destrType="DestructTree";
		keepHorizontalPlacement=1;
	};
	class ggwarehouselogo_pt1: Static
	{
		scope=2;
		model="ProjectAmerica\signs\ggwarehouselogo_pt1.p3d";
		displayName="Green Grocery Warehouse Logo pt 1";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class ggwarehouselogo_pt2: Static
	{
		scope=2;
		model="ProjectAmerica\signs\ggwarehouselogo_pt2.p3d";
		displayName="Green Grocery Warehouse Logo pt 2";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class greengrocerylogo: Static
	{
		scope=2;
		model="ProjectAmerica\signs\greengrocerylogo.p3d";
		displayName="Green Grocery Logo";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="signs";
		destrType="DestructNo";
	};
	class Land_mulch4m: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\decals\mulch4m.p3d";
		displayName="Mulch 4M";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_decaltest: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\decals\decaltest.p3d";
		displayName="Decal Test";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_parking_decal_handicap: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\parking_decal_handicap.p3d";
		displayName="Handicap Parking Symbol";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=2;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_parking_line_18ft: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\parking_line_18ft.p3d";
		displayName="Parking Space Line";
		picture="pictureStaticObject";
		icon="iconObject_1x4";
		mapSize=2;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_stopline3m: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\stopline.p3d";
		displayName="Stop Line 3M";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=2;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_lithiarunwaydecal_36: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\decals\lithiarunwaydecal_36.p3d";
		displayName="Runway Decal heading 36";
		picture="pictureStaticObject";
		icon="iconObject_1x1";
		mapSize=10;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_lithiarunwaydecal_arrow: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\decals\lithiarunwaydecal_arrow.p3d";
		displayName="Runway Decal Arrow";
		picture="pictureStaticObject";
		icon="iconObject_4x1";
		mapSize=10;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="decals";
		destrType="DestructNo";
	};
	class Land_driveway_base: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_base.p3d";
		displayName="Driveway Base";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_endwide: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_endwide.p3d";
		displayName="Driveway End Wide";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_narrow: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_narrow.p3d";
		displayName="Driveway End Narrow";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_d15: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d15.p3d";
		displayName="Driveway 15 deg";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_d30: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d30.p3d";
		displayName="Driveway 30 deg";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_d45: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d45.p3d";
		displayName="Driveway 45 deg";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_d90v1: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d90v1.p3d";
		displayName="Driveway 90 deg V1";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_dd90v2: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d90v2.p3d";
		displayName="Driveway 90 deg V2";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
	class Land_driveway_d90v3: NonStrategic
	{
		scope=2;
		model="ProjectAmerica\roads\driveway_d90v3.p3d";
		displayName="Driveway 90 deg V3";
		picture="pictureStaticObject";
		icon="iconObject_circle";
		mapSize=1;
		faction="Empty";
		vehicleClass="Small_items";
		editorPreview="ProjectAmerica\cdplaceholder.paa";
		editorcategory="sturctures_usa";
		editorSubcategory="roads";
		destrType="DestructNo";
	};
};
