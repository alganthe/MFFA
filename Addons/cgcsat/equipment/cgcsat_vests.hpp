    class V_HarnessO_brn;

    class cg_HarnessO_cwp: V_HarnessO_brn {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessO_cwp";
        displayName="LBV Harness (cwp)";
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]= {
            PATHTOF(data\cg_harness1_cwp.paa),
            PATHTOF(data\cg_harness2_cwp.paa)
        };
    };

    class cg_HarnessOGL_cwp: cg_HarnessO_cwp {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessOGL_cwp";
        displayName="LBV Grenadier Harness (cwp)";
    };

    class cg_HarnessO_cdp: V_HarnessO_brn {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessO_cdp";
        displayName="LBV Harness (cdp)";
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]= {
            PATHTOF(data\cg_harness1_cdp.paa),
            PATHTOF(data\cg_harness2_cdp.paa)
        };
    };

    class cg_HarnessOGL_cdp: cg_HarnessO_cdp {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessOGL_cdp";
        displayName="LBV Grenadier Harness (cdp)";
    };

    class cg_HarnessO_cup: V_HarnessO_brn {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessO_cup";
        displayName="LBV Harness (cup)";
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]= {
            PATHTOF(data\cg_harness1_cup.paa),
            PATHTOF(data\cg_harness2_cup.paa)
        };
    };

    class cg_HarnessOGL_cup: cg_HarnessO_cup {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessOGL_cup";
        displayName="LBV Grenadier Harness (cup)";
    };
