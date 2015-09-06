class CfgMods
{
	class Mod_Base;
	class CPC_Factions : Mod_Base
	{
		picture = "\CPC_Factions_Main\data\logo_2_03.paa";
		logo = "\CPC_Factions_Main\data\logo_2_03.paa";
		logoOver = "\CPC_Factions_Main\data\logo_2_03.paa";
		logoSmall = "\CPC_Factions_Main\data\logo_2_03.paa";
		tooltipOwned = "CPC Factions";
		action = "-";
		dlcColor[] = {0.23,0.39,0.30,1};
		overview = "Additional Factions with mods assets";
		hideName = 1;
		hidePicture = 0;
		name = "CPC Factions";
		dir = "CPC Factions";
	};
};


class CfgPatches {
	class CPC_Factions_Main {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};


