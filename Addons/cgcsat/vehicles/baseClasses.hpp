////////////////////////////////////////////////////Base classes Armored
    class O_APC_Wheeled_02_base_F;
    class O_APC_Tracked_02_base_F;
    class O_MBT_02_base_F;
    class O_MBT_02_arty_base_F;

    class O_APC_Wheeled_02_rcws_F: O_APC_Wheeled_02_base_F {
        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_01_opfor_co.paa",
                    "a3\armor_f_beta\apc_wheeled_02\data\apc_wheeled_02_ext_02_opfor_co.paa",
                    "a3\data_f\vehicles\turret_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_marid_body_cwp.paa),
                    PATHTOF(data\cgcsat_marid_acc_cwp.paa),
                    PATHTOF(data\cgcsat_turret_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_marid_body_cdp.paa),
                    PATHTOF(data\cgcsat_marid_acc_cdp.paa),
                    PATHTOF(data\cgcsat_turret_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_MBT_02_arty_F: O_MBT_02_arty_base_F {
        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
                    "a3\armor_f_gamma\mbt_01\data\mbt_01_scorcher_hexarid_co.paa",
                    "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa",
                    "a3\data_f\vehicles\turret_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_t100_body_cwp.paa),
                    PATHTOF(data\cgcsat_sochor_turret_cwp.paa),
                    PATHTOF(data\cgcsat_T100_access_cwp.paa),
                    PATHTOF(data\cgcsat_turret_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_t100_body_cdp.paa),
                    PATHTOF(data\cgcsat_sochor_turret_cdp.paa),
                    PATHTOF(data\cgcsat_T100_access_cdp.paa),
                    PATHTOF(data\cgcsat_turret_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_APC_Tracked_02_cannon_F: O_APC_Tracked_02_base_F {
        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_hexarid_co.paa",
                    "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
                    "A3\Armor_F_Beta\APC_Tracked_02\Data\rcws30_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]=
                {
                    PATHTOF(data\cgcsat_btr_body1_cwp.paa),
                    PATHTOF(data\cgcsat_btr_body2_cwp.paa),
                    PATHTOF(data\cgcsat_rcws30_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_btr_body1_cdp.paa),
                    PATHTOF(data\cgcsat_btr_body2_cdp.paa),
                    PATHTOF(data\cgcsat_rcws30_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F {
        class textureSources {
            class Hex {
                DisplayName="Hex (Tigris)";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_01_aa_hexarid_co.paa",
                    "A3\Armor_F_Beta\APC_Tracked_02\Data\apc_tracked_02_ext_02_hexarid_co.paa",
                    "A3\Armor_F_Beta\APC_Tracked_01\Data\apc_tracked_01_aa_tower_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_btr_body1_cwp.paa),
                    PATHTOF(data\cgcsat_btr_body2_cwp.paa),
                    PATHTOF(data\cgcsat_tigris_aa_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_btr_body1_cdp.paa),
                    PATHTOF(data\cgcsat_btr_body2_cdp.paa),
                    PATHTOF(data\cgcsat_tigris_aa_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_MBT_02_cannon_F: O_MBT_02_base_F {
        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "a3\armor_f_gamma\mbt_02\data\mbt_02_body_co.paa",
                    "a3\armor_f_gamma\mbt_02\data\mbt_02_turret_co.paa",
                    "a3\armor_f_gamma\mbt_02\data\mbt_02_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_t100_body_cwp.paa),
                    PATHTOF(data\cgcsat_T100_turret_cwp.paa),
                    PATHTOF(data\cgcsat_T100_access_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_t100_body_cdp.paa),
                    PATHTOF(data\cgcsat_T100_turret_cdp.paa),
                    PATHTOF(data\cgcsat_T100_access_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };
////////////////////////////////////////////////////Base classes Cars
    class MRAP_02_base_F;
    class MRAP_02_hmg_base_F;
    class MRAP_02_gmg_base_F;
    class O_Truck_03_transport_F;
    class O_Truck_03_covered_F;
    class Truck_F;
    class O_Truck_02_transport_F;
    class O_Truck_02_covered_F;
    class O_Truck_02_box_F ;
    class O_Truck_02_medical_F;
    class O_Truck_02_Ammo_F;
    class O_Truck_02_fuel_F;

    class O_MRAP_02_F: MRAP_02_base_F {
        class UserActions {
            class DoorLF_Open {
                userActionID=50;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Open0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_O_DOOR";
                priority=0.1;
                radius=2.5;
                radiusView=0.2;
                showIn3D=17;
                position="door1_axis";
                showWindow=1;
                onlyForPlayer=1;
                shortcut="";
                condition="((this doorPhase 'Door_LF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LF', 1]";
            };

            class DoorLF_Close: DoorLF_Open {
                userActionID=51;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LF') > 0) && (alive this)";
                statement="this animateDoor ['Door_LF', 0]";
            };

            class DoorRF_Open: DoorLF_Open {
                userActionID=52;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Open0";
                position="door3_axis";
                condition="((this doorPhase 'Door_RF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RF', 1]";
            };

            class DoorRF_Close: DoorRF_Open {
                userActionID=53;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RF') > 0) && (alive this)";
                statement="this animateDoor ['Door_RF', 0]";
            };

            class DoorLM_Open: DoorLF_Open {
                userActionID=54;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Open0";
                position="door5_axis";
                condition="((this doorPhase 'Door_LM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LM', 1]";
            };

            class DoorLM_Close: DoorLM_Open {
                userActionID=55;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LM') > 0) && (alive this)";
                statement="this animateDoor ['Door_LM', 0]";
            };

            class DoorRM_Open: DoorLM_Open {
                userActionID=56;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Open0";
                position="door7_axis";
                condition="((this doorPhase 'Door_RM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RM', 1]";
            };

            class DoorRM_Close: DoorRM_Open {
                userActionID=57;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RM') > 0) && (alive this)";
                statement="this animateDoor ['Door_RM', 0]";
            };

            class Door_rear_Open: DoorLM_Open {
                userActionID=58;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Open0";
                position="door9_axis";
                condition="((this doorPhase 'Door_rear')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_rear', 1]";
            };

            class Door_rear_Close: Door_rear_Open {
                userActionID=59;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_rear') > 0) && (alive this)";
                statement="this animateDoor ['Door_rear', 0]";
            };
        };

        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cwp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cwp.paa),
                    PATHTOF(data\cgcsat_turret_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cdp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cdp.paa),
                    PATHTOF(data\cgcsat_turret_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_MRAP_02_gmg_F: MRAP_02_gmg_base_F {
        class UserActions {
            class DoorLF_Open {
                userActionID=50;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Open0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_O_DOOR";
                priority=0.1;
                radius=2.5;
                radiusView=0.2;
                showIn3D=17;
                position="door1_axis";
                showWindow=1;
                onlyForPlayer=1;
                shortcut="";
                condition="((this doorPhase 'Door_LF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LF', 1]";
            };

            class DoorLF_Close: DoorLF_Open {
                userActionID=51;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LF') > 0) && (alive this)";
                statement="this animateDoor ['Door_LF', 0]";
            };

            class DoorRF_Open: DoorLF_Open {
                userActionID=52;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Open0";
                position="door3_axis";
                condition="((this doorPhase 'Door_RF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RF', 1]";
            };

            class DoorRF_Close: DoorRF_Open {
                userActionID=53;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RF') > 0) && (alive this)";
                statement="this animateDoor ['Door_RF', 0]";
            };

            class DoorLM_Open: DoorLF_Open {
                userActionID=54;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Open0";
                position="door5_axis";
                condition="((this doorPhase 'Door_LM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LM', 1]";
            };

            class DoorLM_Close: DoorLM_Open {
                userActionID=55;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LM') > 0) && (alive this)";
                statement="this animateDoor ['Door_LM', 0]";
            };

            class DoorRM_Open: DoorLM_Open {
                userActionID=56;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Open0";
                position="door7_axis";
                condition="((this doorPhase 'Door_RM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RM', 1]";
            };

            class DoorRM_Close: DoorRM_Open {
                userActionID=57;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RM') > 0) && (alive this)";
                statement="this animateDoor ['Door_RM', 0]";
            };

            class Door_rear_Open: DoorLM_Open {
                userActionID=58;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Open0";
                position="door9_axis";
                condition="((this doorPhase 'Door_rear')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_rear', 1]";
            };

            class Door_rear_Close: Door_rear_Open {
                userActionID=59;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_rear') > 0) && (alive this)";
                statement="this animateDoor ['Door_rear', 0]";
            };
        };

        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
                    "\A3\Data_F\Vehicles\turret_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cwp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cwp.paa),
                    PATHTOF(data\cgcsat_turret_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cdp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cdp.paa),
                    PATHTOF(data\cgcsat_turret_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class O_MRAP_02_hmg_F: MRAP_02_hmg_base_F {
        class UserActions {
            class DoorLF_Open {
                userActionID=50;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Open0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_O_DOOR";
                priority=0.1;
                radius=2.5;
                radiusView=0.2;
                showIn3D=17;
                position="door1_axis";
                showWindow=1;
                onlyForPlayer=1;
                shortcut="";
                condition="((this doorPhase 'Door_LF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LF', 1]";
            };

            class DoorLF_Close: DoorLF_Open {
                userActionID=51;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LF') > 0) && (alive this)";
                statement="this animateDoor ['Door_LF', 0]";
            };

            class DoorRF_Open: DoorLF_Open {
                userActionID=52;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Open0";
                position="door3_axis";
                condition="((this doorPhase 'Door_RF')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RF', 1]";
            };

            class DoorRF_Close: DoorRF_Open {
                userActionID=53;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRF_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RF') > 0) && (alive this)";
                statement="this animateDoor ['Door_RF', 0]";
            };

            class DoorLM_Open: DoorLF_Open {
                userActionID=54;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Open0";
                position="door5_axis";
                condition="((this doorPhase 'Door_LM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_LM', 1]";
            };

            class DoorLM_Close: DoorLM_Open {
                userActionID=55;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorLM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_LM') > 0) && (alive this)";
                statement="this animateDoor ['Door_LM', 0]";
            };

            class DoorRM_Open: DoorLM_Open {
                userActionID=56;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Open0";
                position="door7_axis";
                condition="((this doorPhase 'Door_RM')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_RM', 1]";
            };

            class DoorRM_Close: DoorRM_Open {
                userActionID=57;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_DoorRM_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_RM') > 0) && (alive this)";
                statement="this animateDoor ['Door_RM', 0]";
            };

            class Door_rear_Open: DoorLM_Open {
                userActionID=58;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Open0";
                position="door9_axis";
                condition="((this doorPhase 'Door_rear')  ==  0) && (alive this)";
                statement="this animateDoor ['Door_rear', 1]";
            };

            class Door_rear_Close: Door_rear_Open {
                userActionID=59;
                displayName="$STR_A3_CfgVehicles_MRAP_02_base_F_UserActions_Door_rear_Close0";
                displayNameDefault="<img image='\A3\Ui_f\data\IGUI\Cfg\Actions\open_door_ca.paa' size='2.5' />";
                textToolTip="$STR_DN_OUT_C_DOOR";
                condition="((this doorPhase 'Door_rear') > 0) && (alive this)";
                statement="this animateDoor ['Door_rear', 0]";
            };
        };

        class textureSources {
            class Hex {
                DisplayName="Hex";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_01_CO.paa",
                    "\A3\soft_F\MRAP_02\data\MRAP_02_ext_02_CO.paa",
                    "\A3\Data_F\Vehicles\turret_opfor_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cwp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cwp.paa),
                    PATHTOF(data\cgcsat_turret_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_ifrit_body_cdp.paa),
                    PATHTOF(data\cgcsat_ifrit_back_cdp.paa),
                    PATHTOF(data\cgcsat_turret_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class Truck_02_base_F: Truck_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class Truck_02_transport_base_F: Truck_02_base_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class Truck_02_box_base_F: Truck_02_base_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_repair_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };
            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_repair_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class Truck_02_medical_base_F: Truck_02_box_base_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kuz_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };

    class Truck_02_Ammo_base_F: Truck_02_base_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_repair_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_back_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]=
        {
            "Hex",
            1
        };
    };

    class Truck_02_fuel_base_F: Truck_02_base_F {
        class textureSources {
            class indep {
                displayName="$STR_A3_TEXTURESOURCES_INDEP0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_indp_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_indp_co.paa"
                };
                factions[]= {
                    "IND_F"
                };
            };

            class opfor {
                displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_kab_opfor_co.paa",
                    "\A3\soft_f_beta\Truck_02\Data\Truck_02_fuel_OPFOR_co.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cwp.paa),
                    PATHTOF(data\cgcsat_zamac_fuel_cwp.paa)
                };
                factions[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_zamac_front_cdp.paa),
                    PATHTOF(data\cgcsat_zamac_fuel_cdp.paa)
                };
                factions[]= {
                    "O_cg_cdp"
                };
            };
        };
        textureList[]= {
            "Hex",
            1
        };
    };
////////////////////////////////////////////////////Base classes Boats and SDV
    class O_Boat_Transport_01_F;
    class O_Boat_Armed_01_hmg_F;
////////////////////////////////////////////////////Base classes Jets
    class Plane_Base_F;
    class O_Plane_CAS_02_F;

    class Plane_CAS_02_base_F: Plane_Base_F {
        class textureSources {
            class opfor {
                displayname="$STR_A3_textureSources_opfor0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext01_co.paa",
                    "\A3\Air_F_EPC\Plane_CAS_02\Data\fighter02_ext02_co.paa"
                };
                faction[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                displayname="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_neophron_body1_cwp.paa),
                    PATHTOF(data\cgcsat_neophron_body2_cwp.paa)
                };
                faction[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                displayname="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_neophron_body1_cdp.paa),
                    PATHTOF(data\cgcsat_neophron_body2_cdp.paa)
                };
                faction[]= {
                    "O_cg_cdp"
                };
            };
        };
    };
////////////////////////////////////////////////////Base classes Helos
    class Helicopter_Base_F;
    class Helicopter_Base_H;

    class Heli_Attack_02_base_F: Helicopter_Base_F {
        class textureSources {
            class black {
                DisplayName="$STR_A3_TEXTURESOURCES_BLACK0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_black_CO.paa",
                    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_black_CO.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class opfor {
                DisplayName="$STR_A3_TEXTURESOURCES_OPFOR0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body1_CO.paa",
                    "A3\Air_F_Beta\Heli_Attack_02\Data\Heli_Attack_02_body2_CO.paa"
                };
                factions[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                DisplayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_kajman_body1_cwp.paa),
                    PATHTOF(data\cgcsat_kajman_body2_cwp.paa)
                };
                faction[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                DisplayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_kajman_body1_cdp.paa),
                    PATHTOF(data\cgcsat_kajman_body2_cdp.paa)
                };
                faction[]= {
                    "O_cg_cdp"
                };
            };
        };
    };

    class Heli_Light_02_base_F: Helicopter_Base_H {
        class textureSources {
            class opfor {
                displayname="$STR_A3_textureSources_opfor0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_CO.paa"
                };
                faction[]= {
                    "OPF_F"
                };
            };

            class black {
                displayname="$STR_A3_textureSources_black0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\Air_F\Heli_Light_02\Data\Heli_Light_02_ext_CO.paa"
                };
                faction[]= {
                    "OPF_F"
                };
            };

            class blackcustom {
                displayname="$STR_A3_textureSources_blackcustom0";
                author="$STR_A3_Bohemia_Interactive";
                textures[]= {
                    "\A3\Air_F_Heli\Heli_Light_02\Data\Heli_Light_02_ext_OPFOR_V2_CO.paa"
                };
                faction[]= {
                    "OPF_F"
                };
            };

            class cg_csat_cwp {
                displayName="CWP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_orca_cwp.paa)
                };
                faction[]= {
                    "O_cg_cwp"
                };
            };

            class cg_csat_cdp {
                displayName="CDP";
                author= ECSTRING(main,author);
                textures[]= {
                    PATHTOF(data\cgcsat_orca_cdp.paa)
                };
                faction[]= {
                    "O_cg_cdp"
                };
            };
        };
    };

    class O_Heli_Light_02_F;
    class O_Heli_Light_02_unarmed_F;
    class O_Heli_Attack_02_F;
    class O_Heli_Transport_04_F;
    class O_Heli_Transport_04_ammo_F;
    class O_Heli_Transport_04_bench_F;
    class O_Heli_Transport_04_box_F;
    class O_Heli_Transport_04_covered_F;
    class O_Heli_Transport_04_fuel_F;
    class O_Heli_Transport_04_medevac_F;
    class O_Heli_Transport_04_repair_F;
////////////////////////////////////////////////////Base classes Static
    class Land_Pod_Heli_Transport_04_ammo_F;
    class Land_Pod_Heli_Transport_04_bench_F;
    class Land_Pod_Heli_Transport_04_box_F;
    class Land_Pod_Heli_Transport_04_covered_F;
    class Land_Pod_Heli_Transport_04_fuel_F;
    class Land_Pod_Heli_Transport_04_medevac_F;
    class Land_Pod_Heli_Transport_04_repair_F;
