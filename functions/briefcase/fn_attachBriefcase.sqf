#include "component.hpp"

params [["_unit",objNull],["_vehicleMode",false]];

private _briefcase = mitm_briefcase;

if (isNull _unit) exitWith {ERROR_1("Object to attach to is null.",_unit)};

private _prevOwner = _briefcase getVariable ["mitm_briefcase_owner",objNull];
if (!isNull _prevOwner) then {
    _prevOwner setVariable ["mitm_briefcase_hasBriefcase",false,true];
    [_prevOwner,true] remoteExec ["allowSprint",_unit,false];
};

if (_vehicleMode) then {
    private _vehicle = vehicle _unit;

    if (_vehicle isKindOf "RDS_Lada_Base") then {
         _briefcase attachTo [_vehicle,[-0.0866699,0.10498,0.35]];
         _briefcase setVectorDirAndUp ([[vectorDirVisual _vehicle, vectorUpVisual _vehicle], 0, 90, 0] call BIS_fnc_transformVectorDirAndUp);
    } else {
        if (_vehicle isKindOf "RDS_Gaz24_Base") then {
             _briefcase attachTo [_vehicle,[-0.0800781,0.290039,0.36]];
             _briefcase setVectorDirAndUp ([[vectorDirVisual _vehicle, vectorUpVisual _vehicle], 0, 90, 0] call BIS_fnc_transformVectorDirAndUp);
        } else {
            // fallback
            _briefcase attachTo [_vehicle,[0,0,-100]];
        };
    };

} else {
    _briefcase attachTo [_unit,[-0.03,-0.3,0],"spine3"];
    _briefcase setVectorDirAndUp ([[vectorDirVisual _unit, vectorUpVisual _unit], 0, -20, 10] call BIS_fnc_transformVectorDirAndUp);
};
// _briefcase setVectorDirAndUp [[1,0,0],[0,0,1]];

[_unit,false] remoteExec ["allowSprint",_unit,false];
_unit setVariable ["mitm_briefcase_hasBriefcase",true,true];
_briefcase setVariable ["mitm_briefcase_owner",_unit,true];

[side _unit] call mitm_briefcase_fnc_activatePickupPoint;
if (currentWeapon _unit != "") then {
    [_unit,["SwitchWeapon",_unit,_unit,999]] remoteExec ["action",_unit,false];
};
