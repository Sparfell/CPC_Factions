
class CfgPatches {
	class CPC_Factions_CUP_Main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
	// legacy
	class CPC_Factions_Main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
	class CPC_Factions_CUP_ASRAI_patch
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
	class CPC_Factions_Compositions
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


class CfgMods
{
	class Mod_Base;
	class CPC_Factions_CUP : Mod_Base
	{
		picture = "CPC\Factions\CPC_Factions_CUP_Main\data\logo_2_03.paa";
		logo = "CPC\Factions\CPC_Factions_CUP_Main\data\logo_2_03.paa";
		logoOver = "CPC\Factions\CPC_Factions_CUP_Main\data\logo_2_03.paa";
		logoSmall = "CPC\Factions\CPC_Factions_CUP_Main\data\logo_2_03.paa";
		tooltipOwned = "CPC Factions CUP";
		action = "-";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "Additional Factions with CUP mods assets";
		hideName = 1;
		hidePicture = 0;
		name = "CPC Factions CUP";
		dir = "CPC Factions";
	};
};