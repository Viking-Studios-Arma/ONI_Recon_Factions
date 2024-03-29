  class ONI_Recon_M112_Wet_Patrol_Craft_MG: optre_catfish_mg_f
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Boats";
    side=1;
    scope = 2;
    displayName="M112 Wet Patrol Craft MG";
    hiddenSelections[]={"camo"};
    hiddenSelectionsTextures[]={"optre_vehicles\catfish\data\optre_catfish_boat_black_co.paa"};
    crew="ONI_Recon_SF_Rifleman";
    typicalCargo[]={"ONI_Recon_SF_Rifleman"};
  };

  class ONI_Recon_M112_Wet_Patrol_Craft_Unarmed: optre_catfish_unarmed_f // Dont sink please
  {
    faction="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Boats";
    side=1;
    scope = 2;
    displayName="M112 Wet Patrol Craft Unarmed";
    hiddenSelectionsTextures[]={"optre_vehicles\catfish\data\optre_catfish_boat_black_co.paa"};
    crew="ONI_Recon_SF_Rifleman";
    typicalCargo[]={"ONI_Recon_SF_Rifleman"};
  };
