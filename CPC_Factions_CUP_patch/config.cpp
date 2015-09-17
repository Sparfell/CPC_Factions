
class CfgPatches {
	class CPC_Factions_CUP_patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CPC_Factions_Main", "cba_xeh", "CUP_Creatures_People_Military_DummyInfantrySet", "A3_Characters_F", "TRYK_Uniform", "maa_Uniform", "TRYK_BackPack", "TRYK_Shemaghs", "Kio_Balaclava", "US_ESS_Glasses_tryk", "TRYK_Uniform"};
	};
};

class cfgWeapons
{
#include "cup_talibs_weap.hpp"
};

class CfgVehicles
{
#include "hide_cup_dummy.hpp"
#include "cup_talibs_veh.hpp"	
};

class CfgGlasses
{
#include "cup_talibs_glasses.hpp"
};

class Extended_Init_Eventhandlers
{
	class CUP_I_TK_GUE_Soldier_Base
	{
		CPC_Factions_CUP_Patch_init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	}
};

class CfgFaces
{
	class Default;
	class Man_A3: Default
	{
		class Default;
		class PersianHead_A3_01 :Default
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class PersianHead_A3_02 :Default
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class PersianHead_A3_03 :Default
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class GreekHead_A3_01;
		class GreekHead_A3_02 :GreekHead_A3_01
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class GreekHead_A3_03 :GreekHead_A3_01
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class GreekHead_A3_05;
		class GreekHead_A3_06 :GreekHead_A3_05
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
		class WhiteHead_01;
		class WhiteHead_16 :WhiteHead_01
		{
			identityTypes[] += {"CPC_TAKI_head"};
		};
	};
};