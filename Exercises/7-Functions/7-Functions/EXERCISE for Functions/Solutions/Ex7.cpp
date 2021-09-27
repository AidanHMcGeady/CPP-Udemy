#include <iostream>

using namespace std;

double a, b, c, d, e;

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

double minmaxArray()
{

    int elementArray[5] = {a, b, c, d, e};

    cout << "Please input 5 values to find what the min and max values are." << endl << endl;

    cout << "Number 1: " << endl;   cin >> a;
    double max = a, min = a;

    cout << "Number 2: " << endl;   cin >> b;
    max < b ? max = b : NULL; min > b ? min = b : NULL;

    cout << "Number 3: " << endl;   cin >> c;
    max < c ? max = c : NULL; min > c ? min = c : NULL;

    cout << "Number 4: " << endl;   cin >> d;
    max < d ? max = d : NULL; min > d ? min = d : NULL;

    cout << "Number 5: " << endl;   cin >> e;
    max < e ? max = e : NULL; min > e ? min = e : NULL;

    cout << "Min = " << min << endl;

    cout << "Max = " << max << endl;
}

void chooseOperation()
{
    cout << "What sum do you want to perform: " << endl
         << " 1. Addition " << endl
         << " 2. Subtraction " << endl
         << " 3. Multiplication " << endl
         << " 4. Division " << endl
         << " 5. Exponential " << endl
         << " 6. MinMaxArray " << endl;

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
        case 6:
            minmaxArray();
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
