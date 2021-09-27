#include <iostream>

using namespace std;


float a, b, c;

int addition()
{
    cout << "Input two number that will be added together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a + b;

    cout << "Added result = " << c << endl;
}

int subtraction()
{
    cout << "Input two number that will be subtracted together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a - b;

    cout << "Subtracted result = " << c << endl;
}

int multiplication()
{
    cout << "Input two number that will be multiplied together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a * b;

    cout << "Multiplied result = " << c << endl;
}

int division()
{
    cout << "Input two number that will be divided together" << endl;

    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    c = a / b;

    cout << "Divided result = " << c << endl;
}

int exponent()
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

int main()
{
    addition();

    subtraction();

    multiplication();

    division();

    exponent();

    return 0;
}
