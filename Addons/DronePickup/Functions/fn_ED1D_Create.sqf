/*

Description:
	If player has drone item in backpack, removes drone item from backpack and spawns 
    specified drone in front of player.

Returns:
	ACE Actions to insert as children

Author:
	Amateur-god
*/

params ["_unit"];
[player, "PutDown"] call ace_common_fnc_doGesture;
[
    {
        params ["_unit"];
           _unit removeItemFromBackpack "ONI_Recon_ED_1D_Item";
        private _uavPos = _unit modelToWorld [0,2,0];
        private _uav = createVehicle ["ONI_Recon_ED_1D", _uavPos, [], 0, "CAN_COLLIDE"];
        createVehicleCrew _uav; 
    }, 
    [_unit], 
    1.5
] call CBA_fnc_waitAndExecute;