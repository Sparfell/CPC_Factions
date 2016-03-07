
class CfgPatches {
	class CPC_Factions_Duala {
		units[] = {
			"CPC_Duala_B_GFD_soldier_1",
			"CPC_Duala_B_GFD_soldier_2",
			"CPC_Duala_B_GFD_soldier_light",
			"CPC_Duala_B_GFD_soldier_night",
			"CPC_Duala_B_GFD_soldier_GL",
			"CPC_Duala_B_GFD_soldier_M",
			"CPC_Duala_B_GFD_soldier_LAT",
			"CPC_Duala_B_GFD_soldier_AT",
			"CPC_Duala_B_GFD_soldier_AAT",
			"CPC_Duala_B_GFD_soldier_AA",
			"CPC_Duala_B_GFD_soldier_MG",
			"CPC_Duala_B_GFD_soldier_Medic",
			"CPC_Duala_B_GFD_soldier_crew",
			"CPC_Duala_B_GFD_soldier_TL",
			"CPC_Duala_B_GFD_soldier_Officer",
			"CPC_Duala_B_GFD_soldier_HeliPilot",
			"CPC_Duala_B_GFD_soldier_Pilot",
			"CPC_Duala_B_GFD_soldier_ENG",
			"CPC_Duala_B_GFD_BRDM2",
			"CPC_Duala_B_GFD_BRDM2_HQ",
			"CPC_Duala_B_GFD_T55",
			"CPC_Duala_B_GFD_M113",
			"CPC_Duala_B_GFD_ZSU23",
			"CPC_Duala_B_GFD_Su25",
			"CPC_Duala_B_GFD_SA330",
			"CPC_Duala_B_GFD_UH1H",
			"CPC_Duala_B_GFD_LR_Transport",
			"CPC_Duala_B_GFD_LR_MG",
			"CPC_Duala_B_GFD_LR_Ambulance",
			"CPC_Duala_B_GFD_Ural_ZU23",
			"CPC_Duala_B_GFD_M2StaticMG",
			"CPC_Duala_B_GFD_M2StaticMG_MiniTripod",
			
			
			"CPC_Duala_O_NPFD_soldier_1",
			"CPC_Duala_O_NPFD_soldier_2",
			"CPC_Duala_O_NPFD_soldier_3",
			"CPC_Duala_O_NPFD_soldier_TL",
			"CPC_Duala_O_NPFD_soldier_AR",
			"CPC_Duala_O_NPFD_soldier_sniper",
			"CPC_Duala_O_NPFD_soldier_MG",
			"CPC_Duala_O_NPFD_soldier_Medic",
			"CPC_Duala_O_NPFD_soldier_AT",
			"CPC_Duala_O_NPFD_soldier_AAT",
			"CPC_Duala_O_NPFD_soldier_ENG",
			"CPC_Duala_O_NPFD_soldier_GL",
			"CPC_Duala_O_NPFD_soldier_4",
			"CPC_Duala_O_NPFD_soldier_AA",
			"CPC_Duala_O_NPFD_Datsun",
			"CPC_Duala_O_NPFD_Datsun_PK",
			"CPC_Duala_O_NPFD_Ural_1",
			"CPC_Duala_O_NPFD_Ural_2",
			"CPC_Duala_O_NPFD_Ural_3",
			"CPC_Duala_O_NPFD_Ural_Open_1",
			"CPC_Duala_O_NPFD_Ural_Open_2",
			"CPC_Duala_O_NPFD_Ural_Open_3",
			"CPC_Duala_O_NPFD_Ural_ZU23"
		};
		weapons[] = {
			"CPC_Duala_Vest_Carrier_Tan"
		};
		requiredVersion = 0.1;
		requiredAddons[] = {"CPC_Factions_Main", "cba_xeh", "A3_Characters_F","CUP_Creatures_Military_RACS","CUP_Creatures_Military_SLA","CUP_Weapons_Ammunition","CUP_Weapons_M16","CUP_Weapons_FNFAL","CUP_Weapons_Backpacks","CUP_Weapons_RPG7"};
	};
};

class CfgFactionClasses
{
	class CPC_B_GFD
	{
		displayName = "GFD";
		author = "CPC Faction";
		icon = "CPC\Factions\CPC_Factions_Duala\data\icon_flag_GFD.paa";
		priority = 1;
		side = 1;
	};
	class CPC_O_NPFD
	{
		displayName = "NPFD";
		author = "CPC Faction";
		icon = "CPC\Factions\CPC_Factions_Duala\data\icon_flag_GFD.paa";
		priority = 1;
		side = 0;
	};
};

class Extended_Init_Eventhandlers
{
	class CPC_Duala_O_NPFD_soldier_base
	{
		CPC_Duala_O_NPFD_soldier_base_init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
