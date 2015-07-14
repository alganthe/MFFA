	class C_hvt_man_1: C_man_1
	{
		side=3;
		faction="CIV_F";
		vehicleclass="C_hvt_men";
		author="Alganthe";
		_generalMacro="C_hvt_man_1";
		scope=2;
        scopeCurator = 2;
		displayName="HVT suit";
        genericNames = "NATOMen";
        uniformClass = "TRYK_SUITS_C_BLK_F";
		model = "tryk_unit\data\suits.p3d";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"ESSGoggles\suits\functionary_co.paa"};
        items[]=
        {
            "FirstAidKit"
        };
        respawnitems[] = 
        {
            "FirstAidKit"
        };
		linkedItems[]=
		{
            "TRYK_H_wig",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		respawnLinkedItems[]=
		{
            "TRYK_H_wig",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
        identityTypes[]=
		{
			"GreekHead_A3_04",
			"G_CIVIL_male"
		};
        class eventhandlers;
	};