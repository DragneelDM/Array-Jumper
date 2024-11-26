#include "../../header/Player/PlayerService.h"
#include "../../header/Player/PlayerController.h"

namespace Player
{

	#pragma region Constructor Destructor

	PlayerService::PlayerService() { player_controller = new PlayerController(); }

	PlayerService::~PlayerService() { destroy(); }

	#pragma endregion

	#pragma region Lifecycle Events

	void PlayerService::initialize()
	{
		player_controller->initialize();
	}

	void PlayerService::update()
	{
		player_controller->update();
	}

	void PlayerService::render()
	{
		player_controller->render();
	}

	#pragma endregion

	void PlayerService::destroy() { delete(player_controller); }
}