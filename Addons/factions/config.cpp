class CfgPatches
{
	class derp_opf_ins
	{
		units[]=
		{
			"O_ti_CL_F",
			"O_ti_SL_F",
			"O_ti_soldier_F",
			"O_ti_m_F",
			"O_ti_gl_F",
			"O_ti_medic_F",
			"O_ti_light_F",
			"O_ti_pistol_F",
			"O_ti_lat_F",
			"O_ti_aa_F",
			"O_ti_mg_F",
            "O_ti_amg_F",
            "O_ti_ar_F",
			"O_ti_aar_F",
			"O_ti_eng_F",
			"O_ti_exp_F",
			"O_ti_driver_F",
			"O_ti_technical_F",
			"O_ti_technical_a_F",
            "O_ti_technical_r_F",
			"O_ti_truck_F",
			"O_ti_truck_s_F",
            "O_ti_suv_F",
            "O_ti_fuel_F",
            "O_ti_mortar_F",
            "O_ti_g_squad_F",
            "O_ti_g_sentry_F",
            "O_ti_g_sentry_r_F",
            "O_ti_g_sup_med",
            "O_ti_g_sup_exp",
            "O_ti_g_sup_eng",
            "O_ti_g_sup_aa",
            "O_ti_g_sup_at",
            "ti_mot_g",
            "ti_mot_tech"
		};
		weapons[]={};
		requiredAddons[]=
		{
			"A3_Characters_F_OPFOR",
			"A3_Data_F_Curator_Characters",
            "A3_Characters_F",
            "A3_Characters_F_Beta",
            "A3_Characters_F_Gamma",
            "A3_Characters_F_EPA",
            "A3_Characters_F_EPB",
			"A3_Characters_F_Common",
			"A3_Characters_F_Heads",
            "rhs_weapons",
            "rhs_weapons2",
            "rhs_heavyweapons",
            "rhs_optics",
            "rhs_c_weapons",
            "rhs_c_heavyweapons",
            "rhs_c_cars",
            "US_ESS_Glasses_tryk",
            "Kio_Balaclava",
            "TRYK_Shemaghs",
            "TRYK_BackPack",
            "maa_Uniform",
            "TRYK_Uniform"
		};
		version="0.1";
		versionStr="0.1";
		versionDesc="DERP faction mod";
		versionAr[]={0,1};
		author[]={"Alganthe"};
	};
};
class CfgGroups
{
	class East
	{
		side=0;
		name="OPFOR";
		class O_ti
		{
            name="Takistani insurgents";
            #include "groups\O_ti_ins.hpp"
            #include "groups\O_ti_sup.hpp"
            #include "groups\O_ti_mot.hpp"
        };
    };
};
class cfgWeapons
{
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
};   
class CfgFactionClasses
{
	class O_ti
	{
		displayName="Takistani insurgents";
        flag = "";
		icon="";
		side=0;
		priority=2;
	};
};
class CfgVehicleClasses
{
	class O_ti_ins
	{
		displayName="Insurgents";
	};
	class O_ti_mot
	{
		displayName="Motorized groups";
	};
	class O_ti_sup
	{
		displayName="Supports";
	};
	class O_ti_stat
	{
		displayName="Static";
	};
};
class CfgVehicles
{
    #include "units\O_ti_units.hpp"
};
class CfgMods 
{
    class PREFIX 
    {
        dir = "@derp_factions";
        name = "derp factions";
        picture = "";
        hidePicture = "true";
        hideName = "true";
    };
};