#ifndef SQUARE_H
#define SQUARE_H

class Square
{
public:
    enum TypeCase
    {
        simplePair = 0,
        simpleImpair = 1,
        mur = 2,
        vide = 3,
        joueur1 = 4,
        joueur2 = 5,
        bombe = 6
    };
    Square(TypeCase t);
    Square()  = default;
    ~Square() = default;
    TypeCase getType();

    void setType(TypeCase t);
    float r;
    float g;
    float b;

private:
    TypeCase type;
};

#endif