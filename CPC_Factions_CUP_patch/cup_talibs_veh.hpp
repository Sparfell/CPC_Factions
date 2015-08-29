	class I_Soldier_base_F;
	class I_CPC_TALIB_base0_F : I_Soldier_base_F
	{
        _generalMacro = "I_CPC_TALIB_base0_F";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_opfor01_2_co.paa"};
	};
	class I_CPC_TALIB_base1_F : I_Soldier_base_F
	{
        _generalMacro = "I_CPC_TALIB_base1_F";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
	};
	class I_CPC_TALIB_base2_F : I_Soldier_base_F
	{
       _generalMacro = "I_CPC_TALIB_base2_F";
		scope = 1;
		scopeCurator = 1;
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
	};
	
	class SoldierGB;
	class CUP_I_TK_GUE_Soldier_Base: SoldierGB
	{
		identityTypes[] = {"LanguagePER_F", "CPC_TAKI_head", "G_CPC_talibs"};
		accuracy = 3.900000;
		sensitivity = 2;
		threat[] = {1, 0.100000, 0.100000};
		camouflage = 1.100000;
		minFireTime = 10;
		cost = 100000;
		asr_ai_level = 6;
		headgearList[] = {"CPC_TRYK_H_pakol2",0.6,"CPC_TRYK_H_wig",0.2,"CPC_H_Shemag_olive",0.1,"CPC_H_ShemagOpen_tan",0.1,"CPC_H_ShemagOpen_khk",0.1,"",0.3};
	};
	
	class CUP_I_TK_GUE_Soldier: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
	};
	class CUP_I_TK_GUE_Soldier_AAT: CUP_I_TK_GUE_Soldier
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
	};
	class CUP_I_TK_GUE_Soldier_AK_47S: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
	};
	class CUP_I_TK_GUE_Soldier_M16A2: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
	};
	class CUP_I_TK_GUE_Soldier_GL: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 130000;
	};
	class CUP_I_TK_GUE_Guerilla_Enfield: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
	};
	class CUP_I_TK_GUE_Soldier_AA: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 200000;
		threat[] = {1, 0.700000, 0.300000};
		icon = "iconManAT";
	};
	class CUP_I_TK_GUE_Soldier_AT: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		icon = "iconManAT";
		backpack = "CUP_B_RPG_Backpack";
	};
	class CUP_I_TK_GUE_Soldier_HAT: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		icon = "iconManAT";
	};
	class CUP_I_TK_GUE_Soldier_TL: CUP_I_TK_GUE_Soldier_Base
	{
		identityTypes[] = {"LanguagePER_F", "CPC_TAKI_head", "G_CPC_talibs"};
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "G_aviator", "Binocular", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "G_aviator", "Binocular", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 500000;
		camouflage = 1.100000;
		sensitivity = 3.200000;
		asr_ai_level = 5;
		icon = "iconManLeader";
		headgearList[] = {"CPC_TRYK_H_pakol2",1,"CPC_TRYK_H_wig",1,"",1};
	};
	class CUP_I_TK_GUE_Sniper: CUP_I_TK_GUE_Soldier_Base
	{
		identityTypes[] = {"LanguagePER_F", "CPC_TAKI_head", "G_CPC_talibs"};
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 150000;
		asr_ai_level = 3;
	};
	class CUP_I_TK_GUE_Soldier_AR: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		icon = "iconManMG";
		cost = 300000;
	};
	class CUP_I_TK_GUE_Soldier_MG: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_OD", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		icon = "iconManMG";
		cost = 400000;
	};
	class CUP_I_TK_GUE_Guerilla_Medic: CUP_I_TK_GUE_Soldier_Base
	{
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI3";
		linkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 300000;
		icon = "iconManMedic";
		picture = "pictureHeal";
		attendant = 1;
	};
	class CUP_I_TK_GUE_Commander: CUP_I_TK_GUE_Soldier_Base
	{
		identityTypes[] = {"LanguagePER_F", "CPC_TAKI_head"};
		uniformClass = "CPC_TALIB_TRYK_ZARATAKI2";
		linkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "CPC_TRYK_Beard_BK4", "Binocular", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		respawnLinkedItems[] = {"TRYK_LOC_AK_chestrig_TAN", "CPC_TRYK_Beard_BK4", "Binocular", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio",};
		cost = 500000;
		camouflage = 1.100000;
		sensitivity = 3.200000;
		asr_ai_level = 4;
		icon = "iconManLeader";
		headgearList[] = {"CPC_TRYK_H_pakol2",0.6,"CPC_TRYK_H_wig",0.2,"",0.2};
	};