#ifndef SQUARE_H
#define SQUARE_H

class Square
{
public:
    enum TypeCase
    {
        simple = 0,
        mur = 1,
        vide = 2,
        joueur1 = 3,
        joueur2 = 4,
        bombe = 5
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