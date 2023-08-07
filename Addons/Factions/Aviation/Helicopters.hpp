  class ONI_Recon_UH144_Falcon: OPTRE_UNSC_falcon_armed // Pew
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Helicopters";
    side=1;
    crew="ONI_Recon_Pilot";
    displayName="UH144 Falcon (Armed)";
    hiddenSelectionsTextures[]={"OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Main_co.paa","OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Attachments_co.paa","OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Interior_co.paa"};
		weapons[] = {"CMFlareLauncher","Laserdesignator_mounted"};
		magazines[] = {"168Rnd_CMFlare_Chaff_Magazine","Laserbatteries"};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
  };

  class ONI_Recon_UH144_Falcon_Unarmed: OPTRE_UNSC_falcon // No Pew
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Helicopters";
    side=1;
    displayName="UH144 Falcon (Unarmed)";
    crew="ONI_Recon_Pilot";
    hiddenSelectionsTextures[]={"OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Main_co.paa","OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Attachments_co.paa","OPTRE_Vehicles_Air\Falcon\data\black\Black_Falcon_Interior_co.paa"};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };