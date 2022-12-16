#define _ARMA_

class CfgPatches
{
	class ONI_Recon_Helmets
	{
		name = "ONI Recon Essentials";
		dlc = "ONI_Recon";
		author = "Viking Studios";
		Authors[] = {"Amateur-god"};
		versionStr = "v1.0.0";
		units[] = {};
		weapons[] = {"ONI_Helmet","ONI_Helmet_Medic","ONI_Helmet_X","ONI_Flight_Pilot","ONI_Flight_Pilot_two","ONI_Pilot_Helmet_VA","ONI_Pilot_LT_Helmet_VA","ONI_Pilot_LT_Helmet_VBB","ONI_Pilot_CPT_Helmet_VBB","ONI_Pilot_CPT_Helmet_VAB"};
		requiredVersion = 0.1;
		requiredAddons[] = {"OPTRE_Core"};
	};
};
class cfgWeapons
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
	class ONI_Helmet_Base: OPTRE_UNSC_Commando_Helmet
	{
		class ItemInfo;
	}
	class ONI_Helmet: ONI_Helmet_Base
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "ONI Helmet";
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Black_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "A";
		};
		class ItemInfo: ItemInfo
        {
            hiddenSelections[]={"camo1", "camo2"};
			hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Black_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
			hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};            
        }
	};
	class ONI_Helmet_dp: ONI_Helmet
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Helmet_Medic: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Medic_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		displayName = "ONI Medic";
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "B";
		};
	};
	class ONI_Helmet_Medic_dp: ONI_Helmet_Medic
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	}
	class ONI_Helmet_Carmichael: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Carmichael_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		displayName = "Carmichael";
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "X";
		};
	};
	class ONI_Helmet_Carmichael_dp: ONI_Helmet_Carmichael
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;

	};
	class ONI_Helmet_Celt: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Celt_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		displayName = "ONI Celt";
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "sheepshagger";
		};
	};
	class ONI_Helmet_Celt_dp: ONI_Helmet_Celt
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	}
	class ONI_Helmet_Hex: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Hex_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		displayName = "ONI Hex";
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "H";
		};
	};
	class ONI_Helmet_Hex_dp: ONI_Helmet_Hex
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	}
	class ONI_Helmet_Storm: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Stormwire_co.paa","VSH\data\ONI_Visor_Silver_co.paa"};
		hiddenSelectionsMaterials[]= {"VSH\data\ONI.rvmat","VSH\data\ONI_Visor_Silver.rvmat"};
		displayName = "ONI Storm";
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "S";
		};
	};
	class ONI_Helmet_Storm_dp: ONI_Helmet_Storm
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Flight_Pilot: OPTRE_UNSC_VX16_Helmet_blk
	{
		author = "Viking Studios";
		displayName = "ONI Pilot";
		class XtdGearInfo
		{
			model = "ONI_Flight_Pilot";
			visor = "B";
		};
	};
	class ONI_Flight_Pilot_dp: ONI_Flight_Pilot
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Flight_Pilot_two: OPTRE_UNSC_Operator_Helmet
	{
		author = "Viking Studios";
		displayName = "ONI Pilot 2";
	};
	class ONI_Flight_Pilot_Two_dp: ONI_Flight_Pilot_two
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Pilot_Helmet_VA: OPTRE_UNSC_VX16_HelmetV_blk
	{
		author = "Viking Studios";
		displayName = "ONI Pilot";
		class XtdGearInfo
		{
			model = "ONI_Flight_Pilot";
			visor = "A";
		};
	};
	class ONI_Pilot_Helmet_VA_dp: ONI_Pilot_Helmet_VA
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Pilot_LT_Helmet_VA: OPTRE_UNSC_VX16_Helmet_Mask_blk
	{
		author = "Viking Studios";
		displayName = "ONI Pilot PO2";
		class XtdGearInfo
		{
			model = "ONI_Flight_LT";
			visor = "A";
		};
	};
	class ONI_Pilot_LT_Helmet_VA_dp: ONI_Pilot_LT_Helmet_VA
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Pilot_LT_Helmet_VBB: OPTRE_UNSC_VX16_Helmet_MaskV_blk
	{
		author = "Viking Studios";
		displayName = "ONI Pilot PO2";
		class XtdGearInfo
		{
			model = "ONI_Flight_LT";
			visor = "B";
		};
	};
	class ONI_Pilot_LT_Helmet_VBB_dp: ONI_Pilot_LT_Helmet_VBB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Pilot_CPT_Helmet_VBB: OPTRE_UNSC_VX16_Helmet_MaskSV
	{
		author = "Viking Studios";
		displayName = "ONI Pilot WO2";
		class XtdGearInfo
		{
			model = "ONI_Flight_CPT";
			visor = "B";
		};
	};
	class ONI_Pilot_CPT_Helmet_VBB_dp: ONI_Pilot_CPT_Helmet_VBB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
	class ONI_Pilot_CPT_Helmet_VAB: OPTRE_UNSC_VX16_Helmet_MaskS_blk
	{
		author = "Viking Studios";
		displayName = "ONI Pilot WO2";
		class XtdGearInfo
		{
			model = "ONI_Flight_CPT";
			visor = "A";
		};
	};
	class ONI_Pilot_CPT_Helmet_VAB_dp: ONI_Pilot_CPT_Helmet_VAB
	{
		scope = 1;
		scopeArsenal = 1;
		scopeCurator = 1;
	};
};
class XtdGearModels
{
	class CfgWeapons
	{
		class ONI_Helmet
		{
			label = "ONI Helmets";
			author = "Viking Studios";
			options[] = {"camo"};
			class camo
			{
				changeingame = 0;
				values[] = {"A","B","sheepshagger","X","H","S"};
				class A { label = "Rifleman"; };
				class B	{ label = "Medic"; };
				class H	{ label = "Hex"; };
				class S	{ label = "Stormwire"; };
				class sheepshagger { label = "Celt"; };
				class X	{ label = "Carmichael"; };
			};
		};
		class ONI_Flight_Pilot
		{
			label = "ONI Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor"};
			class visor
			{
				changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
		class ONI_Flight_LT
		{
			label = "ONI Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor"};
			class visor {
                changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
		class ONI_Flight_CPT
		{
			label = "ONI Pilot Helmets";
			author = "Viking Studios";
			options[] = {"Visor","mask"};
			class visor
			{
				changeingame = 0;
				values[] = {"B","A"};
				class B { label = "UP"; };
				class A { label = "Down"; };
			};
		};
	};
};
