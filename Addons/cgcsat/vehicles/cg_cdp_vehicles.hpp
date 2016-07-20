////////////////////////////////////////////////////Armored CDP
    class O_cg_cdp_MBT_02_arty_F: O_MBT_02_arty_F {
        DLC = "MFFA";
        displayName="2S9 Sochor (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_MBT_02_arty_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_t100_body_cdp.paa),
            QPATHTOF(data\cgcsat_sochor_turret_cdp.paa),
            QPATHTOF(data\cgcsat_T100_access_cdp.paa),
            QPATHTOF(data\cgcsat_turret_cdp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cdp_APC_Tracked_02_cannon_F: O_APC_Tracked_02_cannon_F {
        DLC = "MFFA";
        displayName="BM-2T Stalker (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_APC_Tracked_02_cannon_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_btr_body1_cdp.paa),
            QPATHTOF(data\cgcsat_btr_body2_cdp.paa),
            QPATHTOF(data\cgcsat_rcws30_cdp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cdp_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_rcws_F {
        DLC = "MFFA";
        displayName="Otokar ARMA (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_APC_Wheeled_02_rcws_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_marid_body_cdp.paa),
            QPATHTOF(data\cgcsat_marid_acc_cdp.paa),
            QPATHTOF(data\cgcsat_turret_cdp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cdp_MBT_02_cannon_F: O_MBT_02_cannon_F {
        DLC = "MFFA";
        displayName="T100 Black Eagle (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_MBT_02_cannon_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_t100_body_cdp.paa),
            QPATHTOF(data\cgcsat_T100_turret_cdp.paa),
            QPATHTOF(data\cgcsat_T100_access_cdp.paa)
        };
        class eventhandlers;
    };

    class O_cg_cdp_APC_Tracked_02_AA_F: O_APC_Tracked_02_AA_F {
        DLC = "MFFA";
        displayName="ZSU-35 Tigris (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_APC_Tracked_02_AA_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_crew_F";
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_btr_body1_cdp.paa),
            QPATHTOF(data\cgcsat_btr_body2_cdp.paa),
            QPATHTOF(data\cgcsat_tigris_aa_cdp.paa)
        };
        class eventhandlers;
    };

////////////////////////////////////////////////////Cars CDP
    class O_cg_cdp_MRAP_02_F: O_MRAP_02_F {
        DLC = "MFFA";
        displayName="Punisher (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_MRAP_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cdp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cdp.paa)
        };
    };

    class O_cg_cdp_MRAP_02_gmg_F: O_MRAP_02_gmg_F {
        DLC = "MFFA";
        displayName="Punisher (GMG)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_MRAP_02_gmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cdp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cdp.paa),
            QPATHTOF(data\cgcsat_turret_cdp.paa)
        };
    };

    class O_cg_cdp_MRAP_02_hmg_F: O_MRAP_02_hmg_F {
        DLC = "MFFA";
        displayName="Punisher (HMG)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_MRAP_02_hmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_ifrit_body_cdp.paa),
            QPATHTOF(data\cgcsat_ifrit_back_cdp.paa),
            QPATHTOF(data\cgcsat_turret_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_transport_F: O_Truck_02_transport_F {
        DLC = "MFFA";
        displayName="KamAZ Transport (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_transport_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_covered_F: O_Truck_02_covered_F {
        DLC = "MFFA";
        displayName="KamAZ Transport (covered)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_covered_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_box_F: O_Truck_02_box_F {
        DLC = "MFFA";
        displayName="KamAZ Repair (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_box_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_repair_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_medical_F: O_Truck_02_medical_F {
        DLC = "MFFA";
        displayName="KamAZ Medical (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_medical_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_back_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_Ammo_F: O_Truck_02_Ammo_F {
        DLC = "MFFA";
        displayName="KamAZ Ammo (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_Ammo_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_repair_cdp.paa)
        };
    };

    class O_cg_cdp_Truck_02_fuel_F: O_Truck_02_fuel_F {
        DLC = "MFFA";
        displayName="KamAZ Fuel (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Truck_02_fuel_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_zamac_front_cdp.paa),
            QPATHTOF(data\cgcsat_zamac_fuel_cdp.paa)
        };
    };

//////////////////////////////////////////////////// Boats CDP
    class O_cg_cdp_Boat_Transport_01_F: O_Boat_Transport_01_F {
        DLC = "MFFA";
        faction="O_cg_cdp";
        _generalMacro="O_cg_Boat_Transport_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_A_F";
        class eventhandlers;
    };

    class O_cg_cdp_Boat_Armed_01_hmg_F: O_Boat_Armed_01_hmg_F {
        DLC = "MFFA";
        faction="O_cg_cdp";
        _generalMacro="O_cg_Boat_Armed_01_hmg_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_A_F";
        class eventhandlers;
    };

//////////////////////////////////////////////////// Jet CDP
    class O_cg_cdp_Plane_CAS_02_F: O_Plane_CAS_02_F {
        DLC = "MFFA";
        displayName="Yak-130 (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Plane_CAS_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Pilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_neophron_body1_cdp.paa),
            QPATHTOF(data\cgcsat_neophron_body2_cdp.paa)
        };
    };

