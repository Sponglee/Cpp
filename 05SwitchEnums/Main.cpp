#include <iostream>
#include <string>

int main()
{
    // //Ordinary enum
    // enum season
    // {
    //     summer,
    //     spring,
    //     fall,
    //     winter
    // };

    //Enum class to define a scope
    enum class Season
    {
        summer,
        spring,
        autumn,
        winter
    };

    Season now = Season::winter;

    switch (now)
    {
    case Season::winter:

        std::cout << "Stay Warm!";
        break;
    case Season::spring:
        break;
    case Season::summer:
        break;
    case Season::autumn:
        break;
    default:
        break;
    }

    std::cout << std::endl;
}
