    class ItemCore;
    class HeadgearItem;
    class O_ti_H_Beret_blk: ItemCore
    {
        scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
        displayName = "Beret (Black)";
        picture = "\A3\characters_f\Data\UI\icon_H_Beret_blk_CA.paa";
        model = "\A3\Characters_F\Common\headgear_beret01";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\a3\characters_f\common\data\headgear_beret01_co.paa"};
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
        class ItemInfo: HeadgearItem
        {
            mass=6;
            passThrough=1;
            uniformModel = "\A3\Characters_F\Common\headgear_beret01";
            modelSides[] = {TCivilian, TWest};
        };
    }; 
    class O_ti_TRYK_H_pakol2: ItemCore
    {
        scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
		displayName = "TRYK Pakol+headset(BR+headset)";
		picture = "\tryk_unit\data\ui\UI_pakol.paa";
		model = "tryk_unit\data\pakol.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil01_4_co.paa"}; 
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
        class ItemInfo: HeadgearItem
        {
			mass = 5;
			allowedSlots[] = {901,605};
			uniformModel = "tryk_unit\data\pakol.p3d";
			modelSides[] = {2,3};
			armor = 0.5;
			passThrough = 0.5;
			explosionShielding = 0.2;
        };
    };   
    class O_ti_TRYK_H_pakol: ItemCore
    {
		scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
		displayName = "TRYK Pakol(BR)";
		picture = "\tryk_unit\data\ui\UI_pakol.paa";
		model = "tryk_unit\data\pakol2.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\tk\tak_civil01_4_co.paa"};
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
        class ItemInfo: HeadgearItem
        {
			mass = 5;
			allowedSlots[] = {901,605};
			uniformModel = "tryk_unit\data\pakol2.p3d";
			modelSides[] = {2,3};
			armor = 0.5;
			passThrough = 0.5;
			explosionShielding = 0.2;
        };
    };
    class O_ti_TRYK_H_woolhat: ItemCore
	{
		scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
		displayName = "TRYK Woolcap";
		picture = "\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model = "tryk_unit\data\woolhat.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\wh\woolhat_black_co.paa"};
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			allowedSlots[] = {901,605};
			uniformModel = "tryk_unit\data\woolhat.p3d";
			modelSides[] = {2,3};
			armor = 0.5;
			passThrough = 0.5;
			explosionShielding = 0.2;
		};
	}; 
	class TRYK_H_woolhat_br: ItemCore
	{
		scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
		displayName = "TRYK Woolcap(br)";
		picture = "\a3\characters_f\data\ui\icon_h_cap_beanie_ca.paa";
		model = "tryk_unit\data\woolhat.p3d";
        hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"tryk_unit\data\woolhat_br.paa"};
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
		class ItemInfo: HeadgearItem
		{
			mass = 5;
			allowedSlots[] = {901,605};
			uniformModel = "tryk_unit\data\woolhat.p3d";
			modelSides[] = {2,3};
			armor = 0.5;
			passThrough = 0.5;
			explosionShielding = 0.2;
		};
	};
    class O_ti_TRYK_H_headsetcap_blk: ItemCore
	{
		scope = 2;
        scopeArsenal = 0
        weaponPoolAvailable = 1;
		displayName = "TRYK HEAD SET2";
		picture = "\tryk_unit\data\ui\UI_tac2headset.paa";
		model = "ESSGoggles\headset2.p3d";
        allowedFacewear[]={"O_ti_TRYK_Beard_BK","TRYK_Beard_BK2","O_ti_TRYK_Beard_BK3","O_ti_TRYK_Beard_BK4"};
		class ItemInfo: HeadgearItem
		{
			mass = 1;
			allowedSlots[] = {901,605};
			uniformModel = "ESSGoggles\headset2.p3d";
			modelSides[] = {2,3};
			armor = 0;
			passThrough = 0.5;
			explosionShielding = 0.1;
		};
	}; 