#include "Draw.hpp"
#include "Config.hpp"
#include <iostream>

Draw &Draw::getInstance()
{
    static Draw instance;
    return instance;
}

void Draw::setPosition(pair<int, int> positionGiven)
{
    position = positionGiven;
}

void Draw::render(GameEngine &gameEngine, sf::RenderWindow &windowGiven)
{
    for (int i = 0; i < Config::NUMBEROFSQUARE; i++)
    {
        for (int j = 0; j < Config::NUMBEROFSQUARE; j++)
        {
            if(j%2 == 0){ // si pair j'afffiche normal , si impair je décal ( effet dofus )
                pair<int, int> ij = pair<int, int>(i, j);
                setPosition(ij);
                Square &square = gameEngine.grille[ij];
                drawSquare(square, windowGiven, 62);
            }
        }
    }
}


void Draw::drawSquare(Square &square, sf::RenderWindow &window, int val)
{
    sf::CircleShape carre(30.f, 4);
    carre.setFillColor(sf::Color(square.r, square.g, square.b));
    carre.setPosition(val * position.first, val * position.second);
    carre.setOutlineThickness(1.f);
    carre.setOutlineColor(sf::Color(255, 255, 255));
    window.draw(carre);
}
