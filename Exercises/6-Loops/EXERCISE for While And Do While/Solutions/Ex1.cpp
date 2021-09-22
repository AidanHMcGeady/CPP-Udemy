#include <iostream>

using namespace std;

int userInput;
int savedPin;

int main()
{
    cout << "Please input your 4 digit pin code" << endl;
    cin >> savedPin;
    cout << "Your pin has been saved, please re enter your pin" << endl;

    cout << endl;
    cout << "Pin Attempt: "; cin >> userInput;

    while (userInput != savedPin)
    {
        userInput = NULL;

        cout << endl
        << "The pin you entered was wrong, please try again"
        << endl;

        cout << "Pin Attempt: "; cin >> userInput;
    }

    cout << "PIN CODES MATCH!";
}
