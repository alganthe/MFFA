#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

    class B_Carryall_Base;
    class B_FieldPack_Base;
    class B_AssaultPack_Base;
    class B_FieldPack_ocamo_Medic;
    class B_FieldPack_cbr_Ammo;
//////////////////////////////////////////////////////////////////////////// CWP (woodland)
    class O_cg_Carryall_cwp: B_Carryall_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cwp";
        displayName="Carryall Backpack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cwp.paa)};
    };

    class O_cg_FieldPack_cwp: B_FieldPack_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_Fieldpack_cwp";
        displayName="Field Pack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cwp.paa)};
    };

    class O_cg_AssaultPack_cwp: B_AssaultPack_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_AssaultPack_cwp";
        displayName="Assault Pack [CWP]";
        scope=2;
        picture=PATHTOF(UI\cwpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_compact_cwp.paa)};
    };

    class O_cg_FieldPack_cwp_Medic: O_cg_FieldPack_cwp {
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

    class O_cg_Caryall_cwp_Ammo: O_cg_Carryall_cwp {
        scope = 1;
        class TransportMagazines {
            class _xx_30Rnd_65x39_caseless_green {
                magazine="30Rnd_65x39_caseless_green";
                count=8;
            };
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=1;
            };
            class _xx_RPG32_F {
                magazine="RPG32_F";
                count=1;
            };
            class _xx_HandGrenade {
                magazine="HandGrenade";
                count=2;
            };
            class _xx_MiniGrenade {
                magazine="MiniGrenade";
                count=2;
            };
            class _xx_1Rnd_HE_Grenade_shell {
                magazine="1Rnd_HE_Grenade_shell";
                count=5;
            };
            class _xx_10Rnd_93x64_DMR_05_Mag {
                magazine="10Rnd_93x64_DMR_05_Mag";
                count=2;
            };
            class _xx_10Rnd_762x51_Mag {
                magazine="10Rnd_762x51_Mag";
                count=3;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=4;
            };
        };
    };

    class O_cg_AssaultPack_cwp_AR: O_cg_AssaultPack_cwp {
        scope = 1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3)
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
            class _xx_SatchelCharge_Remote_Mag {
                magazine="SatchelCharge_Remote_Mag";
                count=1;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cwp_exp: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
                magazine="APERSBoundingMine_Range_Mag";
                count=3;
            };
            class _xx_ClaymoreDirectionalMine_Remote_Mag {
                magazine="ClaymoreDirectionalMine_Remote_Mag";
                count=2;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine="SLAMDirectionalMine_Wire_Mag";
                count=2;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=1;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cwp_repair: O_cg_FieldPack_cwp {
        scope=1;
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cwp_ReconExp: O_cg_FieldPack_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
                magazine="APERSBoundingMine_Range_Mag";
                count=3;
            };
            class _xx_ClaymoreDirectionalMine_Remote_Mag {
                magazine="ClaymoreDirectionalMine_Remote_Mag";
                count=2;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine="SLAMDirectionalMine_Wire_Mag";
                count=2;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=1;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cwp_ReconMedic: O_cg_FieldPack_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_SmokeShellRed {
                magazine="SmokeShellRed";
                count=1;
            };
            class _xx_SmokeShellBlue {
                magazine="SmokeShellBlue";
                count=1;
            };
            class _xx_SmokeShellOrange {
                magazine="SmokeShellOrange";
                count=1;
            };
        };
        class TransportItems {
            class _xx_Medikit {
                name="Medikit";
                count=1;
            };
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=5;
            };
        };
    };

    class O_cg_Carryall_cwp_AAR: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=3;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine="150Rnd_762x54_Box_Tracer";
                count=1;
            };
            class _xx_150Rnd_93x64_Mag {
                magazine="150Rnd_93x64_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_optic_tws_mg {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_hex {
                name="bipod_02_F_hex";
                count=1;
            };
            class _xx_muzzle_snds_93mmg {
                name="muzzle_snds_93mmg";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cwp_AAA: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AA {
                magazine="Titan_AA";
                count=3;
            };
        };
    };

    class O_cg_Carryall_cwp_AAT: O_cg_Carryall_cwp {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AT {
                magazine="Titan_AT";
                count=2;
            };
            class _xx_Titan_AP {
                magazine="Titan_AP";
                count=2;
            };
        };
    };
