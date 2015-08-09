    class Uniform_Base;
    class UniformItem;
    
////////////////////////////////////////////////////// Wood
    class O_cg_cwp_uniform1: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Combat Fatigues [CWP]";
        picture=PATHTOF(UI\cwpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_cg_cwp_Soldier_A_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_cwp_uniform2: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Recon Fatigues [CWP]";
        picture=PATHTOF(UI\cwpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = o_cg_cwp_survivor_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_cwp_uniform3: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Officer fatigues [CWP]";
        picture=PATHTOF(UI\cwpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = o_cg_cwp_officer_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_uniform4: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Heli Pilot Coveralls (CG CSAT)";
        // picture = PATHTOF(data\cgcsat_uniform3_ui.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_cg_cwp_helipilot_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
////////////////////////////////////////////////////// Urban
    class O_cg_uniform1_cup: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Combat Fatigues [CUP]";
        picture=PATHTOF(UI\cupUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_cg_cup_Soldier_A_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_uniform2_cup: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Recon Fatigues [CUP]";
        picture=PATHTOF(UI\cupUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_cg_cup_soldier_M_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
////////////////////////////////////////////////////// Desert
    class O_cg_cdp_uniform1: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Combat Fatigues [CDP]";
        picture=PATHTOF(UI\cdpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = O_cg_cdp_Soldier_A_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_cdp_uniform2: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Recon Fatigues [CDP]";
        picture=PATHTOF(UI\cdpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = o_cg_cdp_survivor_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };
    class O_cg_cdp_uniform3: Uniform_Base
    {
        author= ECSTRING(main,author);
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "Officer fatigues [CDP]";
        picture=PATHTOF(UI\cdpUI.paa);
        model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
            uniformClass = o_cg_cdp_officer_F;
            containerClass = "Supply40";
            mass = 40;
        };
    };