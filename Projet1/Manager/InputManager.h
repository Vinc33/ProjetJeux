#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

namespace GameView
{
	class InputManager
	{
	public:
		InputManager();
		~InputManager();

		bool isSpriteClicked(Sprite object, Mouse::Button button, RenderWindow &window);

		Vector2i getMousePos(RenderWindow &window);
	};
}
