class Vest_NoCamo_Base;
class V_HarnessO_brn: Vest_NoCamo_Base {
    class itemInfo;
};

class cg_HarnessO_cwp: V_HarnessO_brn {
    DLC = "MFFA";
    author= ECSTRING(main,author);
    _generalMacro="cg_HarnessO_cwp";
    scope=2;
    displayName="LBV Harness (cwp)";
    picture= QPATHTOF(UI\cwpUI.paa);
    model="\A3\Characters_F\OPFOR\equip_o_vest01";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[]= {
        QPATHTOF(data\cg_harness1_cwp.paa),
        QPATHTOF(data\cg_harness2_cwp.paa)
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        containerClass = "Supply160";
        mass = 30;
        hiddenSelections[] = {"Camo1","Camo2"};
    };
};

 class cg_HarnessOGL_cwp: cg_HarnessO_cwp {
    _generalMacro="cg_HarnessOGL_cwp";
    displayName="LBV Grenadier Harness (cwp)";
    model="\A3\Characters_F\OPFOR\equip_o_vest_gl";
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        containerClass = "Supply120";
        mass = 15;
    };
 };

 class cg_HarnessO_cdp: V_HarnessO_brn {
    DLC = "MFFA";
    author= ECSTRING(main,author);
    _generalMacro="cg_HarnessO_cdp";
    scope=2;
    displayName="LBV Harness (cdp)";
    picture=PATHTOF(UI\cdpUI.paa);
    model="\A3\Characters_F\OPFOR\equip_o_vest01";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[]= {
        QPATHTOF(data\cg_harness1_cdp.paa),
        QPATHTOF(data\cg_harness2_cdp.paa)
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest_gl";
        containerClass = "Supply160";
        mass = 30;
        hiddenSelections[] = {"Camo1","Camo2"};
    };

};

 class cg_HarnessOGL_cdp: cg_HarnessO_cdp {
    _generalMacro="cg_HarnessOGL_cdp";
    scope=2;
    displayName="LBV Grenadier Harness (cdp)";
    model="\A3\Characters_F\OPFOR\equip_o_vest_gl";
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        containerClass = "Supply120";
        mass = 15;
    };
 };

 class cg_HarnessO_cup: V_HarnessO_brn {
    DLC = "MFFA";
    author= ECSTRING(main,author);
    _generalMacro="cg_HarnessO_cup";
    scope=2;
    displayName="LBV Harness (cup)";
    picture= QPATHTOF(UI\cdpUI.paa);
    model="\A3\Characters_F\OPFOR\equip_o_vest01";
    hiddenSelections[] = {"camo1","camo2"};
    hiddenSelectionsTextures[]= {
        QPATHTOF(data\cg_harness1_cup.paa),
        QPATHTOF(data\cg_harness2_cup.paa)
    };
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        containerClass = "Supply160";
        mass = 30;
        hiddenSelections[] = {"Camo1","Camo2"};
    };
};

 class cg_HarnessOGL_cup: cg_HarnessO_cup {
    _generalMacro="cg_HarnessOGL_cup";
    scope=2;
    displayName="LBV Grenadier Harness (cup)";
    model="\A3\Characters_F\OPFOR\equip_o_vest_gl";
    class ItemInfo: ItemInfo {
        uniformModel = "\A3\Characters_F\OPFOR\equip_o_vest01";
        containerClass = "Supply120";
        mass = 15;
    };
};
