
class CfgPatches {
	class CPC_Factions_Compositions {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {};
	};
};

/*

utilisez ce code pour récupérer copier la config de votre composition dans le presse papier,
vous devez changer la position "centrecompo" en [x,y,z], utilisez un endroit plutôt au centre des objets :

centrecompo = [4669.51,2821.82,0];
bleep = [centrecompo,(centrecompo nearObjects 100)] call BIS_fnc_exportCfgGroups;

pour la faire spawner :
create3DENComposition [configPath, position] 
myComposition = create3DENComposition [
	configFile >> "CfgGroups" >> "Empty" >> "CPC_compo" >> "CPC_compo_civil" >> "CPC_compo_civil_ferme1",
	screenToWorld [0.5,0.5]
];

*/

/*
class CfgGroups
{
	class Empty {
        name = "Compositions";
        side = 8;
        class CPC_compo {
            name = "CPC";
            class CPC_compo_civil {
                name = "Civils";
                class CPC_compo_civil_ferme1 {
                    name = "Ferme (Altis)";
                    side = 8;
                    icon = "\a3\Ui_f\data\Map\VehicleIcons\iconVehicle_ca.paa";
                    class Object0 {
                        side = 8;
                        vehicle = "Land_CampingChair_V2_F";
                        rank = "";
                        position[] = {-3.125,-4.18262,0};
                        dir = 89.9197;
                    };
                    class Object1 {
                        side = 8;
                        vehicle = "Land_CampingTable_small_F";
                        rank = "";
                        position[] = {-3.85107,-4.00415,0};
                        dir = 283.939;
                    };
                    class Object2 {
                        side = 8;
                        vehicle = "Land_u_House_Small_02_V1_F";
                        rank = "";
                        position[] = {9.12793,-2.75366,0};
                        dir = 0;
                    };
                    class Object3 {
                        side = 8;
                        vehicle = "Flag_AAF_F";
                        rank = "";
                        position[] = {-7.19678,-3.18799,0};
                        dir = 0;
                    };
                    class Object4 {
                        side = 8;
                        vehicle = "Land_u_Addon_01_V1_F";
                        rank = "";
                        position[] = {-5.39795,3.39844,0};
                        dir = 0;
                    };
                    class Object5 {
                        side = 8;
                        vehicle = "Land_d_Stone_Shed_V1_F";
                        rank = "";
                        position[] = {6.75781,9.11743,0};
                        dir = 295.843;
                    };
                    class Object6 {
                        side = 8;
                        vehicle = "Land_d_Stone_HouseBig_V1_F";
                        rank = "";
                        position[] = {-5.59326,10.707,0};
                        dir = 180.682;
                    };
                };
			};
		};
	};
};

*/