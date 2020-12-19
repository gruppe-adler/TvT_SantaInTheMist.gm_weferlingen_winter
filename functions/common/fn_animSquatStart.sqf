params ["_unit"];

_unit setVariable ["mitm_animationRunning", true];

_unit switchMove "Acts_Executioner_Squat";

[{
    params ["_unit"];
    
    // move down quickly
    [{
        params ["_unit"];
        animationState _unit == toLower "Acts_Executioner_Squat"
    },{
        params ["_unit"];
        _unit setAnimSpeedCoef 5;
        _unit setMimic "hurt";
    }, [_unit]] call CBA_fnc_waitUntilAndExecute;


    // stay down
    [{
         params ["_unit"];
        _unit setAnimSpeedCoef 0.01;
    }, [_unit], 3] call CBA_fnc_waitAndExecute;

}, [_unit]] call CBA_fnc_execNextFrame;