class CfgWeapons
{
	class OPTRE_UNSC_Commando_Helmet;
	class OPTRE_UNSC_VX16_Helmet;
	class OPTRE_UNSC_VX16_HelmetNV_blk;
	class OPTRE_UNSC_VX16_Helmet_blk;
	class OPTRE_UNSC_VX16_HelmetV_blk;
	class OPTRE_UNSC_VX16_Helmet_Mask_blk;
	class OPTRE_UNSC_VX16_Helmet_MaskV_blk;
	class OPTRE_UNSC_VX16_Helmet_MaskSV;
	class OPTRE_UNSC_VX16_Helmet_MaskS_blk;
	class OPTRE_UNSC_Operator_Helmet;
	class ONI_Recon_Helmet_SF_Base: OPTRE_UNSC_Commando_Helmet
	{
		class ItemInfo;
	};
	class ONI_Recon_Helmet_SF: ONI_Recon_Helmet_SF_Base
	{
		scope = 2;
		scopeArsenal = 2;
		scopeCurator = 2;
		author = "Viking Studios";
		displayName = "[ONI] Special Forces Helmet";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Black_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo1", "camo2"};
			hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Black_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
			hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};            
        };
	};
	class ONI_Recon_Helmet_SF_dp: ONI_Recon_Helmet_SF
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Helmet_SF_Medic: ONI_Recon_Helmet_SF
	{
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Medic_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		displayName = "[ONI] Medic";
	};
	class ONI_Recon_Helmet_SF_Medic_dp: ONI_Recon_Helmet_SF_Medic
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Helmet_SF_Carmichael: ONI_Recon_Helmet_SF
	{
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Carmichael_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		displayName = "[ONI] Carmichael";
	};
	class ONI_Recon_Helmet_SF_Carmichael_dp: ONI_Recon_Helmet_SF_Carmichael
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;

	};
	class ONI_Recon_Helmet_SF_Celt: ONI_Recon_Helmet_SF
	{
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Celt_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		displayName = "[ONI] Celt";
	};
	class ONI_Recon_Helmet_SF_Celt_dp: ONI_Recon_Helmet_SF_Celt
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Helmet_SF_Hex: ONI_Recon_Helmet_SF
	{
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Hex_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		displayName = "[ONI] Hex";
	};
	class ONI_Recon_Helmet_SF_Hex_dp: ONI_Recon_Helmet_SF_Hex
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Helmet_SF_Storm: ONI_Recon_Helmet_SF
	{
		hiddenSelectionsTextures[] = {"\x\VS_ONI\Helmets\data\ONI_Helmet_Stormwire_co.paa","\x\VS_ONI\Helmets\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"\x\VS_ONI\Helmets\data\ONI.rvmat","\x\VS_ONI\Helmets\data\ONI_Visor_Silver.rvmat"};
		displayName = "[ONI] Storm";
	};
	class ONI_Recon_Helmet_SF_Storm_dp: ONI_Recon_Helmet_SF_Storm
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Helmet_SF_gumbekk: ONI_Recon_Helmet_SF
	{
		displayName = "[ONI] Gumbekk";
	};
	class ONI_Recon_Helmet_SF_gumbekk_dp: ONI_Recon_Helmet_SF_gumbekk
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Flight_Pilot: OPTRE_UNSC_VX16_Helmet_blk
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot";
	};
	class ONI_Recon_Flight_Pilot_dp: ONI_Recon_Flight_Pilot
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Flight_Pilot_two: OPTRE_UNSC_Operator_Helmet
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot 2";
	};
	class ONI_Recon_Flight_Pilot_Two_dp: ONI_Recon_Flight_Pilot_two
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Pilot_Helmet_VA: OPTRE_UNSC_VX16_HelmetV_blk
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot";
	};
	class ONI_Recon_Pilot_Helmet_VA_dp: ONI_Recon_Pilot_Helmet_VA
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Pilot_LT_Helmet_VA: OPTRE_UNSC_VX16_Helmet_Mask_blk
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot PO2";
	};
	class ONI_Recon_Pilot_LT_Helmet_VA_dp: ONI_Recon_Pilot_LT_Helmet_VA
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Pilot_LT_Helmet_VBB: OPTRE_UNSC_VX16_Helmet_MaskV_blk
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot PO2";
	};
	class ONI_Recon_Pilot_LT_Helmet_VBB_dp: ONI_Recon_Pilot_LT_Helmet_VBB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Pilot_CPT_Helmet_VBB: OPTRE_UNSC_VX16_Helmet_MaskSV
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot WO2";
	};
	class ONI_Recon_Pilot_CPT_Helmet_VBB_dp: ONI_Recon_Pilot_CPT_Helmet_VBB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Recon_Pilot_CPT_Helmet_VAB: OPTRE_UNSC_VX16_Helmet_MaskS_blk
	{
		author = "Viking Studios";
		displayName = "[ONI] Pilot WO2";

	};
	class ONI_Recon_Pilot_CPT_Helmet_VAB_dp: ONI_Recon_Pilot_CPT_Helmet_VAB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
};