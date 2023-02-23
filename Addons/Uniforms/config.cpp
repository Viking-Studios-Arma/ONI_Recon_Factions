class cfgPatches
{
    class ONI_Recon_Uniforms
    {
        name = "ONI Recon Essentials Uniforms";
        dlc = "ONI_Recon";
        author = "Viking Studios";
        Authors[] = {"Amateur-god"};
        versionStr = "v1.0.0";
        units[]={"ONI_Recon_Army_Soldier_Blk_Slim","ONI_Recon_Army_Soldier_BlkUrb_Slim","ONI_Recon_Army_Soldier_BlkMar_Slim","ONI_Recon_Army_Soldier_BlkWdl_Slim","ONI_Recon_Army_Soldier_UrbBlk_Slim","ONI_Recon_Army_Soldier_Urb_Slim","ONI_Recon_Army_Soldier_UrbMar_Slim","ONI_Recon_Army_Soldier_UrbWdl_Slim","ONI_Recon_Army_Soldier_MarBlk_Slim","ONI_Recon_Army_Soldier_MarUrb_Slim","ONI_Recon_Army_Soldier_Mar_Slim","ONI_Recon_Army_Soldier_MarWdl_Slim","ONI_Recon_Army_Soldier_WdlBlk_Slim","ONI_Recon_Army_Soldier_WdlUrb_Slim","ONI_Recon_Army_Soldier_WdlMar_Slim","ONI_Recon_Army_Soldier_Wdl_Slim"};
        weapons[]={"ONI_Recon_Uniform_Blk_Slim","ONI_Recon_Uniform_BlkUrb_Slim","ONI_Recon_Uniform_BlkMar_Slim","ONI_Recon_Uniform_BlkWdl_Slim","ONI_Recon_Uniform_UrbBlk_Slim","ONI_Recon_Uniform_Urb_Slim","ONI_Recon_Uniform_UrbMar_Slim","ONI_Recon_Uniform_UrbWdl_Slim","ONI_Recon_Uniform_MarBlk_Slim","ONI_Recon_Uniform_MarUrb_Slim","ONI_Recon_Uniform_Mar_Slim","ONI_Recon_Uniform_MarWdl_Slim","ONI_Recon_Uniform_WdlBlk_Slim","ONI_Recon_Uniform_WdlUrb_Slim","ONI_Recon_Uniform_WdlMar_Slim","ONI_Recon_Uniform_Wdl_Slim"};
        requiredAddons[]={"OPTRE_UNSC_Units_Army"};
    };

};
class CfgVehicles
{
    class OPTRE_UNSC_Army_Soldier_BLK_SlimLeg;
    class ONI_Recon_Army_Soldier_Blk_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_black_co.paa","VSU\data\ONI_uniform_b_black_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Blk_Slim";
    };    
    class ONI_Recon_Army_Soldier_BlkUrb_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_black_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_BlkUrb_Slim";
    };
    class ONI_Recon_Army_Soldier_BlkMar_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_black_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_BlkMar_Slim";
    }; 
    class ONI_Recon_Army_Soldier_BlkWdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_black_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_BlkWdl_Slim";
    };
    class ONI_Recon_Army_Soldier_UrbBlk_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_UrbBlk_Slim";
    };   
    class ONI_Recon_Army_Soldier_Urb_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Urb_Slim";
    };  
    class ONI_Recon_Army_Soldier_UrbMar_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_UrbMar_Slim";
    };
    class ONI_Recon_Army_Soldier_UrbWdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_UrbWdl_Slim";
    }; 
    class ONI_Recon_Army_Soldier_MarBlk_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_MarBlk_Slim";
    };       
    class ONI_Recon_Army_Soldier_MarUrb_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_MarUrb_Slim";
    }; 
    class ONI_Recon_Army_Soldier_Mar_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Mar_Slim";
    }; 
    class ONI_Recon_Army_Soldier_MarWdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_MarWdl_Slim";
    };
    class ONI_Recon_Army_Soldier_WdlBlk_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_woodland_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_WdlBlk_Slim";
    };   
    class ONI_Recon_Army_Soldier_WdlUrb_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_woodland_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_WdlUrb_Slim";
    };  
    class ONI_Recon_Army_Soldier_WdlMar_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_woodland_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_WdlMar_Slim";
    };  
    class ONI_Recon_Army_Soldier_Wdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_woodland_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Wdl_Slim";
    };     
};


