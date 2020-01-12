
#ifndef FICHIER_HPP
#define FICHIER_HPP

#include "Square.hpp"
#include <map>


using namespace std;

class Fichier
{
public:
    static Fichier &getInstance();
    void chargerGrille(map<pair<int, int>, Square>& grille);

private:
    Fichier() = default;
};

#endif