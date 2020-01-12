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
    for (int i = 0; i < Config::NUMBEROFSQUARECOLONNE; i++)
    {
        for (int j = 0; j < Config::NUMBEROFSQUARELIGNE; j++)
        {
            pair<int, int> ij = pair<int, int>(i, j);
            setPosition(ij);
            Square &square = gameEngine.grille[ij];
            if(j%2 == 0){
                drawSquare(square, windowGiven, 0);
            }else{
                int offset = (Config::SQUARESIZE + (Config::THICKNESS * 2))/2;
                drawSquare(square, windowGiven, offset);
            }
        }
    }
}

void Draw::drawSquare(Square &square, sf::RenderWindow &window, int offset)
{
    sf::CircleShape carre(Config::SQUARESIZE/2, 4);
    carre.setFillColor(sf::Color(square.r, square.g, square.b));
    int thickness = 1;
    int x = ((Config::SQUARESIZE + (Config::THICKNESS * 2)) * position.first) + offset;
    int y = ((Config::SQUARESIZE + (Config::THICKNESS * 2)) * (position.second / 2)) + offset;
    carre.setPosition(x,y);
    carre.setOutlineThickness(Config::THICKNESS);
    carre.setOutlineColor(sf::Color(255, 255, 255));
    window.draw(carre);
}