//////////////////////////////////////////////////////////////////////////// CUP (urban)
    class O_cg_Carryall_cup: B_Carryall_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cup";
        displayName="Carryall Backpack [CUP]";
        scope=2;
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cup.paa)};
    };

    class O_cg_FieldPack_cup: B_FieldPack_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_FieldPack_cup";
        displayName="Field Pack [CUP]";
        scope=2;
        picture=PATHTOF(UI\cupUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cup.paa)};
    };

    class O_cg_AssaultPack_cup: B_AssaultPack_Base {
        author= ECSTRING(main,author);
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
            mag_xx(150Rnd_762x54_Box,3)
        };
    };

    class O_cg_FieldPack_cup_Medic: O_cg_FieldPack_cup {
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

    class O_cg_Caryall_cup_Ammo: O_cg_Carryall_cup {
        scope = 1;
        class TransportMagazines {
            class _xx_30Rnd_65x39_caseless_green {
                magazine="30Rnd_65x39_caseless_green";
                count=8;
            };
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=1;
            };
            class _xx_RPG32_F {
                magazine="RPG32_F";
                count=1;
            };
            class _xx_HandGrenade {
                magazine="HandGrenade";
                count=2;
            };
            class _xx_MiniGrenade {
                magazine="MiniGrenade";
                count=2;
            };
            class _xx_1Rnd_HE_Grenade_shell {
                magazine="1Rnd_HE_Grenade_shell";
                count=5;
            };
            class _xx_10Rnd_93x64_DMR_05_Mag {
                magazine="10Rnd_93x64_DMR_05_Mag";
                count=2;
            };
            class _xx_10Rnd_762x51_Mag {
                magazine="10Rnd_762x51_Mag";
                count=3;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=4;
            };
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
            class _xx_SatchelCharge_Remote_Mag {
                magazine="SatchelCharge_Remote_Mag";
                count=1;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cup_exp: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
                magazine="APERSBoundingMine_Range_Mag";
                count=3;
            };
            class _xx_ClaymoreDirectionalMine_Remote_Mag {
                magazine="ClaymoreDirectionalMine_Remote_Mag";
                count=2;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine="SLAMDirectionalMine_Wire_Mag";
                count=2;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=1;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cup_repair: O_cg_FieldPack_cup {
        scope=1;
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cup_AAR: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=3;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine="150Rnd_762x54_Box_Tracer";
                count=1;
            };
            class _xx_150Rnd_93x64_Mag {
                magazine="150Rnd_93x64_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_optic_tws_mg {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_hex {
                name="bipod_02_F_hex";
                count=1;
            };
            class _xx_muzzle_snds_93mmg {
                name="muzzle_snds_93mmg";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cup_AAA: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AA {
                magazine="Titan_AA";
                count=3;
            };
        };
    };

    class O_cg_Carryall_cup_AAT: O_cg_Carryall_cup {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AT {
                magazine="Titan_AT";
                count=2;
            };
            class _xx_Titan_AP {
                magazine="Titan_AP";
                count=2;
            };
        };
    };
//////////////////////////////////////////////////////////////////////////// CDP (desert)
    class O_cg_Carryall_cdp: B_Carryall_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_Carryall_cdp";
        displayName="Carryall Backpack [CDP]";
        scope=2;
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_carryall_cdp.paa)};
    };

    class O_cg_FieldPack_cdp: B_FieldPack_Base {
        author= ECSTRING(main,author);
        _generalMacro="O_cg_Fieldpack_cdp";
        displayName="Field Pack [CDP]";
        scope=2;
        picture=PATHTOF(UI\cdpUI.paa);
        hiddenSelectionsTextures[]={PATHTOF(data\cg_fieldpack_cdp.paa)};
    };

    class O_cg_AssaultPack_cdp: B_AssaultPack_Base {
        author= ECSTRING(main,author);
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
            class _xx_30Rnd_65x39_caseless_green {
                magazine="30Rnd_65x39_caseless_green";
                count=8;
            };
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=1;
            };
            class _xx_RPG32_F {
                magazine="RPG32_F";
                count=1;
            };
            class _xx_HandGrenade {
                magazine="HandGrenade";
                count=2;
            };
            class _xx_MiniGrenade {
                magazine="MiniGrenade";
                count=2;
            };
            class _xx_1Rnd_HE_Grenade_shell {
                magazine="1Rnd_HE_Grenade_shell";
                count=5;
            };
            class _xx_10Rnd_93x64_DMR_05_Mag {
                magazine="10Rnd_93x64_DMR_05_Mag";
                count=2;
            };
            class _xx_10Rnd_762x51_Mag {
                magazine="10Rnd_762x51_Mag";
                count=3;
            };
        };
        class TransportItems {
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=4;
            };
        };
    };

    class O_cg_AssaultPack_cdp_AR: O_cg_AssaultPack_cdp {
        scope = 1;
        class TransportMagazines {
            mag_xx(150Rnd_762x54_Box,3)
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
            class _xx_SatchelCharge_Remote_Mag {
                magazine="SatchelCharge_Remote_Mag";
                count=1;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cdp_exp: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
                magazine="APERSBoundingMine_Range_Mag";
                count=3;
            };
            class _xx_ClaymoreDirectionalMine_Remote_Mag {
                magazine="ClaymoreDirectionalMine_Remote_Mag";
                count=2;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine="SLAMDirectionalMine_Wire_Mag";
                count=2;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=1;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cdp_repair: O_cg_FieldPack_cdp {
        scope=1;
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cdp_ReconExp: O_cg_FieldPack_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_APERSBoundingMine_Range_Mag {
                magazine="APERSBoundingMine_Range_Mag";
                count=3;
            };
            class _xx_ClaymoreDirectionalMine_Remote_Mag {
                magazine="ClaymoreDirectionalMine_Remote_Mag";
                count=2;
            };
            class _xx_SLAMDirectionalMine_Wire_Mag {
                magazine="SLAMDirectionalMine_Wire_Mag";
                count=2;
            };
            class _xx_DemoCharge_Remote_Mag {
                magazine="DemoCharge_Remote_Mag";
                count=1;
            };
        };
        class TransportItems {
            class _xx_ToolKit {
                name="ToolKit";
                count=1;
            };
            class _xx_MineDetector {
                name="MineDetector";
                count=1;
            };
        };
    };

    class O_cg_FieldPack_cdp_ReconMedic: O_cg_FieldPack_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_SmokeShellRed {
                magazine="SmokeShellRed";
                count=1;
            };
            class _xx_SmokeShellBlue {
                magazine="SmokeShellBlue";
                count=1;
            };
            class _xx_SmokeShellOrange {
                magazine="SmokeShellOrange";
                count=1;
            };
        };
        class TransportItems {
            class _xx_Medikit {
                name="Medikit";
                count=1;
            };
            class _xx_FirstAidKit {
                name="FirstAidKit";
                count=5;
            };
        };
    };

    class O_cg_Carryall_cdp_AAR: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_150Rnd_762x54_Box {
                magazine="150Rnd_762x54_Box";
                count=3;
            };
            class _xx_150Rnd_762x54_Box_Tracer {
                magazine="150Rnd_762x54_Box_Tracer";
                count=1;
            };
            class _xx_150Rnd_93x64_Mag {
                magazine="150Rnd_93x64_Mag";
                count=2;
            };
        };
        class TransportItems {
            class _xx_optic_tws_mg
            {
                name="optic_tws_mg";
                count=1;
            };
            class _xx_bipod_02_F_hex {
                name="bipod_02_F_hex";
                count=1;
            };
            class _xx_muzzle_snds_93mmg {
                name="muzzle_snds_93mmg";
                count=1;
            };
        };
    };

    class O_cg_Carryall_cdp_AAA: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AA {
                magazine="Titan_AA";
                count=3;
            };
        };
    };

    class O_cg_Carryall_cdp_AAT: O_cg_Carryall_cdp {
        scope=1;
        class TransportMagazines {
            class _xx_Titan_AT {
                magazine="Titan_AT";
                count=2;
            };
            class _xx_Titan_AP {
                magazine="Titan_AP";
                count=2;
            };
        };
    };
