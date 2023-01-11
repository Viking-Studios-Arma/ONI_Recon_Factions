class cfgPatches
{
    class ONI_Recon_Uniforms
    {
        name = "ONI Recon Essentials Uniforms";
        dlc = "ONI_Recon";
        author = "Viking Studios";
        Authors[] = {"Amateur-god"};
        versionStr = "v2.0.0";
        units[]={"ONI_Recon_Army_Soldier_Slim"};
        weapons[]={"ONI_Recon_V_Slim"};
        requiredVersion=0.1;
        requiredAddons[]={"OPTRE_UNSC_Units_Army","OPTRE_Core"};
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
    class ONI_Recon_Army_Soldier_Urb_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_urban_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Urb_Slim";
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
    class ONI_Recon_Army_Soldier_Mar_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_marine_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Mar_Slim";
    }; 
    class ONI_Recon_Army_Soldier_Wdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_woodland_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_Wdl_Slim";
    }; 
        class ONI_Recon_Army_Soldier_UrbWdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_urban_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_UrbWdl_Slim";
    }; 
        class ONI_Recon_Army_Soldier_MarWdl_Slim: OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
    {
        hiddenSelectionsTextures[] = {"VSU\data\ONI_uniform_a_marine_co.paa","VSU\data\ONI_uniform_b_woodland_co.paa"};
        uniformClass = "ONI_Recon_Uniform_MarWdl_Slim";
    };   
};


class CfgWeapons
{
    class ItemInfo;
    class OPTRE_UNSC_Army_Uniform_BLK_SlimLeg;
    class ONI_Recon_Uniform_Blk_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black)";
        scope = 2;
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
        scope = 2;
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
        scope = 2;
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
    class ONI_Recon_Uniform_Urb_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban)";
        scope = 2;
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
    class ONI_Recon_Uniform_Mar_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine)";
        scope = 2;
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
    class ONI_Recon_Uniform_BlkWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Black/Woodland)";
        scope = 2;
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
        class ONI_Recon_Uniform_UrbWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Urban/Woodland)";
        scope = 2;
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
        class ONI_Recon_Uniform_MarWdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (Marine/Woodland)";
        scope = 2;
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
    class ONI_Recon_Uniform_Wdl_Slim : OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        displayName = "ONI BDU (woodland)";
        scope = 2;
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
class XtdGearModels 
{
    class CfgWeapons 
    {
        class ONI_BDU
        {
            label = "ONI BDU";
            author = "Viking Studios";
            options[] = {"Top", "Trousers"};

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