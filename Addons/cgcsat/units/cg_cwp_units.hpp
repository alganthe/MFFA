////////////////////////////////////////////////////Base classes Men
    class O_Soldier_A_F;
    class O_Soldier_AA_F;
    class O_Soldier_AR_F;
    class O_Soldier_AT_F;
    class O_soldier_exp_F;
    class O_Soldier_F;
    class O_Soldier_GL_F;
    class O_Soldier_LAT_F;
    class O_Soldier_lite_F;
    class O_soldier_M_F;
    class O_soldier_PG_F;
    class O_soldier_repair_F;
    class O_Soldier_SL_F;
    class O_Soldier_TL_F;
    class O_soldier_UAV_F;
    class o_soldier_unarmed_f;
    class O_crew_F;
    class O_engineer_F;
    class O_medic_F;
    class O_officer_F;
    class O_Pilot_F;
    class O_helicrew_F;
    class O_helipilot_F;
    class O_HeavyGunner_F;
    class O_Sharpshooter_F;
    class o_survivor_F;
////////////////////////////////////////////////////Base classes Men (Sniper)
    class O_sniper_F;
    class O_ghillie_ard_F;
    class O_ghillie_lsh_F;
    class O_ghillie_sard_F;
    class O_spotter_F;
////////////////////////////////////////////////////Base classes Men (Recon)
    class O_recon_exp_F;
    class O_recon_JTAC_F;
    class O_recon_M_F;
    class O_recon_medic_F;
    class O_pathfinder_F;
    class O_recon_F;
    class O_recon_LAT_F;
    class O_recon_TL_F;
////////////////////////////////////////////////////Base classes Men (assist)
    class O_Soldier_AAR_F;
    class O_support_AMG_F;
    class O_support_AMort_F;
    class O_Soldier_AAA_F;
    class O_Soldier_AAT_F;
    class O_support_GMG_F;
    class O_support_MG_F;
    class O_support_Mort_F;
////////////////////////////////////////////////////Base classes Statics
    class O_static_AA_F;
    class O_static_AT_F;
    class O_Mortar_01_F;
    class O_Static_Designator_02_F;
    class O_GMG_01_F;
    class O_GMG_01_high_F;
    class O_GMG_01_A_F;
    class O_HMG_01_F;
    class O_HMG_01_high_F;
    class O_HMG_01_A_F;
////////////////////////////////////////////////////Base classes Statics
    class O_diver_F;
    class O_diver_exp_F;
    class O_diver_TL_F;
