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
