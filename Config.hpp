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

    static const int SQUARESIZE{50};
    static const int NUMBEROFSQUARE{10};

private:
    Config() = default;
    ~Config() = default;
    Config(const Config &) = delete;
    Config &operator=(const Config &) = delete;
};

#endif