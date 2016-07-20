#define mag_xx(CLASS,AMOUNT) class _xx_##CLASS {magazine = CLASS; count = AMOUNT;}
#define weap_xx(CLASS,AMOUNT) class _xx_##CLASS {weapon = CLASS; count = AMOUNT;}
#define item_xx(CLASS,AMOUNT) class _xx_##CLASS {name = CLASS; count = AMOUNT;}

    class B_Carryall_Base;
    class B_FieldPack_Base;
    class B_AssaultPack_Base;
    class B_FieldPack_ocamo_Medic;
    class B_FieldPack_cbr_Ammo;
//////////////////////////////////////////////////////////////////////////// CWP (woodland)
    class O_cg_Carryall_cwp: B_Carryall_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cwp";
        displayName="Carryall Backpack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cwp.paa)};
    };

    class O_cg_FieldPack_cwp: B_FieldPack_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_FieldPack_cwp";
        displayName="Field Pack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cwp.paa)};
    };

    class O_cg_AssaultPack_cwp: B_AssaultPack_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_AssaultPack_cwp";
        displayName="Assault Pack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_compact_cwp.paa)};
    };

    class O_cg_FieldPack_cwp_Medic: O_cg_FieldPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(SmokeShellPurple,1);
            mag_xx(SmokeShellRed,1);
            mag_xx(SmokeShellYellow,1);
        };

        class TransportItems {
            item_xx(FirstAidKit,5);
            item_xx(Medikit,1);
        };
    };

    class O_cg_Caryall_cwp_Ammo: O_cg_Carryall_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(30Rnd_65x39_caseless_green,8);
            mag_xx(150Rnd_762x54_Box,1);
            mag_xx(RPG32_F,1);
            mag_xx(HandGrenade,2);
            mag_xx(MiniGrenade,2);
            mag_xx(1Rnd_HE_Grenade_shell,2);
            mag_xx(10Rnd_93x64_DMR_05_Mag,2);
            mag_xx(10Rnd_762x51_Mag,3);
        };

        class TransportItems {
            item_xx(FirstAidKit,4);
        };
    };

    class O_cg_AssaultPack_cwp_AR: O_cg_AssaultPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3);
        };
    };

    class O_cg_FieldPack_cwp_AA: O_cg_FieldPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AA,2);
        };
    };

    class O_cg_FieldPack_cwp_AT: O_cg_FieldPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
        };
    };

    class O_cg_FieldPack_cwp_LAT: O_cg_FieldPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(RPG32_F,2);
            mag_xx(RPG32_HE_F,2);
        };
    };

    class O_cg_Carryall_cwp_eng: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(SatchelCharge_Remote_Mag,1);
            mag_xx(DemoCharge_Remote_Mag,2);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_Carryall_cwp_exp: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_FieldPack_cwp_repair: O_cg_FieldPack_cwp {
        scope=1;
        class TransportItems {
            item_xx(ToolKit,1);
        };
    };

    class O_cg_FieldPack_cwp_ReconExp: O_cg_FieldPack_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };
        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_FieldPack_cwp_ReconMedic: O_cg_FieldPack_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(SmokeShellRed,1);
            mag_xx(SmokeShellBlue,1);
            mag_xx(SmokeShellOrange,1);
        };
        class TransportItems {
            item_xx(FirstAidKit,5);
            item_xx(Medikit,1);
        };
    };

    class O_cg_Carryall_cwp_AAR: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_Carryall_cwp_AAA: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AA,3);
        };
    };

    class O_cg_Carryall_cwp_AAT: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
            mag_xx(Titan_AP,2);
        };
    };
//////////////////////////////////////////////////////////////////////////// CUP (urban)
    class O_cg_Carryall_cup: B_Carryall_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cup";
        displayName="Carryall Backpack [CUP]";
        scope=2;
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cup.paa)};
    };

    class O_cg_FieldPack_cup: B_FieldPack_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_FieldPack_cup";
        displayName="Field Pack [CUP]";
        scope=2;
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cup.paa)};
    };

    class O_cg_AssaultPack_cup: B_AssaultPack_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_AssaultPack_cup";
        displayName="Assault Pack [CUP]";
        scope=2;
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_compact_cup.paa)};
    };

    class O_cg_AssaultPack_cup_AR: O_cg_AssaultPack_cup {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(150Rnd_762x54_Box,3);
        };
    };

    class O_cg_FieldPack_cup_Medic: O_cg_FieldPack_cup {
        scope = 1;
        class TransportMagazines {
            mag_xx(SmokeShellPurple,1);
            mag_xx(SmokeShellRed,1);
            mag_xx(SmokeShellYellow,1);
        };

        class TransportItems {
            item_xx(FirstAidKit,5);
            item_xx(Medikit,1);
        };
    };

    class O_cg_Caryall_cup_Ammo: O_cg_Carryall_cup {
        scope = 1;
        class TransportMagazines {
            mag_xx(30Rnd_65x39_caseless_green,8);
            mag_xx(150Rnd_762x54_Box,1);
            mag_xx(RPG32_F,1);
            mag_xx(HandGrenade,2);
            mag_xx(MiniGrenade,2);
            mag_xx(1Rnd_HE_Grenade_shell,5);
            mag_xx(10Rnd_93x64_DMR_05_Mag,2);
            mag_xx(10Rnd_762x51_Mag,3);
        };

        class TransportItems {
            item_xx(FirstAidKit,4);
        };
    };

    class O_cg_FieldPack_cup_AA: O_cg_FieldPack_cup {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AA,2);
        };
    };

    class O_cg_FieldPack_cup_AT: O_cg_FieldPack_cup {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
        };
    };

    class O_cg_FieldPack_cup_LAT: O_cg_FieldPack_cup {
        scope = 1;
        class TransportMagazines {
            mag_xx(RPG32_F,2);
            mag_xx(RPG32_HE_F,2);
        };
    };

    class O_cg_Carryall_cup_eng: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            mag_xx(SatchelCharge_Remote_Mag,1);
            mag_xx(DemoCharge_Remote_Mag,2);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_Carryall_cup_exp: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_FieldPack_cup_repair: O_cg_FieldPack_cup {
        scope=1;
        class TransportItems {
            item_xx(ToolKit,1);
        };
    };

    class O_cg_Carryall_cup_AAR: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3);
            mag_xx(150Rnd_762x54_Box_Tracer,1);
            mag_xx(150Rnd_93x64_Mag,2);
        };

        class TransportItems {
            item_xx(optic_tws_mg,1);
            item_xx(bipod_02_F_hex,1);
            item_xx(muzzle_snds_93mmg,1);
        };
    };

    class O_cg_Carryall_cup_AAA: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AA,3);
        };
    };

    class O_cg_Carryall_cup_AAT: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
            mag_xx(Titan_AP,2);
        };
    };
