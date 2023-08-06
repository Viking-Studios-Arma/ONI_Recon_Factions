class cfgPatches
{
  class ONI_Recon_Factions
  {
		// Addon identity
		name = "ONI Recon Essentials - Factions";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
    units[]={"ONI_Recon_Heli_Pilot","ONI_Recon_Rifleman","ONI_Recon_AT","ONI_Recon_Medic","ONI_Recon_Team_Leader","ONI_Recon_EOD","ONI_Recon_Marksman","ONI_Recon_LMG","ONI_Recon_MG","ONI_Recon_Jet_Pilot","ONI_Recon_Armour_Crew","ONI_Recon_HMG","ONI_Recon_Rifleman_HMG","ONI_Recon_IC_HMG","ONI_Recon_Medic_HMG","ONI_Recon_Sniper","ONI_Recon_Spotter","ONI_Recon_M12_LRV_Warthog_MG","ONI_Recon_M914_Repair_Hog","ONI_Recon_M831_Troop_Transport","ONI_Recon_M12_FAV","ONI_Recon_M12_APC","ONI_Recon_M808S_Lockdown_Scorpion_MBT","ONI_Recon_M808B2_Sun_Devil","ONI_Recon_M808S_Scorpion_MBT","ONI_Recon_M808BM_Scorpion_MBT","ONI_Recon_M808B_Scorpion_MBT","ONI_Recon_M412_Bison_IFV","ONI_Recon_M413_Bison_MGS","ONI_Recon_M875_Scorpion_Self_Propelled_Howitzer","ONI_Recon_M112_Wet_Patrol_Craft_MG","ONI_Recon_M112_Wet_Patrol_Craft_Unarmed","ONI_Recon_F99_Wombat","ONI_Recon_F99_Wombat_GunPod","ONI_Recon_F99_Wombat_MissilePod","ONI_Recon_UH144_Falcon","ONI_Recon_UH144_Falcon_Unarmed"};
    weapons[]={"ONI_Recon_OPTRE_MA37K_acc_pointer_IROPTRE_M12_Optic","ONI_Recon_OPTRE_M6B_OPTRE_M6G_Flashlight","ONI_Recon_OPTRE_MA5C_OPTRE_MA5C_SmartLink","ONI_Recon_OPTRE_M41_SSR","ONI_Recon_OPTRE_MA5CGL_OPTRE_MA5C_SmartLink","ONI_Recon_OPTRE_M393_DMR_OPTRE_M392_Scope","ONI_Recon_OPTRE_M7_Folded_OPTRE_M7_FlashlightOPTRE_M7_Sight","ONI_Recon_OPTRE_M73_OPTRE_M73_SmartLinkbipod_01_F_blk","ONI_Recon_OPTRE_M247_OPTRE_M393_ACOGbipod_01_F_blk","ONI_Recon_OPTRE_M247H_Etilka","ONI_Recon_OPTRE_HMG38_OPTRE_HMG38_CarryHandlebipod_01_F_blk","ONI_Recon_OPTRE_SRS99C_OPTRE_SRS99C_Scope","ONI_Recon_OPTRE_M7_Folded_OPTRE_M7_silencerOPTRE_M7_LaserOPTRE_M7_Sight","ONI_Recon_OPTRE_Commando_Black_OPTRE_MA5Suppressoracc_pointer_IROPTRE_M393_ACOGbipod_01_F_blk","ONI_Recon_hgun_P07_F"};
    requiredVersion=0.1;
    requiredAddons[]={"ace_hearing","ace_medical_treatment","ace_maptools","ace_trenches","ace_logistics_wirecutter","A3_Weapons_F","tfar_handhelds","OPTRE_Weapons_MA37K","OPTRE_Weapons_M6B","OPTRE_UNSC_Units_Navy","ONI_Recon_Helmets","OPTRE_UNSC_Units_Army","OPTRE_Weapons_AR","ONI_Recon_Armour","OPTRE_Weapons_Rockets","OPTRE_Weapons_Items","ace_captives","ace_huntir","ace_explosives","A3_Weapons_F_Items","OPTRE_Weapons_DMR","OPTRE_Weapons_SMG","OPTRE_Weapons_MG","OPTRE_Weapons_M247H_Etilka","OPTRE_Weapons_HMG38","ace_kestrel4500","ace_dagr","ace_atragmx","ace_tripod","OPTRE_Weapons_Sniper","ace_spottingscope","Commando"};
  };
};

