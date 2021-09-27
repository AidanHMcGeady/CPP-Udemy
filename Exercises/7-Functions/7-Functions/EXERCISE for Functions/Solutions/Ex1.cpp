#include <iostream>

using namespace std;


int a, b;

int addition()
{
    int c = a + b;

    cout << "Result = " << c << endl;
}


int main()
{
    cout << "Number 1: " << endl;   cin >> a;
    cout << "Number 2: " << endl;   cin >> b;

    addition();

    return 0;
}