//////////////////////////////////////////////////////////////////////////// CDP (desert)
    class O_cg_Carryall_cdp: B_Carryall_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cdp";
        displayName="Carryall Backpack [CDP]";
        scope=2;
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cdp.paa)};
    };

    class O_cg_FieldPack_cdp: B_FieldPack_Base {
        DLC = "MFFA";
        author= ECSTRING(main,author);
        _generalMacro="O_cg_FieldPack_cdp";
        displayName="Field Pack [CDP]";
        scope=2;
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cdp.paa)};
    };

    class O_cg_AssaultPack_cdp: B_AssaultPack_Base {
        DLC = "MFFA";
        author = ECSTRING(main,author);
        _generalMacro="O_cg_AssaultPack_cdp";
        displayName="Assault Pack [CDP]";
        scope=2;
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_compact_cdp.paa)};
    };

    class O_cg_FieldPack_cdp_Medic: O_cg_FieldPack_cdp {
        scope = 1;
        class TransportItems {
            item_xx(FirstAidKit,5);
            item_xx(Medikit,1);
        };
        class TransportMagazines {
            mag_xx(SmokeShellPurple,1);
            mag_xx(SmokeShellRed,1);
            mag_xx(SmokeShellYellow,1);
        };
    };

    class O_cg_Caryall_cdp_Ammo: O_cg_Carryall_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(30Rnd_65x39_caseless_green,8);
            mag_xx(150Rnd_762x54_Box,1);
            mag_xx(RPG32_F,1);
            mag_xx(HandGrenade,2);
            mag_xx(MiniGrenade,2);
            mag_xx(1Rnd_HE_Grenade_shell,5);
            mag_xx(10Rnd_93x64_DMR_05_Mag,2);
            mag_xx(10Rnd_762x51_Mag,3);
        };

        class TransportItems {
            item_xx(FirstAidKit,4);
        };
    };

    class O_cg_AssaultPack_cdp_AR: O_cg_AssaultPack_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3);
        };
    };

    class O_cg_FieldPack_cdp_AA: O_cg_FieldPack_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AA,2);
        };
    };

    class O_cg_FieldPack_cdp_AT: O_cg_FieldPack_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
        };
    };

    class O_cg_FieldPack_cdp_LAT: O_cg_FieldPack_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(RPG32_F,2);
            mag_xx(RPG32_HE_F,2);
        };
    };

    class O_cg_Carryall_cdp_eng: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(SatchelCharge_Remote_Mag,1);
            mag_xx(DemoCharge_Remote_Mag,2);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_Carryall_cdp_exp: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_FieldPack_cdp_repair: O_cg_FieldPack_cdp {
        scope=1;
        class TransportItems {
            item_xx(ToolKit,1);
        };
    };

    class O_cg_FieldPack_cdp_ReconExp: O_cg_FieldPack_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(APERSBoundingMine_Range_Mag,3);
            mag_xx(ClaymoreDirectionalMine_Remote_Mag,2);
            mag_xx(SLAMDirectionalMine_Wire_Mag,2);
            mag_xx(DemoCharge_Remote_Mag,1);
        };

        class TransportItems {
            item_xx(ToolKit,1);
            item_xx(MineDetector,1);
        };
    };

    class O_cg_FieldPack_cdp_ReconMedic: O_cg_FieldPack_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(SmokeShellRed,1);
            mag_xx(SmokeShellBlue,1);
            mag_xx(SmokeShellOrange,1);
        };
        class TransportItems {
            item_xx(FirstAidKit,5);
            item_xx(Medikit,1);
        };
    };

    class O_cg_Carryall_cdp_AAR: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3);
            mag_xx(150Rnd_762x54_Box_Tracer,1);
            mag_xx(150Rnd_93x64_Mag,2);
        };

        class TransportItems {
            item_xx(optic_tws_mg,1);
            item_xx(bipod_02_F_hex,1);
            item_xx(muzzle_snds_93mmg,1);
        };
    };

    class O_cg_Carryall_cdp_AAA: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AA,3);
        };
    };

    class O_cg_Carryall_cdp_AAT: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            mag_xx(Titan_AT,2);
            mag_xx(Titan_AP,2);
        };
    };
