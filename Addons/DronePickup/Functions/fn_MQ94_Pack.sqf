/*

Description:
	Packs the drone into a toolkit like item and puts it into the players backpack.

Returns:
	ACE Actions to insert as children

Author:
	Amateur-god
*/

params ["_unit", "_item"];
[player, "PutDown"] call ace_common_fnc_doGesture;
[
    {
        params ["_unit", "_item"];
           deleteVehicle _item;
        _unit addItemToBackpack "Oni_Recon_MQ94_Item";
    }, 
    [_unit, _item], 
    1.5
] call CBA_fnc_waitAndExecute;