    class Uniform_Base;
    class UniformItem;

    class TRYK_U_taki_BLK: Uniform_Base
	{
		scope = 2;
		displayName = "TRYK Special force mideast style (BLK)";
		picture = "\tryk_unit\data\UI\UI_PCU_BL.paa";
		model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";      
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "O_ti_CL_F";
			containerClass = "Supply40";
			mass = 40;
		};
	};