class cfgFactionClasses
{
  class ONI_Recon_Faction
  {
    icon="\VSF\ONI_Recon.paa";
    displayName="ONI Recon";
    side=1;
    priority=1;
  };
};

class CfgEditorSubcategories
{
#include "hpp\Editor_Sub_Categories.hpp"
};

class cfgWeapons
{
  class OPTRE_MA37K;
  class OPTRE_M6B;
  class OPTRE_MA5C;
  class OPTRE_M41_SSR;
  class OPTRE_MA5CGL;
  class OPTRE_M393_DMR;
  class OPTRE_M7_Folded;
  class OPTRE_M73;
  class OPTRE_M247;
  class OPTRE_M247H_Etilka;
  class OPTRE_HMG38;
  class OPTRE_SRS99C;
  class OPTRE_Commando_Black;
  class hgun_P07_F;
#include "hpp\Weapons.hpp"
};

class cfgVehicles
{
  class OPTRE_UNSC_Airforce_Soldier_Airman;
  class OPTRE_UNSC_Marine_Soldier_Rifleman_AR;
  class ONI_Recon_Rucksack;
  class OPTRE_UNSC_Marine_Soldier_Corpsman;
  class ONI_Recon_Rucksack_Medic;
  class OPTRE_UNSC_Marine_Soldier_TeamLead;
  class ONI_Recon_Rucksack_IC;
  class OPTRE_M12_LRV;
  class OPTRE_M914_RV;
  class OPTRE_M813_TT;
  class OPTRE_M12_FAV;
  class OPTRE_M12_FAV_APC;
  class OPTRE_M808L;
  class OPTRE_M808B2;
  class OPTRE_M808S;
  class OPTRE_M808BM_UNSC;
  class OPTRE_M808B_UNSC;
  class OPTRE_M412_IFV_UNSC;
  class OPTRE_M413_MGS_UNSC;
  class OPTRE_M875_SPH;
  class optre_catfish_mg_f;
  class optre_catfish_unarmed_f;
  class OPTRE_Wombat_S;
  class OPTRE_Wombat;
  class OPTRE_Wombat_B;
  class OPTRE_UNSC_falcon;
  class OPTRE_UNSC_falcon_unarmed;
//I didn't want a long config file so here have some includes 
//Ground Support
#include "Ground_Support\cars.hpp"
#include "Ground_Support\tanks.hpp"
#include "Ground_Support\IFV.hpp"
#include "Ground_Support\Artillery.hpp"
#include "Ground_Support\Boats.hpp"
//Aviation
#include "Aviation\Drones.hpp"
#include "Aviation\Helicopters.hpp"
//Special Forces
#include "SF\Backpacks\Backpacks.hpp"
#include "SF\Men\blk.hpp"
#include "SF\Men\urb.hpp"
#include "SF\Men\Wdl.hpp"
#include "SF\Men\Mar.hpp"
//Crew
#include "Crew\Men\Crew.hpp"
//Custom
#include "Custom\Men\Custom.hpp"
};

class cfgGroups
{  
  class WEST
  {
    name="BLUFOR";
    class ONI_Recon_Faction
    {
      name="ONI Recon";
    //Special Forces
    #include "SF\Groups\Blk.hpp"
    #include "SF\Groups\Urb.hpp"
    #include "SF\Groups\Wdl.hpp"
    #include "SF\Groups\Mar.hpp"

    };
  };
};