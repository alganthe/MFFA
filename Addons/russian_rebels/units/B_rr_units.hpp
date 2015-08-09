/// Mags macros ///
 
#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a

////////////////////////////////////////////////////Base classes (infantry)
    class B_G_officer_F;
    class B_G_Soldier_SL_F;
    class B_G_Soldier_F;
    class B_G_Soldier_M_F;
    class B_G_Soldier_GL_F;
    class B_G_medic_F;
    class B_G_Soldier_lite_F;
    class B_G_Soldier_LAT_F;    
    class B_G_Soldier_AR_F;
    class B_G_Soldier_A_F;
    class B_G_engineer_F;
    class B_G_Soldier_exp_F;

////////////////////////////////////////////////////Infantry
    class B_rr_CL_F: B_G_officer_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_CL_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Cell leader";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_hoodie_Wood";
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
        allowedHeadgear[]={"H_Beret_blk"};
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
    class B_rr_CL_u_F: B_rr_CL_F
    {
        _generalMacro="B_rr_CL_u_F";
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
    class B_rr_SL_F: B_G_Soldier_SL_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_SL_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Squad leader";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_hoodie_Wood";
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
        allowedHeadgear[]={"H_MilCap_gry"};
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
    class B_rr_soldier_F: B_G_Soldier_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_soldier_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j_blk";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_m_F: B_G_Soldier_M_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_m_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Marksman";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_gl_F: B_G_Soldier_GL_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_gl_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Grenadier";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_medic_F: B_G_medic_F
    {
        side=1;
        faction="B_rr";
        backpack="rr_TRYK_B_Medbag_BK";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_medic_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Medic";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j_blk";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_light_F: B_G_Soldier_lite_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_light_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (light)";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_lat_F: B_G_Soldier_LAT_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_lat";
        _generalMacro="B_rr_lat_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (RPG)";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j_blk";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_aa_F: B_G_Soldier_LAT_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_aa";
        _generalMacro="B_rr_aa_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Fighter (AA)";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j_blk";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_mg_F: B_G_Soldier_AR_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        _generalMacro="B_rr_mg_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        backpack="B_AssaultPack_blk_mg";
        displayName="Machinegunner";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j_blk";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_amg_F: B_G_Soldier_A_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="MenSupport";
        author=ECSTRING(main,author);
        backpack="TRYK_B_FieldPack_Wood_amg";
        _generalMacro="B_rr_amg_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Assist MG";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_U_pad_j";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_eng_F: B_G_engineer_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="G_TacticalPack_Eng";
        _generalMacro="B_rr_eng_F";
        uniformClass="B_rr_TRYK_T_OD_PAD";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_rr_exp_F: B_G_Soldier_exp_F
    {
        side=1;
        faction="B_rr";
        vehicleclass="Men";
        author=ECSTRING(main,author);
        backpack="B_Carryall_oucamo_Exp";
        _generalMacro="B_rr_exp_F";
        headgearProbability=100;
        scope=2;
        scopeCurator = 2;
        displayName="Explosive specialist";
        genericNames="RussianMen";
        uniformClass="B_rr_TRYK_T_OD_PAD";
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
        allowedHeadgear[]={"TRYK_H_woolhat","H_Bandanna_gry","H_Bandanna_blu","H_Bandanna_camo","H_Watchcap_blk","rhs_beanie_green","H_Cap_blk","H_Cap_oli","TRYK_H_woolhat"};
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
    class B_G_Offroad_01_F;
    class B_rr_technical_F: B_G_Offroad_01_F
    {
        displayName="Technical (unarmed)";
        vehicleclass="Car";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_technical_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };
    class B_G_Offroad_01_armed_F;
    class B_rr_technical_a_F: B_G_Offroad_01_armed_F
    {
        displayName="Technical";
        vehicleclass="Car";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_technical_a_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };
    class B_G_Offroad_01_repair_F;
    class B_rr_technical_r_F:B_G_Offroad_01_repair_F
    {
        displayName="Technical (repair)";
        vehicleclass="Support";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_technical_r_F";
        author=ECSTRING(main,author);
        crew="B_rr_eng_F";
    };
    class B_G_Van_01_fuel_F;
    class B_rr_fuel_F:B_G_Van_01_fuel_F
    {
        displayName="Fuel truck";
        vehicleclass="Support";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_fuel_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };
    class RHS_Ural_Civ_03;
    class B_rr_Ural_c_F:RHS_Ural_Civ_03
    {
        displayName="Ural (covered)";
        vehicleclass="Car";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_Ural_c_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };
    class RHS_Ural_Open_Civ_03;
    class B_rr_Ural_o_F:RHS_Ural_Open_Civ_03
    {
        displayName="Ural (uncovered)";
        vehicleclass="Car";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_Ural_o_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };
    
////////////////////////////////////////////////////Statics
    class B_Mortar_01_F;
    class B_rr_mortar_F: B_Mortar_01_F
    {
        displayName="82mm Mortar";
        vehicleclass="Static";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_mortar_F";
        author=ECSTRING(main,author);
        crew="B_rr_soldier_F";
    };
    class RHS_NSV_TriPod_MSV;
    class B_rr_nsv_tripod_F: RHS_NSV_TriPod_MSV
    {
        displayName="NSV tripod";
        vehicleclass="Static";
        side=1;
        scope=2;
        scopeCurator = 2;
        faction="B_rr";
        _generalMacro="B_rr_nsv_tripod_F";
        author=ECSTRING(main,author);
        crew="B_rr_light_F";
    };