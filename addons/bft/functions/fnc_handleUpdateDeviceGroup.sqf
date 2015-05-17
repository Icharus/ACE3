/*
 * Author: Glowbal
 *
 *
 * Arguments:
 * 0: ID <string>
 *
 * Return Value:
 * None
 *
 * Public: No
 */

#include "script_component.hpp"

private ["_deviceID", "_groupID", "_data", "_previousGroup"];
_deviceID = _this select 0;
_groupID = _this select 1;

_data = [_deviceID] call FUNC(getDeviceData);
_previousGroup = _data select 2;
_previousGroup set [3, _groupID];

["bft_deviceDataChanged", [_data, false]] call EFUNC(common,localEvent);
