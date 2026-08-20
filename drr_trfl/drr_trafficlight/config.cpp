//(5 Enums)
enum {
	stabilizedinaxesnone = 0,
	stabilizedinaxisx = 1,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	stabilizedinaxesxyz = 4
};

class BIS_AddonInfo
{
	author = "";
	timepacked = "";
};
class CfgPatches
{
	class fyd_trafficlight
	{
		units[] = {"fyd_trafficlight_a","fyd_trafficlight_v1_0","fyd_trafficlight_v1_0a","fyd_trafficlight_v1_1","fyd_trafficlight_v1_1a","fyd_trafficlight_v1_2","fyd_trafficlight_v1_2a","fyd_trafficlight_v1_3","fyd_trafficlight_v1_3a","fyd_trafficlight_v1_4","fyd_trafficlight_v1_4a","fyd_trafficlight_v2_0","fyd_trafficlight_v2_0a","fyd_trafficlight_v2_1","fyd_trafficlight_v2_1a","fyd_trafficlight_v2_2","fyd_trafficlight_v2_2a","fyd_trafficlight_v2_3","fyd_trafficlight_v2_3a","fyd_trafficlight_v2_4","fyd_trafficlight_v2_4a","fyd_trafficlight_v2_5","fyd_trafficlight_v2_5a","fyd_trafficlight_v2_6","fyd_trafficlight_v2_6a"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Structures_F_Households","A3_Data_F"};
	};
};
class CfgEditorCategories
{
	class fydlights
	{
		displayname = "FYD - Traffic Lights";
	};
};
class CfgEditorSubCategories
{
	class fydtraffic
	{
		displayname = "Traffic Lights";
	};
};
class CfgVehicles
{
	class House_F;
	class fyd_trafficlight: House_F
	{
		mapSize = 35.54;
		author = "";
		displayName = "Traffic Light";
		editorCategory = "fydlights";
		editorSubCategory = "fydtraffic";
		hiddenSelections[] = {"traffic","red","yellow","green","sign1","sign2","sign3","sign4","sign5"};
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p.p3d";
		keepInEPESceneAfterDeath = 1;
		vehicleClass = "drr_Buildings";
		class DestructionEffects{};
		class AnimationSources{};
	};
	class fyd_trafficlight_a: fyd_trafficlight
	{
		scope = 2;
		displayName = "Traffic Light Alternate";
		author = "";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v1_0: fyd_trafficlight
	{
		scope = 2;
		displayName = "Singular Traffic Light (V1.0)";
		author = "";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v1_0a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Singular Traffic Light Alternate(V1.0)";
		author = "";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v1_1: fyd_trafficlight
	{
		scope = 2;
		displayName = "Singular Traffic Light (V1.1)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p5.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v1_1a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Singular Traffic Light Alternate(V1.1)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p5.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v1_2: fyd_trafficlight
	{
		scope = 2;
		displayName = "Singular Traffic Light (V1.2)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p6.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v1_2a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Singular Traffic Light Alternate(V1.2)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p6.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v1_3: fyd_trafficlight
	{
		scope = 2;
		displayName = "Singular Traffic Light (V1.3)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p8.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v1_3a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Singular Traffic Light Alternate(V1.3)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p8.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v1_4: fyd_trafficlight
	{
		scope = 2;
		displayName = "Singular Traffic Light (V1.4)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p9.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v1_4a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Singular Traffic Light Alternate(V1.4)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p9.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_0: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.0)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p2.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_0a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.0)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p2.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_1: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.1)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p3.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_1a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.1)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p3.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_2: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.2)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p4.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_2a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.2)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p4.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_3: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.3)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p7.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_3a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.3)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p7.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_4: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.4)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p10.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_4a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.4)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p10.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_5: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.5)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p11.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
		
	};
	class fyd_trafficlight_v2_5a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.5)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p11.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_6: fyd_trafficlight
	{
		scope = 2;
		displayName = "Double Traffic Light (V2.6)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p12.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_trafficlight_v2_6a: fyd_trafficlight_a
	{
		scope = 2;
		displayName = "Double Traffic Light Alternate(V2.6)";
		author = "";
		model = "\drr_trfl\drr_trafficlight\fyd_trafficlight_p12.p3d";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
	class fyd_fdtrafficlight: fyd_trafficlight
	{
		scope = 2;
		displayName = "Fire Department Traffic Light";
		author = "";
		hiddenSelectionsTextures[] = {"\drr_trfl\colours\black.paa","","","","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetnames.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa","drr_trfl\drr_trafficlight\textures\streetsign.paa"};
	};
};
