class CfgVehicles
{
    class OPTRE_ANPRC_521_Black;
    class OPTRE_ILCS_Rucksack_Heavy;
    class OPTRE_ILCS_Rucksack_Medical;
    // Base Back pack, dont use in arsenal
    class ONI_Recon_Rucksack_Base: OPTRE_ILCS_Rucksack_Heavy
    {
        scope = 2;
        scopeArsenal = 1;
        scopeCurator = 1;
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        vehicleClass = Backpacks;
        hiddenSelections[] = {"camo1","AP_Heavy","biofoam"};
        hiddenSelectionsTextures[] = {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa"};
        allowedSlots[] = {901};
        displayName = "[ONI] Rucksacks Base";
        maximumLoad = 2000;
    };
    // Base Back pack for Medic dont use in arsenal
    class ONI_Recon_Rucksack_Base_Medic: OPTRE_ILCS_Rucksack_Medical
    {
        scope = 2;
        scopeArsenal = 1;
        //<-----This  
        scopeCurator = 1;      
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        vehicleClass = Backpacks;
        hiddenSelections[] = {"camo1","camoBiofoam","AP_Heavy"};
        hiddenSelectionsTextures[] = {"OPTRE_Weapons\Backpacks\data\ruck_black_CO.paa","optre_weapons\items\data\biofoam_co.paa"};
        displayName = "[ONI] Rucksacks Base Medic";
        maximumLoad = 2000;
    };
    // Base Back pack for IC dont use in arsenal
    class ONI_Recon_Rucksack_Base_IC: OPTRE_ANPRC_521_Black
    {
        scope = 2;
        scopeArsenal = 1;
        scopeCurator = 1;
        isbackpack = 1;
        reversed = 1;
        mapSize = 2;
        vehicleClass = Backpacks;
        hiddenSelections[] = {"camo","camo2","B_Medic","B_Addons"};
        hiddenSelectionsTextures[] = {"optre_unsc_units\army\data\soft_backpack_co.paa","optre_unsc_units\army\data\commopack_blk_co.paa"};
        allowedSlots[] = {901};
        displayName = "[ONI] Rucksacks Base IC";
        maximumLoad = 2000;
    };
    // Base General backpack
    class ONI_Recon_Rucksack: ONI_Recon_Rucksack_Base
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[ONI] Rifleman";
        maximumLoad = 400;
    };
    // Medic BackPack
        class ONI_Recon_Rucksack_Medic: ONI_Recon_Rucksack_Base_Medic
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[ONI] Medic";
        maximumLoad = 400;
    };
    /* 
    Did you know the %Chance that aliens are out there is higher than the %chance that they arent
    physics is cool, the sun will explode and engulf earth in a little over 7 billion years
    so may as well say Fuck it YOLO
    */
        class ONI_Recon_Rucksack_IC: ONI_Recon_Rucksack_Base_IC
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = "[ONI] IC";        
        maximumLoad = 300;
    };
        class ONI_Recon_Rucksack_IC_Invisible: ONI_Recon_Rucksack_Base_IC
    {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        model = "\A3\weapons_f\empty";
        displayName = "[ONI] IC (invisible)";
        hiddenSelectionsTextures[]={""};        
        maximumLoad = 300;
    };
};