#define _ARMA_

class CfgPatches
{
	class ONI_Recon_Helmets
	{
		// Addon identity
		name = "ONI Recon - Helmets";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		units[] = {};
		weapons[] = {"ONI_Recon_Helmet_SF","ONI_Recon_Helmet_SF_Medic","ONI_Recon_Helmet_SF_X","ONI_Flight_Pilot","ONI_Flight_Pilot_two","ONI_Pilot_Helmet_VA","ONI_Pilot_LT_Helmet_VA","ONI_Pilot_LT_Helmet_VBB","ONI_Pilot_CPT_Helmet_VBB","ONI_Pilot_CPT_Helmet_VAB"};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core"};
	};
};

#include "hpp\CfgWeapons.hpp"
#include "hpp\XtdGearInfos.hpp"
#include "hpp\XtdGearModels.hpp"