#include "script_component.hpp"

class cfgPatches 
{
    class ADDON 
    {
        units[] = 
        {
/////////////////////////////BLUFOR
            "B_rr_CL_F",
            "B_rr_CL_u_F",
			"B_rr_SL_F",
			"B_rr_soldier_F",
			"B_rr_m_F",
			"B_rr_gl_F",
			"B_rr_medic_F",
			"B_rr_light_F",
			"B_rr_pistol_F",
			"B_rr_lat_F",
			"B_rr_aa_F",
			"B_rr_mg_F",
			"B_rr_amg_F",
			"B_rr_eng_F",
			"B_rr_exp_F",
			"B_rr_technical_F",
			"B_rr_technical_a_F",
            "B_rr_technical_r_F",
			"B_rr_truck_s_F",
            "B_rr_Ural_c_F",
            "B_rr_Ural_o_F",
            "B_rr_fuel_F",
            "B_rr_mortar_F",
            "B_rr_nsv_tripod_F",
            "B_rr_g_team_F",
            "B_rr_g_squad_F",
            "B_rr_g_squad_s_F",
            "B_rr_g_sentry_F",
            "B_rr_g_sentry_r_F",
            "B_rr_g_aa",
            "B_rr_g_at",
            "B_rr_g_sup_med",
            "B_rr_g_sup_exp",
            "B_rr_g_sup_eng",
            "B_rr_mot_g",
            "B_rr_mot_g_s",
            "B_rr_mot_tech",
////////////////////////////////Indep
            "I_rr_CL_F",
            "I_rr_CL_u_F",
			"I_rr_SL_F",
			"I_rr_soldier_F",
			"I_rr_m_F",
			"I_rr_gl_F",
			"I_rr_medic_F",
			"I_rr_light_F",
			"I_rr_pistol_F",
			"I_rr_lat_F",
			"I_rr_aa_F",
			"I_rr_mg_F",
			"I_rr_amg_F",
			"I_rr_eng_F",
			"I_rr_exp_F",
			"I_rr_technical_F",
			"I_rr_technical_a_F",
            "I_rr_technical_r_F",
			"I_rr_truck_s_F",
            "I_rr_Ural_c_F",
            "I_rr_Ural_o_F",
            "I_rr_fuel_F",
            "I_rr_mortar_F",
            "I_rr_nsv_tripod_F",
            "I_rr_g_team_F",
            "I_rr_g_squad_F",
            "I_rr_g_squad_s_F",
            "I_rr_g_sentry_F",
            "I_rr_g_sentry_r_F",
            "I_rr_g_aa",
            "I_rr_g_at",
            "I_rr_g_sup_med",
            "I_rr_g_sup_exp",
            "I_rr_g_sup_eng",
            "I_rr_mot_g",
            "I_rr_mot_g_s",
            "I_rr_mot_tech"
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
	class B_rr
	{
		displayName="Russian rebels";
		icon=PATHTOF(data\rr_icon.paa);
		side=1;
		priority=2;
	};
    class I_rr
	{
		displayName="russian rebels";
		icon=PATHTOF(data\rr_icon.paa);
		side=2;
		priority=2;
	};
};
class CfgVehicleClasses
{
	class B_rr_inf
	{
		displayName="Infantry";
	};
	class B_rr_mot
	{
		displayName="Motorized groups";
	};
	class B_rr_sup
	{
		displayName="Supports";
	};
	class I_rr_inf
	{
		displayName="Infantry";
	};
	class I_rr_mot
	{
		displayName="Motorized groups";
	};
	class I_rr_sup
	{
		displayName="Supports";
	};
};
class CfgVehicles
{
    #include "equipment\rr_backpacks.hpp"
    #include "units\B_rr_units.hpp"
    #include "units\I_rr_units.hpp"
};
class Extended_Init_Eventhandlers
{
    #include "units\B_rr_EH.hpp"
    #include "units\I_rr_EH.hpp"
};
class cfgWeapons
{
    #include "equipment\rr_uniforms.hpp"
};
class CfgGroups
{
	class West
	{
		side=1;
		name="BLUFOR";
		class B_rr
		{
            name="Russian rebels";
            #include "groups\B_rr_inf.hpp"
            #include "groups\B_rr_sup.hpp"
            #include "groups\B_rr_mot.hpp"
        };
    };
	class Indep
	{
		side=2;
		name="independent";
		class I_rr
		{
            name="Russian rebels";
            #include "groups\I_rr_inf.hpp"
            #include "groups\I_rr_sup.hpp"
            #include "groups\I_rr_mot.hpp"
        };
    };
};