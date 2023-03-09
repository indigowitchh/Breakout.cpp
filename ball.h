#pragma once
#include <SFML/Graphics.hpp>

class ball{
private:
	int bx;
	int by;
	sf::CircleShape circ;
public:
	ball(int x, int y);
	void draw(sf::RenderWindow& window);
};
