#include "script_component.hpp"

class cfgPatches 
{
    class ADDON 
    {
        units[] = 
        {
            "C_tc_man_1",
            "C_tc_man_2",
            "C_tc_man_3",
            "C_tc_man_4",
            "C_cc_man_1",
            "C_cc_man_2",
            "C_cc_man_3",
            "C_cc_man_4",
            "C_cc_man_5",
            "C_hvt_man_1"
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"MFFA_main"};
        author[] = {"Alganthe"};
        authorUrl = "";
        VERSION_CONFIG;
    };
};
class CfgVehicleClasses
{
	class C_tc_men
	{
		displayName="Men (Takistani)";
	};
    class C_cc_men
	{
		displayName="Men (Casual)";
	};
    class C_hvt_men
	{
		displayName="Men (HVT)";
	};
};
class CfgVehicles
{
    #include "units\C_tc_units.hpp"
    #include "units\C_cc_units.hpp"
    #include "units\C_hvt_units.hpp"
};
class Extended_Init_Eventhandlers
{
    #include "units\C_tc_EH.hpp"
    #include "units\C_cc_EH.hpp"
    #include "units\C_hvt_EH.hpp"
};
class cfgWeapons
{
    #include "equipment\tc_uniforms.hpp"
    #include "equipment\cc_uniforms.hpp"
    #include "equipment\hvt_uniforms.hpp"
};