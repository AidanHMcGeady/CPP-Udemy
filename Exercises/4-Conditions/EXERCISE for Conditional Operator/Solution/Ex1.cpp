#include <iostream>

using namespace std;

int userAge;

int main()
{
    cout << "How old are you? ";
    cin >> userAge;

    if (userAge >= 18)
    {
        cout << "You are an adult!";
    }
    else
    {
        cout << "You are not an adult!";
    }
}
