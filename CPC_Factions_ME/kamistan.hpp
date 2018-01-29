	class O_Soldier_base_F: SoldierEB {};
	class CPC_ME_O_KAM_soldier_base : O_Soldier_base_F
	{
		side = 0;
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
		faction = "CPC_O_KAM";
		identityTypes[] = {"LanguagePER_F","Head_TK",""};
		model = "\rhsafrf\addons\rhs_infantry\rhs_msv_base.p3d";
		uniformClass = "rhs_uniform_m88_patchless";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		icon = "iconMan";
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_ME_O_KAM_soldier_1 : CPC_ME_O_KAM_soldier_base
	{
		displayName = "Rifleman (AK-74)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhs_6b5_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b5_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_2 : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Rifleman (AKS-74)";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_aks74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","Throw","Put"};
	};
	class CPC_ME_O_KAM_soldier_light : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Rifleman (light)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhs_vydra_3m","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_vydra_3m","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CPC_ME_O_KAM_soldier_GL : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_ak74_gp25","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74_gp25","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_M : CPC_ME_O_KAM_soldier_base
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhs_6b5_sniper_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b5_sniper_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_m76_pso","Throw","Put"};
		magazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhsgref_10Rnd_792x57_m76","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","rhssaf_10Rnd_792x57_m76_tracer","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_LAT : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Rifleman (RPG-26)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		weapons[] = {"rhs_weap_ak74","rhs_weap_rpg26","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","rhs_weap_rpg26","Throw","Put"};
		magazines[] = {"rhs_rpg26_mag","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_rpg26_mag","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_AT : CPC_ME_O_KAM_soldier_base
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_ME_Backpack_KAM_AT";
		linkedItems[] = {"rhs_6b5_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b5_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74","rhs_weap_rpg7_pgo","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","rhs_weap_rpg7_pgo","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5","rhs_rpg7_PG7V_mag"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5","rhs_rpg7_PG7V_mag"};
	};
	class CPC_ME_O_KAM_soldier_AAT : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_KAM_AT";
	};
	class CPC_ME_O_KAM_soldier_MG : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_ME_Backpack_KAM_MG";
		weapons[] = {"rhs_weap_pkm","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
		magazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_100Rnd_762x54mmR_green","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_AMG : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_ME_Backpack_KAM_MG";
		weapons[] = {"rhs_weap_ak74","rhssaf_zrak_rd7j","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","rhssaf_zrak_rd7j","Throw","Put"};
	};
	class CPC_ME_O_KAM_soldier_AA : CPC_ME_O_KAM_soldier_light
	{
		displayName = "AA Specialist";
		scope = 2;
		scopeCurator = 2;
		weapons[] = {"rhs_weap_aks74","rhs_weap_igla","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","rhs_weap_igla","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_9k38_rocket"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_9k38_rocket"};
	};
	class CPC_ME_O_KAM_soldier_Medic : CPC_ME_O_KAM_soldier_base
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_ME_Backpack_KAM_Medic";
		linkedItems[] = {"rhs_6b5_medic_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b5_medic_khaki","rhs_ssh68","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_ak74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_ak74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_crew : CPC_ME_O_KAM_soldier_base
	{
		displayName = "Crew";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"rhs_vydra_3m","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_vydra_3m","rhs_tsh4","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","Throw","Put"};
		magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_TL : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		backpack = "CPC_ME_Backpack_KAM_TL";
		weapons[] = {"rhs_weap_aks74","rhssaf_zrak_rd7j","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","rhssaf_zrak_rd7j","Throw","Put"};
	};
	class CPC_ME_O_KAM_soldier_Officer : CPC_ME_O_KAM_soldier_1
	{
		displayName = "Officer";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		cost = 450000;
		linkedItems[] = {"rhs_6b5_officer_khaki","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6b5_officer_khaki","rhs_fieldcap_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_aks74","rhs_weap_tt33","rhssaf_zrak_rd7j","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_aks74","rhs_weap_tt33","rhssaf_zrak_rd7j","Throw","Put"};
		magazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
		respawnMagazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","SmokeShell","SmokeShell","rhs_mag_rgd5","rhs_mag_rgd5"};
	};
	class CPC_ME_O_KAM_soldier_HeliPilot : CPC_ME_O_KAM_soldier_2
	{
		displayName = "Helicopter Pilot";
		scope = 2;
		scopeCurator = 2;
		ACE_GForceCoef = 0.55;
		linkedItems[] = {"rhs_6sh92_vsr_radio","rhs_zsh7a_mike_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_6sh92_vsr_radio","rhs_zsh7a_mike_green","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
	};
	class CPC_ME_O_KAM_soldier_Pilot : CPC_ME_O_KAM_soldier_HeliPilot
	{
		displayName = "Pilot";
		scope = 2;
		scopeCurator = 2;
		backpack = "rhs_d6_Parachute_backpack";
		linkedItems[] = {"rhs_vest_commander","rhs_zsh7a_mike_green_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"rhs_vest_commander","rhs_zsh7a_mike_green_alt","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"rhs_weap_tt33","Throw","Put"};
		respawnWeapons[] = {"rhs_weap_tt33","Throw","Put"};
		magazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8","SmokeShellOrange"};
		respawnMagazines[] = {"rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8","rhs_mag_762x25_8","SmokeShellOrange"};
	};
	class CPC_ME_O_KAM_soldier_ENG : CPC_ME_O_KAM_soldier_light
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_ME_Backpack_KAM_ENG";
	};
	
	// vehicles
	

	
	// Tracked
	class rhs_bmp1_vdv;
	class CPC_ME_O_KAM_BMP1 : rhs_bmp1_vdv
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Iraqi']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 0]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOBIGKAM
	};
	class rhs_bmp1d_vdv;
	class CPC_ME_O_KAM_BMP1D : rhs_bmp1d_vdv
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cBMP3NumberPlaces, 'Iraqi']","['Label', cBMPPlatoon, 'Platoon',0]","['Label', cBMPLeftBack, 'Army', 0]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_bmp_camo\data\bmp_1_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_2_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_3_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_4_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_5_desert_co.paa","rhsafrf\addons\rhs_bmp_camo\data\bmp_6_desert_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOBIGKAM
	};
	class rhs_a3t72tank_base: Tank_F
	{
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics;
					class CommanderMG;
				};
			};
		};
		class AnimationSources: AnimationSources {};
	};
	class rhs_t72ba_tv: rhs_a3t72tank_base {};
	class CPC_ME_O_KAM_T72B : rhs_t72ba_tv
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHST72NumberPlaces,'Iraqi']","['Label',cRHST72PlnSymPlaces, 'Platoon',0]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_01a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_02a_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_03_sand_co.paa","rhsafrf\addons\rhs_t72_camo\data\rhs_t72b_04_sand_co.paa","rhsafrf\addons\rhs_t72\data\rhs_t72b_05_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		class AnimationSources: AnimationSources
		{
			class hide_com_shield
			{
				animPeriod = 1e-010;
				displayName = "hide commander shield";
				initPhase = 1;
				mass = 1;
				source = "user";
			};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						gunnerType="rhsgref_ins_crew";
					};
					class CommanderMG: CommanderMG {};
				};
			};
		};
		VEHICLECARGOSMALLKAM
	};
	class rhs_zsutank_base;
	class CPC_ME_O_KAM_ZSU : rhs_zsutank_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHSZSUNumberPlaces,'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_01_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_02_des_co.paa","\rhsafrf\addons\rhs_a2port_armor_camo\data\zsu_03_des_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_zsu234_aa.paa";
		VEHICLECARGOSMALLKAM
	};
	
	// hélicos
	class RHS_Mi8AMT_VVS_Base;
	class CPC_ME_O_KAM_Mi8AMT : RHS_Mi8AMT_VVS_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_HeliPilot";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'Iraqi']"};
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8AMT_vvsc.paa";
		VEHICLECARGOBIGKAM
	};
	class RHS_Mi8_VVS_Base;
	class CPC_ME_O_KAM_Mi8 : RHS_Mi8_VVS_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_HeliPilot";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI8NumberPlaces,'Iraqi']"};
		hiddenselectionstextures[] = {"rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_body_g_camo4_co.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\camo\mi8_det_g_camo3_co.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_a2port_air\mi17\data\mi8_decals_ca.paa","a3\data_f\clear_empty.paa","a3\data_f\clear_empty.paa","rhsafrf\addons\rhs_decals\data\labels\aviation\vvs_ca.paa"};
		editorPreview = "rhsafrf\addons\rhs_editorPreviews\data\rhs_Mi8mt_vvsc.paa";
		VEHICLECARGOBIGKAM
	};
	class rhsgref_cdf_Mi24D_early;
	class CPC_ME_O_KAM_Mi24D : rhsgref_cdf_Mi24D_early
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_HeliPilot";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew","CPC_ME_O_KAM_soldier_crew"};
		rhs_decalParameters[] = {"['Number',cRHSAIRMI24NumberPlaces,'Iraqi']"};
		hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_001_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi35\Data\camo\mi24p_002_camo3_co.paa","\rhsafrf\addons\rhs_a2port_air\Mi17\data\mi8_det_w_co.paa"};
		VEHICLECARGOBIGKAM
	};
	
	// avions
	class RHS_Su25_VVS_Base;
	class CPC_ME_O_KAM_Su25 : RHS_Su25_VVS_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_Pilot";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_Pilot","CPC_ME_O_KAM_soldier_Pilot","CPC_ME_O_KAM_soldier_Pilot","CPC_ME_O_KAM_soldier_Pilot"};
		rhs_decalParameters[] = {"['Number',cRHSAIRSU25NumberPlaces,'Iraqi']"};
		hiddenselectionstextures[] = {"\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body1_camo1_co.paa","\rhsafrf\addons\rhs_a2port_air\su25\data\camo\su25_body2_camo1_co.paa","rhsafrf\addons\rhs_decals\Data\Labels\Misc\no_ca.paa"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\plane.jpg";
	};
	
	
	// Wheeled
	class rhsgref_ins_gaz66;
	class CPC_ME_O_KAM_gaz66 : rhsgref_ins_gaz66
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66o;
	class CPC_ME_O_KAM_gaz66o : rhsgref_ins_gaz66o
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66_ammo;
	class CPC_ME_O_KAM_gaz66_ammo : rhsgref_ins_gaz66_ammo
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOBIGKAM
	};
	class rhsgref_ins_gaz66_flat;
	class CPC_ME_O_KAM_gaz66_flat : rhsgref_ins_gaz66_flat
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66o_flat;
	class CPC_ME_O_KAM_gaz66o_flat : rhsgref_ins_gaz66o_flat
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66_r142;
	class CPC_ME_O_KAM_gaz66_r142 : rhsgref_ins_gaz66_r142
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66_zu23;
	class CPC_ME_O_KAM_gaz66_zu23 : rhsgref_ins_gaz66_zu23
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_gaz66_repair;
	class CPC_ME_O_KAM_gaz66_repair : rhsgref_ins_gaz66_repair
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cTrucksGaz4NumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"\rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa","\rhsafrf\addons\rhs_gaz66\data\tent_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa","\rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_BM21;
	class CPC_ME_O_KAM_BM21 : rhsgref_ins_BM21
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_bm21_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_ural;
	class CPC_ME_O_KAM_ural : rhsgref_ins_ural
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_plachta_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_ural_open;
	class CPC_ME_O_KAM_ural_open : rhsgref_ins_ural_open
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car_camo\data\ural_kabina_sand_co.paa","rhsafrf\addons\rhs_a2port_car_camo\data\ural_open_sand_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_uaz;
	class CPC_ME_O_KAM_uaz : rhsgref_ins_uaz
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class rhsgref_ins_uaz_open;
	class CPC_ME_O_KAM_uaz_open : rhsgref_ins_uaz_open
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
		VEHICLECARGOSMALLKAM
	};
	class CPC_ME_O_KAM_uaz_dshkm : RHS_UAZ_DShKM_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
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
			class MainTurret: MainTurret {gunnerType="CPC_ME_O_KAM_soldier_1";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\car.jpg";
		VEHICLECARGOSMALLKAM
	};
	class RHS_UAZ_AGS30_Base: RHS_UAZ_DShKM_Base{};
	class CPC_ME_O_KAM_uaz_ags : RHS_UAZ_AGS30_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa","rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_mount_001_co.paa"};
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
			class MainTurret: MainTurret {gunnerType="CPC_ME_O_KAM_soldier_1";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\car.jpg";
		VEHICLECARGOSMALLKAM
	};
	class RHS_UAZ_SPG9_Base: RHS_UAZ_DShKM_Base{};
	class CPC_ME_O_KAM_uaz_spg9 : RHS_UAZ_SPG9_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cDecals4CarsNumberPlaces, 'Iraqi']"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_a2port_car\uaz\data\uaz_main_co.paa"};
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
			class MainTurret: MainTurret {gunnerType="CPC_ME_O_KAM_soldier_1";};
			class CargoTurret_01: CargoTurret_01 {};
		};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\car.jpg";
		VEHICLECARGOSMALLKAM
	};
	class rhs_btr80_msv;
	class CPC_ME_O_KAM_BTR80 : rhs_btr80_msv
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_crew";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_1","CPC_ME_O_KAM_soldier_LAT","CPC_ME_O_KAM_soldier_TL"};
		rhs_decalParameters[] = {"['Number', cBTR3NumberPlaces, 'Iraqi']","['Label', cBTRBackArmSymPlaces, 'Army',0]","['Label', cBTRPlnSymPlaces, 'Platoon',0]"};
		hiddenSelectionsTextures[] = {"rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_01_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_02_des_co.paa","rhsafrf\addons\rhs_btr80_camo\data\rhs_btr80_03_des_co.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\RHS_Decals\Data\Labels\Misc\no_ca.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa","rhsafrf\addons\rhs_btr70\habar\data\sa_gear_02_co.paa"};
		VEHICLECARGOBIGKAM
	};
	
	// boats
	class B_Boat_Transport_01_F;
	class CPC_ME_O_KAM_ZODIAC : B_Boat_Transport_01_F
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		VEHICLECARGOSMALLKAM
	};
	
	// Statics
	class rhs_DSHKM_base;
	class CPC_ME_O_KAM_DSHKM : rhs_DSHKM_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_DSHkM_Mini_TriPod_base;
	class CPC_ME_O_KAM_DSHKM_MiniTriPod : rhs_DSHkM_Mini_TriPod_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class RHS_AGS30_TriPod_base;
	class CPC_ME_O_KAM_AGS30_TriPod : RHS_AGS30_TriPod_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_SPG9_base;
	class CPC_ME_O_KAM_SPG9 : rhs_SPG9_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_SPG9M_base;
	class CPC_ME_O_KAM_SPG9M : rhs_SPG9M_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class RHS_ZU23_base;
	class CPC_ME_O_KAM_ZU23 : RHS_ZU23_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_Metis_Base;
	class CPC_ME_O_KAM_Metis : rhs_Metis_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_Igla_AA_pod_Base;
	class CPC_ME_O_KAM_Igla_AA_pod : rhs_Igla_AA_pod_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_D30_base;
	class CPC_ME_O_KAM_D30 : rhs_D30_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_D30_AT_base;
	class CPC_ME_O_KAM_D30_AT : rhs_D30_AT_base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_light";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};
	class rhs_2b14_82mm_Base;
	class CPC_ME_O_KAM_2b14_82mm : rhs_2b14_82mm_Base
	{
		side = 0;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_O_KAM";
		crew = "CPC_ME_O_KAM_soldier_1";
        typicalCargo[] = {"CPC_ME_O_KAM_soldier_1"};
		editorPreview = "\A3\EditorPreviews_F\Data\CfgVehicles\Default\Turret.jpg";
	};