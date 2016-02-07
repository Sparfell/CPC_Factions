
class CfgPatches {
	class CPC_Factions_CUP_patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CPC_Factions_Main", "cba_xeh", "A3_Characters_F", "CUP_Creatures_Military_TakiInsurgents"};
	};
};
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"






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

// Je garde ce qui est en dessous comme note.
/*
class Extended_Init_Eventhandlers
{
	class CUP_I_TK_GUE_Soldier_Base
	{
		CPC_Factions_CUP_Patch_init = "if (local (_this select 0)) then {[(_this select 0), [], []] call BIS_fnc_unitHeadgear;};";
	}
};
*/