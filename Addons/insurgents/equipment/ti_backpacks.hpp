/// Equipment list macros definition ///
 
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

////////////////////////////////////////////////////Backpacks

    class TRYK_B_AssaultPack_MARPAT_Desert;
    class TRYK_B_AssaultPack_ti_ar: TRYK_B_AssaultPack_MARPAT_Desert
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(150Rnd_762x54_Box,5);
        };
        class TransportItems
        {
        };
    };
    class TRYK_B_AssaultPack_ti_mg: TRYK_B_AssaultPack_MARPAT_Desert
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(rhs_100Rnd_762x54mmR,4);
        };
        class TransportItems
        {
        };
    };
    class B_FieldPack_cbr;
    class B_FieldPack_cbr_ti_LAT: B_FieldPack_cbr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(rhs_rpg7_PG7VL_mag,5);
        };
        class TransportItems
        {
        };
    };
    class B_FieldPack_cbr_ti_AA: B_FieldPack_cbr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(rhs_mag_9k38_rocket,3);
        };
        class TransportItems
        {
        };
    };
    class B_FieldPack_cbr_ti_AAR: B_FieldPack_cbr
    {
        scope = 1;
        class TransportMagazines
        {
            mag_xx(150Rnd_762x54_Box,5);
        };
        class TransportItems
        {
        };
    };
