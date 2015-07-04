////////////////////////////////////////////////////Base classes (infantry)
    class I_G_officer_F;
    class I_G_Soldier_SL_F;
    class I_G_Soldier_F;
    class I_G_Soldier_M_F;
    class I_G_Soldier_GL_F;
	class I_G_medic_F;
	class I_G_Soldier_lite_F;
	class I_G_Soldier_LAT_F;    
    class I_G_Soldier_AR_F;
    class I_G_Soldier_A_F;
    class I_G_engineer_F;
    class I_G_Soldier_exp_F;
    class i_g_soldier_unarmed_f;  

////////////////////////////////////////////////////Infantry
	class I_ti_CL_F: I_G_officer_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="ti_CL_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Cell leader";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_U_taki_BLK";
        model = "tryk_unit\data\tk_sps.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bk_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"hgun_P07_F",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_H_Beret_blk"};
		respawnWeapons[]=
		{
			"hgun_P07_F",
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            mag_3(16Rnd_9x21_Mag),
            "HandGrenade"
		};
		respawnMagazines[]=
		{
            mag_3(16Rnd_9x21_Mag),
            "HandGrenade"
		};
        items[]=
        {
            "FirstAidKit"
        };
		linkedItems[]=
		{
			"TRYK_V_Bulletproof_BLK",
			"ItemMap",
			"ItemGPS",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        respawnitems[] = 
        {
            "FirstAidKit"
        };
		respawnLinkedItems[]=
		{
			"TRYK_V_Bulletproof_BLK",
			"ItemGPS",
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
	class I_ti_CL_u_F: I_ti_CL_F
	{
        _generalMacro="ti_CL_u_F";
		scope=2;
        scopeCurator = 2;
		displayName="Cell leader unarmed";
		weapons[]=
		{
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"Binocular",
			"Throw",
			"Put"
		};
		magazines[]={};
		respawnMagazines[]={};
	};
	class I_ti_SL_F: I_G_Soldier_SL_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_SL_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Squad leader";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_U_taki_COY";
        model = "tryk_unit\data\tk_sps.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_1_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
            "rhs_weap_akm",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
            "rhs_weap_akm",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol"};
		magazines[]=
		{
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
		};
		respawnMagazines[]=
		{
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
        };
		linkedItems[]=
		{
			"FirstAidKit",
			"V_TacVest_brn",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_TacVest_brn",
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
	class I_ti_soldier_F: I_G_Soldier_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_soldier_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Fighter";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade),
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
            mag_10(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade),
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"TRYK_LOC_AK_chestrig_TAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"TRYK_LOC_AK_chestrig_TAN",
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
	class I_ti_m_F: I_G_Soldier_M_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_m_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Marksman";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI2";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_svd_pso1",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_svd_pso1",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_11(rhs_10Rnd_762x54mmR_7N1),
			"Chemlight_green"
		};
		respawnMagazines[]=
		{
            mag_11(rhs_10Rnd_762x54mmR_7N1),
			"Chemlight_green"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"rhs_vest_commander",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"rhs_vest_commander",
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
	class I_ti_gl_F: I_G_Soldier_GL_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_gl_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Grenadier";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI3";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
		hiddenSelectionsMaterials[] = {};
        
		weapons[]=
		{
			"rhs_weap_akm_gp25",
			"Binocular",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm_gp25",
			"Binocular",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_4(rhs_VOG25P),
            mag_3(rhs_GRD40_White),
            mag_2(Chemlight_blue)
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_4(rhs_VOG25P),
            mag_3(rhs_GRD40_White),
            mag_2(Chemlight_blue)
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessOGL_gry",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessOGL_gry",
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
	class I_ti_medic_F: I_G_medic_F
	{
		side=2;
		faction="I_ti";
		backpack="B_FieldPack_cbr_Medic";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_medic_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Medic";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
            "rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
            "rhs_weap_akms",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_5(SmokeShell)   
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_5(SmokeShell)
		};
		linkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"ItemMap",
			"It1emCompass",
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
	class I_ti_light_F: I_G_Soldier_lite_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_light_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (light)";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI2";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
		hiddenSelectionsMaterials[] = {};
        
		weapons[]=
		{
			"SMG_01_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"SMG_01_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
			mag_10(30Rnd_45ACP_Mag_SMG_01),
			"HandGrenade",
			"Chemlight_red"
		};
		respawnMagazines[]=
		{
			mag_10(30Rnd_45ACP_Mag_SMG_01),
			"HandGrenade",
			"Chemlight_red"
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_blk",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_BandollierB_blk",
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
	class I_ti_ar_F: I_G_Soldier_AR_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_ar_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
        backpack="TRYK_B_AssaultPack_ti_ar";
		displayName="Autorifleman";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI3";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		respawnWeapons[]=
		{
			"LMG_Zafir_F",
			"Throw",
			"Put"
		};
		magazines[]=
		{
            mag_2(HandGrenade)
		};
		respawnMagazines[]=
		{
            mag_2(HandGrenade)
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessO_gry",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_HarnessO_gry",
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
	class I_ti_pistol_F: I_G_Soldier_lite_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_pistol_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (Pistol)";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI3";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"hgun_ACPC2_F",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
			"Chemlight_red",
            mag_7(9Rnd_45ACP_Mag),
            mag_2(HandGrenade)
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
            mag_7(9Rnd_45ACP_Mag),
            mag_2(HandGrenade)
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
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
	class I_ti_lat_F: I_G_Soldier_LAT_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_FieldPack_cbr_ti_LAT";
		_generalMacro="I_ti_lat_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (RPG)";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI2";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
            "rhs_weap_akm",
			"rhs_weap_rpg7",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
            "rhs_weap_akm",
			"rhs_weap_rpg7",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
		};
		linkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
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
	class I_ti_aa_F: I_G_Soldier_LAT_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_FieldPack_cbr_ti_AA";
		_generalMacro="I_ti_aa_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Fighter (AA)";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI3";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_3_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
            "rhs_weap_akm",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
            "rhs_weap_akm",
			"rhs_weap_igla",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
		};
		respawnMagazines[]=
		{
            mag_7(rhs_30Rnd_762x39mm),
            mag_2(HandGrenade)
		};
		linkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
            "TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
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
	class I_ti_mg_F: I_G_Soldier_AR_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		_generalMacro="I_ti_mg_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
        backpack="TRYK_B_AssaultPack_ti_mg";
		displayName="Machinegunner";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_pkm",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_2(HandGrenade),
            mag_2( SmokeShellRed)
		};
		respawnMagazines[]=
		{
            mag_2(HandGrenade),
            mag_2( SmokeShellRed)
		};
		linkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
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
	class I_ti_aar_F: I_G_Soldier_A_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="MenSupport";
		author="Alganthe";
		backpack="B_FieldPack_cbr_ti_AAR";
		_generalMacro="I_ti_aar_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Assist autorifleman";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_ZARATAKI2";
        model = "tryk_unit\data\LOC_soldier01.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\loc\loc_ind01_1_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akm",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_pakol2"};
		magazines[]=
		{
            mag_11(rhs_30Rnd_762x39mm)
		};
		respawnMagazines[]=
		{
            mag_11(rhs_30Rnd_762x39mm)
		};
		linkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_TAN",
			"FirstAidKit",
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
	class I_ti_eng_F: I_G_engineer_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="G_TacticalPack_Eng";
		_generalMacro="I_ti_eng_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Engineer";
        genericNames="TakistaniMen";
        uniformClass="I_B_takisp_G_BL_F";
        model = "tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bl_co.paa"};
		hiddenSelectionsMaterials[] = {};
        
		weapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_woolhat_br"};
		magazines[]=
		{
			"Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
			mag_2(SmokeShell)
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
			mag_2(SmokeShell)
		};
		linkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_OD",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_OD",
			"FirstAidKit",
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
	class I_ti_exp_F: I_G_Soldier_exp_F
	{
		side=2;
		faction="I_ti";
		vehicleclass="Men";
		author="Alganthe";
		backpack="B_Carryall_oucamo_Exp";
		_generalMacro="I_ti_exp_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Explosive specialist";
        genericNames="TakistaniMen";
        uniformClass="I_B_takisp_G_BL_F";
        model = "tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_bl_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_akms",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_woolhat"};
		magazines[]=
		{
			"Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_3(SmokeShell),
            mag_2(APERSMine_Range_Mag)
		};
		respawnMagazines[]=
		{
			"Chemlight_red",
            mag_7(rhs_30Rnd_762x39mm),
            mag_3(SmokeShell),
            mag_2(APERSMine_Range_Mag)
		};
		linkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_OD",
			"FirstAidKit",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"TRYK_LOC_AK_chestrig_OD",
			"FirstAidKit",
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
	class I_ti_driver_F: i_g_soldier_unarmed_f
	{
		side=2;
		faction="I_ti";
		vehicleclass="MenSupport";
		author="Alganthe";
		_generalMacro="I_ti_driver_F";
        headgearProbability=100;
		scope=2;
        scopeCurator = 2;
		displayName="Driver";
        genericNames="TakistaniMen";
        uniformClass="I_TRYK_U_taki_G_WH";
        model = "tryk_unit\data\tk_sps_G.p3d";
		hiddenSelections[] = {"camo3"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil03_3_co.paa"};
		hiddenSelectionsMaterials[] = {};
		weapons[]=
		{
			"rhs_weap_ak74m_folded",
			"Throw",
			"Put"
		};
		respawnWeapons[]=
		{
			"rhs_weap_ak74m_folded",
			"Throw",
			"Put"
		};
        allowedHeadgear[]={"ti_TRYK_H_headsetcap_blk"};
		magazines[]=
		{
            mag_5(rhs_30Rnd_545x39_AK)
		};
		respawnMagazines[]=
		{
            mag_5(rhs_30Rnd_545x39_AK)
		};
		linkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
			"FirstAidKit",
			"V_Rangemaster_belt",
			"ItemGPS",
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
////////////////////////////////////////////////////Vehicles
	class I_ti_technical_F: B_G_Offroad_01_F
	{
		displayName="Technical (unarmed)";
		vehicleclass="Car";
		side=2;
		faction="I_ti";
		scope=2;
        scopeCurator = 2;
		_generalMacro="I_ti_technical_F";
		author="Alganthe";
		crew="I_ti_driver_F";
	};
	class I_ti_technical_a_F: B_G_Offroad_01_armed_F
	{
		displayName="Technical";
		vehicleclass="Car";
		side=2;
		scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_technical_a_F";
		author="Alganthe";
		crew="I_ti_pistol_F";
	};
	class I_ti_truck_s_F: B_G_Van_01_transport_F
	{
		displayName="Small Truck";
		vehicleclass="Car";
		side=2;
		scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_truck_s_F";
		author="Alganthe";
		crew="I_ti_driver_F";
	};
	class I_ti_suv_F:  SUV_01_base_black_F 
	{
		displayName="SUV";
		vehicleclass="Car";
		side=2;
		scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_suv_F";
		author="Alganthe";
		crew="I_ti_driver_F";
        class eventhandlers;
	};
	class I_ti_fuel_F: B_G_Van_01_fuel_F
	{
		displayName="Small Truck Fuel";
		vehicleclass="Support";
		side=2;
		scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_fuel_F";
		author="Alganthe";
		crew="I_ti_driver_F";
	};
	class I_ti_technical_r_F: B_G_Offroad_01_repair_F
	{
		displayName="Offroad Repair";
		vehicleclass="Support";
		side=2;
		scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_technical_r_F";
		author="Alganthe";
		crew="I_ti_eng_F";
	};
////////////////////////////////////////////////////Statics
	class I_ti_mortar_F: O_Mortar_01_F
	{
		displayName="82mm Mortar";
		vehicleclass="Static";
		side=2;
        scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_mortar_F";
		author="Alganthe";
		crew="I_ti_soldier_F";
	};
    class I_ti_nsv_tripod_F: RHS_NSV_TriPod_MSV
	{
		displayName="NSV tripod";
		vehicleclass="Static";
		side=2;
        scope=2;
        scopeCurator = 2;
		faction="I_ti";
		_generalMacro="I_ti_nsv_tripod_F";
		author="Alganthe";
		crew="I_ti_light_F";
	};