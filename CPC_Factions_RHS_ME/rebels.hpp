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
		faction = "CPC_I_REB";
		identityTypes[] = {"LanguagePER_F","Head_TK",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "CPC_ME_Uniform_M93_sand_1";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_ME\data\m93_desert01_co"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		linkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearList[] =
		{
			"H_ShemagOpen_khk",1,
			"H_ShemagOpen_tan",1,
			"H_Shemag_olive",0.3,
			"H_Bandanna_sand",0.3,
			"H_Bandanna_cbr",0.3,
			"H_Cap_oli",0.3,
			"H_Cap_tan",0.3,
			"H_HeadBandage_stained_F",0.1,
			"H_HeadBandage_bloody_F",0.1
		};
	};
	class CPC_ME_I_REB_soldier_base_2 : CPC_ME_I_REB_soldier_base_1
	{
		side = 2;
		scope = 1;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		uniformClass = "CPC_ME_Uniform_M93_sand_2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_ME\data\m93_desert02_co"};
	};
	class CPC_ME_I_REB_soldier_base_3 : CPC_ME_I_REB_soldier_base_1
	{
		side = 2;
		scope = 1;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		uniformClass = "CPC_ME_Uniform_M93_sand_3";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_ME\data\m93_desert03_co"};
	};
	class CPC_ME_I_REB_soldier_base_4 : CPC_ME_I_REB_soldier_base_1
	{
		side = 2;
		scope = 1;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		uniformClass = "CPC_ME_Uniform_M93_sand_4";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_RHS_ME\data\m93_desert04_co"};
	};
	class CPC_ME_I_REB_soldier_1 : CPC_ME_I_REB_soldier_base_3
	{
		displayName = "Rifleman (AKM)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_2 : CPC_ME_I_REB_soldier_base_1
	{
		displayName = "Rifleman (AKMS)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_3 : CPC_ME_I_REB_soldier_base_4
	{
		displayName = "Rifleman (PM-63)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_pm63","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pm63","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_4 : CPC_ME_I_REB_soldier_base_2
	{
		displayName = "Rifleman (AK-74)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_GL : CPC_ME_I_REB_soldier_base_4
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_M : CPC_ME_I_REB_soldier_base_2
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_LAT1 : CPC_ME_I_REB_soldier_base_1
	{
		displayName = "Rifleman (M72A7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		weapons[] = {"rhs_weap_akm","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_m72a7_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_m72a7_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_LAT2 : CPC_ME_I_REB_soldier_base_1
	{
		displayName = "Rifleman (RPG-26)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		weapons[] = {"rhs_weap_pm63","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pm63","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_AT : CPC_ME_I_REB_soldier_base_2
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_ME_Backpack_KAM_AT";
		weapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_AAT : CPC_ME_I_REB_soldier_base_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_KAM_AT";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_MG : CPC_ME_I_REB_soldier_base_3
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_ME_Backpack_REB_MG";
		linkedItems[] = {"rhssaf_vest_md99_md2camo","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_AMG : CPC_ME_I_REB_soldier_base_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_KAM_MG";
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_Medic : CPC_ME_I_REB_soldier_base_2
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_ME_Backpack_REB_Medic";
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_TL : CPC_ME_I_REB_soldier_base_2
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		linkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman_radio","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman_radio","H_ShemagOpen_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_soldier_ENG : CPC_ME_I_REB_soldier_base_4
	{
		displayName = "Explosive specialist";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_ME_Backpack_DAM_ENG";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_I_REB_gaz66_zu23 : rhsgref_ins_gaz66_zu23
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_ME_I_REB_soldier_2";
			};
			class CargoTurret_01: CargoTurret_01
			{
				gunnerType = "CPC_ME_I_REB_soldier_3";
			};
			class CargoTurret_02: CargoTurret_02{};
		};
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_gaz66o : rhsgref_ins_gaz66o
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_4";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_gaz66o_flat : rhsgref_ins_gaz66o_flat
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_2";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_uaz_open : rhsgref_ins_uaz_open
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_4";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_uaz_dshkm : RHS_UAZ_DShKM_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
		class AnimationSources: AnimationSources
		{
			class light_hide
			{
				source = "user";
				mass = 1;
				initPhase = 1;
				animPeriod = 1e-011;
				displayName = "hide light covers";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {gunnerType="CPC_ME_I_REB_soldier_2";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\car.jpg";
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_uaz_spg9 : RHS_UAZ_SPG9_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_3";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4","CPC_ME_I_REB_soldier_1","CPC_ME_I_REB_soldier_LAT2","CPC_ME_I_REB_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_ind_co.paa"};
		class AnimationSources: AnimationSources
		{
			class light_hide
			{
				source = "user";
				mass = 1;
				initPhase = 1;
				animPeriod = 1e-011;
				displayName = "hide light covers";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {gunnerType="CPC_ME_I_REB_soldier_4";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\car.jpg";
		VEHICLECARGOREB
	};
	class CPC_ME_I_REB_ZODIAC : B_Boat_Transport_01_F
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_4"};
		VEHICLECARGOREB
	};
	
	// Statics
	class CPC_ME_I_REB_DSHKM : rhs_DSHKM_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_DSHKM_MiniTriPod : rhs_DSHkM_Mini_TriPod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_2";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_M2 : rhs_m2staticmg_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_3";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_M2_MiniTriPod : RHS_M2StaticMG_MiniTripod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_4";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_SPG9 : rhs_SPG9_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_4";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_SPG9M : rhs_SPG9M_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_ZU23 : RHS_ZU23_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_2";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_Metis : rhs_Metis_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_3";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_D30 : rhs_D30_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_4";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_D30_AT : rhs_D30_AT_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_2";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_I_REB_2b14_82mm : rhs_2b14_82mm_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_I_REB";
		crew = "CPC_ME_I_REB_soldier_1";
        typicalCargo[] = {"CPC_ME_I_REB_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};