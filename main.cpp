brick::brick(int x, int y) {
	xpos = x;
	ypos = y;
}

void brick::draw(sf::RenderWindow& window) {
	rect.setSize(sf::Vector2f(100, 50));
	rect.setFillColor((sf::Color(204, 204, 255)));
	rect.setPosition(xpos, ypos);
	window.draw(rect);
}

ball::ball(int x, int y) {
	xpos = x;
	ypos = y;
}

void ball::draw(sf::RenderWindow& window) {
	sf::CircleShape ball(100);
	circ.setFillColor((sf::Color(227,28,121)));
	circ.setPosition(xpos, ypos);
	window.draw(circ);
}

//-------------------------------------------------------------------
//instantiate some bricks
brick b1(100, 50);
brick b2(250, 50);
brick b3(400, 50);
brick b4(550, 50);
brick b5(100, 200);
brick b6(250, 200);
brick b7(400, 200);
brick b8(550, 200);
brick b9(250, 350);
brick b10(400, 350);

//instantiate a ball
ball bb(100, 700);

int main()
{
	sf::RenderWindow window(sf::VideoMode(750, 750), "Breakout"); //set up screen
	sf::RectangleShape rect;
	sf::CircleShape circ;

	while (window.isOpen())//GAME LOOP--------------------------------
	{
		//input section--------------------------------
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

		}
		
		//physics section------------------------------


		//render section-------------------------------
		window.clear();

		//draw bricks
		b1.draw(window);
		b2.draw(window);
		b3.draw(window);
		b4.draw(window);
		b5.draw(window);
		b6.draw(window);
		b7.draw(window);
		b8.draw(window);
		b9.draw(window);
		b10.draw(window);

		//draw ball
		bb.draw(window);

		window.display(); //flip the buffer

	}//end game loop-------------------------------------------------

	return 0;
} //end main
