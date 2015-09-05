    class V_HarnessO_brn;

    class cg_HarnessO_cwp: V_HarnessO_brn {
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessO_cwp";
        scope=2;
        displayName="$STR_A3_V_HarnessO_brn0";
        //picture="\A3\characters_f\Data\UI\icon_V_HarnessO_brn_CA.paa";
        model="\A3\Characters_F\OPFOR\equip_o_vest01";
        hiddenSelections[]= {
			"Camo1",
			"Camo2"
		};
		hiddenSelectionsTextures[]= {
			PATHTOF(data\cg_harness1_cwp.paa),
			PATHTOF(data\cg_harness2_cwp.paa)
		};
		class ItemInfo: ItemInfo {
			uniformModel="\A3\Characters_F\OPFOR\equip_o_vest01";
			containerClass="Supply160";
			mass=30;
			armor=0;
			passThrough=0.5;
			hiddenSelections[]= {
				"Camo1",
				"Camo2"
			};
		};
	};
    class cg_HarnessOGL_cwp: cg_HarnessO_cwp {
        author= ECSTRING(main,author);
        _generalMacro="cg_HarnessOGL_cwp";
        scope=2;
        displayName="$STR_A3_V_HarnessOGL_brn0";
        //picture="\A3\characters_f\Data\UI\icon_V_HarnessOGL_brn_CA.paa";
        model="\A3\Characters_F\OPFOR\equip_o_vest_gl";
        class ItemInfo: ItemInfo {
            uniformModel="\A3\Characters_F\OPFOR\equip_o_vest_gl";
            containerClass="Supply120";
            mass=20;
            armor=0;
            passThrough=0.5;
        };
    };
