enableSaving [false, false];
enableEngineArtillery false;

["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
player addEventHandler ["HandleRating",{0}];

/*player addEventHandler ["Take",{_this call uo_common_fnc_handleTakeRadio}];*/
/*player addEventHandler ["Take",{_this call uo_common_fnc_handleScopeChange}];*/

// raise radio range as we have only sw
player setVariable ["tf_receivingDistanceMultiplicator", 8];
player setVariable ["tf_sendingDistanceMultiplicator", 0.125];

if ((side player) == east) then {
	player addAction ["<t color='#FF0000'>cheeki breeki iv damke</t>", "functions\common\fn_squat.sqf"];
}