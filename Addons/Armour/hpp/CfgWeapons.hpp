class CfgWeapons
{
	class OPTRE_UNSC_M52D_Armor_Rifleman;
    class OPTRE_UNSC_M52D_Armor_Marksman;
    class OPTRE_UNSC_M52D_Armor_Sniper;
    class OPTRE_UNSC_M52D_Armor_Scout;
    class OPTRE_UNSC_M52D_Armor_Demolitions;
    class OPTRE_UNSC_M52D_Armor;
    class OPTRE_UNSC_M52D_Armor_Basic;
    class OPTRE_UNSC_M52A_Armor_Pilot_AF;

    //Base armour do not use in the arsenal
    class ONI_Recon_Armour_Base_SF_Rifleman: OPTRE_UNSC_M52D_Armor_Rifleman
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
    class ONI_Recon_Armour_Base_SF_Basic: OPTRE_UNSC_M52D_Armor
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
    };
    class ONI_Recon_Armour_SF_Basic: ONI_Recon_Armour_Base_SF_Basic
    {
        scope = 2;
        author = "Viking Studios";
        displayName = "[ONI] Special Forces Armour";
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        class ItemInfo: ItemInfo 
        {
        containerclass = Supply210;
        };
    };
    class ONI_Recon_Armour_SF: ONI_Recon_Armour_Base_SF_Rifleman
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "[ONI] Special Forces Armour Rifleman";
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };	        
    };
    class ONI_Recon_Armour_SF_Medic: ONI_Recon_Armour_SF {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_medic_co.paa"};
        displayName = "[ONI] Special Forces Armour Medic";
    };
    class ONI_Recon_Armour_SF_Mx: ONI_Recon_Armour_Base_SF_MX { // Lomg range Acurate pew pew
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Marksman";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Sniper: OPTRE_UNSC_M52D_Armor_Sniper { // Very Long range pew pews
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Sniper";
    };
    class ONI_Recon_Armour_SF_Scout: ONI_Recon_Armour_Base_SF_SC { // For the sneaky sneak boys
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Scout";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Demo: ONI_Recon_Armour_Base_SF_Demo { // For those who like to make things go BOOM
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Demo/EOD";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Carmichael: ONI_Recon_Armour_Base_SF_MX { // Is me mario (Ps. im not actually called mario)
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Carmichael_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Carmichael_co.paa"};
        displayName = "[ONI] Special Forces Armour Carmichael";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Hex: ONI_Recon_Armour_SF_Demo {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_Hex_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Hex_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Hex_co.paa"};
        displayName = "[ONI] Special Forces Armour Hex";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Celt: ONI_Recon_Armour_SF_Scout {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_Celt_co.paa","\x\VS_ONI\Armour\data\Armour_ONI_Celt_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Celt_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Celt_co.paa"};
        displayName = "[ONI] Special Forces Armour Celt";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };  
    };
    class ONI_Recon_Armour_SF_Storm: ONI_Recon_Armour_Base_SF_Rifleman {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_storm_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Storm_co.paa"};
        displayName = "[ONI] Special Forces Armour Storm";
        class ItemInfo: ItemInfo
        {
            containerclass = Supply210;
        };
    };
    class ONI_Recon_Armour_SF_gumbekk: ONI_Recon_Armour_SF_Basic
    {
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa", "\x\VS_ONI\Armour\data\armour_ONI_gumbekk_co.paa", "\x\VS_ONI\Armour\data\ONI_Legs_co.paa", "\x\VS_ONI\Armour\data\ghillie_woodland_co.paa", "\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        displayName = "[ONI] Special Forces Armour Gumbekk"; // It's 5AM help me with signing keys // Amateur-god (Carmichael) got Gumbekks GPG key verification working
        class ItemInfo: ItemInfo 
        {
        containerclass = Supply210;
        };
    };
};