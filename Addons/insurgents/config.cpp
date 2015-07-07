#include "script_component.hpp"

class cfgPatches 
{
    class ADDON 
    {
        units[] = 
        {
//////////////////////////// Opfor units
            "O_ti_CL_F",
            "O_ti_CL_u_F",
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
            "O_ti_ar_F",
			"O_ti_aar_F",
			"O_ti_eng_F",
			"O_ti_exp_F",
			"O_ti_driver_F",
			"O_ti_technical_F",
			"O_ti_technical_a_F",
            "O_ti_technical_r_F",
			"O_ti_truck_s_F",
            "O_ti_suv_F",
            "O_ti_fuel_F",
            "O_ti_mortar_F",
            "O_ti_nsv_tripod_F",
            "O_ti_g_team_F",
            "O_ti_g_squad_F",
            "O_ti_g_squad_s_F",
            "O_ti_g_sentry_F",
            "O_ti_g_sentry_r_F",
            "O_ti_g_aa",
            "O_ti_g_at",
            "O_ti_g_sup_med",
            "O_ti_g_sup_exp",
            "O_ti_g_sup_eng",
            "O_ti_mot_g",
            "O_ti_mot_g_s",
            "O_ti_mot_tech",
//////////////////////////// Indep units
            "I_ti_CL_F",
            "I_ti_CL_u_F",
			"I_ti_SL_F",
			"I_ti_soldier_F",
			"I_ti_m_F",
			"I_ti_gl_F",
			"I_ti_medic_F",
			"I_ti_light_F",
			"I_ti_pistol_F",
			"I_ti_lat_F",
			"I_ti_aa_F",
			"I_ti_mg_F",
            "I_ti_ar_F",
			"I_ti_aar_F",
			"I_ti_eng_F",
			"I_ti_exp_F",
			"I_ti_driver_F",
			"I_ti_technical_F",
			"I_ti_technical_a_F",
            "I_ti_technical_r_F",
			"I_ti_truck_s_F",
            "I_ti_suv_F",
            "I_ti_fuel_F",
            "I_ti_mortar_F",
            "I_ti_nsv_tripod_F",
            "I_ti_g_team_F",
            "I_ti_g_squad_F",
            "I_ti_g_squad_s_F",
            "I_ti_g_sentry_F",
            "I_ti_g_sentry_r_F",
            "I_ti_g_aa",
            "I_ti_g_at",
            "I_ti_g_sup_med",
            "I_ti_g_sup_exp",
            "I_ti_g_sup_eng",
            "I_ti_mot_g",
            "I_ti_mot_g_s",
            "I_ti_mot_tech"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"MFFA_main"};
        author[] = {"Alganthe"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
class CfgFactionClasses
{
	class O_ti
	{
		displayName="Takistani insurgents";
		icon=PATHTOF(data\ti_icon.paa);
		side=0;
		priority=2;
	};
    class I_ti
	{
		displayName="Takistani insurgents";
		icon=PATHTOF(data\ti_icon.paa);
		side=2;
		priority=2;
	};
};
class CfgVehicleClasses
{
	class O_ti_ins
	{
		displayName="Infantry";
	};
	class O_ti_mot
	{
		displayName="Motorized groups";
	};
	class O_ti_sup
	{
		displayName="Supports";
	};
	class I_ti_ins
	{
		displayName="Infantry";
	};
	class I_ti_mot
	{
		displayName="Motorized groups";
	};
	class I_ti_sup
	{
		displayName="Supports";
	};
};
class CfgVehicles
{
    #include "equipment\ti_backpacks.hpp"
    #include "units\O_ti_units.hpp"
    #include "units\I_ti_units.hpp"
};
class Extended_Init_Eventhandlers
{
    #include "units\O_ti_EH.hpp"
    #include "units\I_ti_EH.hpp"
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
	class Indep
	{
		side=2;
		name="independent";
		class I_ti
		{
            name="Takistani insurgents";
            #include "groups\I_ti_ins.hpp"
            #include "groups\I_ti_sup.hpp"
            #include "groups\I_ti_mot.hpp"
        };
    };
};
class cfgWeapons
{
    #include "equipment\ti_headgears.hpp"
    #include "equipment\ti_uniforms.hpp"
};
class CfgGlasses
{
    #include "equipment\ti_facewear.hpp"
};