////////////////////////////////////////////////////Men
    class O_cg_cwp_Soldier_A_F: O_Soldier_A_F {
        side=0;
        backpack = "O_cg_Caryall_cwp_Ammo";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_A_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cwp_Soldier_AR_F: O_Soldier_AR_F {
        side=0;
        backpack = "O_cg_AssaultPack_cwp_AR";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AR_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        magazines[] = {"16Rnd_9x21_Mag","16Rnd_9x21_Mag","16Rnd_9x21_Mag","HandGrenade","HandGrenade","SmokeShell","SmokeShellRed","Chemlight_red","Chemlight_red"};
        class eventhandlers;
    };

    class O_cg_cwp_medic_F: O_medic_F {
        side=0;
        backpack = "O_cg_FieldPack_cwp_Medic";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_medic_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_crew_F: O_crew_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_crew_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_BandollierB_oli","H_HelmetCrew_O_cg","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_BandollierB_oli","H_HelmetCrew_O_cg","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class O_cg_cwp_engineer_F: O_engineer_F {
        side=0;
        backpack ="O_cg_Carryall_cwp_eng";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_engineer_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_soldier_exp_F: O_soldier_exp_F {
        side=0;
        backpack ="O_cg_Carryall_cwp_exp";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_soldier_exp_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_GL_F: O_Soldier_GL_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_GL_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_HeavyGunner_F: O_HeavyGunner_F {
        side=0;
        backpack ="";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_HeavyGunner_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_helicrew_F: O_helicrew_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_helicrew_F";
        uniformClass="O_cg_uniform4";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform4.paa)};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class O_cg_cwp_helipilot_F: O_helipilot_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_helipilot_F";
        uniformClass="O_cg_uniform4";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform4.paa)};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
        class Wounds
        {
            mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cwp_soldier_M_F: O_soldier_M_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_soldier_M_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_AA_F: O_Soldier_AA_F {
        side=0;
        backpack ="O_cg_FieldPack_cwp_AA";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AA_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_AT_F: O_Soldier_AT_F {
        side=0;
        backpack ="O_cg_FieldPack_cwp_AT";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AT_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_officer_F: O_officer_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_officer_F";
        uniformClass="O_cg_cwp_uniform3";
        model = "\A3\characters_F\OPFOR\o_officer.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform3_cwp.paa)};
        linkedItems[] = {"V_BandollierB_oli","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_oli","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
        class Wounds
        {
            mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cwp_soldier_PG_F: O_soldier_PG_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_soldier_PG_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
        class Wounds
        {
            mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cwp_Pilot_F: O_Pilot_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Pilot_F";
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class O_cg_cwp_soldier_repair_F: O_soldier_repair_F {
        side=0;
        backpack ="O_cg_FieldPack_cwp_repair";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_soldier_repair_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_F: O_Soldier_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_LAT_F: O_Soldier_LAT_F {
        side=0;
        backpack ="O_cg_FieldPack_cwp_LAT";
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_LAT_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_lite_F: O_Soldier_lite_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_lite_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_BandollierB_oli","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class o_cg_cwp_soldier_unarmed_f: o_soldier_unarmed_f {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="o_cg_cwp_soldier_unarmed_f";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_SL_F: O_Soldier_SL_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_SL_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Sharpshooter_F: O_Sharpshooter_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Sharpshooter_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class o_cg_cwp_survivor_F:o_survivor_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="o_cg_cwp_survivor_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cwp_Soldier_TL_F: O_Soldier_TL_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_TL_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_soldier_UAV_F: O_soldier_UAV_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="Men";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_soldier_UAV_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        class eventhandlers;
    };
////////////////////////////////////////////////////Men(Sniper)
    class O_cg_cwp_sniper_F: O_sniper_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenSniper";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_sniper_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class O_cg_cwp_spotter_F: O_spotter_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenSniper";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_spotter_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };
////////////////////////////////////////////////////Men (Recon)
    class O_cg_cwp_recon_exp_F: O_recon_exp_F {
        side=0;
        backpack = "O_cg_FieldPack_cwp_ReconExp";
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_exp";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_JTAC_F: O_recon_JTAC_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_JTAC_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_M_F: O_recon_M_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_M_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_medic_F: O_recon_medic_F {
        side=0;
        backpack = "O_cg_FieldPack_cwp_ReconMedic";
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_medic_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_pathfinder_F: O_pathfinder_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_pathfinder_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_F: O_recon_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_LAT_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_LAT_F: O_recon_LAT_F {
        side=0;
        backpack = "O_cg_FieldPack_cwp_LAT";
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_LAT_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_recon_TL_F: O_recon_TL_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenRecon";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_recon_TL_F";
        uniformClass="O_cg_cwp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cwp","cg_MICH_cwp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };
////////////////////////////////////////////////////Men (Support)
    class O_cg_cwp_Soldier_AAR_F: O_Soldier_AAR_F {
        side=0;
        backpack = "O_cg_Carryall_cwp_AAR";
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AAR_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_support_AMG_F: O_support_AMG_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_support_AMG_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_support_AMort_F: O_support_AMort_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_support_AMort_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_AAA_F: O_Soldier_AAA_F {
        side=0;
        backpack = "O_cg_Carryall_cwp_AAA";
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AAA_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_Soldier_AAT_F: O_Soldier_AAT_F {
        side=0;
        backpack = "O_cg_Carryall_cwp_AAT";
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_Soldier_AAT_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_support_GMG_F: O_support_GMG_F {
        side=0;
        faction="O_cg_cwp";
        vehicleclass="MenSupport";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cwp_support_GMG_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        scope=2;
        scopeCurator = 2;
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_support_MG_F: O_support_MG_F {
        faction="O_cg_cwp";
        author= ECSTRING(main,author);
        vehicleclass="MenSupport";
        _generalMacro="O_cg_cwp_support_MG_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cwp_support_Mort_F: O_support_Mort_F {
        faction="O_cg_cwp";
        author= ECSTRING(main,author);
        vehicleclass="MenSupport";
        _generalMacro="O_cg_cwp_Soldier_F";
        uniformClass="O_cg_cwp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","cg_MICH_cwp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };
////////////////////////////////////////////////////Static
    class O_cg_cwp_static_AA_F: O_static_AA_F {
        displayName = "Mini-Spike Launcher (AA)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_static_AA_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_static_AT_F: O_static_AT_F {
        displayName = "Mini-Spike Launcher (AT)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_static_AT_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_Mortar_01_F: O_Mortar_01_F {
        displayname = "Mk6 Mortar";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_Mortar_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_GMG_01_F: O_GMG_01_F {
        displayName = "XM307";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_GMG_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_GMG_01_high_F: O_GMG_01_high_F {
        displayName = "XM307 (High)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_GMG_01_high_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_HMG_01_F: O_HMG_01_F {
        displayName = "XM312";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_HMG_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cwp_HMG_01_high_F: O_HMG_01_high_F {
        displayName = "XM312 (High)";
        faction="O_cg_cwp";
        _generalMacro="O_cg_cwp_HMG_01_high_F";
        author= ECSTRING(main,author);
        crew="O_cg_cwp_Soldier_F";
        class eventhandlers;
    };
