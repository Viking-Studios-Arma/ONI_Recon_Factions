/*

Description:
	Adds custom ACE interaction to Pick up drones that have a packable Item and place them into backpack, 
    if players backpack has space.

Returns:
	ACE Actions to insert as children

Author:
	Amateur-god
*/

//MQ94
_action = ["pickUpUAV", "Pick Up", "", 
    {
        params ["_target","_player"];
        [_player,_target] call oni_Recon_Drone_fnc_MQ94_Pack;
    }, 
    {
        params ["_target","_player"];
        _player canAddItemToBackpack "Oni_Recon_MQ94_Item";
    }
] call ace_interact_menu_fnc_createAction;

["ONI_Recon_MQ94", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

//ED1D

_action = ["pickUpUAV", "Pick Up", "", 
    {
        params ["_target","_player"];
        [_player,_target] call oni_Recon_Drone_fnc_ED1D_Pack;
    }, 
    {
        params ["_target","_player"];
        _player canAddItemToBackpack "Oni_Recon_ED_1D_Item";
    }
] call ace_interact_menu_fnc_createAction;

["ONI_Recon_ED_1D", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;

//ED1E

_action = ["pickUpUAV", "Pick Up", "", 
    {
        params ["_target","_player"];
        [_player,_target] call oni_Recon_Drone_fnc_ED1E_Pack;
    }, 
    {
        params ["_target","_player"];
        _player canAddItemToBackpack "Oni_Recon_ED_1E_Item";
    }
] call ace_interact_menu_fnc_createAction;

["ONI_Recon_ED_1E", 0, ["ACE_MainActions"], _action, true] call ace_interact_menu_fnc_addActionToClass;