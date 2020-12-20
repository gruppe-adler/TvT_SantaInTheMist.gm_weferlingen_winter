class special_forces_w {
    class AllUnits {
        uniform[] = {
            "SMA_UNIFORMS_BLACK",
            "SMA_UNIFORMS_GREEN"
        };
        vest = "V_BandollierB_rgr";
        backpack[] = {
            "grad_kitbag_black"
        };
        headgear[] = {
            "rds_Woodlander_cap1",
            "rds_Woodlander_cap2",
            "rds_Woodlander_cap3",
            "rds_Woodlander_cap4"
        };
        goggles[] = {
            ""
        };
        primaryWeapon[] = {
            "rhs_weap_akm",
            "rhs_weap_akms"
        };
        primaryWeaponMagazine = "hlc_30Rnd_762x39_m_ak";
        binoculars = "Binocular";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "ItemGPS";
        radio = "tfar_anprc154";
        nvgoggles = "";
        addItemsToUniform[] = {
            
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools",
            "ACE_key_lockpick",
            "ACE_key_east"
        };
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToVest[] = {
                LIST_3("hlc_30Rnd_762x39_m_ak"),
                LIST_1("rhs_mag_rdg2_white"),
                "rhs_mag_mk84"
            };
            addItemsToBackpack[] = {
                LIST_3("hlc_30Rnd_762x39_m_ak"),
                LIST_4("ACE_splint"),
                LIST_6("ACE_fieldDressing"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_splint"),
                LIST_1("ACE_salineIV"),
                "ACE_surgicalKit" 
            };
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
            addItemsToVest[] = {
                LIST_3("hlc_30Rnd_762x39_m_ak"),
                LIST_1("rhs_mag_rdg2_white")
            };
            addItemsToBackpack[] = {
                LIST_3("hlc_30Rnd_762x39_m_ak"),
                LIST_1("rhs_100Rnd_762x54mmR"),
                LIST_6("ACE_fieldDressing"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_splint"),
                LIST_1("ACE_salineIV"),
                "ACE_surgicalKit" 
            };
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_pkp";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR";
            addItemsToVest[] = {
                LIST_1("rhs_100Rnd_762x54mmR")
            };
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR"),
                LIST_6("ACE_fieldDressing"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_splint"),
                LIST_1("ACE_salineIV"),
                "ACE_surgicalKit" 
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            addItemsToVest[] = {
                LIST_1("hlc_30Rnd_762x39_m_ak")
            };
            addItemsToBackpack[] = {
                LIST_15("ACE_fieldDressing"),
                LIST_8("ACE_morphine"),
                LIST_8("ACE_epinephrine"),
                LIST_1("ACE_salineIV_500"),
                LIST_1("ACE_salineIV_250"),
                LIST_15("ACE_splint"),
                LIST_5("hlc_30Rnd_762x39_m_ak")
            };
        };

        //Rifleman (AT)
        class soldier_LAT_F: Soldier_F {
            secondaryWeapon = "rhs_weap_rpg26";
        };

        //Squad Leader
        class Soldier_SL_F: Soldier_F {
            primaryWeapon[] = {
                "rhs_weap_akm_gp25",
                "rhs_weap_akms_gp25"
            };
            primaryWeaponUnderbarrelMagazine = "rhs_GRD40_White";
            addItemsToBackpack[] = {
                LIST_7("hlc_30Rnd_762x39_m_ak"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_GRD40_White"),
                LIST_2("rhs_GRD40_Red"),
                LIST_6("ACE_fieldDressing"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_splint"),
                LIST_1("ACE_salineIV"),
                "ACE_surgicalKit" 
            };
        };

        //Team Leader
        class Soldier_TL_F: Soldier_SL_F {

        };
    };

    class Rank {
        class LIEUTENANT {
            headgear = "";
        };
    };
};
