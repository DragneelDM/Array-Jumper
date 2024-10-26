#pragma once
#include "../../header/Player/PlayerModel.h";
namespace Player
{
	PlayerState PlayerModel::getPlayerState()
	{
		return player_state;
	}

	void PlayerModel::setPlayerState(PlayerState newState)
	{
		player_state = newState;
	}

	int PlayerModel::getCurrentPosition()
	{
		return current_position;
	}

	void PlayerModel::setCurrentPosition(int newPosition)
	{
		current_position = newPosition;
	}
}