class CfgWeapons
{
    class ItemInfo;
    class OPTRE_UNSC_Army_Uniform_BLK_SlimLeg;
    class ONI_Recon_Uniform_Blk_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "A";
            Trousers = "A"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_Blk_Slim";
        };
    };
    class ONI_Recon_Uniform_BlkUrb_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black/Urban)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "A";
            Trousers = "B"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_BlkUrb_Slim";
        };
    };
    class ONI_Recon_Uniform_BlkMar_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black/Marine)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "A";
            Trousers = "C"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_BlkMar_Slim";
        };
    };
    class ONI_Recon_Uniform_BlkWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black/Woodland)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "A";
            Trousers = "D"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_BlkWdl_Slim";
        };
    };
    class ONI_Recon_Uniform_UrbBlk_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban/Black)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "B";
            Trousers = "A"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_UrbBlk_Slim";
        };
    };
    class ONI_Recon_Uniform_Urb_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "B";
            Trousers = "B"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_Urb_Slim";
        };
    };
    class ONI_Recon_Uniform_UrbMar_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban/Marine)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "B";
            Trousers = "C"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_UrbMar_Slim";
        };
    };
    class ONI_Recon_Uniform_UrbWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban/Woodland)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "B";
            Trousers = "D"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_UrbWdl_Slim";
        };
    };
    class ONI_Recon_Uniform_MarBlk_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine/Black)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "C";
            Trousers = "A"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_MarBlk_Slim";
        };
    };
//This is just a lot of boring Ctrl+C -> Ctrl+V and making a few small changes, PS Drink water 
    class ONI_Recon_Uniform_MarUrb_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine/Urban)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "C";
            Trousers = "B"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_MarUrb_Slim";
        };
    };
    class ONI_Recon_Uniform_Mar_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "C";
            Trousers = "C"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_Mar_Slim";
        };
    };
    class ONI_Recon_Uniform_MarWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine/Woodland)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "C";
            Trousers = "D"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_MarWdl_Slim";
        };
    };
    class ONI_Recon_Uniform_WdlBlk_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Woodland/Black)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "D";
            Trousers = "A"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_WdlBlk_Slim";
        };
    };
    class ONI_Recon_Uniform_WdlUrb_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Woodland/Urban)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "D";
            Trousers = "B"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_WdlUrb_Slim";
        };
    };
    class ONI_Recon_Uniform_WdlMar_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Woodland/Marine)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "D";
            Trousers = "C"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_WdlMar_Slim";
        };
    };
    class ONI_Recon_Uniform_Wdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Woodland)";
        class XtdGearInfo 
        {
            model = "ONI_BDU";
            Top = "D";
            Trousers = "D"
        };
        class ItemInfo: ItemInfo
        {
            uniformClass = "ONI_Recon_Army_Soldier_Wdl_Slim";
        };
    };
};
//Amateur-God (Carmichael) was here
class XtdGearModels 
{
    class CfgWeapons 
    {
        class ONI_BDU
        {
            label = "ONI BDU";
            author = "Viking Studios";
            options[] = {"Shirt", "Trousers"};

            class Top 
            {
                changeingame = 0;
                values[] = {"A","B","C","D"};

                class A { label = "Black"; };
                class B { label = "Urban"; };
                class C { label = "Marine"; };
                class D { label = "Woodland"; };
            };
            class Trousers 
            {
                changeingame = 0;
                values[] = {"A","B","C","D"};

                class A { label = "Black"; };
                class B { label = "Urban"; };
                class C { label = "Marine"; };
                class D { label = "Woodland"; };
            };
        };
    };
};
//The end