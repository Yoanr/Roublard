#ifndef CONFIG_HPP
#define CONFIG_HPP
#include <SFML/Graphics.hpp>

using namespace std;

class Config
{
public:
    static Config &getInstance()
    {
        static Config instance;
        return instance;
    }
    static const int FenetreX{1200};
    static const int FenetreY{800};
    static const int SQUARESIZE{40};
    static const int THICKNESS{1};
    static const int NUMBEROFSQUARELIGNE{25};
    static const int NUMBEROFSQUARECOLONNE{15};

private:
    Config() = default;
    ~Config() = default;
    Config(const Config &) = delete;
    Config &operator=(const Config &) = delete;
};

#endif