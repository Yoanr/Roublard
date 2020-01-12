
#include "GameEngine.hpp"
#include "Config.hpp"
#include "Fichier.hpp"

GameEngine &GameEngine::getInstance()
{
    static GameEngine instance;
    return instance;
}

GameEngine::GameEngine()
{
    /*for (int i = 0; i < Config::NUMBEROFSQUARECOLONNE; i++)
    {
        for (int j = 0; j < Config::NUMBEROFSQUARELIGNE; j++)
        {
            pair<int, int> ij = pair<int, int>(i, j);
            Square::TypeCase currentType = Square::TypeCase::vide;
            grille.insert(pair<pair<int, int>, Square>(ij, Square(currentType)));
        }
    }*/

    Fichier::getInstance().chargerGrille(grille);
}