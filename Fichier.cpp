#include "Fichier.hpp"
#include "Config.hpp"
#include <iostream>
#include <fstream>
#include <string>

Fichier &Fichier::getInstance()
{
    static Fichier instance;
    return instance;
}

void Fichier::chargerGrille(map<pair<int, int>, Square>& grille)
{
    string line;
    ifstream myfile("aggro.map");
    if (myfile.is_open())
    {
        int ligne = 0;
        while (getline(myfile, line))
        {
            cout << line << '\n';
            for(int colonne = 0;colonne<Config::NUMBEROFSQUARECOLONNE;colonne++){
                char square = line[colonne];
                pair<int, int> ij = pair<int, int>(colonne, ligne);
                Square::TypeCase type;
                if(square == 'v'){
                    type = Square::TypeCase::vide;
                }
                else if (square == 's' && ligne % 2 == 0){
                    type = Square::TypeCase::simplePair;
                }
                else if (square == 's' && ligne % 2 != 0)
                {
                    type = Square::TypeCase::simpleImpair;
                }
                else if (square == 'm')
                {
                    type = Square::TypeCase::mur;
                }
                grille.insert(pair<pair<int, int>, Square>(ij, Square(type)));
            }
            ligne++;
        }
        myfile.close();
    }

    else
        cout << "Unable to open file";
}