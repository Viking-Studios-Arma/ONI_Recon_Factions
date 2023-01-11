#define _ARMA_

class CfgPatches
{
	class ONI_Recon_Armour
	{
        name = "ONI Recon Essentials";
        dlc = "ONI_Recon";
        author = "Viking Studios";
        Authors[] = {"Amateur-god"};
        versionStr = "v2.0.0";
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
    class OPTRE_UNSC_M52A_Armor_Pilot_AF;
    class ONI_Armour_Base: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        class ItemInfo;
    };
    class ONI_Armour_Base_MX: OPTRE_UNSC_M52D_Armor_Marksman
    {
        class ItemInfo;
    };
    class ONI_Armour_Base_SC: OPTRE_UNSC_M52D_Armor_Scout
    {
        class ItemInfo;
    };
    class ONI_Armour_Base_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        class ItemInfo;
    };
    class ONI_Armour_Base_Crew: OPTRE_UNSC_M52A_Armor_Pilot_AF
    {
        class ItemInfo;
    };
    class ONI_Armour_Crew: ONI_Armour_Base_Crew
    {
        scope = 2;
        author = "Viking Studios";
        displayName = "ONI Armour Crew";
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
        class ItemInfo: ItemInfo 
        {
        containerclass = Supply210;
        };  
            class XtdGearInfo {
            model = "ONI_Armour";
            camo = "Crew";
        };
    };
    class ONI_Armour: ONI_Armour_Base
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "ONI Armour";
		hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
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
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_medic_co.paa"};
        displayName = "ONI Armour Medic";
        class XtdGearInfo {
        	model= "ONI_Armour";
            camo = "B";
        };
    };
    class ONI_Armour_Mx: ONI_Armour_Base_MX {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
        displayName = "ONI Armour Marksman";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
            class XtdGearInfo {
                model= "ONI_Armour";
                camo = "C";
        };
    };
    class ONI_Armour_Sniper: OPTRE_UNSC_M52D_Armor_Sniper {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
        displayName = "ONI Armour Sniper";
        class XtdGearInfo {
            model= "ONI_Armour"
            camo = "D";
        };
    };
    class ONI_Armour_Scout: ONI_Armour_Base_SC {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
        displayName = "ONI Armour Scout";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "E";
        };
    };
    class ONI_Armour_Demo: ONI_Armour_Base_Demo {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_co.paa"};
        displayName = "ONI Armour Demo/EOD";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "F";
        };
    };
    class ONI_Armour_Carmichael: ONI_Armour_Base_MX {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_Carmichael_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_Carmichael_co.paa"};
        displayName = "ONI Armour Carmichael";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "G";
        };
    };
    class ONI_Armour_Hex: ONI_Armour_Demo {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_Hex_co.paa","\VSA\data\ONI_Legs_Hex_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_Hex_co.paa"};
        displayName = "ONI Armour Hex";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "H";
        };
    };
    class ONI_Armour_Celt: ONI_Armour_Scout {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_Celt_co.paa","\VSA\data\Armour_ONI_Celt_co.paa","\VSA\data\ONI_Legs_Celt_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_Celt_co.paa"};
        displayName = "ONI Armour Celt";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "sheepshagger";
        };
    };
    class ONI_Armour_Storm: ONI_Armour_Base {
        hiddenSelectionsTextures[] = {"\VSA\data\ONI_Vest_co.paa","\VSA\data\armour_ONI_co.paa","\VSA\data\ONI_Legs_storm_co.paa","\VSA\data\ghillie_woodland_co.paa","\VSA\data\ONI_Armour_Storm_co.paa"};
        displayName = "ONI Armour Storm";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_Armour";
            camo = "purple";
        };
    };
};
	class XtdGearModels {
    class CfgWeapons {
        class ONI_Armour {
            label = "ONI Armour";
            author = "Viking Studios";
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {"A", "B", "C", "D", "E", "F", "G", "H", "sheepshagger", "purple", "Crew" };

                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "Marksman"; };
                class D { label = "Sniper"; };
                class E { label = "Scout"; };
                class Crew { label = "Crew"; };
                class F { label = "Demolitions"; };
                class G { label = "Carmichael"; };
                class H { label = "Hex"; };
                class sheepshagger { label = "Celt"; };
                class purple { label = "Storm"; };

            };
        };
    };
};