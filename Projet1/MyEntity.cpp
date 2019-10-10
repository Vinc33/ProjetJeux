#include "MyEntity.h"
#include <SFML/Graphics/RenderTarget.hpp>
#include <SFML\Window\Keyboard.hpp>

MyEntity::MyEntity()
{
	myTexture.loadFromFile("Image/Sprite.png");
	
	mySprite.setTexture(myTexture);
	mySprite.setScale(.2,.2);
	speed = 0.3;

}


MyEntity::~MyEntity()
{
}

void MyEntity::setPosition(const sf::Vector2f& pos)
{
	myTransform.setPosition(pos.x, pos.y);
}
void MyEntity::setPosition(const int& x, const int& y)
{
	myTransform.setPosition(x, y);
}



void MyEntity::draw(sf::RenderTarget& target)
{
	target.draw(mySprite, myTransform.getTransform());
}

void MyEntity::updateInput(float fps) {
	
	
	sf::Vector2f movements = { 0.0f,0.0f };
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		movements = { -speed * fps,0.0f };
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		movements = { speed*fps, 0.0f };
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
	{
		movements = { 0.0f,speed*fps };
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{
		movements = { 0.0f,-speed * fps };
	}
	
	myTransform.setPosition(myTransform.getPosition()+movements);
	
}
