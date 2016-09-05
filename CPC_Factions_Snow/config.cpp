
class CfgPatches {
	class CPC_Factions_Snow {
		units[] = 
		{
			
		};
		weapons[] = 
		{

		};
		requiredVersion = 0.1;
		requiredAddons[] = {"CPC_Factions_Main","A3_Characters_F","A3_Weapons_F_Ammoboxes","rhsgref_c_troops","rhs_c_troops","rhsusf_c_troops","CUP_Creatures_Military_Taki"};
	};
};


class CfgFactionClasses
{
	class CPC_I_InsSnow
	{
		displayName = "SYAJ";
		author = "CPC Faction";
		icon = "CPC\Factions\CPC_Factions_Snow\data\icon_flag_SYAJ.paa";
		priority = 1;
		side = 2;
	};
};

#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgGlasses.hpp"



