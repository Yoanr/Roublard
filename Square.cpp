#include "Square.hpp"

Square::Square(TypeCase typeGiven) : type(typeGiven)
{
    switch (typeGiven)
    {
    case Square::TypeCase::simplePair:
        r = 211;
        g = 229;
        b = 241;
        break;
    case Square::TypeCase::simpleImpair:
        r = 199;
        g = 218;
        b = 226;
        break;
    case Square::TypeCase::mur:
        r = 0;
        g = 200;
        b = 200;
        break;
    case Square::TypeCase::vide:
        r = 0;
        g = 0;
        b = 0;
        break;
    case Square::TypeCase::joueur1:
        r = 0;
        g = 0;
        b = 255;
        break;
    case Square::TypeCase::joueur2:
        r = 255;
        g = 0;
        b = 0;
        break;
    case Square::TypeCase::bombe:
        r = 0;
        g = 255;
        b = 0;
        break;

    default:
        r = 255;
        g = 255;
        b = 255;
        break;
    }
}
