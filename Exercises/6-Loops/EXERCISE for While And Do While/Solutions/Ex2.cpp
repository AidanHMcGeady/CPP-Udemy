#include <iostream>

using namespace std;

int userInput;
int savedPin;
int tries = 5;

int main()
{
    cout << "Please input your 4 digit pin code" << endl;
    cin >> savedPin;
    cout << "Your pin has been saved, please re enter your pin" << endl;

    cout << endl;
    cout << "Pin Attempt: "; cin >> userInput;

    while (userInput != savedPin && tries != 0)
    {
        --tries;
        userInput = NULL;

        cout << endl << "The pin you entered was incorrect, please try again" << endl;

        cout << "Attempts left: " << tries << ". Pin Attempt: "; cin >> userInput;
    }

    if (userInput != savedPin && tries != 0)
        cout << "PIN CODES MATCH!";
    else
        cout << "You have been locked out of your account!";
}
