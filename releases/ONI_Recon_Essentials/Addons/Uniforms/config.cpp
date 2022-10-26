#define _ARMA_

class CfgPatches
{
	class ONI_Recon_Helmets
	{
        name = "ONI Recon Essentials";
        dlc = "ONI_Recon"
        author = "Viking Studios";
        Authors[] = {"Amateur-god"};
        versionStr = "v1.0.0";
        units[] = {};
        weapons[] = {"ONI Uniform"};
        requiredVersion = 0.1;
        requiredAddons[] = {"OPTRE_Core"};
	};
};
class cfgWeapons
{
    class OPTRE_UNSC_Army_Uniform_BLK_SlimLeg;
    class Uniform_Base: OPTRE_UNSC_Army_Uniform_BLK_SlimLeg
    {
        scope = 1;
        author = "Viking Studios";
        displayName = "ONI Uniform";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] = {"\VSU\data\ONI_uniform_black_CO.paa"};    
        class ItemInfo;
    }
    class ONI_BDU_Blk: Uniform_Base
    {
        scope = 2;
        displayName = "ONI Uniform";
        class ItemInfo : ItemInfo
            {
                UniformClass = OPTRE_UNSC_Army_Soldier_BLK_SlimLeg
            };
     };    
}