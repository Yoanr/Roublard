#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include <map>
#include "Square.hpp"

using namespace std;

class GameEngine
{

public:
    static GameEngine &getInstance();

    map<pair<int, int>, Square> grille;

private:
    GameEngine();
    ~GameEngine() = default;
};

#endif