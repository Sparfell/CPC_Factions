	class B_Soldier_base_F: SoldierWB {};
	class CPC_ME_B_DAM_soldier_base : B_Soldier_base_F
	{
		side = 1;
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
		faction = "CPC_B_DAM";
		identityTypes[] = {"LanguagePER_F","Head_TK",""};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "rhsgref_uniform_3color_desert";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_ME_B_DAM_soldier_1 : CPC_ME_B_DAM_soldier_base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"V_TacVest_khk","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m21a","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_2 : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Rifleman (AKMS)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_light : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Rifleman (light)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"V_TacVest_khk","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CPC_ME_B_DAM_soldier_GL : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_FieldPack_cbr";
		weapons[] = {"rhs_weap_m21a_pbg40","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a_pbg40","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_M : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"CPC_ME_rhs_weap_svdp_wd_npz_KHS","Throw","Put"};
		respawnWeapons[] = {"CPC_ME_rhs_weap_svdp_wd_npz_KHS","Throw","Put"};
		magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_LAT : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Rifleman (M72A7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		weapons[] = {"rhs_weap_m21a","rhs_weap_m72a7","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_m72a7","Throw","Put"};
		magazines[] = {"rhs_m72a7_mag","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_m72a7_mag","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_AT : CPC_ME_B_DAM_soldier_base
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_ME_Backpack_KAM_AT";
		linkedItems[] = {"V_TacVest_khk","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_khk","rhsgref_helmet_pasgt_3color_desert","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m21a","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_rpg7_pgo","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","rhs_rpg7_PG7V_mag"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67","rhs_rpg7_PG7V_mag"};
	};
	class CPC_ME_B_DAM_soldier_AAT : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_KAM_AT";
	};
	class CPC_ME_B_DAM_soldier_MG : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_ME_Backpack_DAM_MG";
		weapons[] = {"rhs_weap_m84","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m84","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_AMG : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Asst. Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_DAM_MG";
		weapons[] = {"rhs_weap_m21a","Binocular","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","Binocular","Throw","Put"};
	};
	class CPC_ME_B_DAM_soldier_AR : CPC_ME_B_DAM_soldier_MG
	{
		displayName = "Autorifleman";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_DAM_AR";
		weapons[] = {"rhs_weap_m249","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m249","Throw","Put"};
		magazines[] = {"rhs_200rnd_556x45_M_SAW","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_200rnd_556x45_M_SAW","SmokeShell","SmokeShell","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_AAR : CPC_ME_B_DAM_soldier_AMG
	{
		displayName = "Asst. Autorifleman";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_DAM_AR";
	};
	class CPC_ME_B_DAM_soldier_AA : CPC_ME_B_DAM_soldier_1
	{
		displayName = "AA Specialist";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_m21a","rhs_weap_fim92","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21a","rhs_weap_fim92","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_fim92_mag"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShell","SmokeShell","rhs_mag_m67","rhs_fim92_mag"};
	};
	class CPC_ME_B_DAM_soldier_Medic : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_ME_Backpack_DAM_Medic";
	};
	class CPC_ME_B_DAM_soldier_crew : CPC_ME_B_DAM_soldier_base
	{
		displayName = "Crew";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_md2camo_radio","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_TL : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		backpack = "CPC_ME_Backpack_DAM_TL";
		weapons[] = {"CPC_ME_rhs_weap_m21a_pr_ACOG","Binocular","Throw","Put"};
		respawnWeapons[] = {"CPC_ME_rhs_weap_m21a_pr_ACOG","Binocular","Throw","Put"};
	};
	class CPC_ME_B_DAM_soldier_Officer : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Officer";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		cost = 450000;
		linkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhssaf_beret_green","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m21s","rhsusf_lrf_Vector21","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m21s","rhsusf_lrf_Vector21","Throw","Put"};
		magazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67"};
		respawnMagazines[] = {"rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","rhsgref_30rnd_556x45_m21","SmokeShellBlue","SmokeShellBlue","rhs_mag_m67","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_HeliPilot : CPC_ME_B_DAM_soldier_1
	{
		displayName = "Helicopter Pilot";
		scope = 2;
		scopeCurator = 2;
		ACE_GForceCoef = 0.55;
		linkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhsusf_hgu56p_visor_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhsusf_hgu56p_visor_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
	};
	class CPC_ME_B_DAM_soldier_Pilot : CPC_ME_B_DAM_soldier_HeliPilot
	{
		displayName = "Pilot";
		scope = 2;
		scopeCurator = 2;
		uniformClass = "rhsgref_uniform_olive";
		backpack = "rhs_d6_Parachute_backpack";
		linkedItems[] = {"V_TacVest_blk","rhs_zsh7a_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"V_TacVest_blk","rhs_zsh7a_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhsusf_weap_m9","Throw","Put"};
		respawnWeapons[] = {"rhsusf_weap_m9","Throw","Put"};
		magazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","SmokeShellBlue"};
		respawnMagazines[] = {"rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","rhsusf_mag_15Rnd_9x19_JHP","SmokeShellBlue"};
	};
	class CPC_ME_B_DAM_soldier_ENG : CPC_ME_B_DAM_soldier_light
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_ME_Backpack_DAM_ENG";
		weapons[] = {"rhs_weap_akms","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
		magazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
		respawnMagazines[] = {"rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","rhs_30Rnd_762x39mm","SmokeShell","SmokeShell","rhs_mag_m67"};
	};
	
	// Vehicles
	

	// Tracked
	class rhsgref_hidf_m113a3_unarmed;
	class CPC_ME_B_DAM_M113_unarmed : rhsgref_hidf_m113a3_unarmed
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_d_l_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa"};
		editorSubcategory = "rhs_EdSubcat_apc";
		VEHICLECARGOBIGDAM
	};
	class rhsgref_hidf_m113a3_m2;
	class CPC_ME_B_DAM_M113_m2 : rhsgref_hidf_m113a3_m2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_m113\data_new\m113a3_01_d_h_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_02_sup_d_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_03_d_co.paa","rhsusf\addons\rhsusf_m113\data_new\m113a3_int03_d_co.paa","rhsusf\addons\rhsusf_m113\data_new\m23_pintle_d_co.paa"};
		editorSubcategory = "rhs_EdSubcat_apc";
		VEHICLECARGOBIGDAM
	};
	class CPC_ME_B_DAM_ZSU : rhs_zsutank_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_crew","CPC_ME_B_DAM_soldier_crew","CPC_ME_B_DAM_soldier_crew","CPC_ME_B_DAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHSZSUNumberPlaces,'HandpaintBlack']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zsu234_aa.paa";
		VEHICLECARGOSMALLDAM
	};
	
	// Wheeled
	class rhs_btr70_vmf;
	class CPC_ME_B_DAM_BTR70 : rhs_btr70_vmf
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'HandpaintBlack']","['Label', cBTRPlnSymPlaces, 'Army',[0,0]]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_btr70_camo\data\btr70_1_sand_co.paa","rhsafrf\addons\rhs_btr70_camo\data\btr70_2_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"};
		VEHICLECARGOBIGDAM
	};
	class rhsgref_hidf_m1025;
	class CPC_ME_B_DAM_M1025 : rhsgref_hidf_m1025
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","",""};
		VEHICLECARGOSMALLDAM
	};
	class rhsgref_hidf_m1025_m2;
	class CPC_ME_B_DAM_M1025_m2 : rhsgref_hidf_m1025_m2
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m1025_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\mk64mount_d_co.paa","",""};
		VEHICLECARGOSMALLDAM
	};
	class rhsgref_hidf_M998_2dr_fulltop;
	class CPC_ME_B_DAM_M998_2dr_fulltop : rhsgref_hidf_M998_2dr_fulltop
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","",""};
		VEHICLECARGOSMALLDAM
	};
	class rhsgref_hidf_M998_2dr_halftop;
	class CPC_ME_B_DAM_M998_2dr_halftop : rhsgref_hidf_M998_2dr_halftop
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","",""};
		VEHICLECARGOSMALLDAM
	};
	class rhsgref_hidf_M998_2dr;
	class CPC_ME_B_DAM_M998_2dr : rhsgref_hidf_M998_2dr
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		HiddenSelectionsTextures[] = {"rhsusf\addons\rhsusf_hmmwv\textures\m998_exterior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\A2_parts_D_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\wheel_wranglermt_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_mainbody_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\gratting_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_interior_wood_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\m998_2drcargo_d_co.paa","rhsusf\addons\rhsusf_hmmwv\textures\tile_exmetal_d_co.paa","",""};
		VEHICLECARGOSMALLDAM
	};
	class rhsusf_M1117_base: Wheeled_APC_F
	{
		class AnimationSources: AnimationSources {};
	};
	class rhsusf_M1117_D: rhsusf_M1117_base
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret {};
		};
	};
	class CPC_ME_B_DAM_M1117 : rhsusf_M1117_D
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_1","CPC_ME_B_DAM_soldier_LAT","CPC_ME_B_DAM_soldier_TL"};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "CPC_ME_B_DAM_soldier_crew";
			};
		};
		class AnimationSources: AnimationSources
		{
			class DUKE_Hide
			{
				source = "user";
				mass = -20;
				displayName = "hide DUKE antennas";
				animPeriod = 1e-005;
				initPhase = 1;
			};
		};
		VEHICLECARGOBIGDAM
	};
	
	// boats
	class CPC_ME_B_DAM_ZODIAC : B_Boat_Transport_01_F
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		VEHICLECARGOSMALLDAM
	};
	
	// statics
	class CPC_ME_B_DAM_DSHKM : rhs_DSHKM_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_DSHKM_MiniTriPod : rhs_DSHkM_Mini_TriPod_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_m2staticmg_base;
	class CPC_ME_B_DAM_M2 : rhs_m2staticmg_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class RHS_M2StaticMG_MiniTripod_base;
	class CPC_ME_B_DAM_M2_MiniTriPod : RHS_M2StaticMG_MiniTripod_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_ZU23 : RHS_ZU23_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_Metis : rhs_Metis_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class RHS_Stinger_AA_pod_Base;
	class CPC_ME_B_DAM_Stinger_AA_pod : RHS_Stinger_AA_pod_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_D30 : rhs_D30_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_D30_AT : rhs_D30_AT_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_2";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class CPC_ME_B_DAM_2b14_82mm : rhs_2b14_82mm_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_DAM";
		crew = "CPC_ME_B_DAM_soldier_1";
        typicalCargo[] = {"CPC_ME_B_DAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};