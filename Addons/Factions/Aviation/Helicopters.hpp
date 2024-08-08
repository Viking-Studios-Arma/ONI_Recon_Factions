  class ONI_Recon_UH144_Falcon: OPTRE_UNSC_falcon_armed // Pew
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    crew="ONI_Recon_Pilot";
    displayName="UH144 Falcon (Armed)";
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
  };

  class ONI_Recon_UH144_Falcon_Unarmed: OPTRE_UNSC_falcon // No Pew
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    displayName="UH144 Falcon (Unarmed)";
    crew="ONI_Recon_Pilot";
		tf_range = 25000;
		tf_isolatedAmount = 0.4;
		tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
		tf_hasLRradio = 1;
		enableRadio = 1;
  };
  class ONI_Recon_Pelican_Unarmed: OPTRE_Pelican_unarmed_SOCOM
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    displayName="Pelican (Unarmed)";
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
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    displayName="Pelican (Armed)";
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
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    displayName="UH144S Falcon Unarmed (Door Gunner)";
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
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
    side=1;
    displayName="UH144S Falcon (Door Gunner)";
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
    faction="ONI_Recon_Faction";
    editorCategory = "ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Helicopters";
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
