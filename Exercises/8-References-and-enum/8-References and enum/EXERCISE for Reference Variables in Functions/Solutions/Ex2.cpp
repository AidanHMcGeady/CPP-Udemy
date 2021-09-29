#include <iostream>

using namespace std;

int a, b, &c = a, &d = b;

int choice1;
int choice2;
int equality;
int combo;

int checkIfTheSame()
{
    cout << "First Number = "; cin >> choice1;

    cout << "Second Number = "; cin >> choice2;

    ((1, 2) || (2, 1)) == true ? combo = 12 : NULL;
    ((1, 3) || (3, 1)) == true ? combo = 13 : NULL;
    ((1, 4) || (4, 1)) == true ? combo = 14 : NULL;
    ((3, 2) || (2, 3)) == true ? combo = 23 : NULL;
    ((4, 2) || (2, 4)) == true ? combo = 24 : NULL;
    ((4, 3) || (3, 4)) == true ? combo = 34 : NULL;

    switch(combo)
    {
    case 12:
        a == b ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &b ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    case 13:
        a == c ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &c ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    case 14:
        a == d ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &d ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    case 23:
        c == b ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &c == &b ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    case 24:
        d == b ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &d == &b ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    case 34:
        d == c ? ++equality, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &d == &c ? ++equality, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 1 ? cout << "Result: " << endl << "Partial Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
        break;
    default:
        cout << "bye";
    }
}

int main()
{
    a = 10;
    b = 8;
    c = 10;
    d = 10;

    cout << "Which two integers do you want to edit and compare?" << endl
    << "1. A" << endl
    << "2. B" << endl
    << "3. C" << endl
    << "4. D" << endl;

    checkIfTheSame();
}
