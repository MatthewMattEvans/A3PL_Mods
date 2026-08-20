class CfgPatches {
	class FishersIsland_Data {
		requiredVersion = 1.0;
		requiredaddons[] = { "A3_Data_F", "A3_Roads_F", "FishersIsland_Roads", "FishersIsland" };
		version = "09/24/2021";
		fileName = "FishersIsland_Data.pbo";
		author = "Northbridge Interactive LLP";
		units[] = {};
		weapons[] = {};
	};
};

class CfgWorlds {
	class DefaultLighting;
	class DefaultWorld {
		class Weather {
			class Overcast;
		};
		class WaterExPars;
	};
	class CAWorld : DefaultWorld {
		class Grid {
		};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class EnvSounds;
		class Weather : Weather {
			class Lighting;
			class Overcast : Overcast {
				class Weather1;
				class Weather2;
				class Weather3;
				class Weather4;
				class Weather5;
				class Weather6;
			};
		};
	};
	class FishersIsland : CAWorld {
		cutscenes[] = {};
		author = "Northbridge Interactive LLP for ArmA 3 Project Life";
		description = "NBI - Fishers Island Terrain";
		pictureMap = "FishersIsland_Data\FishersIsland_PictureMap.paa";
		loadingTexts[] = { "Fishers Island, approximately 14 km long and 1.6 km wide, is located east of Long Island, 3 km from the west coast of Connecticut.", "Fishers Island is part of the Town of Southold, in Suffolk County, in the State of New York.", "At the 2010 census, 236 residents lived on Fishers Island, which covers 10.6 km2." };
		worldName = "FishersIsland\FishersIsland.wrp";
		startTime = "08:30";
		startDate = "15/05/2020";
		centerPosition[] = { 7228, 6987, 0 };
		seagullPos[] = { 4096, 4096, 500 };
		mapZone = 34;
		longitude = 23;
		latitude = -54;
		soundMapSizeCoef = 4;
		satelliteNormalBlendStart = 10;
		satelliteNormalBlendEnd = 100;
		skyObject = "A3\Map_Enoch\Data\skydome.p3d";
		horizontObject = "A3\Map_Enoch\Data\horizon.p3d";
		skyTexture = "A3\Map_Enoch\Data\sky_semicloudy_sky.paa";
		skyTextureR = "A3\Map_Enoch\Data\sky_semicloudy_lco.paa";
		terrainBlendMaxDarkenCoef = 0.85;
		terrainBlendMaxBrightenCoef = 0.25;
		clutterGrid = 1.3;
		clutterDist = 75;
		noDetailDist = 50;
		fullDetailDist = 10;
		seaBedUnderwaterDepth = 52;
		minHillsAltitude = 20;
		maxHillsAltitude = 47;
		clutterRoadwayCheckRadiusCoef = 0.6;
		interpolateClutterColoring = 1;
		clutterColoringFarCoef = 5.0;
		clutterColoringFarStart = 20.0;
		clutterColoringFarSpeed = 2.0;
		midDetailTexture = "A3\Map_Tanoabuka\Data\L_middle_mco.paa";
		elevationOffset = 5;
		envTexture = "A3\Data_f\env_land_ca.tga";
		minTreesInForestSquare = 2;
		minRocksInRockSquare = 2;
		newRoadsShape = "FishersIsland_Roads\roads.shp";
		ilsPosition[] = { 5501, 3285 };
		ilsDirection[] = { -0.0563, 0.080, -0.9984 };
		ilsTaxiIn[] = { 5551, 4002, 5551, 4011, 5576, 4018, 5606, 4016, 5624, 3999, 5591, 3438 };
		ilsTaxiOff[] = { 5551, 4002, 5551, 4011, 5576, 4018, 5606, 4016, 5624, 3999, 5591, 3438 };
		drawTaxiway = 1;
		class EnvMaps {
			class EnvMap1 {
				texture = "A3\Map_Tanoabuka\data\env_land_ClearSky_ca.paa";
				overcast = 0;
			};
			class EnvMap2 {
				texture = "A3\Map_Tanoabuka\data\env_land_SemiCloudySky_ca.paa";
				overcast = 0.4;
			};
			class EnvMap3 {
				texture = "A3\Map_Tanoabuka\data\env_land_OvercastSky_ca.paa";
				overcast = 0.8;
			};
		};
		class OutsideTerrain {
			satellite = "A3\Map_Tanoabuka\data\s_satout_co.paa";
			enableTerrainSynth = 0;
			class Layers {
				class Layer0 {
					nopx = "A3\Map_Data_Exp\gdt_seabedexp_nopx.paa";
					texture = "A3\Map_Data_Exp\gdt_seabedexp_co.paa";
				};
			};
			colorOutside[] = { 0.227451, 0.27451, 0.384314, 1 };
		};
		class SecondaryAirports {};
		class Sea {
			seaTexture = "a3\data_f\seatexture_co.paa";
			seaMaterial = "#water";
			shoreMaterial = "#shore";
			shoreFoamMaterial = "#shorefoam";
			shoreWetMaterial = "#shorewet";
			WaterMapScale = 20;
			WaterGrid = 50;
			MaxTide = 0.0;
			MaxWave = 0.25;
			SeaWaveXScale = "2.0/50";
			SeaWaveZScale = "1.0/50";
			SeaWaveHScale = 1.0;
			SeaWaveXDuration = 5000;
			SeaWaveZDuration = 10000;
		};
		class Underwater {
			noWaterFog = -0.001;
			fullWaterFog = 0.001;
			deepWaterFog = 60;
			waterFogDistanceNear = -10;
			waterFogDistance = 90;
			waterColor[] = { 0.0, 0.04, 0.03 };
			deepWaterColor[] = { 0.0, 0.001, 0.009 };
			surfaceColor[] = { 0.0, 0.04, 0.03 };
			deepSurfaceColor[] = { 0.0, 0.001, 0.009 };
		};
		class SeaWaterShaderPars {
			refractionMoveCoef = 0.03;
			minWaterOpacity = 0.0;
			waterOpacityDistCoef = 0.4;
			underwaterOpacity = 0.5;
			waterOpacityFadeStart = 60;
			waterOpacityFadeLength = 120;
		};
		class WaterExPars : WaterExPars {
			fogDensity = 0.035;
			fogColor[] = { 0.0002345, 0.04515, 0.07035 };
			fogColorExtinctionSpeed[] = { 0.32814, 0.0149, 0.00511 };
			ligtExtinctionSpeed[] = { 0.32814, 0.0149, 0.00511 };
			diffuseLigtExtinctionSpeed[] = { 0.36814, 0.0449, 0.02511 };
			fogGradientCoefs[] = { 0.35, 1.0, 1.7 };
			fogColorLightInfluence[] = { 0.8, 0.2, 1.0 };
			shadowIntensity = 0.0;
			ssReflectionStrength = 0.85;
			ssReflectionMaxJitter = 1.0;
			ssReflectionRippleInfluence = 0.2;
			ssReflectionEdgeFadingCoef = 10.0;
			ssReflectionDistFadingCoef = 4.0;
			refractionMinCoef = 0.03;
			refractionMaxCoef = 0.14;
			refractionMaxDist = 5.1;
			specularMaxIntensity = 100;
			specularPowerOvercast0 = 750;
			specularPowerOvercast1 = 50;
			specularNormalModifyCoef = 0.015;
			foamAroundObjectsIntensity = 0.15;
			foamAroundObjectsFadeCoef = 8.0;
			foamColorCoef = 2.0;
			foamDeformationCoef = 0.02;
			foamTextureCoef = 0.2;
			foamTimeMoveSpeed = 0.2;
			foamTimeMoveAmount = 0.1;
			shoreDarkeningMaxCoef = 0.45;
			shoreDarkeningOffset = 0.36;
			shoreDarkeningGradient = 0.08;
			shoreWaveTimeScale = 0.8;
			shoreWaveShifDerivativeOffset = -0.8;
			shoreFoamIntensity = 0.25;
			shoreMaxWaveHeight = 0.15;
			shoreWetLayerReflectionIntensity = 0.55;
		};
		class Grid : Grid {
			offsetX = 0;
			offsetY = 5120;
			class Zoom1 {
				zoomMax = 0.15;
				format = "XY";
				formatX = "000";
				formatY = "000";
				stepX = 100;
				stepY = -100;
			};
			class Zoom2 {
				zoomMax = 0.85;
				format = "XY";
				formatX = "00";
				formatY = "00";
				stepX = 1000;
				stepY = -1000;
			};
			class Zoom3 {
				zoomMax = 1e+030.0;
				format = "XY";
				formatX = "0";
				formatY = "0";
				stepX = 10000;
				stepY = -10000;
			};
		};
		humidityUpCoef = 0.1;
		humidityDownCoef = 0.05;
		class SimulWeather {
			noiseTexture = "a3\data_f\noise_raw.paa";
			numKeyframesPerDay = 48;
			windSpeedCoef = "10.0f";
			moonIrradianceCoef = "10.0f";
			fadeMaxDistanceKm = 1000;
			fadeMaxAltitudeKm = 15;
			fadeNumAltitudes = 8;
			fadeNumElevations = 8;
			fadeNumDistances = 8;
			fadeEarthTest = 1;
			autoBrightness = 1;
			autoBrightnessStrength = 0.1;
			cloudGridWidth = 64;
			cloudGridLength = 64;
			cloudGridHeight = 16;
			helperGridElevationSteps = 24;
			helperGridAzimuthSteps = 15;
			helperEffectiveEarthRadius = 1000000;
			helperCurvedEarth = 1;
			helperAdjustCurvature = 0;
			helperNumLayers = 120;
			helperMaxDistance = 160000;
			helperNearCloudFade = 0.1;
			helperChurn = 10;
			cloudWidth = 40000;
			cloudLength = 40000;
			wrapClouds = 1;
			noiseResolution = 8;
			noisePeriod = 4;
			opticalDensity = 1.5;
			alphaSharpness = 0.85000002;
			selfShadowScale = 0.90499997;
			mieAsymmetry = 0.50870001;
			minimumLightElevationDegrees = 6;
			directLightCoef = 1;
			indirectLightCoef = 0.039999999;
			fogStart = 0;
			fogEnd = 50000;
			fogHeight = 2000;
			class DefaultKeyframe {
				rayleigh[] = { 0.0074900002, 0.01388, 0.02878 };
				mie[] = { 0.0046000001, 0.0046000001, 0.0046000001 };
				haze = 30;
				hazeBaseKm = 5;
				hazeScaleKm = 1;
				hazeEccentricity = 1;
				brightnessAdjustment = 1;
				cloudiness = 0.60000002;
				cloudBaseKm = 2.8499999;
				cloudHeightKm = 6;
				directLight = 1;
				indirectLight = 1;
				ambientLight = 0.2;
				noiseOctaves = 4.3000002;
				noisePersistence = 0.53500003;
				fractalAmplitude = 2.3;
				fractalWavelength = 240;
				extinction = 8;
				diffusivity = 0.001;
			};
			class Overcast {
				class Weather1 : DefaultKeyframe {
					overcast = 0;
					cloudiness = 0;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather2 : DefaultKeyframe {
					overcast = 0.2;
					cloudiness = 0.25;
					diffusivity = 0.001;
					seqFileKeyframe = 0;
				};
				class Weather3 : DefaultKeyframe {
					overcast = 0.40000001;
					cloudiness = 0.44999999;
					diffusivity = 0.001;
					seqFileKeyframe = 3;
				};
				class Weather4 : DefaultKeyframe {
					overcast = 0.5;
					cloudiness = 0.46000001;
					diffusivity = 0.0099999998;
					seqFileKeyframe = 4;
				};
				class Weather5 : DefaultKeyframe {
					overcast = 0.80000001;
					cloudiness = 0.80000001;
					diffusivity = 0.0099999998;
					extinction = 4.3000002;
					cloudBaseKm = 1.9;
					cloudHeightKm = 8;
					seqFileKeyframe = 4;
				};
				class Weather6 : DefaultKeyframe {
					overcast = 1;
					cloudiness = 1;
					diffusivity = 0.001;
					extinction = 4;
					cloudBaseKm = 1.7;
					cloudHeightKm = 10;
					seqFileKeyframe = 4;
				};
			};
		};
		causticsEnabled = 1;
		causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
		causticsTextureCount = 32;
		causticsDistanceLimit = 200;
		causticsDepthLimit = 80;
		causticsTextureArea = 2;
		causticsTextureAreaDeep = 156;
		causticsTextureChangeInterval = 0.039999999;
		causticsDepthFadeCoef = 0.050000001;
		causticsTextureDepthGranularity = 2.5;
		causticsBrightnessCoef = 1;
		startWeather = 0.3;
		startFog = 0;
		forecastWeather = 0;
		forecastFog = 0;
		startFogBase = 250;
		forecastFogBase = 250;
		startFogDecay = 0.018;
		forecastFogDecay = 0.018;
		fogBeta0Min = 0;
		fogBeta0Max = 0.005;
		skyColorInfluencesFogColor = 0;
		hazeDistCoef = 0.1;
		hazeFogCoef = 0.98000002;
		fogHeight = 2000;
		hazeBaseHeight = 0;
		hazeBaseBeta0 = 0.00012;
		hazeDensityDecay = 0.00060000003;
		aroundSunCoefMultiplier = 1.38;
		aroundSunCoefExponent = 8;
#include "Lighting.hpp"
#include "Clutter.hpp"
		class Sounds {
			sounds[] = {};
		};
		class Subdivision {
			class Fractal {
				rougness = 5;
				maxRoad = 0.02;
				maxTrack = 0.5;
				maxSlopeFactor = 0.05;
			};
			class WhiteNoise {
				rougness = 2;
				maxRoad = 0.01;
				maxTrack = 0.05;
				maxSlopeFactor = 0.0025;
			};
			minY = -0.0;
			minSlope = 0.02;
		};
		class Ambient {};
		class AmbientA3 {
			maxCost = 500;
			class Radius440_500 {
				areaSpawnRadius = 440;
				areaMaxRadius = 500;
				spawnCircleRadius = 30;
				spawnInterval = 4.6999998;
				class Species {
					class Kestrel_random_F {
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night) * (1 - rain)";
						maxWorldCount = 6;
						cost = 6;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Crowe {
						maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night)";
						maxWorldCount = 12;
						cost = 3;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
					class Rabbit_F {
						maxCircleCount = "(10 * (0.1 - houses)) * (1 - sea) * (1 - rain)";
						maxWorldCount = 4;
						cost = 8;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 80;
						minAlt = -5;
					};
					class Seagull {
						maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
						maxWorldCount = 2;
						cost = 16;
						spawnCount = 1;
						groupSpawnRadius = 10;
						maxAlt = 200;
						minAlt = -10;
					};
				};
			};
			class Radius40_60 {
				areaSpawnRadius = 50;
				areaMaxRadius = 83;
				spawnCircleRadius = 10;
				spawnInterval = 1.5;
				class Species {
					class Snake_vipera_random_F {
						maxCircleCount = "(1 - houses) * ((2 * (1 - sea)) + (2 * (meadow)))";
						maxWorldCount = 1;
						cost = 32;
						spawnCount = 1;
						groupSpawnRadius = 5;
						maxAlt = 40;
						minAlt = -5;
					};
					class Salema_F {
						maxCircleCount = "(4 * ((WaterDepth interpolate [1,10,0,1]) + 0.07))";
						maxWorldCount = 8;
						cost = 6;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
					class Mullet_F {
						maxCircleCount = "(3 * ((WaterDepth interpolate [1,10,0,1]) + 0.07))";
						maxWorldCount = 4;
						cost = 8;
						spawnCount = 2;
						groupSpawnRadius = 5;
						maxAlt = 10;
						minAlt = -80;
					};
				};
			};
			class Radius30_40 {
				areaSpawnRadius = 30;
				areaMaxRadius = 40;
				spawnCircleRadius = 3;
				spawnInterval = 3.75;
				class Species {
					class DragonFly {
						maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy) * (1 - rain)";
						maxWorldCount = 4;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class ButterFly_random {
						maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - rain)";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FireFly {
						maxCircleCount = "(1.5 * night) * (1 - sea) * (1 - houses) * (1 - meadow) * (1 - windy) * (1 - rain)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 5;
						groupSpawnRadius = 2;
						maxAlt = 30;
						minAlt = -5;
					};
					class Cicada {
						maxCircleCount = "(4 * night) * (1 - sea) * (1 - windy) * (1 - rain)";
						maxWorldCount = 4;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
					class Beetle {
						maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - rain)";
						maxWorldCount = 2;
						cost = 4;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
					class Moth {
						maxCircleCount = "(4 * night) * (1 - sea) * (1 - windy) * (1 - rain) * (4 * houses)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 3;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius15_20 {
				areaSpawnRadius = 15;
				areaMaxRadius = 20;
				spawnCircleRadius = 2;
				spawnInterval = 2.8499999;
				class Species {
					class FxWindGrass1 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 2;
						cost = 2;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass2 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 1;
						cost = 2;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass3 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindGrass4 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindHay1 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * meadow * (windy interpolate [0.1,0.25,0,1]) * (1 - forest)";
						maxWorldCount = 1;
						cost = 2;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 15;
						minAlt = -5;
					};
					class FxWindWheat1 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * meadow * (windy interpolate [0.1,0.25,0,1]) * (1 - forest)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindSeed1 {
						maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * meadow * (windy interpolate [0.1,0.25,0,1]) * (1 - forest)";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 15;
						minAlt = -5;
					};
					class FxWindLeaf1 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 2;
						cost = 2;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf2 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 1;
						cost = 4;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf3 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 2;
						cost = 2;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf4 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf5 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindLeaf6 {
						maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
						maxWorldCount = 3;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 2.5;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPollen1 {
						maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPaper1 {
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class FxWindPlastic1 {
						maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
			class Radius6_10 {
				areaSpawnRadius = 6;
				areaMaxRadius = 10;
				spawnCircleRadius = 1;
				spawnInterval = 0.1;
				class Species {
					class HoneyBee {
						maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy) * (1 - rain)";
						maxWorldCount = 8;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class HouseFly {
						maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - rain)";
						maxWorldCount = 10;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class LadyBug {
						maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy) * (1 - rain)";
						maxWorldCount = 6;
						cost = 1;
						spawnCount = 3;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
					class Mosquito {
						maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1 - rain)";
						maxWorldCount = 2;
						cost = 1;
						spawnCount = 1;
						groupSpawnRadius = 1;
						maxAlt = 30;
						minAlt = -5;
					};
				};
			};
		};
		class Names {
#include "FishersIsland.hpp"
		};
	};
};
class CfgWorldList {
	class FishersIsland {};
};
class CfgSoundEnvironToControllers {
	class grass;
	class sand;
	class dirt;
	class road;
	class forest;
	class rock;
	class grass_exp : grass {};
	class grasstall_exp : grass {};
	class sand_exp : sand {};
	class dirt_exp : dirt {};
	class asphalt_exp : road {};
	class forest_exp : forest {};
	class stones_exp : rock {};
};
#include "CfgSurfaces.hpp"
#include "CfgSurfaceCharacters.hpp"
