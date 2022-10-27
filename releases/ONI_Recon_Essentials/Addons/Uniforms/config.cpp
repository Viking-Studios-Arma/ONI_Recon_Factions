class cfgPatches
{
    class ONI_Recon_Uniforms
    {
        units[]=
        {            
           "ONI_Recon_V_Slim",
        };
        weapons[]=
        {
           "ONI_Recon_Slim",
        };
        requiredVersion=0.1;
        requiredAddons[]=
        {
            "OPTRE_UNSC_Units_Army",
            "OPTRE_Core"
        };
    };

};
class CfgWeapons
{
    class UniformItem;
    class Uniform_Base;
    class HeadgearItem;
    class ONI_Recon_Slim: Uniform_Base
    {
        scope = 2;
        scopeArsenal=2;
        dlc="ONI Recon";
        author="Amateur-God";
        displayName="ONI BDU (Slim)";
        picture="\optre_unsc_units\army\icons\army_uniform_DES";
        model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
        CBRN_protection=1;
        hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
        hiddenSelectionsTextures[] = {"Uniforms\data\ONI_uniform_a_black_CO.paa","Uniforms\data\ONI_uniform_b_black_CO.paa"};
        class ItemInfo : UniformItem
        {
            containerClass="Supply150";
            mass=40;
            uniformClass="ONI_Recon_V_Slim";
            uniformType="Neopren";
            hiddenSelections[] = {"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
            class HitpointsProtectionInfo
            {
                class Neck
                {
                    hitpointName="HitNeck";
                    armor=30;
                    passThrough=0.1;
                };
                class Legs
                {
                    hitpointName="HitLegs";
                    armor=30;
                    passThrough=0.1;
                };
                class Arms
                {
                    hitpointName="HitArms";
                    armor=30;
                    passThrough=0.1;
                };
                class Hands
                {
                    hitpointName="HitHands";
                    armor=30;
                    passThrough=0.1;
                };
                class Chest
                {
                    hitpointName="HitChest";
                    armor=30;
                    passThrough=0.1;
                };
                class Diaphragm
                {
                    hitpointName="HitDiaphragm";
                    armor=30;
                    passThrough=0.1;
                };
                class Abdomen
                {
                    hitpointName="HitAbdomen";
                    armor=30;
                    passThrough=0.1;
                };
                class Pelvis
                {
                    hitpointName="HitPelvis";
                    armor=30;
                    passThrough=0.1;
                };
                class Body
                {
                    hitpointName="HitBody";
                    armor=30;
                    passThrough=0.1;
                };
            };
        };
    };
class CfgVehicles
    {
        class OPTRE_UNSC_Army_Soldier_WDL;
        class ONI_Recon_V_Slim : OPTRE_UNSC_Army_Soldier_WDL
        {
            scope = 1;
            dlc = "ONI_Recon";
            author = "Amateur-God";
            model = "\OPTRE_UNSC_Units\Army\uniform.p3d";
            uniformClass = "ONI_Recon_Slim";
            hiddenSelections[] ={"camo","camo2","insignia","clan","A_BaseLeg",/*"A_SlimLeg"*/};
            hiddenSelectionsTextures[] = {"Uniforms\data\ONI_uniform_a_black_CO.paa","Uniforms\data\ONI_uniform_b_black_CO.paa"};
        };
    };
};
