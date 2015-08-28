
class CfgPatches {
	class CPC_Factions_CUP_patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"cba_xeh", "CUP_Creatures_People_Military_DummyInfantrySet", "A3_Characters_F", "TRYK_Uniform", "maa_Uniform", "TRYK_BackPack", "TRYK_Shemaghs", "Kio_Balaclava", "US_ESS_Glasses_tryk", "TRYK_Uniform"};
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
		class PersianHead_A3_01;
		class CPC_PersianHead_A3_01 :PersianHead_A3_01
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_01a :PersianHead_A3_01
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_01b :PersianHead_A3_01
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_01c :PersianHead_A3_01
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class GreekHead_A3_02;
		class CPC_GreekHead_A3_02 :GreekHead_A3_02
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class GreekHead_A3_03;
		class CPC_GreekHead_A3_03 :GreekHead_A3_03
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class GreekHead_A3_06;
		class CPC_GreekHead_A3_06 :GreekHead_A3_06
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class WhiteHead_16;
		class CPC_WhiteHead_16 :WhiteHead_16
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class PersianHead_A3_02;
		class CPC_PersianHead_A3_02 :PersianHead_A3_02
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_02a :PersianHead_A3_02
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_02b :PersianHead_A3_02
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_02c :PersianHead_A3_02
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class PersianHead_A3_03;
		class CPC_PersianHead_A3_03 :PersianHead_A3_03
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_03a :PersianHead_A3_03
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_03b :PersianHead_A3_03
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
		class CPC_PersianHead_A3_03c :PersianHead_A3_03
		{
			Scope = 1;
			ScopeArsenal = 1;
			identityTypes[] = {"CPC_TAKI_head"};
		};
	};
};