#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <cmath>

using namespace std;

void play_game();
int get_input();

int main()
{

    int choice;

    do
    {
        //Generate new seed for random every time we loop
        srand(time(NULL));

        cout << "1.Play Game" << endl
             << "0.Quit Game" << endl;

        cin >> choice;

        switch (choice)
        {
        case 0:
            break;

        case 1:
            play_game();
            break;
            // case 2:
            //     bool check = check_for_input();
            //     cout << boolalpha << check << endl;
            //     break;
        }
    } while (choice != 0);
}

void play_game()
{
    //Get a random number from 0 to 100 (using modulo)
    int random = rand() % 101;

    cout << "Guess the number: "
         /* << "(" << random << ")"*/
         << endl;

    int guess;
    int moves = 0;

    while (true)
    {
        guess = get_input();

        // cout << "Your guess is " << guess << endl;

        if (guess == random)
        {
            cout << "You win with " << moves << " moves!\n\n";
            break;
        }
        else if (guess == -1 || guess < 0 || guess > 100)
        {
            cout << "Input is invalid\n";
            continue;
        }
        else if (guess > random)
        {
            cout << "Your number is higher\n";
        }
        else if (guess < random)
        {
            cout << "Your number is lower\n";
        }
        moves++;
    }
}

int get_input()
{
    int n;

    do
    {
        cin >> n;
        if (!cin)
        {
            // user didn't input a number
            cin.clear();                                         // reset failbit
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); //skip bad input
            // next, request user reinput
        }
        else if (cin)
            return n;

    } while (!cin);

    return -1;
}
