class special_forces_w {
    class AllUnits {
        uniform[] = {
            "SMA_UNIFORMS_BLACK",
            "SMA_UNIFORMS_GREEN"
        };
        vest = "V_BandollierB_rgr";
        headgear[] = {
            "rds_Woodlander_cap1",
            "rds_Woodlander_cap2",
            "rds_Woodlander_cap3",
            "rds_Woodlander_cap4"
        };
        goggles[] = {
            "",
            "rhs_googles_black",
            "rhs_googles_clear"
        };
        primaryWeapon[] = {
            "rhs_weap_akm",
            "rhs_weap_akms"
        };
        primaryWeaponMagazine = "rhs_30Rnd_762x39mm";
        binoculars = "Binocular";
        map = "ItemMap";
        compass = "ItemCompass";
        watch = "ItemWatch";
        gps = "ItemGPS";
        radio = "tf_fadak";
        nvgoggles = "";
        addItemsToUniform[] = {
            LIST_6("ACE_fieldDressing"),
            LIST_4("ACE_morphine"),
            "ACE_epinephrine",
            "ACE_Flashlight_KSF1",
            "ACE_MapTools",
            "ACE_key_lockpick",
            "ACE_key_east",
            LIST_4("ACE_splint")
        };
    };
    class Type {
        //Rifleman
        class Soldier_F {
            addItemsToVest[] = {
                LIST_7("rhs_30Rnd_762x39mm"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_mag_rgd5"),
                LIST_4("ACE_splint")
            };
        };

        //Asst. Autorifleman
        class soldier_AAR_F: Soldier_F {
            addVest = "LOP_6sh46";
            addItemsToVest[] = {
                LIST_7("rhs_30Rnd_762x39mm"),
                LIST_2("rhs_mag_rgd5"),
                LIST_1("rhs_mag_rdg2_white")
            };
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR")
            };
        };

        //Autorifleman
        class soldier_AR_F: Soldier_F {
            primaryWeapon = "rhs_weap_pkp";
            primaryWeaponMagazine = "rhs_100Rnd_762x54mmR";
            addItemsToBackpack[] = {
                LIST_3("rhs_100Rnd_762x54mmR")
            };
        };

        //Combat Life Saver
        class medic_F: Soldier_F {
            vest = "rhs_6sh46";
            addItemsToVest[] = {
                LIST_15("ACE_fieldDressing"),
                LIST_8("ACE_morphine"),
                LIST_8("ACE_epinephrine"),
                LIST_1("ACE_salineIV_500"),
                LIST_1("ACE_salineIV_250"),
                LIST_15("ACE_splint")
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
                LIST_7("rhs_30Rnd_762x39mm"),
                LIST_2("rhs_mag_rdg2_white"),
                LIST_2("rhs_mag_rgd5"),
                LIST_2("rhs_GRD40_White"),
                LIST_2("rhs_GRD40_Red")
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
