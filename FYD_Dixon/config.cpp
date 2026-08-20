class CfgPatches
{
	class FYD_Dixon
	{
		author="Dixon";
		name="FYD Buildings";
		url="https://fydroleplay.fr";
		units[]=
		{
			"Land_FYD_Showroom"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"A3_Data_F",
			"A3_Data_F_Exp",
			"A3_Structures_F",
			"A3PL_Cars",
			"A3PL_Houses",
			"CatalinaObjects"
		};
	};
};
class CfgVehicles
{
	#include "cfgVehicles.hpp"
	class Land_FYD_Showroom: A3FL_Buildings
	{
		author="Dixon";
		model="\FYD_Dixon\Showroom\FYD_Showroom.p3d";
		displayName="FYD Showroom";
		class AnimationSources: AnimationSources
		{
			class Door_1
			{
				source="user";
				initPhase=0;
				animPeriod=1;
			};
			class Door_2: Door_1 {};
		};
		class Reflectors
        {
            class Light_1
            {
                color[] = {1000,1000,1200};
                ambient[] = {6,5,4};
                intensity = 3;
                size = 1;
                innerAngle = 90;
                outerAngle = 360;
                coneFadeCoef = 1;
                position = "Light1_pos";
                direction = "Light1_dir";
                hitpoint = "Light1_hitpoint";
                selection = "Light_1";
                useFlare = 1;
                flareSize = 0.8;
                flareMaxDistance = 250;
                class Attenuation
                {
                    start = 0;
                    constant = 20;
                    linear = 0;
                    quadratic = 0.5;
                    hardLimitStart = 40;
                    hardLimitEnd = 60;
                };
            };
            class Light_2: Light_1
            {
                position = "light2_pos";
                direction = "light2_dir";
                hitpoint = "light2";
                selection = "light_2";
            };
            class Light_3: Light_1
            {
                position = "light3_pos";
                direction = "light3_dir";
                hitpoint = "light3";
                selection = "light_3";
            };
        };
        aggregateReflectors[] = {{ "Light_1;Light_2;Light_3" }};
	};
};
