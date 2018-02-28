
	
#define VEHICLECARGOREB \
	class TransportWeapons \
	{ \
		class _xx_rhs_weap_akm \
		{ \
			weapon = "rhs_weap_akm"; \
			count = 1; \
		}; \
	}; \
	class TransportItems \
	{ \
		class _xx_FirstAidKit \
		{ \
			name = "FirstAidKit"; \
			count = 4; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 5; \
		}; \
		class _xx_rhs_mag_rgd5 \
		{ \
			magazine = "rhs_mag_rgd5"; \
			count = 5; \
		}; \
		class _xx_rhs_30Rnd_762x39mm \
		{ \
			magazine = "rhs_30Rnd_762x39mm"; \
			count = 10; \
		}; \
	}; \
	class TransportBackpacks {};
	
#define VEHICLECARGOSMALLAMIL \
	class TransportWeapons \
	{ \
		class _xx_rhs_weap_m21a \
		{ \
			weapon = "rhs_weap_m21a"; \
			count = 1; \
		}; \
	}; \
	class TransportItems \
	{ \
		class _xx_FirstAidKit \
		{ \
			name = "FirstAidKit"; \
			count = 1; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 5; \
		}; \
		class _xx_SmokeShellBlue \
		{ \
			magazine = "SmokeShellBlue"; \
			count = 5; \
		}; \
		class _xx_rhs_mag_m67 \
		{ \
			magazine = "rhs_mag_m67"; \
			count = 5; \
		}; \
		class _xx_rhsgref_30rnd_556x45_m21 \
		{ \
			magazine = "rhsgref_30rnd_556x45_m21"; \
			count = 10; \
		}; \
		class _xx_rhs_mag_30Rnd_556x45_M855_Stanag \
		{ \
			magazine = "rhs_mag_30Rnd_556x45_M855_Stanag"; \
			count = 10; \
		}; \
	}; \
	class TransportBackpacks {};
	
#define VEHICLECARGOBIGAMIL \
	class TransportWeapons \
	{ \
		class _xx_rhs_weap_m21a \
		{ \
			weapon = "rhs_weap_m21a"; \
			count = 1; \
		}; \
		class _xx_rhs_weap_m72a7 \
		{ \
			weapon = "rhs_weap_m72a7"; \
			count = 1; \
		}; \
	}; \
	class TransportItems \
	{ \
		class _xx_FirstAidKit \
		{ \
			name = "FirstAidKit"; \
			count = 10; \
		}; \
	}; \
	class TransportMagazines \
	{ \
		class _xx_SmokeShell \
		{ \
			magazine = "SmokeShell"; \
			count = 10; \
		}; \
		class _xx_SmokeShellBlue \
		{ \
			magazine = "SmokeShellBlue"; \
			count = 5; \
		}; \
		class _xx_rhs_mag_m67 \
		{ \
			magazine = "rhs_mag_m67"; \
			count = 10; \
		}; \
		class _xx_rhsgref_30rnd_556x45_m21 \
		{ \
			magazine = "rhsgref_30rnd_556x45_m21"; \
			count = 20; \
		}; \
		class _xx_rhs_mag_30Rnd_556x45_M855_Stanag \
		{ \
			magazine = "rhs_mag_30Rnd_556x45_M855_Stanag"; \
			count = 10; \
		}; \
		class _xx_rhsusf_100Rnd_762x51_m62_tracer \
		{ \
			magazine = "rhsusf_100Rnd_762x51_m62_tracer"; \
			count = 4; \
		}; \
		class _xx_rhs_m72a7_mag \
		{ \
			magazine = "rhs_m72a7_mag"; \
			count = 1; \
		}; \
	}; \
	class TransportBackpacks \
	{ \
		class _xx_rhsgref_hidf_alicepack \
		{ \
			backpack = "rhsgref_hidf_alicepack"; \
			count = 1; \
		}; \
	};

class CfgVehicles
{
	class rhs_rpg_empty;
	class CPC_JUN_Backpack_AGUE_AT: rhs_rpg_empty
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhs_rpg7_PG7V_mag
			{
				magazine = "rhs_rpg7_PG7V_mag";
				count = 3;
			};
		};
	};
	class rhs_sidor;
	class CPC_JUN_Backpack_AGUE_MG: rhs_sidor
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhs_100Rnd_762x54mmR_green
			{
				magazine = "rhs_100Rnd_762x54mmR_green";
				count = 2;
			};
		};
	};
	class B_Messenger_Black_F;
	class CPC_JUN_Backpack_AGUE_GL: B_Messenger_Black_F
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhs_30Rnd_762x39mm
			{
				magazine = "rhs_30Rnd_762x39mm";
				count = 4;
			};
			class _xx_rhs_VOG25
			{
				magazine = "rhs_VOG25";
				count = 4;
			};
		};
	};
	class B_FieldPack_khk;
	class CPC_JUN_Backpack_AGUE_Medic: B_FieldPack_khk
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class rhssaf_alice_md2camo;
	class CPC_JUN_Backpack_AGUE_ENG: rhssaf_alice_md2camo
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
			class _xx_APERSTripMine_Wire_Mag
			{
				magazine = "APERSTripMine_Wire_Mag";
				count = 2;
			};
			class _xx_SatchelCharge_Remote_Mag
			{
				magazine = "SatchelCharge_Remote_Mag";
				count = 1;
			};
			class _xx_ATMine_Range_Mag
			{
				magazine = "ATMine_Range_Mag";
				count = 1;
			};
		};
	};
	class B_Carryall_oli;
	class CPC_JUN_Backpack_AMIL_AT: B_Carryall_oli
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhs_mag_smaw_HEAA
			{
				magazine = "rhs_mag_smaw_HEAA";
				count = 2;
			};
			class _xx_rhs_mag_smaw_SR
			{
				magazine = "rhs_mag_smaw_SR";
				count = 1;
			};
		};
	};
	class rhsgref_hidf_alicepack;
	class CPC_JUN_Backpack_AMIL_MG: rhsgref_hidf_alicepack
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhsusf_100Rnd_762x51_m62_tracer
			{
				magazine = "rhsusf_100Rnd_762x51_m62_tracer";
				count = 3;
			};
		};
	};
	class CPC_JUN_Backpack_AMIL_Medic: rhsgref_hidf_alicepack
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_Medikit
			{
				name = "Medikit";
				count = 1;
			};
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 10;
			};
		};
	};
	class CPC_JUN_Backpack_AMIL_ENG: rhsgref_hidf_alicepack
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportItems
		{
			class _xx_ToolKit
			{
				name = "ToolKit";
				count = 1;
			};
		};
		class TransportMagazines
		{
			class _xx_DemoCharge_Remote_Mag
			{
				magazine = "DemoCharge_Remote_Mag";
				count = 2;
			};
		};
	};
	class B_AssaultPack_rgr;
	class CPC_JUN_Backpack_AMIL_AR: B_AssaultPack_rgr
	{
		scope = 1;
		scopeArsenal = 0;
		class TransportMagazines
		{
			class _xx_rhs_200rnd_556x45_M_SAW
			{
				magazine = "rhs_200rnd_556x45_M_SAW";
				count = 2;
			};
		};
	};
	
	class Man;
	class CAManBase: Man
	{
		class HitPoints;
	};
	class SoldierEB: CAManBase {};
	class SoldierGB: CAManBase {};
	class SoldierWB: CAManBase {};
	
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
	};
	class Wheeled_APC_F: car_F {};
#include "guerilla.hpp"
#include "army.hpp"

};
	
