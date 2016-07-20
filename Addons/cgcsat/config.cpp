#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        units[] = {
            ////////////////////////////////////////////////////////////////////////// CWP
            //////////////////////////////////////////////////// Men
            "O_cg_cwp_Soldier_A_F",
            "O_cg_cwp_Soldier_AR_F",
            "O_cg_cwp_medic_F",
            "O_cg_cwp_crew_F",
            "O_cg_cwp_engineer_F",
            "O_cg_cwp_soldier_exp_F",
            "O_cg_cwp_Soldier_GL_F",
            "O_cg_cwp_HeavyGunner_F",
            "O_cg_cwp_helicrew_F",
            "O_cg_cwp_helipilot_F",
            "O_cg_cwp_soldier_M_F",
            "O_cg_cwp_Soldier_AA_F",
            "O_cg_cwp_Soldier_AT_F",
            "O_cg_cwp_soldier_repair_F",
            "O_cg_cwp_Soldier_F",
            "O_cg_cwp_officer_F",
            "O_cg_cwp_soldier_PG_F",
            "O_cg_cwp_Pilot_F",
            "O_cg_cwp_Soldier_LAT_F",
            "O_cg_cwp_Soldier_lite_F",
            "o_cg_cwp_soldier_unarmed_f",
            "O_cg_cwp_Soldier_SL_F",
            "O_cg_cwp_Sharpshooter_F",
            "o_cg_cwp_survivor_F",
            "O_cg_cwp_Soldier_TL_F",
            "O_cg_cwp_soldier_UAV_F",

            //////////////////////////////////////////////////// Snipers
            "O_cg_cwp_sniper_F",
            "O_cg_cwp_spotter_F",

            ////////////////////////////////////////////////////Men (Recon)
            "O_cg_cwp_recon_exp_F",
            "O_cg_cwp_recon_JTAC_F",
            "O_cg_cwp_recon_M_F",
            "O_cg_cwp_recon_medic_F",
            "O_cg_cwp_pathfinder_F",
            "O_cg_cwp_recon_F",
            "O_cg_cwp_recon_LAT_F",
            "O_cg_cwp_recon_TL_F",

            //////////////////////////////////////////////////// Men (Support)
            "O_cg_cwp_Soldier_AAR_F",
            "O_cg_cwp_support_AMG_F",
            "O_cg_cwp_support_AMort_F",
            "O_cg_cwp_Soldier_AAA_F",
            "O_cg_cwp_Soldier_AAT_F",
            "O_cg_cwp_support_GMG_F",
            "O_cg_cwp_support_MG_F",
            "O_cg_cwp_support_Mort_F",

            //////////////////////////////////////////////////// Static
            "O_cg_cwp_static_AA_F",
            "O_cg_cwp_static_AT_F",
            "O_cg_cwp_Mortar_01_F",
            "O_cg_cwp_GMG_01_F",
            "O_cg_cwp_GMG_01_high_F",
            "O_cg_cwp_HMG_01_F",
            "O_cg_cwp_HMG_01_high_F",

            //////////////////////////////////////////////////// Armored CWP
            "O_cg_cwp_MBT_02_arty_F",
            "O_cg_cwp_APC_Tracked_02_cannon_F",
            "O_cg_cwp_APC_Wheeled_02_rcws_F",
            "O_cg_cwp_MBT_02_cannon_F",
            "O_cg_cwp_APC_Tracked_02_AA_F",

            //////////////////////////////////////////////////// Cars CWP
            "O_cg_cwp_MRAP_02_F",
            "O_cg_cwp_MRAP_02_gmg_F",
            "O_cg_cwp_MRAP_02_hmg_F",
            "O_cg_cwp_Truck_02_transport_F",
            "O_cg_cwp_Truck_02_covered_F",
            "O_cg_cwp_Truck_02_box_F",
            "O_cg_cwp_Truck_02_medical_F",
            "O_cg_cwp_Truck_02_Ammo_F",
            "O_cg_cwp_Truck_02_fuel_F",

            //////////////////////////////////////////////////// Boats CWP
            "O_cg_cwp_Boat_Transport_01_F",
            "O_cg_cwp_Boat_Armed_01_hmg_F",

            //////////////////////////////////////////////////// Jet CWP
            "O_cg_cwp_Plane_CAS_02_F",

            //////////////////////////////////////////////////// Helos CWP
            "O_cg_cwp_Heli_Light_02_F",
            "O_cg_cwp_Heli_Light_02_unarmed_F",
            "O_cg_cwp_Heli_Attack_02_F",
            "O_cg_cwp_Heli_Transport_04_F",
            "O_cg_cwp_Heli_Transport_04_ammo_F",
            "O_cg_cwp_Heli_Transport_04_bench_F",
            "O_cg_cwp_Heli_Transport_04_box_F",
            "O_cg_cwp_Heli_Transport_04_covered_F",
            "O_cg_cwp_Heli_Transport_04_fuel_F",
            "O_cg_cwp_Heli_Transport_04_medevac_F",
            "O_cg_cwp_Heli_Transport_04_repair_F",

            //////////////////////////////////////////////////// Static CWP
            "Land_Pod_Heli_Transport_04_ammo_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_bench_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_box_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_covered_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_fuel_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_medevac_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_repair_cg_cwp_F",

            //////////////////////////////////////////////////// Groups (Armor)
            "O_cg_cwp_TankPlatoon",
            "O_cg_cwp_TankPlatoon_AA",
            "O_cg_cwp_TankSection",
            "O_cg_cwp_SPGPlatoon_Scorcher",
            "O_cg_cwp_SPGSection_Scorcher",

            //////////////////////////////////////////////////// Groups (Infatry)
            "O_cg_cwp_InfSquad",
            "O_cg_cwp_InfSquad_Weapons",
            "O_cg_cwp_InfTeam",
            "O_cg_cwp_InfTeam_AT",
            "O_cg_cwp_InfTeam_AA",
            "O_cg_cwp_InfSentry",
            "O_cg_cwp_reconTeam",
            "O_cg_cwp_reconPatrol",
            "O_cg_cwp_reconSentry",
            "O_cgcsat_SniperTeam",
            "O_cg_cwp_support_CLS",
            "O_cg_cwp_support_EOD",
            "O_cg_cwp_support_ENG",
            "O_cg_cwp_recon_EOD",
            "O_cg_cwp_support_MG",
            "O_cg_cwp_support_GMG",
            "O_cg_cwp_support_Mort",

            //////////////////////////////////////////////////// Groups (Mechanized
            "O_cg_cwp_MechInfSquad",
            "O_cg_cwp_MechInf_AT",
            "O_cg_cwp_MechInf_AA",
            "O_cg_cwp_MechInf_Support",

            //////////////////////////////////////////////////// Groups (Motorized))
            "O_cg_cwp_MotInf_Team",
            "O_cg_cwp_MotInf_AT",
            "O_cg_cwp_MotInf_AA",
            "O_cg_cwp_MotInf_AA",
            "O_cg_cwp_MotInf_GMGTeam",
            "O_cg_cwp_MotInf_MortTeam",

            ////////////////////////////////////////////////////////////////////////// CDP
            //////////////////////////////////////////////////// Men
            "O_cg_cdp_Soldier_A_F",
            "O_cg_cdp_Soldier_AR_F",
            "O_cg_cdp_medic_F",
            "O_cg_cdp_crew_F",
            "O_cg_cdp_engineer_F",
            "O_cg_cdp_soldier_exp_F",
            "O_cg_cdp_Soldier_GL_F",
            "O_cg_cdp_HeavyGunner_F",
            "O_cg_cdp_helicrew_F",
            "O_cg_cdp_helipilot_F",
            "O_cg_cdp_soldier_M_F",
            "O_cg_cdp_Soldier_AA_F",
            "O_cg_cdp_Soldier_AT_F",
            "O_cg_cdp_soldier_repair_F",
            "O_cg_cdp_Soldier_F",
            "O_cg_cdp_officer_F",
            "O_cg_cdp_soldier_PG_F",
            "O_cg_cdp_Pilot_F",
            "O_cg_cdp_Soldier_LAT_F",
            "O_cg_cdp_Soldier_lite_F",
            "o_cg_cdp_soldier_unarmed_f",
            "O_cg_cdp_Soldier_SL_F",
            "O_cg_cdp_Sharpshooter_F",
            "o_cg_cdp_survivor_F",
            "O_cg_cdp_Soldier_TL_F",
            "O_cg_cdp_soldier_UAV_F",

            //////////////////////////////////////////////////// Snipers
            "O_cg_cdp_sniper_F",
            "O_cg_cdp_spotter_F",

            ////////////////////////////////////////////////////Men (Recon)
            "O_cg_cdp_recon_exp_F",
            "O_cg_cdp_recon_JTAC_F",
            "O_cg_cdp_recon_M_F",
            "O_cg_cdp_recon_medic_F",
            "O_cg_cdp_pathfinder_F",
            "O_cg_cdp_recon_F",
            "O_cg_cdp_recon_LAT_F",
            "O_cg_cdp_recon_TL_F",

            //////////////////////////////////////////////////// Men (Support)
            "O_cg_cdp_Soldier_AAR_F",
            "O_cg_cdp_support_AMG_F",
            "O_cg_cdp_support_AMort_F",
            "O_cg_cdp_Soldier_AAA_F",
            "O_cg_cdp_Soldier_AAT_F",
            "O_cg_cdp_support_GMG_F",
            "O_cg_cdp_support_MG_F",
            "O_cg_cdp_support_Mort_F",

            //////////////////////////////////////////////////// Static
            "O_cg_cdp_static_AA_F",
            "O_cg_cdp_static_AT_F",
            "O_cg_cdp_Mortar_01_F",
            "O_cg_cdp_GMG_01_F",
            "O_cg_cdp_GMG_01_high_F",
            "O_cg_cdp_HMG_01_F",
            "O_cg_cdp_HMG_01_high_F",

            //////////////////////////////////////////////////// Armored CDP
            "O_cg_cdp_MBT_02_arty_F",
            "O_cg_cdp_APC_Tracked_02_cannon_F",
            "O_cg_cdp_APC_Wheeled_02_rcws_F",
            "O_cg_cdp_MBT_02_cannon_F",
            "O_cg_cdp_APC_Tracked_02_AA_F",

            //////////////////////////////////////////////////// Cars CDP
            "O_cg_cdp_MRAP_02_F",
            "O_cg_cdp_MRAP_02_gmg_F",
            "O_cg_cdp_MRAP_02_hmg_F",
            "O_cg_cdp_Truck_02_transport_F",
            "O_cg_cdp_Truck_02_covered_F",
            "O_cg_cdp_Truck_02_box_F",
            "O_cg_cdp_Truck_02_medical_F",
            "O_cg_cdp_Truck_02_Ammo_F",
            "O_cg_cdp_Truck_02_fuel_F",

            //////////////////////////////////////////////////// Boats CDP
            "O_cg_cdp_Boat_Transport_01_F",
            "O_cg_cdp_Boat_Armed_01_hmg_F",

            //////////////////////////////////////////////////// Jet CDP
            "O_cg_cdp_Plane_CAS_02_F",

            //////////////////////////////////////////////////// Helos CDP
            "O_cg_cdp_Heli_Light_02_F",
            "O_cg_cdp_Heli_Light_02_unarmed_F",
            "O_cg_cdp_Heli_Attack_02_F",
            "O_cg_cdp_Heli_Transport_04_F",
            "O_cg_cdp_Heli_Transport_04_ammo_F",
            "O_cg_cdp_Heli_Transport_04_bench_F",
            "O_cg_cdp_Heli_Transport_04_box_F",
            "O_cg_cdp_Heli_Transport_04_covered_F",
            "O_cg_cdp_Heli_Transport_04_fuel_F",
            "O_cg_cdp_Heli_Transport_04_medevac_F",
            "O_cg_cdp_Heli_Transport_04_repair_F",

            //////////////////////////////////////////////////// Static CDP
            "Land_Pod_Heli_Transport_04_ammo_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_bench_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_box_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_covered_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_fuel_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_medevac_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_repair_cg_cdp_F",

            //////////////////////////////////////////////////// Groups (Armor)
            "O_cg_cdp_TankPlatoon",
            "O_cg_cdp_TankPlatoon_AA",
            "O_cg_cdp_TankSection",
            "O_cg_cdp_SPGPlatoon_Scorcher",
            "O_cg_cdp_SPGSection_Scorcher",

            //////////////////////////////////////////////////// Groups (Infatry)
            "O_cg_cdp_InfSquad",
            "O_cg_cdp_InfSquad_Weapons",
            "O_cg_cdp_InfTeam",
            "O_cg_cdp_InfTeam_AT",
            "O_cg_cdp_InfTeam_AA",
            "O_cg_cdp_InfSentry",
            "O_cg_cdp_reconTeam",
            "O_cg_cdp_reconPatrol",
            "O_cg_cdp_reconSentry",
            "O_cgcsat_SniperTeam",
            "O_cg_cdp_support_CLS",
            "O_cg_cdp_support_EOD",
            "O_cg_cdp_support_ENG",
            "O_cg_cdp_recon_EOD",
            "O_cg_cdp_support_MG",
            "O_cg_cdp_support_GMG",
            "O_cg_cdp_support_Mort",

            //////////////////////////////////////////////////// Groups (Mechanized
            "O_cg_cdp_MechInfSquad",
            "O_cg_cdp_MechInf_AT",
            "O_cg_cdp_MechInf_AA",
            "O_cg_cdp_MechInf_Support",

            //////////////////////////////////////////////////// Groups (Motorized))
            "O_cg_cdp_MotInf_Team",
            "O_cg_cdp_MotInf_AT",
            "O_cg_cdp_MotInf_AA",
            "O_cg_cdp_MotInf_AA",
            "O_cg_cdp_MotInf_GMGTeam",
            "O_cg_cdp_MotInf_MortTeam",

            ////////////////////////////////////////////////////////////////////////// CUP
            //////////////////////////////////////////////////// Men
            "O_cg_cup_Soldier_A_F",
            "O_cg_cup_Soldier_AAR_F",
            "O_cg_cup_Soldier_AAA_F",
            "O_cg_cup_Soldier_AAT_F",
            "O_cg_cup_Soldier_AR_F",
            "O_cg_cup_medic_F",
            "O_cg_cup_engineer_F",
            "O_cg_cup_soldier_exp_F",
            "O_cg_cup_Soldier_GL_F",
            "O_cg_cup_HeavyGunner_F",
            "O_cg_cup_soldier_M_F",
            "O_cg_cup_Soldier_AA_F",
            "O_cg_cup_Soldier_AT_F",
            "O_cg_cup_soldier_repair_F",
            "O_cg_cup_Soldier_F",
            "O_cg_cup_Soldier_LAT_F",
            "O_cg_cup_Soldier_SL_F",
            "O_cg_cup_Sharpshooter_F",
            "O_cg_cup_Soldier_TL_F",

            //////////////////////////////////////////////////// Groups (Infantry)
            "O_cg_cup_GuardSquad",
            "O_cg_cup_GuardTeam",
            "O_cg_cup_GuardSentry"

        };
        weapons[] = {
            ///////////////////////////////////////////////////// Uniforms
            "O_cg_cwp_uniform1",
            "O_cg_cwp_uniform2",
            "O_cg_cwp_uniform3",
            "O_cg_uniform1_cup",
            "O_cg_uniform2_cup",
            "O_cg_cdp_uniform1",
            "O_cg_cdp_uniform2",
            "O_cg_cdp_uniform3",
            "O_cg_uniform4",
            ///////////////////////////////////////////////////// Headgear
            "cg_MICH_cwp",
            "H_HelmetCrew_O_cg",
            "cg_MICH_cup",
            "cg_MICH_cdp",
            ///////////////////////////////////////////////////// Vests
            "cg_HarnessO_cwp",
            "cg_HarnessOGL_cwp",
            "cg_HarnessO_cdp",
            "cg_HarnessOGL_cdp",
            "cg_HarnessO_cup",
            "cg_HarnessOGL_cup"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"MFFA_main"};
        author = ECSTRING(main,author);
        url = "";
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class O_cg_cwp {
        displayName="CSAT(current gen wood)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };

    class O_cg_cdp {
        displayName="CSAT(current gen desert)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };

    class O_cg_cup {
        displayName="CSAT(current gen urban)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };
};

class CfgVehicles {
    #include "equipment\cgcsat_backpacks.hpp"
    #include "units\cg_cwp_units.hpp"
    #include "units\cg_cdp_units.hpp"
    #include "units\cg_cup_units.hpp"
    #include "vehicles\baseClasses.hpp"
    #include "vehicles\cg_cwp_vehicles.hpp"
    #include "vehicles\cg_cdp_vehicles.hpp"
};

class Extended_Init_Eventhandlers {
    #include "units\cg_cwp_EH.hpp"
    #include "units\cg_cdp_EH.hpp"
    #include "units\cg_cup_EH.hpp"
    #include "vehicles\cg_cwp_vehicles_EH.hpp"
    #include "vehicles\cg_cdp_vehicles_EH.hpp"
};

class CfgWeapons {
    #include "equipment\cgcsat_uniforms.hpp"
    #include "equipment\cgcsat_headgear.hpp"
    #include "equipment\cgcsat_vests.hpp"
};

class CfgGroups {
    class East {
        name="OPFOR";
        side=0;

        class O_cg_cwp {
            name="CG CSAT CWP";

            #include "groups\cwp\cg_cwp_g_armor.hpp"
            #include "groups\cwp\cg_cwp_g_infantry.hpp"
            #include "groups\cwp\cg_cwp_g_mechanized.hpp"
            #include "groups\cwp\cg_cwp_g_motorized.hpp"
        };

        class O_cg_cdp {
            name="CG CSAT CDP";

            #include "groups\cdp\cg_cdp_g_armor.hpp"
            #include "groups\cdp\cg_cdp_g_infantry.hpp"
            #include "groups\cdp\cg_cdp_g_mechanized.hpp"
            #include "groups\cdp\cg_cdp_g_motorized.hpp"
        };

        class O_cg_cup {
            name="CG CSAT CUP";

            #include "groups\cup\cg_cup_g_infantry.hpp"
        };
    };
};
