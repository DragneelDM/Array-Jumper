#pragma once
#include "../UI/UIElement/ImageView.h"
#include "../Player/PlayerController.h"

namespace Player
{
	class PlayerController;
	class PlayerView
	{
	private:
		sf::RenderWindow* game_window;
		UI::UIElement::ImageView* player_image;

		PlayerController* player_controller;
		float player_height;
		float player_width;

		void initializePlayerImage();
		void drawPlayer();
		void loadPlayer();
		void calculatePlayerDimensions();
		void updatePlayerPosition();
		sf::Vector2f calculcatePlayerPosition();

	public:
		PlayerView(PlayerController* controller);
		~PlayerView();

		void initialize();
		void update();
		void render();
	};
}