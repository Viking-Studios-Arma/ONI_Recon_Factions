  class ONI_Recon_F99_Wombat: OPTRE_Wombat_S
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="F99 Wombat";
    hiddenSelectionsTextures[]={"optre_vehicles\wombat\data\wombat_co.paa","optre_vehicles\wombat\data\wombat_weapons_co.paa","",""};
    crew="B_UAV_AI"; //Used to be B_AI_F how did you mess this one up that badly, it even could've just been inherited fine
    typicalCargo[]={"B_UAV_AI"};
  };

  class ONI_Recon_F99_Wombat_GunPod: OPTRE_Wombat // Where Man?
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="F99 Wombat GunPod";
    hiddenSelectionsTextures[]={"optre_vehicles\wombat\data\wombat_co.paa","optre_vehicles\wombat\data\wombat_weapons_co.paa",""};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };

  class ONI_Recon_F99_Wombat_MissilePod: OPTRE_Wombat_B
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="F99 Wombat MissilePod";
    hiddenSelectionsTextures[]={"optre_vehicles\wombat\data\wombat_co.paa","optre_vehicles\wombat\data\wombat_weapons_co.paa",""};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };
  class ONI_Recon_MQ221: VES_MQ221
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="MQ221";
    hiddenSelectionsTextures[]={"v_fz_air_vehicles\data\dragonfly\a_mq221_blk_co.paa","v_fz_air_vehicles\data\dragonfly\a_mq221_blk_a_co.paa",""};
    crew="B_AI_F";
    typicalCargo[]={"B_AI_F"};
  };
  class ONI_Recon_MQ94: TCF_UAV_01_F
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="MQ94";
    hiddenSelectionsTextures[]={};
    crew="B_AI_F";
    typicalCargo[]={"B_AI_F"};
  };
  class ONI_Recon_Reaper: B_UAV_02_dynamicLoadout_F
  {
    faction="ONI_Recon_Faction_Avi";
    editorSubcategory = "ONI_Recon_Faction_Drones";
    side=1;
    displayName="Reaper";
    hiddenSelectionsTextures[]={"a3\drones_f\air_f_gamma\uav_02\data\uav_02_co.paa"};
    crew="B_AI_F";
    typicalCargo[]={"B_AI_F"};
  };