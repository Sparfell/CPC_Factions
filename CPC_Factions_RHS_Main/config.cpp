
class CfgPatches
{
	class CPC_Factions_RHS_Main
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Data_F"};
	};
};


class CfgMods
{
	class Mod_Base;
	class CPC_Factions_RHS : Mod_Base
	{
		picture = "CPC\Factions\CPC_Factions_RHS_Main\data\logo_2_03.paa";
		logo = "CPC\Factions\CPC_Factions_RHS_Main\data\logo_2_03.paa";
		logoOver = "CPC\Factions\CPC_Factions_RHS_Main\data\logo_2_03.paa";
		logoSmall = "CPC\Factions\CPC_Factions_RHS_Main\data\logo_2_03.paa";
		tooltipOwned = "CPC Factions RHS";
		action = "-";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "Additional Factions with RHS mods assets";
		hideName = 1;
		hidePicture = 0;
		name = "CPC Factions RHS";
		dir = "CPC Factions";
	};
};