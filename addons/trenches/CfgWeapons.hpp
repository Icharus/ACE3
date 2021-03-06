class CfgWeapons {
    class InventoryItem_Base_F;
    class ACE_ItemCore;

    class ACE_EntrenchingTool: ACE_ItemCore {
        author = ECSTRING(common,ACETeam);
        displayName = CSTRING(EntrenchingToolName);
        descriptionShort = CSTRING(EntrenchingToolDescription);
        model = QUOTE(PATHTOEF(apl,ace_entrchtool.p3d));
        picture = QUOTE(PATHTOF(ui\w_entrchtool_ca.paa));
        scope = 2;
        class ItemInfo: InventoryItem_Base_F {
            mass = 10;
        };
    };
};
