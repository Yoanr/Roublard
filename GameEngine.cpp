
#include "GameEngine.hpp"
#include "Config.hpp"

GameEngine &GameEngine::getInstance()
{
    static GameEngine instance;
    return instance;
}

GameEngine::GameEngine()
{
    for (int i = 0; i < Config::NUMBEROFSQUARE; i++)
    {
        for (int j = 0; j < Config::NUMBEROFSQUARE; j++)
        {
            pair<int, int> ij = pair<int, int>(i, j);
            Square::TypeCase currentType = Square::TypeCase::simple;
            grille.insert(pair<pair<int, int>, Square>(ij, Square(currentType)));
        }
    }
}