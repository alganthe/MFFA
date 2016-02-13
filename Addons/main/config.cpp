#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
			"A3_Characters_F_OPFOR",
			"A3_Data_F_Curator_Characters",
            "A3_Characters_F",
            "A3_Characters_F_Beta",
            "A3_Characters_F_Gamma",
            "A3_Characters_F_EPA",
            "A3_Characters_F_EPB",
			"A3_Characters_F_Common",
			"A3_Characters_F_Heads",
            "A3_Air_F_Heli",
            "A3_Air_F",
            "A3_Air_F_Beta",
            "A3_Armor_F_Beta",
            "A3_Air_F_Heli",
            "A3_Boat_F"
        };
        author[] = {ECSTRING(main,author)};
        authorUrl = "";
        versionDesc = "MFFA";
        VERSION_CONFIG;
    };
};

class CfgMods {
    class PREFIX {
        dir = "@MFFA";
        name = "More Factions For Arma3 MFFA";
        picture = "A3\Ui_f\data\Logos\arma3_expansion_alpha_ca";
        hidePicture = "true";
        hideName = "true";
    };
};

class CfgSettings {
    class CBA {
        class Versioning {
            class PREFIX {
                level = DEFAULT_VERSIONING_LEVEL;

                class Dependencies {
                    CBA[]={"cba_main", {2,3,0}, "true"};
                    XEH[]={"cba_xeh", {1,0,0}, "true"};
                };
            };
        };
    };
};
