#include <iostream>
using namespace std;
// operators

main()
{
    int a = 10;
    int b = 4;
    int gat;

    cout << a + b << endl; //addition
    cout << a - b << endl; //subtraction
    cout << a * b << endl; //multiplica
    cout << a / b << endl; //division
    cout << a % b << endl; //acts like division but only returns whole numbers

    cout << "" << endl;

    //incrementation is when a number increases by a set number - default is 1
    int c = 1;

    cout << c + 3 << endl; // increases c by 3
    c += 2; // increases c by 2
    cout << c++ << endl; // increases c by 1

    cout << "" << endl;

    //decrementation is when a number decreases by a set number - default is 1
    int d = 10;

    cout << d - 2 << endl; // decreases by 2
    d -= 3; // decreases by 3
    cout << d-- << endl; // decreases by 1

    cout << "" << endl;
}
