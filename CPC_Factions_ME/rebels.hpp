	class I_Soldier_base_F: SoldierGB {};
	class CPC_ME_I_REB_soldier_base_1 : I_Soldier_base_F
	{
		side = 2;
		scope = 1;
		scopeCurator = 0;
		accuracy = 3.9;
		sensitivity = 3;
		threat[] = { 1, 0.1, 0.1 };
		camouflage = 1.4;
		minFireTime = 7;
		cost = 300000;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_DAM";
		identityTypes[] = {"LanguagePER_F","Head_TK",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "CPC_ME_Uniform_M93_sand_1";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_ME\data\m93_desert01_co"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_ME_I_REB_soldier_base_2 : CPC_ME_I_REB_soldier_base_1
	{
		side = 2;
		scope = 1;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		uniformClass = "CPC_ME_Uniform_M93_sand_2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_ME\data\m93_desert02_co"};
	};