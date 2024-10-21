#pragma once
#include "../../header/Player/PlayerModel.h";
namespace Player
{
	PlayerState PlayerModel::GetPlayerState()
	{
		return player_state;
	}

	void PlayerModel::SetPlayerState(PlayerState newState)
	{
		player_state = newState;
	}

	int PlayerModel::GetCurrentPosition()
	{
		return current_position;
	}

	void PlayerModel::SetCurrentPosition(int newPosition)
	{
		current_position = newPosition;
	}
}