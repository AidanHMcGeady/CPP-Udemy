#include <iostream>

using namespace std;

float a, b, c;

int playerChoice;

void addition()
{
    cout << "Input two number that will be added together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a + b;

    cout << "Added result = " << c << endl;
}

void subtraction()
{
    cout << "Input two number that will be subtracted together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a - b;

    cout << "Subtracted result = " << c << endl;
}

void multiplication()
{
    cout << "Input two number that will be multiplied together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a * b;

    cout << "Multiplied result = " << c << endl;
}

void division()
{
    cout << "Input two number that will be divided together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a / b;

    cout << "Divided result = " << c << endl;
}

void exponent()
{
    cout << "Input two number that will be used as an exponential multiplication" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    for(int i = 0; i <= b; i++)
    {
        c *= a;
    }

    cout << "Exponent result = " << c << endl;
}

void chooseOperation()
{
    cout << "What sum do you want to perform: " << endl
         << " 1. Addition " << endl
         << " 2. Subtraction " << endl
         << " 3. Multiplication " << endl
         << " 4. Division " << endl
         << " 5. Exponential " << endl << endl;

    cin >> playerChoice;

    switch(playerChoice)
    {
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiplication();
            break;
        case 4:
            division();
            break;
        case 5:
            exponent();
            break;
        default:
            cout << "You have failed to choose one of the available options" << endl;
    }
}

int main()
{
    chooseOperation();

    return 0;
}