//////////////////////////////////////////////////// Helos CDP
    class O_cg_cdp_Heli_Light_02_F: O_Heli_Light_02_F {
        DLC = "MFFA";
        displayName="Ka-60 Kasatka (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Light_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_orca_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Light_02_unarmed_F: O_Heli_Light_02_unarmed_F {
        DLC = "MFFA";
        displayName="Ka-60 Kasatka (unarmed)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Light_02_unarmed_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_orca_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Attack_02_F: O_Heli_Attack_02_F {
        DLC = "MFFA";
        displayName="Mi-48 Kajman (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Attack_02_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_kajman_body1_cdp.paa),
            QPATHTOF(data\cgcsat_kajman_body2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_F: O_Heli_Transport_04_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_ammo_F: O_Heli_Transport_04_ammo_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Ammo)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_ammo_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_bench_F: O_Heli_Transport_04_bench_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Bench)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_bench_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_bench_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_box_F: O_Heli_Transport_04_box_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Cargo)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_box_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_covered_F: O_Heli_Transport_04_covered_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Transport)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_covered_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_fuel_F: O_Heli_Transport_04_fuel_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Fuel)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_fuel_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_fuel_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_medevac_F: O_Heli_Transport_04_medevac_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Medical)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_medevac_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class O_cg_cdp_Heli_Transport_04_repair_F: O_Heli_Transport_04_repair_F {
        DLC = "MFFA";
        displayName="Mi-290 Taru (Repair)(CDP)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Heli_Transport_04_repair_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_body1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_body2_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

//////////////////////////////////////////////////// Static CDP
    class Land_Pod_Heli_Transport_04_ammo_cg_cdp_F: Land_Pod_Heli_Transport_04_ammo_F {
        DLC = "MFFA";
        displayName="Taru Ammo Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_ammo_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_bench_cg_cdp_F: Land_Pod_Heli_Transport_04_bench_F {
        DLC = "MFFA";
        displayName="Taru Bench Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_bench_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_bench_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_box_cg_cdp_F: Land_Pod_Heli_Transport_04_box_F {
        DLC = "MFFA";
        displayName="Taru Cargo Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_box_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_covered_cg_cdp_F: Land_Pod_Heli_Transport_04_covered_F {
        DLC = "MFFA";
        displayName="Taru Transport Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_covered_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_fuel_cg_cdp_F: Land_Pod_Heli_Transport_04_fuel_F {
        DLC = "MFFA";
        displayName="Taru fuel Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_fuel_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_fuel_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_medevac_cg_cdp_F: Land_Pod_Heli_Transport_04_medevac_F {
        DLC = "MFFA";
        displayName="Taru Medical Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_medevac_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };

    class Land_Pod_Heli_Transport_04_repair_cg_cdp_F: Land_Pod_Heli_Transport_04_repair_F {
        DLC = "MFFA";
        displayName="Taru Repair Pod(CDP)";
        faction="O_cg_cdp";
        _generalMacro="Land_Pod_Heli_Transport_04_repair_cg_cdp_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_helipilot_F";
        class eventhandlers;
        hiddenSelectionsTextures[]= {
            QQPATHTOF(data\cgcsat_taru_box1_cdp.paa),
            QQPATHTOF(data\cgcsat_taru_box2_cdp.paa)
        };
    };
