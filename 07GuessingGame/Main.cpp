#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void play_game();

int main()
{

    int choice;

    do
    {
        //Generate new seed for random every time we loop
        srand(time(NULL));

        std::cout << "1.Play Game" << std::endl
                  << "0.Quit Game" << std::endl;

        std::cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            play_game();
            break;
        }
    } while (choice != 0);
}

void play_game()
{
    //Get a random number from 0 to 100 (using modulo)
    int random = rand() % 101;

    std::cout << "Guess the number: " << std::endl;

    int guess;
    int moves = 0;

    while (true)
    {
        cin >> guess;

        std::cout
            << "Your guess is " << guess << std::endl;

        moves++;

        if (!cin)
        {
            std::cout << "Invalid number\n";
        }
        else if (guess == random)
        {
            std::cout << "You win with " << moves << " moves!\n\n";
            break;
        }
        else if (guess > random)
        {
            std::cout << "Number is higher\n";
        }
        else if (guess < random)
        {
            std::cout << "Number is lower\n";
        }
    }
}
