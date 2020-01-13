// g++ main.o -o sfml-app -lsfml-graphics -lsfml-window -lsfml-system

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Network.hpp>
#include "GameEngine.hpp"
#include "Draw.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1200, 800), "Roublard PlayMaker", sf::Style::Titlebar | sf::Style::Close); // fenetre

    GameEngine& gameEngine = GameEngine::getInstance();
    Draw& draw = Draw::getInstance();

    while (window.isOpen())
    {
       draw.render(gameEngine, window); // dessiner

        sf::Event event;
        while (window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed)
                window.close(); // fermer
        }

        //window.clear(); // rafraichir
        window.display();
    }

    return 0;
}