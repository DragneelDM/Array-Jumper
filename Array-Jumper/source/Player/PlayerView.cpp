#include "../../header/Player/PlayerView.h"
#include "../../header/Global/Config.h"
#include "../../header/Global/ServiceLocator.h"
#include "../../header/Player/PlayerModel.h"


using namespace UI::UIElement;
using namespace Global;

namespace Player
{
	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calculcatePlayerPosition());
	}

	sf::Vector2f PlayerView::calculcatePlayerPosition()
	{
		return sf::Vector2f();
	}

	PlayerView::PlayerView(PlayerController* controller)
	{
		player_controller = controller;
		player_image = new ImageView();
		game_window = nullptr;
	}


	PlayerView::~PlayerView()
	{

	}

	void PlayerView::initialize()
	{
		game_window = ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::update()
	{
		updatePlayerPosition();
	}

	void PlayerView::render()
	{
		switch (player_controller->getPlayerState()) // Use PlayerController's method
		{
		case Player::PlayerState::ALIVE:
			drawPlayer();
			break;

		case Player::PlayerState::DEAD:
			// Handle the DEAD state
			break;
		}
	}
}