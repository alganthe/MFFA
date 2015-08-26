////////////////////////////////////////////////////Base classes (infantry)
    class C_man_1;

////////////////////////////////////////////////////Infantry
    class C_tc_man_1: C_man_1
    {
        side=3;
        faction="CIV_F";
        vehicleclass="C_tc_men";
        author=ECSTRING(main,author);
        _generalMacro="C_tc_man_1";
        scope=2;
        scopeCurator = 2;
        displayName="Civilian 1";
        genericNames="TakistaniMen";
        uniformClass = "C_TRYK_U_taki_BLK";
        model = "tryk_unit\data\tk_sps.p3d";
        hiddenSelections[] = {"camo3"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bk_co.paa"};
        hiddenSelectionsMaterials[] = {};
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
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguagePER_F",
            "Head_TK",
            "G_TI_default"
        };
        class eventhandlers;
    };
    class C_tc_man_2: C_man_1
    {
        side=3;
        faction="CIV_F";
        vehicleclass="C_tc_men";
        author=ECSTRING(main,author);
        _generalMacro="C_tc_man_2";
        scope=2;
        scopeCurator = 2;
        displayName="Civilian 2";
        genericNames="TakistaniMen";
        uniformClass = "C_TRYK_U_taki_COY";
        model = "tryk_unit\data\tk_sps.p3d";
        hiddenSelections[] = {"camo3"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_1_co.paa"};
        hiddenSelectionsMaterials[] = {};
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
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguagePER_F",
            "Head_TK",
            "G_TI_default"
        };
        class eventhandlers;
    };
    class C_tc_man_3: C_man_1
    {
        side=3;
        faction="CIV_F";
        vehicleclass="C_tc_men";
        author=ECSTRING(main,author);
        _generalMacro="C_tc_man_3";
        scope=2;
        scopeCurator = 2;
        displayName="Civilian 3";
        genericNames="TakistaniMen";
        uniformClass = "C_TRYK_U_taki_WH";
        model = "tryk_unit\data\tk_sps.p3d";
        hiddenSelections[] = {"camo3","camo2"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_3_co.paa","tryk_unit\data\clothing_co.paa"};
        hiddenSelectionsMaterials[] = {};
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
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguagePER_F",
            "Head_TK",
            "G_TI_default"
        };
        class eventhandlers;
    };
    class C_tc_man_4: C_man_1
    {
        side=3;
        faction="CIV_F";
        vehicleclass="C_tc_men";
        author=ECSTRING(main,author);
        _generalMacro="C_tc_man_4";
        scope=2;
        scopeCurator = 2;
        displayName="Civilian 4";
        genericNames="TakistaniMen";
        uniformClass = "C_TRYK_U_taki_BL";
        model = "tryk_unit\data\tk_sps.p3d";
        hiddenSelections[] = {"camo3"};
        hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bl_co.paa"};
        hiddenSelectionsMaterials[] = {};
        headgearProbability=100;
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
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
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        respawnLinkedItems[]=
        {
            "ItemMap",
            "ItemCompass",
            "ItemWatch",
            "ItemRadio"
        };
        identityTypes[]=
        {
            "LanguagePER_F",
            "Head_TK",
            "G_TI_default"
        };
        class eventhandlers;
    };
