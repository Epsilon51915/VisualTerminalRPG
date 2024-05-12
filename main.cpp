#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

using namespace sf;

int main()
{
	RenderWindow window(VideoMode(800, 600), "Name", Style::Titlebar | Style::Close);
	Event event;
	while (window.isOpen())
	{
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case Event::Closed:
				window.close();
				break;

			case Event::KeyPressed:
				break;
			}
		}

		window.clear();
		window.display();
	}
}