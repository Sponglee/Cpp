#include <iostream>
using std::cout;

int main()
{
    int slices_of_pizza; //Declaration

    std::cout << "How many pizza slices you eat?: " << std::endl;
    std::cin >> slices_of_pizza;

    //New cpp cout greatness
    cout << "Your Have " << slices_of_pizza << " Slices of pizza." << std::endl;

    /*
        Old c stuff
        from c
    */
    //printf("%i\n", slices);
}