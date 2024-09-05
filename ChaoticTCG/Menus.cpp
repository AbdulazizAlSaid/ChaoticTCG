#include "Menus.h";

Menus::Menus() {
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

}

Menus::~Menus()
{
}

void Menus::StartMenu(){}
void Menus::Registration(){}
void Menus::Profile(){}
void Menus::MainMenu(){}
void Menus::DeckBuilder(){}
void Menus::DeckSelection(){}
void Menus::HostJoin(){}