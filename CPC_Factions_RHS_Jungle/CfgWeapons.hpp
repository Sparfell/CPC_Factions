class UniformItem;
class cfgWeapons
{
	// Uniforms
	class Uniform_Base;
	class CPC_JUN_Uniform_AMIL: Uniform_Base
	{
		scope = 1;
		scopeArsenal = 0;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (ERDL)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_JUN_B_AMIL_soldier_base";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	// Weapons
	class srifle_DMR_06_olive_F;
	class CPC_JUN_srifle_DMR_06_olive_KHS: srifle_DMR_06_olive_F
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "optic_KHS_old";
			};
		};
	};
	class rhs_weap_m21a_pr;
	class CPC_JUN_rhs_weap_m21a_pr_CCO: rhs_weap_m21a_pr
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "rhs_npz_slot";
				item = "rhsusf_acc_compm4";
			};
		};
	};
	class rhs_weap_m4_carryhandle;
	class CPC_JUN_rhs_weap_m4_carryhandle_CCO_laser: rhs_weap_m4_carryhandle
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_compm4";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15_bk_light";
			};
		};
	};
	class CPC_JUN_rhs_weap_m4_carryhandle_ACOG_laser: rhs_weap_m4_carryhandle
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15_bk_light";
			};
		};
	};
	class rhs_weap_m4_m203S;
	class CPC_JUN_rhs_weap_m4_m203S_CCO_laser: rhs_weap_m4_m203S
	{
		scope = 1;
		author = "CPC Faction";
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side_bk";
			};
		};
	};
};