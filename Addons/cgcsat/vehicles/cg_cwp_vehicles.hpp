////////////////////////////////////////////////////Armored CWP
    class O_cg_cwp_MBT_02_arty_F: O_MBT_02_arty_F {
        DLC = "MFFA";
        displayName="2S9 Sochor (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_MBT_02_arty_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_t100_body_cwp.paa),
            QPATHTOF(data\cgcsat_sochor_turret_cwp.paa),
            QPATHTOF(data\cgcsat_T100_access_cwp.paa),
            QPATHTOF(data\cgcsat_turret_cwp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cwp_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F {
        DLC = "MFFA";
        displayName="BM-2T Stalker (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_APC_Tracked_02_cannon_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_btr_body1_cwp.paa),
            QPATHTOF(data\cgcsat_btr_body2_cwp.paa),
            QPATHTOF(data\cgcsat_rcws30_cwp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cwp_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_rcws_F {
        DLC = "MFFA";
        displayName="Otokar ARMA (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_APC_Wheeled_02_rcws_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_marid_body_cwp.paa),
            QPATHTOF(data\cgcsat_marid_acc_cwp.paa),
            QPATHTOF(data\cgcsat_turret_cwp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cwp_MBT_02_cannon_F: O_MBT_02_cannon_F {
        DLC = "MFFA";
        displayName="T100 Black Eagle (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_MBT_02_cannon_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_t100_body_cwp.paa),
            QPATHTOF(data\cgcsat_T100_turret_cwp.paa),
            QPATHTOF(data\cgcsat_T100_access_cwp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cwp_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F {
        DLC = "MFFA";
        displayName="ZSU-35 Tigris (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_APC_Tracked_02_AA_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_btr_body1_cwp.paa),
            QPATHTOF(data\cgcsat_btr_body2_cwp.paa),
            QPATHTOF(data\cgcsat_tigris_aa_cwp.paa)
        };
        class eventhandlers;
    };

////////////////////////////////////////////////////Cars CWP
    class O_cg_cwp_MRAP_02_F: O_MRAP_02_F {
        DLC = "MFFA";
        displayName="Punisher (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_MRAP_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cwp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cwp.paa)
        };
    };

    class O_cg_cwp_MRAP_02_gmg_F: O_MRAP_02_gmg_F {
        DLC = "MFFA";
        displayName="Punisher (GMG)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_MRAP_02_gmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cwp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cwp.paa),
            QPATHTOF(data\cgcsat_turret_cwp.paa)
        };
    };

    class O_cg_cwp_MRAP_02_hmg_F: O_MRAP_02_hmg_F {
        DLC = "MFFA";
        displayName="Punisher (HMG)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_MRAP_02_hmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cwp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cwp.paa),
            QPATHTOF(data\cgcsat_turret_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_transport_F: O_Truck_02_transport_F {
        DLC = "MFFA";
        displayName="KamAZ Transport (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_transport_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_covered_F: O_Truck_02_covered_F {
        DLC = "MFFA";
        displayName="KamAZ Transport (covered)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_covered_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_box_F: O_Truck_02_box_F {
        DLC = "MFFA";
        displayName="KamAZ Repair (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_box_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_repair_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_medical_F: O_Truck_02_medical_F {
        DLC = "MFFA";
        displayName="KamAZ Medical (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_medical_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_Ammo_F: O_Truck_02_Ammo_F {
        DLC = "MFFA";
        displayName="KamAZ Ammo (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_Ammo_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_repair_cwp.paa)
        };
    };

    class O_cg_cwp_Truck_02_fuel_F: O_Truck_02_fuel_F {
        DLC = "MFFA";
        displayName="KamAZ Fuel (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Truck_02_fuel_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cwp.paa),
            QPATHTOF(data\cgcsat_zamac_fuel_cwp.paa)
        };
    };
//////////////////////////////////////////////////// Boats CWP
    class O_cg_cwp_Boat_Transport_01_F: O_Boat_Transport_01_F {
        DLC = "MFFA";
        faction="O_cg_cwp";
        _generalMacro="O_cg_Boat_Transport_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_A_F";
        class eventhandlers;
    };

    class O_cg_cwp_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F {
        DLC = "MFFA";
        faction="O_cg_cwp";
        _generalMacro="O_cg_Boat_Armed_01_hmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_A_F";
        class eventhandlers;
    };

//////////////////////////////////////////////////// Jet CWP
    class O_cg_cwp_Plane_CAS_02_F: O_Plane_CAS_02_F {
        DLC = "MFFA";
        displayName="Yak-130 (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Plane_CAS_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Pilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_neophron_body1_cwp.paa),
            QPATHTOF(data\cgcsat_neophron_body2_cwp.paa)
        };
    };
//////////////////////////////////////////////////// Helos CWP
    class O_cg_cwp_Heli_Light_02_F: O_Heli_Light_02_F {
        DLC = "MFFA";
        displayName="Ka-60 Kasatka (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Light_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_orca_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F {
        DLC = "MFFA";
        displayName="Ka-60 Kasatka (unarmed)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Light_02_unarmed_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_orca_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Attack_02_F: O_Heli_Attack_02_F {
        DLC = "MFFA";
        displayName="Mi-48 Kajman (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Attack_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_kajman_body1_cwp.paa),
            QPATHTOF(data\cgcsat_kajman_body2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_F: O_Heli_Transport_04_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_ammo_F: O_Heli_Transport_04_ammo_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Ammo)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_ammo_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_bench_F: O_Heli_Transport_04_bench_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Bench)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_bench_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_bench_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_box_F: O_Heli_Transport_04_box_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Cargo)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_box_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_covered_F: O_Heli_Transport_04_covered_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Transport)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_covered_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_fuel_F: O_Heli_Transport_04_fuel_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Fuel)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_fuel_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_fuel_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_medevac_F: O_Heli_Transport_04_medevac_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Medical)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_medevac_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class O_cg_cwp_Heli_Transport_04_repair_F: O_Heli_Transport_04_repair_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Repair)(CWP)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Heli_Transport_04_repair_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };
//////////////////////////////////////////////////// Static CWP
    class Land_Pod_Heli_Transport_04_ammo_cg_cwp_F: Land_Pod_Heli_Transport_04_ammo_F {
        DLC = "MFFA";
        displayName="Taru Ammo Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_ammo_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_bench_cg_cwp_F: Land_Pod_Heli_Transport_04_bench_F {
        DLC = "MFFA";
        displayName="Taru Bench Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_bench_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_bench_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_box_cg_cwp_F: Land_Pod_Heli_Transport_04_box_F {
        DLC = "MFFA";
        displayName="Taru Cargo Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_box_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_covered_cg_cwp_F: Land_Pod_Heli_Transport_04_covered_F {
        DLC = "MFFA";
        displayName="Taru Transport Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_covered_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_fuel_cg_cwp_F: Land_Pod_Heli_Transport_04_fuel_F {
        DLC = "MFFA";
        displayName="Taru fuel Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_fuel_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_fuel_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_medevac_cg_cwp_F: Land_Pod_Heli_Transport_04_medevac_F {
        DLC = "MFFA";
        displayName="Taru Medical Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_medevac_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_repair_cg_cwp_F: Land_Pod_Heli_Transport_04_repair_F {
        DLC = "MFFA";
        displayName="Taru Repair Pod(CWP)";
        faction="O_cg_cwp";
        _generalMacro="Land_Pod_Heli_Transport_04_repair_cg_cwp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]=
        {
            QPATHTOF(data\cgcsat_taru_box1_cwp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cwp.paa)
        };
    };
