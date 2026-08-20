#include "basicdefines_A3.hpp"

class CfgPatches
{
	class DED_Fence_02
	{
		units[] = {"Land_Fence2_DED_Fence_02_F"};
		weapons[] = {};
		requiredVersion = 1.0;
		requiredAddons[] = {"A3PL_Cars","A3_Armor_F"};
	};
};
class CfgVehicleClasses {

	class Suburb {
		displayName = "Suburb";
	};
};

class CfgVehicles
{
	class House;
	class House_f: House
	{
	};
	
	class Land_Fence2_DED_Fence_02_F: House_f
	{
		vehicleClass = "Suburb";
		model="\CatalinaObjects\DED_Fence_02\Fence2_DED_Fence_02_F.p3d";
		scope=2;
		displayName="Fence";
		armor = 120;
		destrType = "DestructNo";

		class HitPoints
		{
			class Hitzone_1_hitpoint
			{
				armor = .5;
				material = -1;
				name = Board_1; // Name of selection in Hit-points lod in p3d
				visual = Board_1_hide; // Name of selection in resolution lods in p3d that will have it's textures and materials switched (according to "class Damage definitions") based on damage of this hitpoint
				passThrough = 0; // Coefficient for how much damage done to this hitpoints is also done to total damage of the house
				radius = 0.175; // Radius of spheres around each vertex of this hitpoint in Hit-points lod. These spheres represent the volume from which this hitpoint takes damage
				convexComponent = Board_1_hide;
				explosionShielding = 11;
				class DestructionEffects
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_1_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
			class Hitzone_2_hitpoint: Hitzone_1_hitpoint
			{
				material = -1;
				name = Board_2; 
				visual = Board_2_hide; 
				radius = 0.175; 
				convexComponent = Board_2_hide;
				class DestructionEffects
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_2_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_2_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_2_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_2_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
			class Hitzone_3_hitpoint: Hitzone_1_hitpoint
			{
				material = -1;
				name = Board_3; 
				visual = Board_3_hide;
				radius = 0.175;
				convexComponent = Board_3_hide;
				class DestructionEffects 
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_3_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_3_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_3_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_3_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
			class Hitzone_4_hitpoint: Hitzone_1_hitpoint
			{
				material = -1;
				name = Board_4; 
				visual = Board_4_hide; 
				radius = 0.175; 
				convexComponent = Board_4_hide;
				class DestructionEffects 
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_4_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_4_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_4_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_4_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
			class Hitzone_5_hitpoint: Hitzone_1_hitpoint
			{
				material = -1;
				name = Board_5; 
				visual = Board_5_hide; 
				radius = 0.175; 
				convexComponent = Board_5_hide;
				class DestructionEffects 
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_5_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_5_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_5_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_5_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
			class Hitzone_6_hitpoint: Hitzone_1_hitpoint
			{
				material = -1;
				name = Board_6; 
				visual = Board_6_hide; 
				radius = 0.175; 
				convexComponent = Board_6_hide;
				class DestructionEffects 
				{
					class Dust1
					{
						simulation = particles; // Visual effect
						type = WoodChippings1; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_6_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust2
					{
						simulation = particles; // Visual effect
						type = WoodChippings2; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_6_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust3
					{
						simulation = particles; // Visual effect
						type = WoodChippings3; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_6_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
					class Dust4
					{
						simulation = particles; // Visual effect
						type = WoodChippings4; // Class of this particular effect, defined in CfgCloudlets
						position = Dam_6_effects; // Point of origin for this effect, defined in Memory lod in p3d
						intensity = 5;
						interval = 20;
						lifeTime = 0.1;
					};
				};
			};
		};

		class AnimationSources
		{
			class Board_1_source
			{
				source = Hit;
				hitpoint = Hitzone_1_hitpoint;
				raw = 1;
			};
			class Board_2_source: Board_1_source
			{
				hitpoint = Hitzone_2_hitpoint;
			};
			class Board_3_source: Board_1_source
			{
				hitpoint = Hitzone_3_hitpoint;
			};
			class Board_4_source: Board_1_source
			{
				hitpoint = Hitzone_4_hitpoint;
			};
			class Board_5_source: Board_1_source
			{
				hitpoint = Hitzone_5_hitpoint;
			};
			class Board_6_source: Board_1_source
			{
				hitpoint = Hitzone_6_hitpoint;
			};
		};
	};
};