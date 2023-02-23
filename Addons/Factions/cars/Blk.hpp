class ONI_Recon_Faction
    {
      name="ONI Recon";

      class Infantry
      {
        name="Infantry (Black)";

        class ONI_B_AT_Team
        {
          name="AT Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Team_Leader";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_AT";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_Medic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class ONI_B_MG_Team
        {
          name="MG Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Team_Leader";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_LMG";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_MG";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_Medic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class ONI_B_Rifle_Team
        {
          name="Rifle Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Team_Leader";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_Rifleman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class ONI_B_EOD_Team
        {
          name="EOD Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Team_Leader";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_EOD";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class ONI_B_MX_Team
        {
          name="MX Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Team_Leader";
            rank="SERGEANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_Marksman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_Rifleman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      class SpecOps
      {
        name="Special Forces (Black)";

        class ONI_B_HMG_Team
        {
          name="HMG Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_IC_HMG";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_Medic_HMG";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="ONI_Recon_Rifleman_HMG";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=1;
            vehicle="ONI_Recon_HMG";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class ONI_B_Sniper_Team
        {
          name="Sniper Team";
          faction="ONI_Recon";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="ONI_Recon_Sniper";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="ONI_Recon_Spotter";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
      };
    };
  };