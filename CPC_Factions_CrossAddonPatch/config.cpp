

class CfgPatches {
	class CPC_Factions_CrossAddonPatch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Weapons_East_Attachments"};
	};
};

class cfgWeapons
{
	class ItemCore;
	class InventoryOpticsItem_Base_F;
	class PSO;
	
	class CUP_optic_PSO_1: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			mass = 13;
			optics = 1;
			modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
			class OpticsModes
			{
				class PSO
				{
					opticsID = 1;
					useModelOptics = 1;
					opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur3"};
					opticsFlare = 1;
					opticsDisablePeripherialVision = 1;
					opticsZoomMin = 0.35/4;
					opticsZoomMax = 0.35/4;
					opticsZoomInit = 0.35/4;
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
					memoryPointCamera = "opticView";
					visionMode[] = {"Normal"};
					cameraDir = "";
					discreteDistance[]={100, 150, 200, 250, 300, 350, 400, 450, 500, 550, 600, 650, 700, 750, 800, 850, 900, 950, 1000};
					discreteDistanceInitIndex=4;
				};
				class Iron: PSO
				{
					opticsID = 2;
					useModelOptics = 0;
					opticsFlare = 0;
					opticsDisablePeripherialVision = 0;
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					memoryPointCamera = "eye";
					visionMode[] = {};
					distanceZoomMin = 200;
					distanceZoomMax = 200;
					discreteDistance[]={100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200};
					discreteDistanceInitIndex=2;
				};
			};
		};
	};
};

