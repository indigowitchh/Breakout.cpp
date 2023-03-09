#pragma once
#include <SFML/Graphics.hpp>

class ball{
private:
	int xpos;
	int ypos;
	sf::CircleShape circ;
public:
	ball(int x, int y);
	void draw(sf::RenderWindow& window);
};

