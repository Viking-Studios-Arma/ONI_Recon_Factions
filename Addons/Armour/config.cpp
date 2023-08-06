//This is the armour section of the mod
class CfgPatches
{
	class ONI_Recon_Armour
	{
		// Addon identity
		name = "ONI Recon Essentials - Armour";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		units[] = {};
		weapons[] = {"ONI_Recon_Armour","ONI_Recon_Armour_Base_SF_","ONI_Recon_Armour_Base_SF__MX","ONI_Recon_Armour_Base_SF__SC","ONI_Recon_Armour_Base_SF__Demo","ONI_Recon_Armour_SF_Medic","ONI_Recon_Armour_SF_Mx","ONI_Recon_Armour_SF_Scout","ONI_Recon_Armour_SF_Demo"};
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
    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_SF: OPTRE_UNSC_M52D_Armor_Rifleman
    {
        class ItemInfo;
    };
    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_SF_MX: OPTRE_UNSC_M52D_Armor_Marksman
    {
        class ItemInfo;
    };
    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_SF_SC: OPTRE_UNSC_M52D_Armor_Scout
    {
        class ItemInfo;
// <------  The Meaning of Life, The Universe and Everything
    };
    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_SF_Demo: OPTRE_UNSC_M52D_Armor_Demolitions
    {
        class ItemInfo;
    };
    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_Crew: OPTRE_UNSC_M52A_Armor_Pilot_AF
    {
        class ItemInfo;
    };
    class ONI_Recon_Armour_Crew: ONI_Recon_Armour_Base_Crew
    {
        scope = 2;
        author = "Viking Studios";
        displayName = "ONI Armour Crew";
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
        class ItemInfo: ItemInfo 
        {
        containerclass = Supply210;
        };  
            class XtdGearInfo {
            model = "ONI Crew Armour";
            camo = "Crew";
        };
    };
    class ONI_Recon_Armour_SF: ONI_Recon_Armour_Base_SF
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "ONI Armour";
		hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };	        
            class XtdGearInfo {
            model = "ONI SF Armour";
            camo = "A";
        };
    };
    class ONI_Recon_Armour_SF_Medic: ONI_Recon_Armour_SF {
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_medic_co.paa"};
        displayName = "ONI Armour Medic";
        class XtdGearInfo {
        	model= "ONI SF Armour";
            camo = "B";
        };
    };
    class ONI_Recon_Armour_SF_Mx: ONI_Recon_Armour_Base_SF_MX { // Lomg range Acurate pew pew
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
        displayName = "ONI Armour Marksman";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
            class XtdGearInfo {
                model= "ONI SF Armour";
                camo = "C";
        };
    };
    class ONI_Recon_Armour_SF_Sniper: OPTRE_UNSC_M52D_Armor_Sniper { // Very Long range pew pews
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
        displayName = "ONI Armour Sniper";
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "D";
        };
    };
    class ONI_Recon_Armour_SF_Scout: ONI_Recon_Armour_Base_SF_SC { // For the sneaky sneak boys
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
        displayName = "ONI Armour Scout";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "E";
        };
    };
    class ONI_Recon_Armour_SF_Demo: ONI_Recon_Armour_Base_SF_Demo { // For those who like to make things go BOOM
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_co.paa"};
        displayName = "ONI Armour Demo/EOD";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "F";
        };
    };
    class ONI_Recon_Armour_SF_Carmichael: ONI_Recon_Armour_Base_SF_MX { // Is me mario (Ps. im not actually called mario)
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_Carmichael_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_Carmichael_co.paa"};
        displayName = "ONI Armour Carmichael";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "G";
        };
    };
    class ONI_Recon_Armour_SF_Hex: ONI_Recon_Armour_SF_Demo {
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_Hex_co.paa","\VS_ONI\Armour\data\ONI_Legs_Hex_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_Hex_co.paa"};
        displayName = "ONI Armour Hex";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "H";
        };
    };
    class ONI_Recon_Armour_SF_Celt: ONI_Recon_Armour_SF_Scout {
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_Celt_co.paa","\VS_ONI\Armour\data\Armour_ONI_Celt_co.paa","\VS_ONI\Armour\data\ONI_Legs_Celt_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_Celt_co.paa"};
        displayName = "ONI Armour Celt";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "sheepshagger"; //Because he's welsh
        };
    };
    class ONI_Recon_Armour_SF_Storm: ONI_Recon_Armour_Base_SF {
        hiddenSelectionsTextures[] = {"\VS_ONI\Armour\data\ONI_Vest_co.paa","\VS_ONI\Armour\data\armour_ONI_co.paa","\VS_ONI\Armour\data\ONI_Legs_storm_co.paa","\VS_ONI\Armour\data\ghillie_woodland_co.paa","\VS_ONI\Armour\data\ONI SF Armour_Storm_co.paa"};
        displayName = "ONI Armour Storm";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI SF Armour";
            camo = "purple"; // Because he seems to really like purple theme
        };
    };
};
	class XtdGearModels {
    class CfgWeapons {
        class ONI_Recon_SF_Armour {
            label = "ONI SF Armour";
            author = "Viking Studios";
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {"A", "B", "C", "D", "E", "F", "G", "H", "sheepshagger", "purple"};

                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "Marksman"; };
                class D { label = "Sniper"; };
                class E { label = "Scout"; };
                class F { label = "Demolitions"; };
                class G { label = "Carmichael"; };
                class H { label = "Hex"; };
                class sheepshagger { label = "Celt"; }; // <-- I wrote this classname months ago and i still laugh at it everytime i see it in the code 
                class purple { label = "Storm"; };

            };
        };
        class ONI_Recon_Crew_Armour {
            label = "ONI Crew Armour";
            author = "Viking Studios";
            options[] = {"camo"};
            class camo {
                changeingame = 0;
                values[] = {"Crew"};   

                class Crew { label = "Crew"; }; 
            };
        };
    };
};