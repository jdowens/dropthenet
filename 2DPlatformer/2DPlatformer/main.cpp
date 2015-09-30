#include<SFML/Graphics.hpp>
#include<SFML/Window.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(640, 480, 32), "Test");

	sf::CircleShape circle;
	circle.setRadius(16.0f);
	circle.setFillColor(sf::Color::Green);
	circle.setOutlineThickness(2.0f);
	circle.setOutlineColor(sf::Color::Yellow);
	circle.setPosition(320.0f - 16.0f, 240.0f - 16.0f);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				window.close();
			}
		}
		window.clear(sf::Color::Blue);
		window.draw(circle);
		window.display();
	}
}