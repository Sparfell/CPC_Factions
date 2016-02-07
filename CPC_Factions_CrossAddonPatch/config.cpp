

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
	class OpticsModes;
	class PSO;
	
	class CUP_optic_PSO_1: ItemCore
	{
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			modelOptics = "\rhsafrf\addons\rhs_weapons\acc\scopes\optics\rhs_pso_scope";
			class OpticsModes :OpticsModes
			{
				class PSO:PSO
				{
					opticsZoomInit = "0.35/4";
					opticsZoomMin = "0.35/4";
					opticsZoomMax = "0.35/4";
					distanceZoomMin = 200;
					distanceZoomMax = 1000;
				};
			};
		};
	};
};

