    class Uniform_Base;
    class UniformItem;

    
    class C_TRYK_U_taki_BLK: Uniform_Base
	{
		scope = 2;
        scopeCurator = 0;
        scopeArsenal = 0;
		displayName = "TRYK takistani clothing (BlK)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bk_co.paa"};
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = C_tc_man_1;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class C_TRYK_U_taki_COY: Uniform_Base
	{
		scope = 2;
        scopeCurator = 0;
        scopeArsenal = 0;
		displayName = "TRYK takistani clothing (COY)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_1_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = C_tc_man_2;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class C_TRYK_U_taki_WH: Uniform_Base
    {
		scope = 2;
        scopeCurator = 0;
        scopeArsenal = 0;
		displayName = "TRYK takistani clothing (WH)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[] = {"camo3","camo2"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_3_co.paa","tryk_unit\data\clothing_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = C_tc_man_3;
			containerClass = "Supply40";
			mass = 40;
		};
	};
    class C_TRYK_U_taki_BL: Uniform_Base
    {
		scope = 2;
        scopeCurator = 0;
        scopeArsenal = 0;
		displayName = "TRYK takistani clothing (BLE)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";    
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bl_co.paa"};
	class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = C_tc_man_4;
			containerClass = "Supply40";
			mass = 40;
		};
	};