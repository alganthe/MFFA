////////////////////////////////////////////////////Men
    class O_cg_cdp_Soldier_A_F: O_cg_cwp_Soldier_A_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_Caryall_cdp_Ammo";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_A_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cdp_Soldier_AR_F: O_cg_cwp_Soldier_AR_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_AssaultPack_cdp_AR";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_AR_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_medic_F: O_cg_cwp_medic_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_FieldPack_cdp_Medic";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_medic_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_crew_F: O_cg_cwp_crew_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_crew_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O_cg","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_BandollierB_khk","H_HelmetCrew_O_cg","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_engineer_F: O_cg_cwp_engineer_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_Carryall_cdp_eng";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_engineer_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
         linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_soldier_exp_F: O_cg_cwp_soldier_exp_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_Carryall_cdp_exp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_soldier_exp_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_GL_F: O_cg_cwp_Soldier_GL_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_GL_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_HeavyGunner_F: O_cg_cwp_HeavyGunner_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_HeavyGunner_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_helicrew_F: O_cg_cwp_helicrew_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_helicrew_F";
        uniformClass="O_cg_uniform4";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform4.paa)};
        class eventhandlers;
    };

    class O_cg_cdp_helipilot_F: O_cg_cwp_helipilot_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_helipilot_F";
        uniformClass="O_cg_uniform4";
        model = "\A3\Characters_F\Common\coveralls.p3d";
        hiddenSelections[] = {"Camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform4.paa)};
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\characters_f\common\data\pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\Characters_F\Common\Data\W1_pilot_suit.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cdp_soldier_M_F: O_cg_cwp_soldier_M_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_soldier_M_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cdp_Soldier_AA_F: O_cg_cwp_Soldier_AA_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_FieldPack_cdp_AA";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_AA_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_AT_F: O_cg_cwp_Soldier_AT_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_FieldPack_cdp_AT";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_AT_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_soldier_repair_F: O_cg_cwp_soldier_repair_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_FieldPack_cdp_repair";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_soldier_repair_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_F: O_cg_cwp_Soldier_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_officer_F: O_cg_cwp_officer_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_officer_F";
        uniformClass="O_cg_cdp_uniform3";
        model = "\A3\characters_F\OPFOR\o_officer.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform3_cdp.paa)};
        linkedItems[] = {"V_BandollierB_khk","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"V_BandollierB_khk","H_Beret_ocamo","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        class eventhandlers;
        class Wounds {
            mat[] = {"A3\Characters_F\OPFOR\Data\officer.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat","A3\Characters_F\OPFOR\Data\officer_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cdp_soldier_PG_F: O_cg_cwp_soldier_PG_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_soldier_PG_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Pilot_F: O_cg_cwp_Pilot_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Pilot_F";
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_LAT_F: O_cg_cwp_Soldier_LAT_F {
        faction = "O_cg_cdp";
        backpack ="O_cg_FieldPack_cdp_LAT";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_LAT_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_lite_F: O_cg_cwp_Soldier_lite_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_lite_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_BandollierB_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_BandollierB_khk","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class o_cg_cdp_soldier_unarmed_f: o_cg_cwp_soldier_unarmed_f {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="o_cg_cdp_soldier_unarmed_f";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_SL_F: O_cg_cwp_Soldier_SL_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_SL_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Sharpshooter_F: O_cg_cwp_Sharpshooter_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Sharpshooter_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class o_cg_cdp_survivor_F:o_cg_cwp_survivor_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="o_cg_cdp_survivor_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_03.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        class eventhandlers;
        class Wounds
        {
            mat[] = {"A3\Characters_F\BLUFOR\Data\clothing1.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\BLUFOR\Data\clothing1_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\characters_f\common\data\coveralls.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Common\Data\coveralls_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat"};
            tex[] = {};
        };
    };

    class O_cg_cdp_Soldier_TL_F: O_cg_cwp_Soldier_TL_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_Soldier_TL_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_soldier_UAV_F: O_cg_cwp_soldier_UAV_F {
        faction = "O_cg_cdp";
        vehicleclass="MenCDP";
        _generalMacro="O_cg_cdp_soldier_UAV_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        respawnlinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","O_UavTerminal","NVGoggles_OPFOR"};
        class eventhandlers;
    };

//////////////////////////////////////////////////// Snipers
    class O_cg_cdp_sniper_F: O_sniper_F {
        side=0;
        faction="O_cg_cdp";
        vehicleclass="MenSniper";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_sniper_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cwp.paa)};
        linkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_oli","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        scope=2;
        scopeCurator = 2;
        class eventhandlers;
    };

    class O_cg_cdp_spotter_F: O_spotter_F {
        side=0;
        faction="O_cg_cdp";
        vehicleclass="MenSniper";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cdp_spotter_F";
        uniformClass="O_cg_cdp_uniform1";
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
    class O_cg_cdp_recon_exp_F: O_cg_cwp_recon_exp_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_FieldPack_cdp_ReconExp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_exp_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_JTAC_F: O_cg_cwp_recon_JTAC_F {
        faction = "O_cg_cdp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_JTAC_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_M_F: O_cg_cwp_recon_M_F {
        faction = "O_cg_cdp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_M_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_medic_F: O_cg_cwp_recon_medic_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_FieldPack_cdp_ReconMedic";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_medic_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_pathfinder_F: O_cg_cwp_pathfinder_F {
        faction = "O_cg_cdp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_pathfinder_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_F: O_cg_cwp_recon_F {
        faction = "O_cg_cdp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_LAT_F: O_cg_cwp_recon_LAT_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_FieldPack_cdp_LAT";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_LAT_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessO_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_recon_TL_F: O_cg_cwp_recon_TL_F {
        faction = "O_cg_cdp";
        vehicleclass="MenReconCDP";
        _generalMacro="O_cg_cdp_recon_TL_F";
        uniformClass="O_cg_cdp_uniform2";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"cg_HarnessOGL_cdp","cg_MICH_cdp","ItemGPS","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };
////////////////////////////////////////////////////Men (Support)
    class O_cg_cdp_Soldier_AAR_F: O_cg_cwp_Soldier_AAR_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_Carryall_cdp_AAR";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_Soldier_AAR_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_support_AMG_F: O_cg_cwp_support_AMG_F {
        faction = "O_cg_cdp";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_support_AMG_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_support_AMort_F: O_cg_cwp_support_AMort_F {
        faction = "O_cg_cdp";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_support_AMort_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_AAA_F: O_cg_cwp_Soldier_AAA_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_Carryall_cdp_AAA";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_Soldier_AAA_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_Soldier_AAT_F: O_cg_cwp_Soldier_AAT_F {
        faction = "O_cg_cdp";
        backpack = "O_cg_Carryall_cdp_AAT";
        vehicleclass="MenSupportCDP";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_cdp_Soldier_AAT_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_support_GMG_F: O_cg_cwp_support_GMG_F {
        faction = "O_cg_cdp";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_support_GMG_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_support_MG_F: O_cg_cwp_support_MG_F {
        faction = "O_cg_cdp";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_support_MG_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };

    class O_cg_cdp_support_Mort_F: O_cg_cwp_support_Mort_F {
        faction = "O_cg_cdp";
        vehicleclass="MenSupportCDP";
        _generalMacro="O_cg_cdp_support_Mort_F";
        uniformClass="O_cg_cdp_uniform1";
        model = "\A3\characters_F\BLUFOR\b_soldier_01.p3d";
        hiddenSelections[] = {"camo","insignia"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_uniform_cdp.paa)};
        linkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        respawnLinkedItems[] = {"V_Chestrig_khk","cg_MICH_cdp","ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles_OPFOR"};
        class eventhandlers;
    };
////////////////////////////////////////////////////Static
    class O_cg_cdp_static_AA_F: O_static_AA_F {
        displayName = "Mini-Spike Launcher (AA)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_static_AA_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_static_AT_F: O_static_AT_F {
        displayName = "Mini-Spike Launcher (AT)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_static_AT_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_Mortar_01_F: O_Mortar_01_F {
        displayname = "Mk6 Mortar";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_Mortar_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_GMG_01_F: O_GMG_01_F {
        displayName = "XM307";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_GMG_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_GMG_01_high_F: O_GMG_01_high_F {
        displayName = "XM307 (High)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_GMG_01_high_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_HMG_01_F: O_HMG_01_F {
        displayName = "XM312";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_HMG_01_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };

    class O_cg_cdp_HMG_01_high_F: O_HMG_01_high_F {
        displayName = "XM312 (High)";
        faction="O_cg_cdp";
        _generalMacro="O_cg_cdp_HMG_01_high_F";
        author= ECSTRING(main,author);
        crew="O_cg_cdp_Soldier_F";
        class eventhandlers;
    };
