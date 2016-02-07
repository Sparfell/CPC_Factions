class cfgWeapons
{
	/*
	class InventoryItem_Base_F;
	class ItemCore;
	
	class VestItem: InventoryItem_Base_F
	{
		type = VEST_SLOT;			/// vests fit into vest slot
		hiddenSelections[] = {};	/// no changeable selections by default
		armor = 5*0;				/// what protection does the vest provide
		passThrough = 1;			/// coef of damage passed to total damage
		hitpointName = "HitBody";	/// name of hitpoint shielded by the vest
	};

	class CPC_Vest_Camo_Base: ItemCore 
	{
		scope = 0;
		allowedSlots[] = {BACKPACK_SLOT}; 
		hiddenSelections[] = {"camo1", "camo2"}; 

		class ItemInfo: VestItem
		{
			hiddenSelections[] = {"camo1", "camo2"};
			armor = 0;
			passThrough = 1;
			mass = 0;
			containerClass = "Supply0";
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	*/
	class ItemInfo;
	
	class CUP_Vest_GER_Camo_Base;
	class CPC_Vest_Chestrig_1_Brown : CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Chestrig 1 (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
		hiddenSelectionsTextures[] = {
			"\CPC_Factions_Assets\data\chestrig_1_brown_tex1_co.paa",
			"\CPC_Factions_Assets\data\chestrig_1_brown_tex2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\CPC_Factions_Assets\data\chestrig_1_brown_tex1_co.paa",
				"\CPC_Factions_Assets\data\chestrig_1_brown_tex2_co.paa"
			};
			containerClass = "Supply110";
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
			armor = 0; 
			passThrough = 1.0; 
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class CPC_Vest_Chestrig_1_Tan : CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Chestrig 1 (Tan)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		model = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
		hiddenSelectionsTextures[] = {
			"\CPC_Factions_Assets\data\chestrig_1_tan_tex1_co.paa",
			"\CPC_Factions_Assets\data\chestrig_1_tan_tex2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\CPC_Factions_Assets\data\chestrig_1_tan_tex1_co.paa",
				"\CPC_Factions_Assets\data\chestrig_1_tan_tex2_co.paa"
			};
			containerClass = "Supply110";
			uniformModel   = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\CUP_Ger_Carrier_Rig_2.p3d";
			armor = 0; 
			passThrough = 1.0; 
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class CPC_Vest_Chestrig_2_Brown : CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Chestrig 2 (Brown)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		model = "\CPC_Factions_Assets\CPC_Chestrig_2.p3d";
		hiddenSelectionsTextures[] = {
			"\CPC_Factions_Assets\data\chestrig_1_brown_tex1_co.paa",
			"\CPC_Factions_Assets\data\chestrig_1_brown_tex2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\CPC_Factions_Assets\data\chestrig_1_brown_tex1_co.paa",
				"\CPC_Factions_Assets\data\chestrig_1_brown_tex2_co.paa"
			};
			containerClass = "Supply110";
			uniformModel   = "\CPC_Factions_Assets\CPC_Chestrig_2.p3d";
			armor = 0; 
			passThrough = 1.0; 
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
	
	class CPC_Vest_Chestrig_2_Tan : CUP_Vest_GER_Camo_Base
	{
		scope = 2;
		scopeArsenal = 2;
		dlc = "CPC_Factions";
		author = "CPC Faction";
		displayName = "Chestrig 2 (Tan)";
		picture = "\CUP\Creatures\People\Military\CUP_Creatures_People_Military_Germany\data\ui\icon_v_pouch_harness_ca.paa";
		model = "\CPC_Factions_Assets\CPC_Chestrig_2.p3d";
		hiddenSelectionsTextures[] = {
			"\CPC_Factions_Assets\data\chestrig_1_tan_tex1_co.paa",
			"\CPC_Factions_Assets\data\chestrig_1_tan_tex2_co.paa"
		};
		class ItemInfo: ItemInfo
		{
			hiddenSelectionsTextures[] = {
				"\CPC_Factions_Assets\data\chestrig_1_tan_tex1_co.paa",
				"\CPC_Factions_Assets\data\chestrig_1_tan_tex2_co.paa"
			};
			containerClass = "Supply110";
			uniformModel   = "\CPC_Factions_Assets\CPC_Chestrig_2.p3d";
			armor = 0; 
			passThrough = 1.0; 
			mass = 80;
			class HitpointsProtectionInfo
			{
				class Body
				{
					hitpointName = "HitBody";
					armor = 0;
					passThrough = 1;
				};
			};
		};
	};
};