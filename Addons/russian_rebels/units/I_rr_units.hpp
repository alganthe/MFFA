////////////////////////////////////////////////////Base classes (infantry)
    class I_G_officer_F;
    class I_G_Soldier_SL_F;
    class I_G_Soldier_F;
    class I_G_Soldier_M_F;
    class I_G_Soldier_GL_F;
    class I_G_medic_F;
    class I_G_Soldier_lite_F;
    class I_G_Soldier_LAT_F;
    class I_G_Soldier_AR_F;
    class I_G_Soldier_A_F;
    class I_G_engineer_F;
    class I_G_Soldier_exp_F;

////////////////////////////////////////////////////Infantry
    class I_rr_CL_F: I_G_officer_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_CL_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Cell leader";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_hoodie_Wood";
        model = "tryk_unit\data\hoodie_sp";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\fr\forcerecon_Wood_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_makarov_pmm",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_makarov_pmm",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_3(rhs_mag_9x18_12_57N181S),
            "HandGrenade"
        };
        respawnMagazines[]=
        {
            mag_3(rhs_mag_9x18_12_57N181S),
            "HandGrenade"
        };
        items[]=
        {
            "FirstAidKit"
        };
        respawnitems[] =
        {
            "FirstAidKit"
        };
        linkedItems[]=
        {
            "TRYK_V_Bulletproof_BLK",
            "ItemMap",
            "ItemGPS",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_Bulletproof_BLK",
            "ItemGPS",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_CL_u_F: I_rr_CL_F
    {
        _generalMacro="I_rr_CL_u_F";
        scope=2;
        scopeCurator = 2;
        displayName="Cell leader unarmed";
        weapons[]=
        {
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[]={};
        respawnMagazines[]={};
    };
    class I_rr_SL_F: I_G_Soldier_SL_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_SL_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Squad leader";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_hoodie_Wood";
        model = "tryk_unit\data\hoodie_sp";
        hiddenSelections[] = {"camo1"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\fr\forcerecon_Wood_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_ak74m",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_ak74m",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_11(rhs_30Rnd_545x39_AK),
            mag_2(HandGrenade)
        };
        respawnMagazines[]=
        {
            mag_11(rhs_30Rnd_545x39_AK),
            mag_2(HandGrenade)
        };
        linkedItems[]=
        {
            "TRYK_V_tacSVD_BK",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_tacSVD_BK",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_soldier_F: I_G_Soldier_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_soldier_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j_blk";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\js\ins_lopotev_blk_co.paa","tryk_unit\data\clothing_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akm",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akm",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade),
            "Chemlight_red"
        };
        respawnMagazines[]=
        {
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade),
            "Chemlight_red"
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_m_F: I_G_Soldier_M_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_m_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Marksman";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_svd_pso1",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_svd_pso1",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_11(rhs_10Rnd_762x54mmR_7N1),
            "Chemlight_green"
        };
        respawnMagazines[]=
        {
            mag_11(rhs_10Rnd_762x54mmR_7N1),
            "Chemlight_green"
        };
        linkedItems[]=
        {
            "FirstAidKit",
            "rhs_vest_commander",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "FirstAidKit",
            "rhs_vest_commander",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_gl_F: I_G_Soldier_GL_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_gl_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Grenadier";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akm_gp25",
            "Binocular",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akm_gp25",
            "Binocular",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_4(rhs_VOG25P),
            mag_3(rhs_GRD40_White),
            mag_2(Chemlight_blue)
        };
        respawnMagazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_4(rhs_VOG25P),
            mag_3(rhs_GRD40_White),
            mag_2(Chemlight_blue)
        };
        linkedItems[]=
        {
            "V_HarnessOGL_gry",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "V_HarnessOGL_gry",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_medic_F: I_G_medic_F
    {
        side=2;
        faction="I_rr";
        backpack="rr_TRYK_B_Medbag_BK";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_medic_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Medic";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j_blk";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\js\ins_lopotev_blk_co.paa","tryk_unit\data\clothing_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_5(SmokeShell)
        };
        respawnMagazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_5(SmokeShell)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "ItemMap",
            "It1emCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_light_F: I_G_Soldier_lite_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_light_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (light)";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "SMG_01_F",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "SMG_01_F",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_10(30Rnd_45ACP_Mag_SMG_01),
            "HandGrenade",
            "Chemlight_red"
        };
        respawnMagazines[]=
        {
            mag_10(30Rnd_45ACP_Mag_SMG_01),
            "HandGrenade",
            "Chemlight_red"
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_lat_F: I_G_Soldier_LAT_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_lat";
        _generalMacro="I_rr_lat_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (RPG)";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j_blk";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\js\ins_lopotev_blk_co.paa","tryk_unit\data\clothing_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akm",
            "rhs_weap_rpg7",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akm",
            "rhs_weap_rpg7",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
        };
        respawnMagazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_aa_F: I_G_Soldier_LAT_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_aa";
        _generalMacro="I_rr_aa_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (AA)";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j_blk";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akm",
            "rhs_weap_igla",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akm",
            "rhs_weap_igla",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
        };
        respawnMagazines[]=
        {
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_mg_F: I_G_Soldier_AR_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="I_rr_mg_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        backpack="B_AssaultPack_blk_mg";
        displayName="Machinegunner";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j_blk";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\js\ins_lopotev_blk_co.paa","tryk_unit\data\clothing_co.paa"};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_pkm",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_pkm",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_2(HandGrenade),
            mag_2(SmokeShellRed)
        };
        respawnMagazines[]=
        {
            mag_2(HandGrenade),
            mag_2(SmokeShellRed)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_amg_F: I_G_Soldier_A_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="MenSupport";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_amg";
        _generalMacro="I_rr_amg_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Assist MG";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_U_pad_j";
        model = "tryk_unit\data\Jpad.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
        hiddenSelectionsMaterials[] = {};
        weapons[]=
        {
            "rhs_weap_akm",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akm",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            mag_11(rhs_30Rnd_762x39mm)
        };
        respawnMagazines[]=
        {
            mag_11(rhs_30Rnd_762x39mm)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_eng_F: I_G_engineer_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="G_TacticalPack_Eng";
        _generalMacro="I_rr_eng_F";
        uniformClass="I_rr_TRYK_T_OD_PAD";
        model = "tryk_unit\data\T_pad";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\basicbody_bk.paa","tryk_unit\data\dt\clothing_OD_co.paa"};
        hiddenSelectionsMaterials[] = {"tryk_unit\data\basicbody.rvmat",""};
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Engineer";
        genericNames="RussianMen";

        weapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(SmokeShell)
        };
        respawnMagazines[]=
        {
            "Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(SmokeShell)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
    class I_rr_exp_F: I_G_Soldier_exp_F
    {
        side=2;
        faction="I_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="B_Carryall_oucamo_Exp";
        _generalMacro="I_rr_exp_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Explosive specialist";
        genericNames="RussianMen";
        uniformClass="I_rr_TRYK_T_OD_PAD";
        model = "tryk_unit\data\T_pad";
        hiddenSelections[] = {"camo","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\basicbody_bk.paa","tryk_unit\data\dt\clothing_OD_co.paa"};
        hiddenSelectionsMaterials[] = {"tryk_unit\data\basicbody.rvmat",""};
        weapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        respawnWeapons[]=
        {
            "rhs_weap_akms",
            "Throw",
            "Put"
        };
        magazines[]=
        {
            "Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_3(SmokeShell),
            mag_2(APERSMine_Range_Mag)
        };
        respawnMagazines[]=
        {
            "Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_3(SmokeShell),
            mag_2(APERSMine_Range_Mag)
        };
        linkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "TRYK_V_harnes_blk_L",
            "FirstAidKit",
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguageRUS",
            "Head_Euro",
            "G_CIVIL_male"
        };
        class eventhandlers;
    };
////////////////////////////////////////////////////Vehicles
    class I_G_Offroad_01_F;
    class I_rr_technical_F: I_G_Offroad_01_F
    {
        displayName="Technical (unarmed)";
        vehicleclass="Car";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_technical_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };
    class I_G_Offroad_01_armed_F;
    class I_rr_technical_a_F: I_G_Offroad_01_armed_F
    {
        displayName="Technical";
        vehicleclass="Car";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_technical_a_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };
    class I_G_Offroad_01_repair_F;
    class I_rr_technical_r_F:I_G_Offroad_01_repair_F
    {
        displayName="Technical (repair)";
        vehicleclass="Support";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_technical_r_F";
        author=ECSTRING(main,author);
        crew="I_rr_eng_F";
    };
    class I_G_Van_01_fuel_F;
    class I_rr_fuel_F:I_G_Van_01_fuel_F
    {
        displayName="Fuel truck";
        vehicleclass="Support";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_fuel_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };
    class I_rr_Ural_c_F:RHS_Ural_Civ_03
    {
        displayName="Ural (covered)";
        vehicleclass="Car";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_Ural_c_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };
    class I_rr_Ural_o_F:RHS_Ural_Open_Civ_03
    {
        displayName="Ural (uncovered)";
        vehicleclass="Car";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_Ural_o_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };

////////////////////////////////////////////////////Statics
    class I_rr_mortar_F: B_Mortar_01_F
    {
        displayName="82mm Mortar";
        vehicleclass="Static";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_mortar_F";
        author=ECSTRING(main,author);
        crew="I_rr_soldier_F";
    };
    class I_rr_nsv_tripod_F: RHS_NSV_TriPod_MSV
    {
        displayName="NSV tripod";
        vehicleclass="Static";
        side=2;
        scope=2;
        scopeCurator = 2;
        faction="I_rr";
        _generalMacro="I_rr_nsv_tripod_F";
        author=ECSTRING(main,author);
        crew="I_rr_light_F";
    };
