#include <iostream>
#include <cmath>

using std::cin;
using std::cout;

double power(double, int); //Declaration
void print_pow(double, int);

int main()
{
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;

    print_pow(base, exponent);
    print_pow(100, 4);
    print_pow(100, 20);
}

double power(double base, int exponent) //Definition of custom power function
{
    double result = 1;

    for (size_t i = 0; i < exponent; i++)
    {
        result *= base;
    }

    return result;
}

void print_pow(double base, int exponent)
{
    double myPower = power(base, exponent);

    cout << base << " raised to the power of " << exponent << " is: " << myPower << std::endl;
}
