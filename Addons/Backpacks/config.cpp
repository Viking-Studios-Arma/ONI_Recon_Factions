//Hi welcome to my code, hope you have fun playing arma. PS. Drink Water
class CfgPatches {
	class ONI_Recon_Backpacks {
		// Addon identity
		name = "ONI Recon Essentials - Backpacks";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
        units[] = {"ONI_Recon_Rucksack_Base","ONI_Recon_Rucksack_Base_Medic","ONI_Recon_Rucksack_Base_IC","ONI_Recon_Rucksack","ONI_Recon_Rucksack_Medic","ONI_Recon_Rucksack_IC"};
        weapons[] = {};
        requiredAddons[] = {"OPTRE_Core"};
    };
};
//what is the meaning of life, The Universe and everything?
class cfgVehicles
{
    class OPTRE_ANPRC_521_Black;
    class OPTRE_ILCS_Rucksack_Heavy;
    class OPTRE_ILCS_Rucksack_Medical;
    // Base Back pack, dont use in arsenal
    class ONI_Recon_Rucksack_Base: OPTRE_ILCS_Rucksack_Heavy
    {
        scope = 1;
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        vehicleClass = Backpacks;
        allowedSlots[] = {901};
        displayName = "ONI Rucksacks Base";
        maximumLoad = 2000;
    };
    // Base Back pack for Medic dont use in arsenal
    class ONI_Recon_Rucksack_Base_Medic: OPTRE_ILCS_Rucksack_Medical
    {
        scope = 1;      
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        //<-----This  
        vehicleClass = Backpacks;
        displayName = "ONI Rucksacks Base Medic";
        maximumLoad = 2000;
    };
    // Base Back pack for IC dont use in arsenal
    class ONI_Recon_Rucksack_Base_IC: OPTRE_ANPRC_521_Black
    {
        scope = 1;
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        vehicleClass = Backpacks;
        allowedSlots[] = {901};
        displayName = "ONI Rucksacks Base IC";
        maximumLoad = 2000;
    };
    // Base General backpack
    class ONI_Recon_Rucksack: ONI_Recon_Rucksack_Base
    {
        scope = 2;
        displayName = "ONI Rucksacks";
        maximumLoad = 650;
            class XtdGearInfo {
            model = "ONI_Recon_Rucksacks";
            camo = "A";
        };
    };
    // Medic BackPack
        class ONI_Recon_Rucksack_Medic: ONI_Recon_Rucksack_Base_Medic
    {
        scope = 2;
        displayName = "ONI Rucksacks";
        maximumLoad = 700;
            class XtdGearInfo {
            model = "ONI_Recon_Rucksacks";
            camo = "B";
        };
    };
    /* 
    Did you know the %Chance that aliens are out there is higher than the %chance that they arent
    physics is cool, the sun will explode and engulf earth in a little over 7 billion years
    so may as well say Fuck it YOLO
    */
        class ONI_Recon_Rucksack_IC: ONI_Recon_Rucksack_Base_IC
    {
        scope = 2;
        displayName = "ONI Rucksacks";        
        maximumLoad = 450;
            class XtdGearInfo {
            model = "ONI_Recon_Rucksacks";
            camo = "C";
        };
    };
};
//IDK why im writing this stuff in here, no one is going to read it.
    class XtdGearModels {
    class CfgVehicles {
        class ONI_Recon_Rucksacks {
            label = "ONI Rucksacks";
            author = "Viking Studios";
            options[] = { "Role" };

            class camo {
                changeingame = 0;
                values[] = { "A", "B", /*42*/ "C" };

                class A { label = "Rifleman"; };
                class B { label = "Medic"; };
                class C { label = "IC"; };
            };
        };
    };
}
