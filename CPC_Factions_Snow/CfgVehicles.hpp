class CfgVehicles
{
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierWB: CAManBase
	{
	};
	
	// Base classes
	class CPC_Snow_Base_Soldier_1 : SoldierWB
	{
		dlc = "CPC_Factions";
		author = "CPC Faction";
		scope = 1;
		side = 2;
		sensitivity = 3;
		threat[] = { 1, 0.1, 0.1 };
		camouflage = 1.1;
		minFireTime = 7;
		cost = 150000;
		icon = "iconMan";
		faction = "CPC_I_InsSnow";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m93";
		uniformClass = "CPC_Snow_Uniform_1";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_Snow\Data\uniform_1_04.paa"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	class CPC_Snow_Base_Soldier_2 : SoldierWB
	{
		dlc = "CPC_Factions";
		author = "CPC Faction";
		scope = 1;
		side = 1;
		sensitivity = 3;
		threat[] = { 1, 0.1, 0.1 };
		camouflage = 1.1;
		minFireTime = 7;
		cost = 150000;
		icon = "iconMan";
		faction = "BLU_F";
		Items[] = {"FirstAidKit"};
		RespawnItems[] = {"FirstAidKit"};
		model = "\rhsgref\addons\rhsgref_infantry\gear_gue\gue_m10";
		uniformClass = "CPC_Snow_Uniform_2";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_Snow\Data\uniform_2_01.paa"};
		#include "\CPC\Factions\hitpoints_uniform_none.h"
	};
	
	// Backpacks
	class B_Carryall_Base;
	class CPC_Snow_Backpack_1 : B_Carryall_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Carryall Backpack (Snow)";
		hiddenSelectionsTextures[] = {"\CPC\Factions\CPC_Factions_Snow\Data\backpack_1.paa"};
	};
};