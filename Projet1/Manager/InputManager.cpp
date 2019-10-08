#include "InputManager.h"


namespace GameView
{
	InputManager::InputManager(){}
	InputManager::~InputManager(){}

	bool InputManager::isSpriteClicked(Sprite object, Mouse::Button button, RenderWindow &window)
	{
		if (Mouse::isButtonPressed(button))
		{
			// create a temp rect to check the collision
			
			IntRect collisionRect((int)object.getPosition().x, (int)object.getPosition().y,
				(int)object.getGlobalBounds().width, (int)object.getGlobalBounds().height);

			if (collisionRect.contains(Mouse::getPosition(window)))
				return true;
		}
		return false;
	}

	Vector2i InputManager::getMousePos(RenderWindow &window)
	{
		return Mouse::getPosition(window);
	}
}