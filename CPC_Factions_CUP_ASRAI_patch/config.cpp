
class CfgPatches {
	class CPC_Factions_CUP_ASRAI_patch {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"CUP_Creatures_Military_USMC","CUP_Creatures_Military_Taki","CUP_Creatures_Military_Germany"};
	};
};


class CfgVehicles
{
#include "USMC_units.hpp"
#include "TakiArmy_units.hpp"
#include "GER_units.hpp"
#include "TakiMilitia_units.hpp"
#include "TakyInsurgent_units.hpp"
#include "NAPA_units.hpp"	
};
