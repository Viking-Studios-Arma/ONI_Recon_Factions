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
  class ONI_Recon_Pelican_Unarmed: OPTRE_Pelican_unarmed_SOCOM
  {
    faction="ONI_Recon_Faction_Avi";
    side=1;
    displayName="Pelican (Unarmed)";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_black_co.paa","","","","",""};
    crew="ONI_Recon_Pilot";
    typicalCargo[]={"ONI_Recon_Pilot"};
    tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };
  class ONI_Recon_Pelican_Armed: OPTRE_Pelican_armed_SOCOM
  {
    faction="ONI_Recon_Faction_Avi";
    side=1;
    displayName="Pelican (Armed)";
    hiddenSelectionsTextures[]={"optre_vehicles\pelican\data\pelicanexterior_black_co.paa","","","",""};
    crew="ONI_Recon_Pilot";
    typicalCargo[]={"ONI_Recon_Pilot"};
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };
  class ONI_Recon_UH144S_Falcon: OPTRE_UNSC_falcon_s
  {
    faction="ONI_Recon_Faction_Avi";
    side=1;
    displayName="UH144S Falcon Unarmed (Door Gunner)";
    hiddenSelectionsTextures[]={"optre_vehicles_air\falcon\data\black\black_falcon_main_co.paa","optre_vehicles_air\falcon\data\black\black_falcon_attachments_co.paa","optre_vehicles_air\falcon\data\black\black_falcon_interior_co.paa",""};
    crew="ONI_Recon_Pilot";
    typicalCargo[]={"ONI_Recon_Pilot"};
    tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };
  class ONI_Recon_UH144S_Falcon_Armed: OPTRE_UNSC_falcon_armed_s
  {
    faction="ONI_Recon_Faction_Avi";
    side=1;
    displayName="UH144S Falcon (Door Gunner)";
    hiddenSelectionsTextures[]={"optre_vehicles_air\falcon\data\black\black_falcon_main_co.paa","optre_vehicles_air\falcon\data\black\black_falcon_attachments_co.paa","optre_vehicles_air\falcon\data\black\black_falcon_interior_co.paa"};
    crew="ONI_Recon_Pilot";
    typicalCargo[]={"ONI_Recon_Pilot"};
    tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };
  class ONI_Recon_EV41: TCF_UNSC_Nightingale
  {
    faction="ONI_Recon_Faction_Avi";
    side=1;
    displayName="EV41";
    hiddenSelectionsTextures[]={"tcf_vehicles\ev_41_nightingale\data\tcf_ev41_blk_co.paa","","","","","","","",""};
    crew="ONI_Recon_Pilot";
    typicalCargo[]={"ONI_Recon_Pilot"};
    tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1; 
  };