
#ifndef DRAW_HPP
#define DRAw_HPP

#include "Square.hpp"
#include "GameEngine.hpp"
#include <SFML/Graphics.hpp>

using namespace std;

class Draw
{
public:
    static Draw &getInstance();
    void render(GameEngine &gameEngine, sf::RenderWindow &window);

private:
    Draw() = default;
    pair<int, int> position{-1, -1};
    void setPosition(pair<int, int> positionGiven);
    void drawSquare(Square &square, sf::RenderWindow &window, int val);
    void drawGrille(GameEngine &gameEngine, sf::RenderWindow &windowGiven);
};

#endif