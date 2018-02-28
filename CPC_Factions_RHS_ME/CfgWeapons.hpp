class UniformItem;
class cfgWeapons
{
	class rhs_weap_svdp_wd_npz;
	class CPC_ME_rhs_weap_svdp_wd_npz_KHS: rhs_weap_svdp_wd_npz
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "rhs_npz_slot";
				item = "optic_KHS_old";
			};
		};
	};
	class rhs_weap_m21a_pr;
	class CPC_ME_rhs_weap_m21a_pr_ACOG: rhs_weap_m21a_pr
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "rhs_npz_slot";
				item = "rhsusf_acc_ACOG";
			};
		};
	};
	
	// Uniforms
	class Uniform_Base;
	class CPC_ME_Uniform_DAM: Uniform_Base
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (3-Color Desert)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_ME_B_DAM_soldier_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CPC_ME_Uniform_M93_sand_1: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (Sand 1)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_ME_I_REB_soldier_base_1";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CPC_ME_Uniform_M93_sand_2: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (Sand 2)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_ME_I_REB_soldier_base_2";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CPC_ME_Uniform_M93_sand_3: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (Sand 3)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_ME_I_REB_soldier_base_3";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class CPC_ME_Uniform_M93_sand_4: Uniform_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (Sand 4)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_ME_I_REB_soldier_base_4";
			containerClass = "Supply40";
			mass = 40;
		};
	};
};