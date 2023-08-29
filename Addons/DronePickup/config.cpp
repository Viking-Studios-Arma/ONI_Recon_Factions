class CfgPatches {
	class ONI_Recon_Drone_Pickup {
		// Addon identity
		name = "ONI Recon - Drone Pickup";
		author = "Viking Studios";
		authors[] = {"Amateur-god"};
		url = "https://discord.gg/bkdGvUNFbb";
		version = 1.0;
		versionAr[] = {1,0,0,0};
		versionStr = "v1.0.0";
		requiredAddons[] = {"A3_Modules_F","cba_settings","ace_arsenal","3DEN","ace_medical","ONI_Recon_Factions"};
		units[] = {};
		weapons[] = {"Oni_Recon_MQ94_Item","ONI_Recon_ED_1D_Item","ONI_Recon_ED_1E_Item"};
		magazines[] = {};
		ammo[] = {};
		worlds[] = {};
	};
};

class CfgVehicles {
	class ONI_Recon_MQ94;
	class ONI_Recon_ED_1E;
	class ONI_Recon_ED_1D;
    class ItemCore;
    class CBA_MiscItem_ItemInfo;
	class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment {
                class MQ94_Unpack {
                    displayName = "Deploy MQ94 (Recon)";
                    condition = """Oni_Recon_MQ94_Item"" in backpackItems _player";
                    statement = "_player call oni_Recon_Drone_fnc_MQ94_Create";
                    exceptions[] = {"isNotOnMap","isNotInside", "isNotSwimming","isNotSitting"};
                    icon = ""; // icontodo
				};
				class ED1D_Unpack {
                    displayName = "Deploy ED1D (Demining)";
                    condition = """ONI_Recon_ED_1D_Item"" in backpackItems _player";
                    statement = "_player call oni_Recon_Drone_fnc_ED1D_Create";
                    exceptions[] = {"isNotOnMap","isNotInside", "isNotSwimming","isNotSitting"};
                    icon = ""; // icontodo
				};
				class ED1E_Unpack {
                    displayName = "Deploy ED1E (Science)";
                    condition = """ONI_Recon_ED_1E_Item"" in backpackItems _player";
                    statement = "_player call oni_Recon_Drone_fnc_ED1E_Create";
                    exceptions[] = {"isNotOnMap","isNotInside", "isNotSwimming","isNotSitting"};
                    icon = ""; // icontodo
				};
			};
		};
	};
};
class CfgWeapons
{
	class ToolKit;
	class Oni_Recon_MQ94_Item: ToolKit
	{
		author = "Amateur_God";
		displayName = "Deployable MQ94";
		descriptionShort = "Inventory item<br/>allows you to deploy MQ94";
		class ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
			type = 620;
			allowedSlots[] = {801,701,901};
			scope = 0;
		};
	};
	class ONI_Recon_ED_1D_Item: ToolKit
	{
		author = "Amateur_God";
		displayName = "Deployable ED 1D (Demining)";
		descriptionShort = "Inventory item<br/>allows you to deploy ED1D";
		class ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
			type = 620;
			allowedSlots[] = {801,701,901};
			scope = 0;
		};
	};
	class ONI_Recon_ED_1E_Item: ToolKit
	{
		author = "Amateur_God";
		displayName = "Deployable ED 1E (Science)";
		descriptionShort = "Inventory item<br/>allows you to deploy ED1E";
		class ItemInfo
		{
			mass = 50;
			uniformModel = "\A3\Weapons_F\Items\Toolkit";
			type = 620;
			allowedSlots[] = {801,701,901};
			scope = 0;
		};
	};
};
class CfgFunctions {
	class oni_Recon_Drone {
		class Dones {
            tag = "ONI_Recon_drones";
            file = "x\VS_ONI\Drone_Pickup\Functions";
			class MQ94_Create {};
            class MQ94_Pack {};
			class ED1D_Create {};
			class ED1D_Pack {};
			class ED1E_Create {};
			class ED1E_Pack {};
        };
    };
};
class Extended_PostInit_EventHandlers
{
	class ADDON
	{
		clientInit = "call compile preprocessFileLineNumbers 'x\VS_ONI\Drone_Pickup\Player_init.sqf'";
	};
};
