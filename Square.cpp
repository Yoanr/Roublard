#include "Square.hpp"

Square::Square(TypeCase typeGiven) : type(typeGiven)
{
    switch (typeGiven)
    {
    case Square::TypeCase::simple:
        r = 245;
        g = 222;
        b = 179;
        break;
    case Square::TypeCase::mur:
        r = 165;
        g = 42;
        b = 42;
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
