    class H_HelmetIA;
    class H_HelmetCrew_B;


    class cg_MICH_cwp: H_HelmetIA {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        displayName = "MICH [CWP]";
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cwp.paa)};
    };

    class H_HelmetCrew_O_cg:H_HelmetCrew_B {
        scope = 1;
        displayName = "Crew Helmet (CG CSAT)";
    };

    class cg_MICH_cup: H_HelmetIA {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        displayName = "MICH [CUP]";
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cup.paa)};
    };

    class cg_MICH_cdp: H_HelmetIA {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        displayName = "MICH [CDP]";
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[] = {PATHTOF(data\cg_MICH_cdp.paa)};
    };
