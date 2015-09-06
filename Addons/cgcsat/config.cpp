#include "script_component.hpp"

class cfgPatches
{
    class ADDON
    {
        units[] =
        {
             ///////////////////////////////////////////////////// Infantry
            "O_cg_sniper_F",
            "O_cg_ghillie_ard_F",
            "O_cg_ghillie_lsh_F",
            "O_cg_ghillie_sard_F",
            "O_cg_spotter_F",
            "O_cg_diver_F",
            "O_cg_diver_exp_F",
            "O_cg_diver_TL_F",
            /////////////////////////////// Wood
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
            "O_cg_cwp_officer_F",
            "O_cg_cwp_soldier_PG_F",
            "O_cg_cwp_Pilot_F",
            "O_cg_cwp_soldier_repair_F",
            "O_cg_cwp_Soldier_F",
            "O_cg_cwp_Soldier_LAT_F",
            "O_cg_cwp_Soldier_lite_F",
            "o_cg_cwp_soldier_unarmed_f",
            "O_cg_cwp_Soldier_SL_F",
            "O_cg_cwp_Sharpshooter_F",
            "o_cg_cwp_survivor_F",
            "O_cg_cwp_Soldier_TL_F",
            "O_cg_cwp_soldier_UAV_F",
            "O_cg_cwp_recon_exp_F",
            "O_cg_cwp_recon_JTAC_F",
            "O_cg_cwp_recon_M_F",
            "O_cg_cwp_recon_medic_F",
            "O_cg_cwp_pathfinder_F",
            "O_cg_cwp_recon_F",
            "O_cg_cwp_recon_LAT_F",
            "O_cg_cwp_recon_TL_F",
            "O_cg_cwp_Soldier_AAR_F",
            "O_cg_cwp_support_AMG_F",
            "O_cg_cwp_support_AMort_F",
            "O_cg_cwp_Soldier_AAA_F",
            "O_cg_cwp_Soldier_AAT_F",
            "O_cg_cwp_support_GMG_F",
            "O_cg_cwp_support_MG_F",
            "O_cg_cwp_support_Mort_F",
            "O_cg_cwp_static_AA_F",
            "O_cg_cwp_static_AT_F",
            "O_cg_cwp_Mortar_01_F",
            "O_cg_Static_Designator_02_F",
            "O_cg_cwp_GMG_01_F",
            "O_cg_cwp_GMG_01_high_F",
            "O_cg_GMG_01_A_F",
            "O_cg_cwp_HMG_01_F",
            "O_cg_cwp_HMG_01_high_F",
            "O_cg_HMG_01_A_F",
            ////////////////////////////// Urban
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
            ////////////////////////////// Desert
            "O_cg_cdp_Soldier_A_F",
            "O_cg_cdp_Soldier_AAR_F",
            "O_cg_cdp_Soldier_AAA_F",
            "O_cg_cdp_Soldier_AAT_F",
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
            "O_cg_cdp_recon_exp_F",
            "O_cg_cdp_recon_JTAC_F",
            "O_cg_cdp_recon_M_F",
            "O_cg_cdp_recon_medic_F",
            "O_cg_cdp_pathfinder_F",
            "O_cg_cdp_recon_F",
            "O_cg_cdp_recon_LAT_F",
            "O_cg_cdp_recon_TL_F",
            "O_cg_cdp_Soldier_AAR_F",
            "O_cg_cdp_support_AMG_F",
            "O_cg_cdp_support_AMort_F",
            "O_cg_cdp_Soldier_AAA_F",
            "O_cg_cdp_Soldier_AAT_F",
            "O_cg_cdp_support_GMG_F",
            "O_cg_cdp_support_MG_F",
            "O_cg_cdp_support_Mort_F",
            ///////////////////////////////////////////////////// Vehicles
            "O_cg_Boat_Transport_01_F",
            "O_cg_SDV_01_F",
            "O_cg_Boat_Armed_01_hmg_F",
            "O_cg_Lifeboat",
            ////////////////////////////// Wood
            "O_cg_cwp_MBT_02_arty_F",
            "O_cg_cwp_APC_Tracked_02_cannon_F",
            "O_cg_cwp_APC_Wheeled_02_rcws_F",
            "O_cg_cwp_MBT_02_cannon_F",
            "O_cg_cwp_APC_Tracked_02_AA_F",
            "O_cg_cwp_MRAP_02_F",
            "O_cg_cwp_MRAP_02_gmg_F",
            "O_cg_cwp_MRAP_02_hmg_F",
            "O_cg_cwp_Truck_02_transport_F",
            "O_cg_cwp_Truck_02_covered_F",
            "O_cg_cwp_Truck_02_box_F",
            "O_cg_cwp_Truck_02_medical_F",
            "O_cg_cwp_Truck_02_Ammo_F",
            "O_cg_cwp_Truck_02_fuel_F",
            "O_cg_cwp_Heli_Light_02_F",
            "O_cg_cwp_Heli_Light_02_unarmed_F",
            "O_cg_cwp_Plane_CAS_02_F",
            "O_cg_cwp_Heli_Attack_02_F",
            "O_cg_cwp_Heli_Transport_04_F",
            "O_cg_cwp_Heli_Transport_04_ammo_F",
            "O_cg_cwp_Heli_Transport_04_bench_F",
            "O_cg_cwp_Heli_Transport_04_box_F",
            "O_cg_cwp_Heli_Transport_04_covered_F",
            "O_cg_cwp_Heli_Transport_04_fuel_F",
            "O_cg_cwp_Heli_Transport_04_medevac_F",
            "O_cg_cwp_Heli_Transport_04_repair_F",
            "Land_Pod_Heli_Transport_04_ammo_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_bench_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_box_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_covered_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_fuel_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_medevac_cg_cwp_F",
            "Land_Pod_Heli_Transport_04_repair_cg_cwp_F",
            //////////////////////// Desert
            "O_cg_cdp_MBT_02_arty_F",
            "O_cg_cdp_APC_Tracked_02_cannon_F",
            "O_cg_cdp_APC_Wheeled_02_rcws_F",
            "O_cg_cdp_MBT_02_cannon_F",
            "O_cg_cdp_APC_Tracked_02_AA_F",
            "O_cg_cdp_MRAP_02_F",
            "O_cg_cdp_MRAP_02_gmg_F",
            "O_cg_cdp_MRAP_02_hmg_F",
            "O_cg_cdp_Truck_02_transport_F",
            "O_cg_cdp_Truck_02_covered_F",
            "O_cg_cdp_Truck_02_box_F",
            "O_cg_cdp_Truck_02_medical_F",
            "O_cg_cdp_Truck_02_Ammo_F",
            "O_cg_cdp_Truck_02_fuel_F",
            "O_cg_cdp_Heli_Light_02_F",
            "O_cg_cdp_Heli_Light_02_unarmed_F",
            "O_cg_cdp_Plane_CAS_02_F",
            "O_cg_cdp_Heli_Attack_02_F",
            "O_cg_cdp_Heli_Transport_04_F",
            "O_cg_cdp_Heli_Transport_04_ammo_F",
            "O_cg_cdp_Heli_Transport_04_bench_F",
            "O_cg_cdp_Heli_Transport_04_box_F",
            "O_cg_cdp_Heli_Transport_04_covered_F",
            "O_cg_cdp_Heli_Transport_04_fuel_F",
            "O_cg_cdp_Heli_Transport_04_medevac_F",
            "O_cg_cdp_Heli_Transport_04_repair_F",
            "Land_Pod_Heli_Transport_04_ammo_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_bench_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_box_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_covered_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_fuel_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_medevac_cg_cdp_F",
            "Land_Pod_Heli_Transport_04_repair_cg_cdp_F",
            /////////////////////////////////////////////////////  Backpacks
            //////////////////////// Wood
            "B_cg_Carryall_cwp",
            "B_cg_FieldPack_cwp",
            "B_cg_AssaultPack_cwp",
            "B_cg_FieldPack_cwp_Medic",
            "B_cg_Caryall_cwp_Ammo",
            "B_cg_AssaultPack_cwp_AR",
            "B_cg_FieldPack_cwp_AA",
            "B_cg_FieldPack_cwp_AT",
            "B_cg_FieldPack_cwp_LAT",
            "B_cg_Carryall_cwp_eng",
            "B_cg_Carryall_cwp_exp",
            "B_cg_FieldPack_cwp_repair",
            "B_cg_FieldPack_cwp_ReconExp",
            "B_cg_FieldPack_cwp_ReconMedic",
            "B_cg_Carryall_cwp_AAR",
            "B_cg_Carryall_cwp_AAA",
            "B_cg_Carryall_cwp_AAT",
            //////////////////////// Urban
            "B_cg_Carryall_cup",
            "B_cg_FieldPack_cup",
            "B_cg_AssaultPack_cup",
            "B_cg_AssaultPack_cup_AR",
            "B_cgcsat_FieldPack_cup_Medic",
            "B_cgcsat_Caryall_cup_Ammo",
            "B_cgcsat_FieldPack_cup_AA",
            "B_cgcsat_FieldPack_cup_AT",
            "B_cgcsat_FieldPack_cup_LAT",
            "B_cgcsat_Carryall_cup_eng",
            "B_cgcsat_Carryall_cup_exp",
            "B_cgcsat_FieldPack_cup_repair",
            "B_cgcsat_Carryall_cup_AAR",
            "B_cgcsat_Carryall_cup_AAA",
            "B_cgcsat_Carryall_cup_AAT",
            //////////////////////// Desert
            "B_cg_Carryall_cdp",
            "B_cg_FieldPack_cdp",
            "B_cg_AssaultPack_cdp",
            "B_cg_FieldPack_cdp_Medic",
            "B_cg_Caryall_cdp_Ammo",
            "B_cg_AssaultPack_cdp_AR",
            "B_cg_FieldPack_cdp_AA",
            "B_cg_FieldPack_cdp_AT",
            "B_cg_FieldPack_cdp_LAT",
            "B_cg_Carryall_cdp_eng",
            "B_cg_Carryall_cdp_exp",
            "B_cg_FieldPack_cdp_repair",
            "B_cg_FieldPack_cdp_ReconExp",
            "B_cg_FieldPack_cdp_ReconMedic",
            "B_cg_Carryall_cdp_AAR",
            "B_cg_Carryall_cdp_AAA",
            "B_cg_Carryall_cdp_AAT",
            ///////////////////////////////////////////////////// Groups
            "O_cg_SniperTeam",
            "O_cg_diverTeam",
            "O_cg_diverTeam_Boat",
            "O_cg_diverTeam_SDV",
            //////////////////////// Wood
            "O_cg_cwp_TankPlatoon",
            "O_cg_cwp_TankPlatoon_AA",
            "O_cg_cwp_TankSection",
            "O_cg_cwp_SPGPlatoon_Scorcher",
            "O_cg_cwp_SPGSection_Scorcher",
            "O_cg_cwp_InfSquad",
            "O_cg_cwp_InfSquad_Weapons",
            "O_cg_cwp_InfTeam",
            "O_cg_cwp_InfTeam_AT",
            "O_cg_cwp_InfTeam_AA",
            "O_cg_cwp_InfSentry",
            "O_cg_cwp_reconTeam",
            "O_cg_cwp_reconPatrol",
            "O_cg_cwp_reconSentry",
            "O_cg_cwp_support_CLS",
            "O_cg_cwp_support_EOD",
            "O_cg_cwp_support_ENG",
            "O_cg_cwp_recon_EOD",
            "O_cg_cwp_support_MG",
            "O_cg_cwp_support_GMG",
            "O_cg_cwp_support_Mort",
            "O_cg_cwp_MotInf_Team",
            "O_cg_cwp_MotInf_AT",
            "O_cg_cwp_MotInf_AA",
            "O_cg_cwp_MotInf_MGTeam",
            "O_cg_cwp_MotInf_GMGTeam",
            "O_cg_cwp_MotInf_MortTeam",
            "O_cg_cwp_MechInfSquad",
            "O_cg_cwp_MechInf_AT",
            "O_cg_cwp_MechInf_AA",
            "O_cg_cwp_MechInf_Support",
            //////////////////////// Urban
            "O_cg_cup_GuardSquad",
            "O_cg_cup_GuardTeam",
            "O_cg_cup_GuardSentry",
            //////////////////////// Desert
            "O_cg_cdp_TankPlatoon",
            "O_cg_cdp_TankPlatoon_AA",
            "O_cg_cdp_TankSection",
            "O_cg_cdp_SPGPlatoon_Scorcher",
            "O_cg_cdp_SPGSection_Scorcher",
            "O_cg_cdp_InfSquad",
            "O_cg_cdp_InfSquad_Weapons",
            "O_cg_cdp_InfTeam",
            "O_cg_cdp_InfTeam_AT",
            "O_cg_cdp_InfTeam_AA",
            "O_cg_cdp_InfSentry",
            "O_cg_cdp_reconTeam",
            "O_cg_cdp_reconPatrol",
            "O_cg_cdp_reconSentry",
            "O_cg_cdp_support_CLS",
            "O_cg_cdp_support_EOD",
            "O_cg_cdp_support_ENG",
            "O_cg_cdp_recon_EOD",
            "O_cg_cdp_support_MG",
            "O_cg_cdp_support_GMG",
            "O_cg_cdp_support_Mort",
            "O_cg_cdp_MotInf_Team",
            "O_cg_cdp_MotInf_AT",
            "O_cg_cdp_MotInf_AA",
            "O_cg_cdp_MotInf_MGTeam",
            "O_cg_cdp_MotInf_GMGTeam",
            "O_cg_cdp_MotInf_MortTeam",
            "O_cg_cdp_MechInfSquad",
            "O_cg_cdp_MechInf_AT",
            "O_cg_cdp_MechInf_AA",
            "O_cg_cdp_MechInf_Support"

        };
        weapons[] =
        {
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
        author[] = {ECSTRING(main,author)};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
class CfgFactionClasses
{
    class O_cgcsat
    {
        displayName="CSAT(current gen)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };
};
class CfgVehicleClasses
{
    class MenCWP
    {
        displayName="Men (CWP)";
    };
    class MenCUP
    {
        displayName="Men (CUP)";
    };
    class MenCDP
    {
        displayName="Men (CDP)";
    };
    class MenReconCWP
    {
        displayName="Men (Recon)(CWP)";
    };
    class MenReconCDP
    {
        displayName="Men (Recon)(CDP)";
    };
    class MenSupportCWP
    {
        displayName="Men (Support)(CWP)";
    };
    class MenSupportCDP
    {
        displayName="Men (Support)(CDP)";
    };
};
class CfgVehicles
{
    #include "equipment\cgcsat_backpacks.hpp"
    #include "units\cgcsat_units_cwp.hpp"
    #include "units\cgcsat_units_cup.hpp"
    #include "units\cgcsat_units_cdp.hpp"
    #include "units\cgcsat_vehicles.hpp"
};
class Extended_Init_Eventhandlers
{
    #include "units\cgcsat_EH.hpp"
    #include "units\cgcsat_vehicles_EH.hpp"
};
class CfgWeapons
{
    #include "equipment\cgcsat_uniforms.hpp"
    #include "equipment\cgcsat_headgear.hpp"
    #include "equipment\cgcsat_vests.hpp"
};
class CfgGroups
{
    class East
    {
        name="OPFOR";
        side=0;
        class O_cgcsat
        {
            name="CG CSAT";
            #include "groups\cgcsat_g_infantry.hpp"
            #include "groups\cgcsat_g_infantry_urban.hpp"
            #include "groups\cgcsat_g_armor.hpp"
            #include "groups\cgcsat_g_specops.hpp"
            #include "groups\cgcsat_g_motorized.hpp"
            #include "groups\cgcsat_g_mechanized.hpp"
        };
    };
};
