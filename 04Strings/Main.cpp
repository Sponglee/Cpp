#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main()
{
    string greeting;

    getline(std::cin, greeting);

    // greeting.insert(3, "     ");
    // greeting.erase(greeting.length() - 1);
    // greeting.pop_back(); //Get rid of last element
    // greeting.replace(0, 4, "Heaven");

    greeting.replace(greeting.find("hell"), 4, "***");

    // cout << greeting.substr(5, 2) << std::endl;

    if (greeting.find_first_of("!") == -1)
        std::cout << "NOT FOUND" << std::endl;
}
