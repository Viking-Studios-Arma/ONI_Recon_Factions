  class ONI_Recon_F99_Wombat: OPTRE_Wombat_S
  {
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="F99 Wombat";
    hiddenSelectionsTextures[]={"optre_vehicles_air\wombat\data\wombat_co.paa","optre_vehicles_air\wombat\data\wombat_weapons_co.paa","",""};
    crew="B_UAV_AI"; //Used to be B_UAV_AI how did you mess this one up that badly, it even could've just been inherited fine
    typicalCargo[]={"B_UAV_AI"};
  };

  class ONI_Recon_F99_Wombat_GunPod: OPTRE_Wombat 
  {
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="F99 Wombat GunPod";
    hiddenSelectionsTextures[]={"optre_vehicles_air\wombat\data\wombat_co.paa","optre_vehicles_air\wombat\data\wombat_weapons_co.paa",""};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };

  class ONI_Recon_F99_Wombat_MissilePod: OPTRE_Wombat_B
  {
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="F99 Wombat MissilePod";
    hiddenSelectionsTextures[]={"optre_vehicles_air\wombat\data\wombat_co.paa","optre_vehicles_air\wombat\data\wombat_weapons_co.paa",""};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };
  class ONI_Recon_MQ221: VES_MQ221
  {
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="MQ221 Dragonfly";
    hiddenSelectionsTextures[]={"v_fz_air_vehicles\data\dragonfly\a_mq221_blk_co.paa","v_fz_air_vehicles\data\dragonfly\a_mq221_blk_a_co.paa",""};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };
class ONI_Recon_MQ94: TCF_UAV_01_F 
{
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="MQ94 (Recon)";
    hiddenSelectionsTextures[]={};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };
  class ONI_Recon_Reaper: B_UAV_02_dynamicLoadout_F
  {
    faction="ONI_Recon_Faction";
    editorCategory="ONI_Recon_Faction";
    editorSubcategory = "EdSubcat_Drones";
    side=1;
    scope = 2;
    scopeCurator = 2;
    displayName="Reaper";
    hiddenSelectionsTextures[]={"a3\drones_f\air_f_gamma\uav_02\data\uav_02_co.paa"};
    crew="B_UAV_AI";
    typicalCargo[]={"B_UAV_AI"};
  };