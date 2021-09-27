#include <iostream>

using namespace std;


int a, b;

int addition()
{
    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    int c = a + b;

    cout << "Result = " << c << endl;
}

int SUBTRACTION()
{
    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    int c = a - b;

    cout << "Result = " << c << endl;
}


int main()
{
    addition();

    return 0;
}
