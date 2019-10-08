#include "Game.h"


namespace GameView
{
	Game::Game():window(VideoMode(800, 600), "SFML works!")
	{
		window.setTitle("My Game test");
	}


	Game::~Game()
	{
	}

	void Game::init()
	{
		window.setFramerateLimit(60);

	}

	void Game::updateEvent()
	{
		Event event;
		while (window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				window.close();
		}
	}

	void Game::updateLogic()
	{

	}

	void Game::updateInput()
	{

	}
	void Game::update()
	{
		while (window.isOpen())
		{
			Time elapsed = clock.restart();

			updateEvent();
			updateLogic();
			render();
		}

	}
	void Game::startGame()
	{
		update();
	}

	void Game::render()
	{
		window.clear(Color::Black);


		window.display();

	}
}