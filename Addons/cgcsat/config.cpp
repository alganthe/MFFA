#include "script_component.hpp"

class cfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {
            ///////////////////////////////////////////////////// Uniforms
            "O_cg_cwp_uniform1",
            "O_cg_cwp_uniform2",
            "O_cg_cwp_uniform3",
            "O_cg_uniform1_cup",
            "O_cg_uniform2_cup",
            "O_cg_cdp_uniform1",
            "O_cg_cdp_uniform2",
            "O_cg_cdp_uniform3",
            "O_cg_uniform4",
            ///////////////////////////////////////////////////// Headgear
            "cg_MICH_cwp",
            "H_HelmetCrew_O_cg",
            "cg_MICH_cup",
            "cg_MICH_cdp",
            ///////////////////////////////////////////////////// Vests
            "cg_HarnessO_cwp",
            "cg_HarnessOGL_cwp",
            "cg_HarnessO_cdp",
            "cg_HarnessOGL_cdp",
            "cg_HarnessO_cup",
            "cg_HarnessOGL_cup"
        };
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {"MFFA_main"};
        author[] = {ECSTRING(main,author)};
        authorUrl = "";
        VERSION_CONFIG;
    };
};

class CfgFactionClasses {
    class O_cg_cwp {
        displayName="CSAT(current gen wood)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };

    class O_cg_cdp {
        displayName="CSAT(current gen desert)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };

    class O_cg_cup {
        displayName="CSAT(current gen urban)";
        flag = "\a3\Data_f\Flags\flag_CSAT_co.paa";
        icon = "\a3\Data_f\cfgFactionClasses_OPF_ca.paa";
        side=0;
        priority=1;
    };
};

class CfgVehicleClasses {
    class MenCWP {
        displayName="Men (CWP)";
    };

    class MenCUP {
        displayName="Men (CUP)";
    };

    class MenCDP {
        displayName="Men (CDP)";
    };

    class MenReconCWP {
        displayName="Men (Recon)(CWP)";
    };

    class MenReconCDP {
        displayName="Men (Recon)(CDP)";
    };

    class MenSupportCWP {
        displayName="Men (Support)(CWP)";
    };

    class MenSupportCDP {
        displayName="Men (Support)(CDP)";
    };
};

class CfgVehicles {
    #include "equipment\cgcsat_backpacks.hpp"
    #include "units\cg_cwp_units.hpp"
    #include "units\cg_cdp_units.hpp"
    #include "units\cg_cup_units.hpp"
    #include "vehicles\baseClasses.hpp"
    #include "vehicles\cg_cwp_vehicles.hpp"
    #include "vehicles\cg_cdp_vehicles.hpp"
};

class Extended_Init_Eventhandlers {
    #include "units\cg_cwp_EH.hpp"
    #include "units\cg_cdp_EH.hpp"
    #include "units\cg_cup_EH.hpp"
    #include "vehicles\cg_cwp_vehicles_EH.hpp"
    #include "vehicles\cg_cdp_vehicles_EH.hpp"
};

class CfgWeapons {
    #include "equipment\cgcsat_uniforms.hpp"
    #include "equipment\cgcsat_headgear.hpp"
    #include "equipment\cgcsat_vests.hpp"
};

/*
class CfgGroups {
    class East {
        name="OPFOR";
        side=0;
        class O_cgcsat {
            name="CG CSAT";
            #include "groups\cgcsat_g_infantry.hpp"
            #include "groups\cgcsat_g_infantry_urban.hpp"
            #include "groups\cgcsat_g_armor.hpp"
            #include "groups\cgcsat_g_specops.hpp"
            #include "groups\cgcsat_g_motorized.hpp"
            #include "groups\cgcsat_g_mechanized.hpp"
        };
    };
};
/*
