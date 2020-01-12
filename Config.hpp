#ifndef CONFIG_HPP
#define CONFIG_HPP

using namespace std;

class Config
{
public:
    static Config &getInstance()
    {
        static Config instance;
        return instance;
    }

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