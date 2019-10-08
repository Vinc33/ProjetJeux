#include "Game.h"


namespace GameView
{
	Game::Game(int width, int height, string titleScreen)
	{
		data->window.create(VideoMode(width, height), titleScreen, Style::Close | Style::Titlebar);
	}

	Game::~Game()
	{
	}

	void Game::init()
	{
		data->window.setFramerateLimit(FPS);
	}

	void Game::updateEvent()
	{
		Event event;
		// passe tous les events avant de continuer 
		while (data->window.pollEvent(event))
		{
			if (event.type == Event::Closed)
				data->window.close();
			
			data->inputManager.update(event);
		}
	}

	void Game::updateLogic()
	{

	}
	void Game::update()
	{
		//float currentTime = 0, frameTime = 0.0, interpolation =0.0f;
		while (data->window.isOpen())
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
		data->window.clear(Color::Black);




		data->window.display();
	}
}