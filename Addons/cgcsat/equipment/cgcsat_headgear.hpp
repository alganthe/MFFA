    class ItemInfo;
    class ItemCore;
    class H_HelmetB;
    class H_HelmetCrew_B;


    class cg_MICH_cwp: H_HelmetB {
        author= ECSTRING(main,author);
        scope = 2;
        displayName = "MICH [CWP]";
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cwp.paa)};
        class ItemInfo: ItemInfo {
            mass = 40;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
            modelSides[] = {6};
            armor = 4;
            passThrough = 0.5;
        };
    };
    
    class H_HelmetCrew_O_cg:H_HelmetCrew_B {
        scope = 1;
        displayName = "Crew Helmet (CG CSAT)";
    };

    class cg_MICH_cup: H_HelmetB {
        author= ECSTRING(main,author);
        scope = 2;
        displayName = "MICH [CUP]";
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cup.paa)};
        class ItemInfo: ItemInfo {
            mass = 40;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
            modelSides[] = {6};
            armor = 4;
            passThrough = 0.5;
        };
    };

    class cg_MICH_cdp: H_HelmetB {
        author= ECSTRING(main,author);
        scope = 2;
        displayName = "MICH [CDP]";
        model = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas";
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cdp.paa)};
        class ItemInfo: ItemInfo {
            mass = 40;
            allowedSlots[] = {901,605};
            uniformModel = "\A3\Characters_F_Beta\INDEP\headgear_helmet_canvas.p3d";
            modelSides[] = {6};
            armor = 4;
            passThrough = 0.5;
        };
    };
