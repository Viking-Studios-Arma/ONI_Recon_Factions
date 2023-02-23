  class ONI_Recon_Essentials_UH144_Falcon: OPTRE_UNSC_falcon
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "ONI_Recon_Faction_Helicopters";
    side=1;
    crew="ONI_Recon_Essentials_Pilot";
    displayName="UH144 Falcon (Armed)";
    hiddenSelectionsTextures[]={"optre_vehicles\falcon\data\falcon_hull_night_co.paa","optre_vehicles\falcon\data\falcon_hullextra_night_co.paa","optre_vehicles\falcon\data\falcon_wingtips_night_co.paa","optre_vehicles\falcon\data\falcon_skid_night_co.paa","","",""};
		weapons[] = {"CMFlareLauncher","Laserdesignator_mounted"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
  };

  class ONI_Recon_Essentials_UH144_Falcon_Unarmed: OPTRE_UNSC_falcon_unarmed
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "ONI_Recon_Faction_Helicopters";
    side=1;
    displayName="UH144 Falcon (Unarmed)";
    crew="ONI_Recon_Essentials_Pilot";
    hiddenSelectionsTextures[]={"optre_vehicles\falcon\data\falcon_hull_night_co.paa","optre_vehicles\falcon\data\falcon_hullextra_night_co.paa","optre_vehicles\falcon\data\falcon_wingtips_night_co.paa","optre_vehicles\falcon\data\falcon_skid_night_co.paa","","","",""};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };