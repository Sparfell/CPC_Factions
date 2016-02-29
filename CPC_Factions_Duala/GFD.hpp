	class B_Soldier_base_F;
	class CPC_Duala_B_GFD_soldier_base : B_Soldier_base_F
	{
		side = 1;
		scope = 1;
		scopeCurator = 0;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		identityTypes[] = {"LanguageGRE_F","Head_African",""};
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\CUP_SLA_crewman.p3d";
		uniformClass = "CPC_Duala_Uniform_GFD_desert";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_SLA\data\sla_desert_co.paa"
		};
		icon = "iconMan";
		#include "\CUP\Creatures\hitpoints_uniform_none.h"
	};
	class CPC_Duala_B_GFD_soldier_1 : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Rifleman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_light : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Rifleman (light)";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Vest_Chestrig_1_Tan","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Tan","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_GL : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Grenadier";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2_GL","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2_GL","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};	
	class CPC_Duala_B_GFD_soldier_M : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Marksman";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Vest_Chestrig_1_Tan","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Tan","H_Booniehat_tan","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_Duala_arifle_FNFAL_railed_SandBshortdot","Throw","Put"};
		respawnWeapons[] = {"CPC_Duala_arifle_FNFAL_railed_SandBshortdot","Throw","Put"};
		magazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","CUP_20Rnd_762x51_FNFAL_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_LAT : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Rifleman (RPG-18)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_Duala_Backpack_GFD_LAT";
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","CUP_launch_RPG18","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CUP_launch_RPG18","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_RPG18_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_RPG18_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_AT : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "AT Specialist (RPG-7)";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManAT";
		backpack = "CPC_Duala_Backpack_GFD_AT";
		linkedItems[] = {"CPC_Vest_Chestrig_1_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","CPC_Duala_launch_RPG7V_PGO7V","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CPC_Duala_launch_RPG7V_PGO7V","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_PG7VM_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_PG7VM_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_AAT : CPC_Duala_B_GFD_soldier_1
	{
		displayName = "Asst. AT Specialist";
		scope = 2;
		scopeCurator = 2;
		backpack = "CPC_Duala_Backpack_GFD_AT";
	};
	class CPC_Duala_B_GFD_soldier_MG : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Machinegunner";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManMG";
		backpack = "CPC_Duala_Backpack_GFD_MG";
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_lmg_PKM","Throw","Put"};
		respawnWeapons[] = {"CUP_lmg_PKM","Throw","Put"};
		magazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_100Rnd_TE4_LRT4_762x54_PK_Tracer_Green_M","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_AA : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "AA Specialist";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","CUP_launch_Igla","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","CUP_launch_Igla","Throw","Put"};
		magazines[] = {"CUP_Igla_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_Igla_M","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_Medic : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Medic";
		scope = 2;
		scopeCurator = 2;
		picture = "pictureHeal";
		icon = "iconManMedic";
		attendant = 1;
		backpack = "CPC_Duala_Backpack_GFD_Medic";
		linkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Duala_Vest_Carrier_Tan","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M16A2","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","SmokeShell","SmokeShell"};
	};
	class CPC_Duala_B_GFD_soldier_crew : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Crew";
		scope = 2;
		scopeCurator = 2;
		linkedItems[] = {"CPC_Vest_Chestrig_1_Tan","CUP_H_SLA_TankerHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_1_Tan","CUP_H_SLA_TankerHelmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell"};
	};
	class CPC_Duala_B_GFD_soldier_TL : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Team leader";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManLeader";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CPC_Duala_arifle_M4A1_black_ACOG","binocular","Throw","Put"};
		respawnWeapons[] = {"CPC_Duala_arifle_M4A1_black_ACOG","binocular","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};	
	class CPC_Duala_B_GFD_soldier_Officer : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Officer";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManOfficer";
		linkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_SLA_Beret","rhs_googles_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_SLA_Beret","rhs_googles_black","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9","binocular","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M4A1","CUP_hgun_M9","binocular","Throw","Put"};
		magazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","30Rnd_556x45_Stanag_Tracer_Red","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_HeliPilot : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Helicopter Pilot";
		scope = 2;
		scopeCurator = 2;
		ACE_GForceCoef = 0.55;
		model 			= "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_USMC\CUP_USMC_Pilot.p3d";
		uniformClass 	= "CPC_Duala_Uniform_GFD_pilot";
		hiddenSelectionsTextures[] = {
			"\CUP\Creatures\People\Military\CUP_Creatures_People_Military_RACS\data\RACS_pilot_co.paa"
		};
		linkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_USMC_Helmet_Pilot","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_USMC_Helmet_Pilot","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_Pilot : CPC_Duala_B_GFD_soldier_HeliPilot
	{
		displayName = "Pilot";
		scope = 2;
		scopeCurator = 2;
		backpack = "B_Parachute";
		linkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_SLA_Pilot_Helmet","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CPC_Vest_Chestrig_2_Tan","CUP_H_SLA_Pilot_Helmet","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_hgun_M9","Throw","Put"};
		respawnWeapons[] = {"CUP_hgun_M9","Throw","Put"};
		magazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","CUP_15Rnd_9x19_M9","SmokeShellBlue","SmokeShellBlue","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	class CPC_Duala_B_GFD_soldier_ENG : CPC_Duala_B_GFD_soldier_base
	{
		displayName = "Sapper";
		scope = 2;
		scopeCurator = 2;
		icon = "iconManEngineer";
		picture = "pictureRepair";
		canDeactivateMines = 1;
		engineer = 1;
		backpack = "CPC_Duala_Backpack_GFD_ENG";
		linkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		respawnLinkedItems[] = {"CUP_V_I_RACS_Carrier_Vest_2","CUP_H_SLA_Helmet","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
		weapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		respawnWeapons[] = {"CUP_arifle_M4A1","Throw","Put"};
		magazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
		respawnMagazines[] = {"CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","CUP_30Rnd_556x45_Stanag","SmokeShell","SmokeShell","CUP_HandGrenade_RGD5","CUP_HandGrenade_RGD5"};
	};
	
	class CUP_BRDM2_Base;
	class CPC_Duala_B_GFD_BRDM2 : CUP_BRDM2_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_crew";
        typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_GL","CPC_Duala_B_GFD_soldier_TL"};
        hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\sla_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
	};
	class CUP_BRDM2_HQ_Base;
	class CPC_Duala_B_GFD_BRDM2_HQ : CUP_BRDM2_HQ_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_crew";
        typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
        hiddenselectionstextures[] = {"\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\textures\sla_brdm2_01_co.paa","\CUP\WheeledVehicles\CUP_WheeledVehicles_BRDM2\data\brdm2_02_co.paa"};
	};
	class CUP_T55_Base;
	class CPC_Duala_B_GFD_T55 : CUP_T55_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_crew";
        typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
		hiddenSelections[] ={"Camo1","Camo2"};
		hiddenSelectionsTextures[] ={"\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_body_TKG_co","\CUP\TrackedVehicles\CUP_TrackedVehicles_T55\data\t55_tower_TKG_co"};
	};
	class CUP_M113_Base;
	class CPC_Duala_B_GFD_M113 : CUP_M113_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_crew";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_GL","CPC_Duala_B_GFD_soldier_TL"};
		hiddenSelectionsTextures[] = 
		{
			"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_01_co.paa",
			"cup\TrackedVehicles\CUP_TrackedVehicles_M113\data\m113a3_02_co.paa"
		};
	};
	class CUP_ZSU23_Base;
	class CPC_Duala_B_GFD_ZSU23 : CUP_ZSU23_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_crew";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
		hiddenSelectionsTextures[] =
		{
			"CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_01_sla_co.paa",
			"CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_02_sla_co.paa",
			"CUP\TrackedVehicles\CUP_TrackedVehicles_ZSU23\Data\zsu_03_sla_co.paa"
		};	
	};
	class CUP_Su25_base;
	class CPC_Duala_B_GFD_Su25 : CUP_Su25_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_Pilot";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_Pilot"};
		hiddenSelectionsTextures[] = {"\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body1_sla1_co.paa","\CUP\AirVehicles\CUP_AirVehicles_Su25\data\textures\su25_body2_sla1_co.paa"};
	};
	class CUP_B_SA330_Puma_HC1_BAF;
	class CPC_Duala_B_GFD_SA330 : CUP_B_SA330_Puma_HC1_BAF
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_HeliPilot";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_GL","CPC_Duala_B_GFD_soldier_TL"};
		hiddenSelectionsTextures[] = {"CPC\Factions\CPC_Factions_Duala\data\330_skin00x_racs.paa"};
	};
	class CUP_UH1H_base;
	class CPC_Duala_B_GFD_UH1H : CUP_UH1H_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_HeliPilot";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_GL","CPC_Duala_B_GFD_soldier_TL"};
		hiddenSelectionsTextures[] =
		{
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\UH1D_in_CO.paa",
			"CUP\AirVehicles\CUP_AirVehicles_UH1H\data\default_co.paa"
		};
	};
	class CUP_LR_Transport_Base;
	class CPC_Duala_B_GFD_LR_Transport : CUP_LR_Transport_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_1";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_1","CPC_Duala_B_GFD_soldier_GL","CPC_Duala_B_GFD_soldier_TL"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_special_acr_co.paa"
		};
	};
	class CUP_LR_MG_Base;
	class CPC_Duala_B_GFD_LR_MG : CUP_LR_MG_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_1";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_special_acr_co.paa"
		};
	};
	class CUP_LR_Ambulance_Base;
	class CPC_Duala_B_GFD_LR_Ambulance : CUP_LR_Ambulance_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_Medic";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_Medic"};
		hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_base_acrs_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_amb_ext_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_LR\data\lr_special_acr_co.paa"
		};
	};
	class CUP_Ural_ZU23_Base;
	class CPC_Duala_B_GFD_Ural_ZU23 : CUP_Ural_ZU23_Base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_1";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
        hiddenSelectionsTextures[] = 
		{
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_kabina_khk_co.paa",
			"CUP\WheeledVehicles\CUP_WheeledVehicles_Ural\data\ural_open_co.paa"
		};
	};
	class CUP_M2StaticMG_base;
	class CPC_Duala_B_GFD_M2StaticMG : CUP_M2StaticMG_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_1";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
	};
	class CUP_M2StaticMG_MiniTripod_base;
	class CPC_Duala_B_GFD_M2StaticMG_MiniTripod : CUP_M2StaticMG_MiniTripod_base
	{
		side = 1;
		scope = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		faction = "CPC_B_GFD";
		crew = "CPC_Duala_B_GFD_soldier_1";
		typicalCargo[] = {"CPC_Duala_B_GFD_soldier_1"};
	};
