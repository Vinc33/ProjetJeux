#include <SFML/Graphics.hpp>
#include "Game.h"

using namespace sf;
using namespace GameView;

int main()
{
	
	Game myEngine;
	myEngine.init();
	myEngine.startGame();

	return EXIT_SUCCESS;
}
