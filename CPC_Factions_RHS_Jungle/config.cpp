
class CfgPatches
{
	class CPC_Factions_RHS_Jungle
	{
		units[] =
		{
			"CPC_JUN_I_AGUE_soldier_1",
			"CPC_JUN_I_AGUE_soldier_2",
			"CPC_JUN_I_AGUE_soldier_3",
			"CPC_JUN_I_AGUE_soldier_4",
			"CPC_JUN_I_AGUE_soldier_GL",
			"CPC_JUN_I_AGUE_soldier_M",
			"CPC_JUN_I_AGUE_soldier_LAT",
			"CPC_JUN_I_AGUE_soldier_AT",
			"CPC_JUN_I_AGUE_soldier_AAT",
			"CPC_JUN_I_AGUE_soldier_MG",
			"CPC_JUN_I_AGUE_soldier_AMG",
			"CPC_JUN_I_AGUE_soldier_Medic",
			"CPC_JUN_I_AGUE_soldier_TL",
			"CPC_JUN_I_AGUE_soldier_ENG",
			"CPC_JUN_I_AGUE_ZODIAC",
			"CPC_JUN_I_AGUE_DSHKM",
			"CPC_JUN_I_AGUE_DSHKM_MiniTriPod",
			"CPC_JUN_I_AGUE_M2",
			"CPC_JUN_I_AGUE_M2_MiniTriPod",
			"CPC_JUN_I_AGUE_SPG9",
			"CPC_JUN_I_AGUE_SPG9M",
			"CPC_JUN_I_AGUE_D30",
			"CPC_JUN_I_AGUE_D30_AT",
			"CPC_JUN_I_AGUE_2b14_82mm",
			
			"CPC_JUN_B_AMIL_soldier_1",
			"CPC_JUN_B_AMIL_soldier_2",
			"CPC_JUN_B_AMIL_soldier_light",
			"CPC_JUN_B_AMIL_soldier_M",
			"CPC_JUN_B_AMIL_soldier_LAT",
			"CPC_JUN_B_AMIL_soldier_AT",
			"CPC_JUN_B_AMIL_soldier_AAT",
			"CPC_JUN_B_AMIL_soldier_MG",
			"CPC_JUN_B_AMIL_soldier_AMG",
			"CPC_JUN_B_AMIL_soldier_AA",
			"CPC_JUN_B_AMIL_soldier_Medic",
			"CPC_JUN_B_AMIL_soldier_crew",
			"CPC_JUN_B_AMIL_soldier_TL",
			"CPC_JUN_B_AMIL_soldier_Officer",
			"CPC_JUN_B_AMIL_soldier_HeliPilot",
			"CPC_JUN_B_AMIL_soldier_Pilot",
			"CPC_JUN_B_AMIL_soldier_ENG",
			"CPC_JUN_B_AMIL_soldier_SF_1",
			"CPC_JUN_B_AMIL_soldier_SF_LAT",
			"CPC_JUN_B_AMIL_soldier_SF_GL",
			"CPC_JUN_B_AMIL_soldier_SF_Medic",
			"CPC_JUN_B_AMIL_soldier_SF_AR",
			"CPC_JUN_B_AMIL_soldier_SF_AAR",
			"CPC_JUN_B_AMIL_soldier_SF_TL",
			"CPC_JUN_B_AMIL_M113_unarmed",
			"CPC_JUN_B_AMIL_M113_m2",
			"CPC_JUN_B_AMIL_M1025",
			"CPC_JUN_B_AMIL_M1025_m2",
			"CPC_JUN_B_AMIL_M998_2dr_fulltop",
			"CPC_JUN_B_AMIL_M998_2dr_halftop",
			"CPC_JUN_B_AMIL_M998_2dr",
			"CPC_JUN_B_AMIL_M1117",
			"CPC_JUN_B_AMIL_ZODIAC",
			"CPC_JUN_B_AMIL_M2",
			"CPC_JUN_B_AMIL_M2_MiniTriPod",
			"CPC_JUN_B_AMIL_ZU23",
			"CPC_JUN_B_AMIL_TOW",
			"CPC_JUN_B_AMIL_M119",
			"CPC_JUN_B_AMIL_M252",
			"CPC_JUN_B_AMIL_UH60M",
			"CPC_JUN_B_AMIL_UH60M2",
			"CPC_JUN_B_AMIL_UH60M_MEV2",
			"CPC_JUN_B_AMIL_AH1Z"
		};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
		{
			"CPC_Factions_RHS_Main",
			"A3_Characters_F",
			"A3_Boat_F_Boat_Transport_01",
			"rhsgref_c_weapons",
			"rhsusf_c_a2port_car",
			"rhsusf_c_hmmwv",
			"rhsusf_c_m1117",
			"rhsusf_c_m113",
			"rhsusf_c_statics",
			"rhsusf_c_weapons",
			"RHS_US_A2_AirImport"
		};
	};
};

class CfgFactionClasses
{
	class CPC_I_AGUE
	{
		displayName = "Asian Guerrilla";
		author = "CPC Faction";
		priority = 1;
		side = 2;
	};
	class CPC_B_AMIL
	{
		displayName = "Asian Army";
		author = "CPC Faction";
		priority = 1;
		side = 1;
	};
};

class Extended_Init_Eventhandlers
{
	class CPC_JUN_I_AGUE_soldier_base_1
	{
		CPC_JUN_I_AGUE_soldier_base_1_init = "if (local (_this select 0)) then {[(_this select 0), [], nil] call BIS_fnc_unitHeadgear;};";
	};
};



#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGroups.hpp"
