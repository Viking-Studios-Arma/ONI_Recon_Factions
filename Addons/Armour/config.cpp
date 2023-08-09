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

#include "hpp\CfgWeapons.hpp"
#include "hpp\XtdGearInfos.hpp"
#include "hpp\XtdGearModels.hpp"