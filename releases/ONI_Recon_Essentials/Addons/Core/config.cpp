class CfgPatches {
	class ONI_Recon_core {
		// Addon identity
		name = "ONI Recon Essentials - Core";
		author = "ONI Recon";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		requiredAddons[] = {"A3_Modules_F"};
		units[] = {};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};
class CfgMainMenuSpotlight {
	class A_ONI_Main_server {
		text = "Main Ops Server";
		textIsQuote = 0;
		picture = "\VSC\image\ONI_Recon.paa";
		//video = ;
		action = "connectToServer [""45.92.44.67"", 2402, """"]";
		actionText = "Connect to Main Server";
		condition = true;
	};
	class B_ONI_HM_server {
		text = "Hearts and Minds Server";
		textIsQuote = 0;
		picture = "\VSC\image\ONI_Recon.paa";
		//video = ;
		action = "connectToServer [""45.92.44.67"", 2502, """"]";
		actionText = "Connect to H&M Server";
		condition = true;
	};
};