#define _ARMA_

class CfgPatches
{
	class ONI_Recon_Armour
	{
        name = "ONI Recon Essentials";
        dlc = "ONI_Recon";
        author = "Viking Studios";
        Authors[] = {"Amateur-god","Celt"};
        versionStr = "v1.0.0";
		units[] = {};
		weapons[] = {"ONI_Armour","ONI_Armour_Base","ONI_Armour_Base_MX","ONI_Armour_Base_SC","ONI_Armour_Base_Demo","ONI_Armour_Medic","ONI_Armour_Mx","ONI_Armour_Scout","ONI_Armour_Demo"};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core"};
	};
};
class cfgWeapons
{
	class OPTRE_UNSC_M52D_Armor_Rifleman;
    class OPTRE_UNSC_M52D_Armor_Marksman;
    class OPTRE_UNSC_M52D_Armor_Sniper;
    class OPTRE_UNSC_M52D_Armor_Scout;
    class OPTRE_UNSC_M52D_Armor_Demolitions;
    class ONI_Armour_Base: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        class ItemInfo;
    }
    class ONI_Armour_Base_MX: OPTRE_UNSC_M52D_Armor_Marksman
    {
        class ItemInfo;
    }
    class ONI_Armour_Base_SC: OPTRE_UNSC_M52D_Armor_Scout
    {
        class ItemInfo;
    }
    class ONI_Armour_Base_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        class ItemInfo;
    }
    class ONI_Armour: ONI_Armour_Base
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "ONI Armour";
		hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_co.paa"};
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };	        
            class XtdGearInfo {
            model = "ONI_Armour";
            camo = "A";
        };
    };
    class ONI_Armour_Medic: ONI_Armour {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_medic_co.paa"};

        class XtdGearInfo {
        	model= "ONI_Armour"
            camo = "B";
        };
    };
    class ONI_Armour_Mx: ONI_Armour_Base_MX {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_co.paa"};
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
            class XtdGearInfo {
                model= "ONI_Armour"
                camo = "C";
        };
    };
    /* Implement when sniper qual has been developed
    class ONI_Armour_Sniper: OPTRE_UNSC_M52D_Armor_Sniper {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_co.paa"};
    
        class XtdGearInfo {
            model= "ONI_Armour"
            camo = "D";
        };
    };
    */
    class ONI_Armour_Scout: ONI_Armour_Base_SC {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_co.paa"};
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour"
            camo = "E";
        };
    };
    class ONI_Armour_Demo: ONI_Armour_Base_Demo {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_co.paa","VSA\data\Armour_ONI_co.paa","VSA\data\ONI_Legs_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_co.paa"};
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour"
            camo = "F";
        };
    };
    class ONI_Armour_Carmichael: ONI_Armour_Base_MX {
        hiddenSelectionsTextures[] = {"VSA\data\ONI_Vest_Carmichael_co.paa","VSA\data\Armour_ONI_Carmichael_co.paa","VSA\data\ONI_Legs_Carmichael_co.paa","VSA\data\ghillie_woodland_co.paa","VSA\data\ONI_Armour_Carmichael_co.paa"};
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour"
            camo = "G";
        };
    };
};
	class XtdGearModels {
    class CfgWeapons {
        class ONI_Armour {
            label = "ONI Armours";
            author = "Viking Studios";
            options[] = { "camo" };

            class camo {
                changeingame = 0;
                values[] = { "A", "B", "C", /*"D",*/ "E", "F", "G" };

                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "Marksman"; };
                //class D { label = "Sniper"; };
                class E { label = "Scout"; };
                class F { label = "Demolitions"; };
                class G { label = "Carmichael"; };
            };
        };
    };
}