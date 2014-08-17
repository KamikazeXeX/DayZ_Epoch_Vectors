if (!isDedicated) then {
	player_build = compile preprocessFileLineNumbers "custom\snap_pro\player_build.sqf";
	snap_build = compile preprocessFileLineNumbers "custom\snap_pro\snap_build.sqf";
	dayz_spaceInterrupt = compile preprocessFileLineNumbers "custom\snap_pro\dayz_spaceInterrupt.sqf";

	player_selectSlot = compile preprocessFileLineNumbers "custom\ui_selectSlot.sqf";
	fnc_usec_selfActions =			compile preprocessFileLineNumbers "custom\fn_selfActions.sqf";		//Checks which actions for self
	player_lockVault =			compile preprocessFileLineNumbers "custom\player_lockVault.sqf";
	player_unlockVault =			compile preprocessFileLineNumbers "custom\player_unlockVault.sqf";
};