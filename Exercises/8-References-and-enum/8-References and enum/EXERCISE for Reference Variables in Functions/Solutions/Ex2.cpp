#include <iostream>

using namespace std;

int a;
int b;
int &c = a;
int &d = b;

int choice1;
int choice2;

int equality;

int checkIfTheSame()
{
    if(choice1 == 1 && choice2 == 2)
    {
        a == b ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &b ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else if(choice1 == 1 && choice2 == 3)
    {
        a == c ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &c ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else if(choice1 == 1 && choice2 == 4)
    {
        a == d ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &a == &d ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else if(choice1 == 2 && choice2 == 3)
    {
        b == c ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &b == &c ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else if(choice1 == 2 && choice2 == 4)
    {
        b == d ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &b == &d ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else if(choice1 == 3 && choice2 == 4)
    {
        c == d ? equality++, cout << "Values Match" << endl : cout << "Values Do Not Match" << endl;
        &c == &d ? equality++, cout << "Addresses Match" << endl : cout << "Addresses Do Not Match" << endl;
        equality == 2 ? cout << "Result: " << endl << "Perfect Match" << endl: cout << endl;
        equality == 0 ? cout << "Result: " << endl << "Completely Different" << endl : cout << endl;
    }
    else
    {
        cout << "You failed to choose correctly" << endl;
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

    cout << "First Number = "; cin >> choice1;
    cout << "Second Number = "; cin >> choice2;
}
