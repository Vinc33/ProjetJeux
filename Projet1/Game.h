#pragma once
#include <SFML/Graphics.hpp>
#include "./Manager/StateManager.h"
#include "./Manager/InputManager.h"
#include "./Manager/AssetManager.h"

using namespace sf;

namespace GameView
{
	struct GameData
	{
		StateManager stateManager;
		sf::RenderWindow window;
		AssetManager assetManager;
		InputManager inputManager;
	};

	class Game
	{
	public:
		Game();
		~Game();

		void init();
		void startGame();

	private:
		void update();
		void updateInput();
		void updateLogic();
		void render();
		void updateEvent();

		RenderWindow window;
		Clock clock;
	};
}
