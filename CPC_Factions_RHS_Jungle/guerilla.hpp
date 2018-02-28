	class I_Soldier_base_F: SoldierGB {};
	class CPC_JUN_I_AGUE_soldier_base_1 : I_Soldier_base_F
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
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		identityTypes[] = {"LanguageCHI_F","Head_Asian",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "rhsgref_uniform_olive";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		#include "\CPC\Factions\hitpoints_uniform_none.h"
		linkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		headgearList[] =
		{
			"H_Bandanna_khk",1,
			"H_Bandanna_gry",1,
			"H_Bandanna_cbr",1,
			"H_Bandanna_sgg",1,
			"H_Bandanna_camo",1,
			"rhssaf_bandana_md2camo",1,
			"rhssaf_bandana_smb",1,
			"H_Booniehat_khk",1,
			"H_Booniehat_oli",1,
			"rhs_fieldcap_digi2",1,
			"H_Hat_Safari_olive_F",0.1,
			"H_HeadBandage_stained_F",0.1,
			"H_HeadBandage_bloody_F",0.1
		};
	};
	class CPC_JUN_I_AGUE_soldier_1 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (AKM)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_2 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (AKMS)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_3 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (KAR98K)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhssaf_vest_md99_woodland","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_kar98k","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_kar98k","Throw","Put"};
		magazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","rhsgref_5Rnd_792x57_kar98k","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_4 : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (Izh18)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhssaf_vest_md99_md2camo","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_Izh18","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_Izh18","Throw","Put"};
		magazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","rhsgref_1Rnd_00Buck","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_GL : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AGUE_GL";
		weapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_M : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_LAT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Rifleman (RPG-26)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		linkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg26_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_AT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_JUN_Backpack_AGUE_AT";
		weapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","rhs_weap_rpg7_pgo","Throw","Put"};
		magazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg7_PG7V_mag","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_AAT : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AGUE_AT";
		linkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_MG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_JUN_Backpack_AGUE_MG";
		linkedItems[] = {"rhssaf_vest_md99_md2camo","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_AMG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_JUN_Backpack_AGUE_MG";
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_Medic : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_JUN_Backpack_AGUE_Medic";
		linkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_rifleman","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_TL : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		linkedItems[] = {"rhssaf_vest_md99_woodland_rifleman_radio","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_rifleman_radio","H_Bandanna_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_JUN_I_AGUE_soldier_ENG : CPC_JUN_I_AGUE_soldier_base_1
	{
		displayName = "Explosive specialist";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_JUN_Backpack_AGUE_ENG";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class B_Boat_Transport_01_F;
	class CPC_JUN_I_AGUE_ZODIAC : B_Boat_Transport_01_F
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_2"};
		VEHICLECARGOREB
	};
	
	// Statics
	class rhs_DSHKM_base;
	class CPC_JUN_I_AGUE_DSHKM : rhs_DSHKM_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_DSHkM_Mini_TriPod_base;
	class CPC_JUN_I_AGUE_DSHKM_MiniTriPod : rhs_DSHkM_Mini_TriPod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_m2staticmg_base;
	class CPC_JUN_I_AGUE_M2 : rhs_m2staticmg_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_3";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class RHS_M2StaticMG_MiniTripod_base;
	class CPC_JUN_I_AGUE_M2_MiniTriPod : RHS_M2StaticMG_MiniTripod_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_SPG9_base;
	class CPC_JUN_I_AGUE_SPG9 : rhs_SPG9_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_SPG9M_base;
	class CPC_JUN_I_AGUE_SPG9M : rhs_SPG9M_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_D30_base;
	class CPC_JUN_I_AGUE_D30 : rhs_D30_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_4";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_D30_AT_base;
	class CPC_JUN_I_AGUE_D30_AT : rhs_D30_AT_base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_2";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_2b14_82mm_Base;
	class CPC_JUN_I_AGUE_2b14_82mm : rhs_2b14_82mm_Base
	{
		side = 2;
		scope = 2;
		dlc = "CPC_Factions_RHS";
		author = "CPC Faction";
		faction = "CPC_I_AGUE";
		crew = "CPC_JUN_I_AGUE_soldier_1";
        typicalCargo[] = {"CPC_JUN_I_AGUE_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};