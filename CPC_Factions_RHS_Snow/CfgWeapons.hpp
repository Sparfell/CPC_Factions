
class cfgWeapons
{
	class UniformItem;
	class Uniform_Base;
	
	// Uniforms
	class CPC_Snow_Uniform_1 : Uniform_Base //rhsgref_uniform_reed
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M93 (Snow)";
		picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_flora_ca.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_Snow_Base_Soldier_1";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	class rhsgref_uniform_para_ttsko_urban;
	class CPC_Snow_Uniform_2 : rhsgref_uniform_para_ttsko_urban
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "M10 (Snow)";
		class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "CPC_Snow_Base_Soldier_2";
			containerClass = "Supply40";
			mass = 40;
		};
	};
	
	// Vests
	class VestItem;
	class Vest_Camo_Base;
	class CPC_Snow_Vest_1 : Vest_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "OTV (Snow)";
		picture = "\A3\characters_f_Beta\Data\UI\icon_V_I_Vest_01_ca.paa";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_Snow\Data\vest_1_02.paa"};
		model = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
		class ItemInfo: VestItem
		{
			uniformModel = "A3\Characters_F_Beta\INDEP\equip_ia_vest01";
			containerClass = "Supply100";
			mass = 70;
			hiddenSelections[] = {"camo"};
			descriptionShort = "Armor Level III";
			class HitpointsProtectionInfo
			{
				class Neck
				{
					HitpointName = "HitNeck";
					armor = 0;
					PassThrough = 0.9;
				};
				class Chest
				{
					HitpointName = "HitChest";
					armor = 22;
					PassThrough = 0.2;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 22;
					PassThrough = 0.2;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 3;
					passThrough = 0.6;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.5;
				};
			};
		};
	};
	
	// Headgears
	class rhs_beanie;
	class CPC_Snow_Beanie_1 : rhs_beanie
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "Beanie (Grey)";
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_Snow\Data\beanie_1_01.paa"};
	};
	class rhsusf_lwh_helmet_marpatd;
	class CPC_Snow_Helmet_1 : rhsusf_lwh_helmet_marpatd
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		displayName = "LWH (Snow)";
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_Snow\Data\helmet1_02.paa"};
	};
};