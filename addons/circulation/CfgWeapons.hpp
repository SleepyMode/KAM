class CfgWeapons {
    class ACE_ItemCore;
    class CBA_MiscItem_ItemInfo;
    class ACE_bloodIV;

    class kat_bloodIV_O: ACE_bloodIV {
        displayName = CSTRING(BloodIV_O);
    };
    class kat_bloodIV_A: ACE_bloodIV {
        displayName = CSTRING(BloodIV_A);
    };
    class kat_bloodIV_B: ACE_bloodIV {
        displayName = CSTRING(BloodIV_B);
    };
    class kat_bloodIV_AB: ACE_bloodIV {
        displayName = CSTRING(BloodIV_AB);
    };
    class ACE_bloodIV_500;
    class kat_bloodIV_O_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_O_500);
    };
    class kat_bloodIV_A_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_A_500);
    };
    class kat_bloodIV_B_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_B_500);
    };
    class kat_bloodIV_AB_500: ACE_bloodIV_500 {
        displayName = CSTRING(BloodIV_AB_500);
    };
    class ACE_bloodIV_250;
    class kat_bloodIV_O_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_O_250);
    };
    class kat_bloodIV_A_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_A_250);
    };
    class kat_bloodIV_B_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_B_250);
    };
    class kat_bloodIV_AB_250: ACE_bloodIV_250 {
        displayName = CSTRING(BloodIV_AB_250);
    };
    class KAT_Empty_bloodIV_500: ACE_bloodIV
	{
        displayName = CSTRING(FieldBloodTK500_Display);
        descriptionShort = CSTRING(FieldBloodTK_Desc);
        descriptionUse = CSTRING(FieldBloodTK_Desc);
		picture = QPATHTOF(ui\bloodIV_empty_ca.paa);
		author = "Battlekeeper";
        hiddenSelectionsTextures[] = {QPATHTOF(ui\IVBag_blood_500ml_empty_ca.paa)};
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
	class KAT_Empty_bloodIV_250: ACE_bloodIV
	{
        displayName = CSTRING(FieldBloodTK250_Display);
        descriptionShort = CSTRING(FieldBloodTK_Desc);
        descriptionUse = CSTRING(FieldBloodTK_Desc);
		picture = QPATHTOF(ui\bloodIV_empty_ca.paa);
		author = "Battlekeeper";
        hiddenSelectionsTextures[] = {QPATHTOF(ui\IVBag_blood_500ml_empty_ca.paa)};
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class kat_PainkillerItem: ACE_ItemCore {
        scope = 1; // no mistake, just a placeholder, cause ACE can't handle magazines. DO NOT USE!
        author = "Katalam";
        displayName = CSTRING(Painkillers_Box_Display);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0;
        };
    };
	class kat_AED: ACE_ItemCore {
        scope = 2;
		author = "Katalam";
        displayName = "$STR_KAT_circulation_AED_DISPLAYNAME";
        picture = QPATHTOF(ui\defib.paa);
		model = "\A3\Structures_F_EPA\Items\Medical\Defibrillator_F.p3d";
        descriptionShort = "$STR_KAT_circulation_AED_DESCRIPTION";
        descriptionUse = "$STR_KAT_circulation_AED_DESCRIPTION";
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 30;
        };
	};
    class kat_X_AED: kat_AED {
        scope = 2;
        displayName = CSTRING(X_Display);
        picture = QPATHTOF(ui\x-series.paa);
        model = QPATHTOF(models\aedx\aedx.p3d);
        descriptionShort = CSTRING(X_Desc);
        descriptionUse = CSTRING(X_Desc);
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 40;
        };
    };
    class kat_crossPanel: ACE_ItemCore {
        scope = 2;
        author = "Katalam";
        displayName = CSTRING(crosspanel);
        descriptionShort = CSTRING(desc_crosspanel);
        picture = QPATHTOF(ui\crosspanel.paa);
        icon = "";
        mapSize = 0.034;
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.1;
        };
    };
};
