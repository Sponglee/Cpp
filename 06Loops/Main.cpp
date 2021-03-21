#include <iostream>
#include <string>

int main()
{

    //Initialize
    //Condition
    //Update

    int i = 0;

    while (i < 10)
    {
        i++;

        std::cout << i << std::endl;
    }

    //Do while
    std::cout << "Do : " << std::endl;
    do
    {
        std::cout << i << std::endl;
    } while (i < 10);

    //For loop
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
}
