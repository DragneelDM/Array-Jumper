#pragma once
#include "../../header/Player/PlayerView.h";
#include "../../header/Global/Config.h";

using namespace Global;
using namespace UI::UIElement;

namespace Player
{
	PlayerView::PlayerView(PlayerController* controller)
	{
		game_window = nullptr;
		player_image = new ImageView();
	}

	PlayerView::PlayerView() {};

	void PlayerView::initialize()
	{
		game_window = Global::ServiceLocator::getInstance()->getGraphicService()->getGameWindow();
		loadPlayer();
	}

	void PlayerView::loadPlayer()
	{
		calculatePlayerDimensions();
		initializePlayerImage();
	}

	void PlayerView::update()
	{
		updatePlayerPosition();
	}

	void PlayerView::render()
	{
		drawPlayer();
	}

	void PlayerView::drawPlayer()
	{
		player_image->render();
	}

	void PlayerView::updatePlayerPosition()
	{
		player_image->setPosition(calulcatePlayerPosition());
	}

	sf::Vector2f PlayerView::calulcatePlayerPosition()
	{
		return sf::Vector2f(0, 0);
	}

	void PlayerView::calculatePlayerDimensions()
	{
		player_height = 1000.f;
		player_width = 1000.f;
	}

	void PlayerView::initializePlayerImage()
	{
		player_image->initialize(Config::character_texture_path,
			player_width,
			player_height,
			sf::Vector2f(0, 0));
	}
}