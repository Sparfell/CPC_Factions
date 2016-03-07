class cfgWeapons
{
	class ItemInfo;
	class UniformItem;
	
	class CUP_V_B_GER_Carrier_Rig_2_Brown;
	class CPC_Vest_Chestrig_1_Brown : CUP_V_B_GER_Carrier_Rig_2_Brown
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
	};
	class CUP_V_I_RACS_Carrier_Rig_2;
	class CPC_Vest_Chestrig_1_Tan : CUP_V_I_RACS_Carrier_Rig_2
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
	};
	class CUP_V_B_GER_Carrier_Rig_3_Brown;
	class CPC_Vest_Chestrig_2_Brown : CUP_V_B_GER_Carrier_Rig_3_Brown
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
	};
	class CUP_V_I_RACS_Carrier_Rig_3;
	class CPC_Vest_Chestrig_2_Tan : CUP_V_I_RACS_Carrier_Rig_3
	{
		scope = 1;
		scopeArsenal = 0;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
	};
	/*
	class CUP_Vest_TK_Camo_Base;
	class CPC_Vest_Chestrig_Winter : CUP_Vest_TK_Camo_Base
	{
		dlc = "CPC_Factions";
		author = "CPC Faction";
		scope = 2;
		scopeArsanal = 2;
		displayName = "Winter Combat Vest";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\data\ui\icon_v_tk_combat_vest_ca";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest1.p3d";
		hiddenSelectionsTextures[] = {
			"CPC\Factions\CPC_Factions_Assets\data\tak_soldier_equip_winter1_co.paa"
		};
		class ItemInfo : ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"CPC\Factions\CPC_Factions_Assets\data\tak_soldier_equip_winter1_co.paa"
			};
			containerClass = "Supply190";
			uniformModel = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Taki\CUP_TK_Vest1.p3d";
			armor = 0;
			passThrough = 1.0;
			mass = 80;
			#include "\CUP\Creatures\hitpoints_vestno.h"
		};
	};
	
	class Uniform_Base;
	class CPC_Uniform_Nato_Winter: Uniform_Base
	{
		
		dlc = "CPC_Factions";
		author = "CPC Faction";
		scope = 2;
		scopeArsanal = 2;
		displayName = "Winter uniform 1";
		picture = "\A3\characters_f\data\ui\icon_U_B_CombatUniform_mcam_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Assets\data\clothing1_winter1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_B_Soldier_Winter";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CPC_Uniform_Indep_Winter: Uniform_Base
	{
		
		dlc = "CPC_Factions";
		author = "CPC Faction";
		scope = 2;
		scopeArsanal = 2;
		displayName = "Winter uniform 2";
		picture = "\A3\characters_f_beta\data\ui\icon_U_IR_CrewUniform_rucamo_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_universal_F.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Assets\data\ia_soldier_01_clothing_winter1_co.paa"};
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_I_Soldier_Winter";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	*/
};