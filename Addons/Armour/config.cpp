//This is the armour section of the mod
class CfgPatches
{
	class ONI_Recon_Armour
	{
		// Addon identity
		name = "ONI Recon - Armour";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		units[] = {};
		weapons[] = {"ONI_Recon_Armour_SF","ONI_Recon_Armour_Base_SF_","ONI_Recon_Armour_Base_SF__MX","ONI_Recon_Armour_Base_SF__SC","ONI_Recon_Armour_Base_SF__Demo","ONI_Recon_Armour_SF_Medic","ONI_Recon_Armour_SF_Mx","ONI_Recon_Armour_SF_Scout","ONI_Recon_Armour_SF_Demo"};
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
        displayName = "[ONI] Crew Armour";
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
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
		displayName = "[ONI] Special Forces Armour";
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };	        
            class XtdGearInfo {
            model = "ONI_SF_Armour";
            camo = "A";
        };
    };
    class ONI_Recon_Armour_SF_Medic: ONI_Recon_Armour_SF {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_medic_co.paa"};
        displayName = "[ONI] Special Forces Armour Medic";
        class XtdGearInfo {
        	model= "ONI_SF_Armour";
            camo = "B";
        };
    };
    class ONI_Recon_Armour_SF_Mx: ONI_Recon_Armour_Base_SF_MX { // Lomg range Acurate pew pew
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Marksman";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
            class XtdGearInfo {
                model= "ONI_SF_Armour";
                camo = "C";
        };
    };
    class ONI_Recon_Armour_SF_Sniper: OPTRE_UNSC_M52D_Armor_Sniper { // Very Long range pew pews
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Sniper";
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "D";
        };
    };
    class ONI_Recon_Armour_SF_Scout: ONI_Recon_Armour_Base_SF_SC { // For the sneaky sneak boys
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Scout";
            class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "E";
        };
    };
    class ONI_Recon_Armour_SF_Demo: ONI_Recon_Armour_Base_SF_Demo { // For those who like to make things go BOOM
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Demo/EOD";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "F";
        };
    };
    class ONI_Recon_Armour_SF_Carmichael: ONI_Recon_Armour_Base_SF_MX { // Is me mario (Ps. im not actually called mario)
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Carmichael_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Carmichael_co.paa"};
        displayName = "[ONI] Special Forces Armour Carmichael";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "AG";
        };
    };
    class ONI_Recon_Armour_SF_Hex: ONI_Recon_Armour_SF_Demo {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_Hex_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Hex_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Hex_co.paa"};
        displayName = "[ONI] Special Forces Armour Hex";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "H";
        };
    };
    class ONI_Recon_Armour_SF_Celt: ONI_Recon_Armour_SF_Scout {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_Celt_co.paa","\x\VS_ONI\Armour\data\Armour_ONI_Celt_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Celt_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Celt_co.paa"};
        displayName = "[ONI] Special Forces Armour Celt";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "sheepshagger"; //Because he's welsh
        };
    };
    class ONI_Recon_Armour_SF_Storm: ONI_Recon_Armour_Base_SF {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_storm_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Storm_co.paa"};
        displayName = "[ONI] Special Forces Armour Storm";
                class ItemInfo: ItemInfo
            {
                containerclass = Supply210;
            };  
        class XtdGearInfo {
            model= "ONI_SF_Armour";
            camo = "purple"; // Because he seems to really like purple theme
        };
    };
};
	class XtdGearModels {
    class CfgWeapons {
        class ONI_SF_Armour {
            label = "[ONI] Special Forces Armour";
            author = "Viking Studios";
            options[] = {"camo"};

            class camo {
                changeingame = 0;
                values[] = {"A", "B", "C", "D", "E", "F", "AG", "H", "sheepshagger", "purple"};

                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "Marksman"; };
                class D { label = "Sniper"; };
                class E { label = "Scout"; };
                class F { label = "Demolitions"; };
                class AG { label = "Carmichael"; }; // AG for Amteur-God
                class H { label = "Hex"; }; // H for Hex
                class sheepshagger { label = "Celt"; }; // <-- I wrote this classname months ago and i still laugh at it everytime i see it in the code 
                class purple { label = "Storm"; }; // Because he loves purple

            };
        };
        class ONI_Recon_Crew_Armour {
            label = "[ONI] Crew Armour";
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