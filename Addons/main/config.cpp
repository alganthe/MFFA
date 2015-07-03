﻿#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = 
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
        author[] = {"Alganthe"};
        authorUrl = "";
        versionDesc = "MFFA";
        VERSION_CONFIG;
    };
};

class CfgMods 
{
    class PREFIX 
    {
        dir = "@ACE";
        name = "More Factions For Arma3 MFFA";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
    };
};

class CfgSettings 
{
    class CBA 
    {
        class Versioning 
        {
            class PREFIX 
            {
                level = DEFAULT_VERSIONING_LEVEL;
                class Dependencies {
                    CBA[]={"cba_main", {1,0,0}, "true"};
                    XEH[]={"cba_xeh", {1,0,0}, "true"};
                };
            };
        };
    };
};