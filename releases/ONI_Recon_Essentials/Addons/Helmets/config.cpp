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
	class ONI_Helmet: OPTRE_UNSC_Commando_Helmet
	{
		scope = 2;
		author = "Viking Studios";
		displayName = "ONI Helmet";
		hiddenSelections[] = {"camo","Visor"};
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Black_co.paa","VSH\data\ONI_Visor_co.paa"};
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "A";
		};
	};
	class ONI_Helmet_Medic: ONI_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Medic_co.paa","VSH\data\ONI_Visor_co.paa"};
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "B";
		};
	};
	class ONI_Helmet_X: OPTRE_UNSC_Commando_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Carmichael_co.paa","VSH\data\ONI_Visor_co.paa"};
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "X";
		};
	};
	class ONI_Helmet_Celt: OPTRE_UNSC_Commando_Helmet
	{
		hiddenSelectionsTextures[] = {"VSH\data\ONI_Helmet_Celt_co.paa","VSH\data\ONI_Visor_co.paa"};
		class XtdGearInfo
		{
			model = "ONI_Helmet";
			camo = "sheepshagger";
		};
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
	class ONI_Flight_Pilot_two: OPTRE_UNSC_Operator_Helmet
	{
		author = "Viking Studios";
		displayName = "ONI Pilot 2";
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
				values[] = {"A","B","sheepshagger","X"};
				class A { label = "Rifleman"; };
				class B	{ label = "Medic"; };
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
}
