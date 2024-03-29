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
    class ONI_Recon_Armour_SF_IC: ONI_Recon_Armour_Base_SF_Basic
    {
        scope = 2;
        author = "Viking Studios";
        displayName = "[ONI] Special Forces Armour IC";
        hiddenSelections[]={"camo","camo2","camo3","camo4","camo5","A_Base","A_Ghillie","A_ChestArmor","A_KneesLeft","A_KneesRight","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
        class ItemInfo: ItemInfo 
        {
            hiddenSelections[]={"camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesMarLeft","APO_BR","AP_Knife","A_KneesMarRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AP_Canteen","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_AR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
            hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_co.paa"};
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
    class ONI_Recon_Armour_SF_Carmichael: ONI_Recon_Armour_Base_SF_Basic { // Is me mario (Ps. im not actually called mario)
        hiddenSelections[]={"camo","camo2","camo3","camo4","camo5","A_Base","A_Ghillie","A_ChestArmor","A_KneesLeft","A_KneesRight","A_KneesMarLeft","A_KneesMarRight","A_ODST","A_ShinArmorLeft","A_ShinArmorRight","A_TacPad","A_ThighArmorLeft","A_ThighArmorRight","AS_BaseLeft","AS_BaseRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_Canteen","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Carmichael_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Carmichael_co.paa"};
        displayName = "[ONI] Special Forces Armour Carmichael";
        class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo","camo2","camo3","camo4","camo5","A_Ghillie","A_KneesMarLeft","APO_BR","A_KneesMarRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AP_Canteen","AS_ODSTCQBLeft","AS_ODSTRight","AS_ODSTSniperLeft","AS_ODSTSniperRight","AS_SmallLeft","AS_SmallRight","AP_GL","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_SG","AP_SMG","AP_Sniper","AP_Thigh","APO_AR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
            hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\armour_ONI_co.paa","\x\VS_ONI\Armour\data\ONI_Legs_Carmichael_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa","\x\VS_ONI\Armour\data\ONI_Armour_Carmichael_co.paa"};
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
        hiddenSelections[]={"camo", "camo2", "camo3", "camo4", "camo5","A_Ghillie","A_KneesMarLeft","A_KneesMarRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTRight","AS_ODSTSniperLeft","AS_SmallLeft", "AS_SmallRight","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG", "AP_SMG", "AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
        hiddenSelectionsTextures[] = {"\x\VS_ONI\Armour\data\ONI_Vest_co.paa","\x\VS_ONI\Armour\data\Armour_ONI_co.paa", "\x\VS_ONI\Armour\data\ONI_Legs_gumbekk_co.paa","\x\VS_ONI\Armour\data\ghillie_woodland_co.paa", "\x\VS_ONI\Armour\data\ONI_Armour_gumbekk_co.paa"};
        displayName = "[ONI] Special Forces Armour Gumbekk"; // It's 5AM help me with signing keys // Amateur-god (Carmichael) got Gumbekks GPG key verification working
        class ItemInfo: ItemInfo 
        {
        hiddenSelections[]={"camo", "camo2", "camo3", "camo4", "camo5","A_Ghillie","A_KneesMarLeft","A_KneesMarRight","AS_LargeLeft","AS_LargeRight","AS_MediumLeft","AS_MediumRight","AS_ODSTCQBLeft","AS_ODSTCQBRight","AS_ODSTRight","AS_ODSTSniperLeft","AS_SmallLeft", "AS_SmallRight","AP_GL","AP_Knife","AP_MGThigh","AP_AR","AP_BR","AP_Pack","AP_Pistol","AP_Rounds","AP_SG", "AP_SMG", "AP_Sniper","AP_Thigh","AP_Frag","AP_Smoke","APO_AR","APO_BR","APO_Knife","APO_SMG","APO_Sniper","CustomKit_Scorch"};
        containerclass = Supply210;
        };
    };
};