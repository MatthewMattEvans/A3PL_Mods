class CfgPatches
{
	class EC_Warehouse
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3PL_Houses"
		};
	};
};


class CfgVehicles
{
	class A3PL_Houses;
	class Land_EC_Warehouse: A3PL_Houses
	{
		model = "EC_Buildings2\CompanyWarehouse\EC_Warehouse";
		displayName = "EC Company Warehouse";
		hiddenSelections[] = {"Ads_Custom"};
		hiddenSelectionsTextures[] = {"EC_Buildings2\Data\Ads_For_Sale.paa"};

		class Reflectors
		{
			class Light_1
			{
				color[]={1000,1000,1200};
				ambient[]={6,5,4};
				intensity=5;
				size=1;
				innerAngle=90;
				outerAngle=360;
				coneFadeCoef=1;
				position="Light_1_pos";
				direction="Light_1_dir";
				hitpoint="Light_1";
				selection="Light_1";
				useFlare=1;
				flareSize=0.80000001;
				flareMaxDistance=250;
				class Attenuation
				{
					start=0;
					constant=20;
					linear=0;
					quadratic=0.5;
					hardLimitStart=40;
					hardLimitEnd=60;
				};
			};
		};
		aggregateReflectors[]=
		{
			{
				"Light_1"
			}
		};
	};
};