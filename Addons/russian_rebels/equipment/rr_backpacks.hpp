/// Equipment list macros definition ///
 
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}

////////////////////////////////////////////////////Backpacks
    class B_AssaultPack_blk;
    class B_AssaultPack_blk_mg: B_AssaultPack_blk
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
    class TRYK_B_Medbag_BK;
    class rr_TRYK_B_Medbag_BK:TRYK_B_Medbag_BK
    {
        scope=1;
        class TransportMagazines
        {
        };
        class TransportItems
        {
            item_xx(FirstAidKit,12);
            item_xx(Medikit,4);
        };
    };
    class TRYK_B_FieldPack_Wood;
    class TRYK_B_FieldPack_Wood_lat: TRYK_B_FieldPack_Wood
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
    class TRYK_B_FieldPack_Wood_aa: TRYK_B_FieldPack_Wood
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
    class TRYK_B_FieldPack_Wood_amg: TRYK_B_FieldPack_Wood
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