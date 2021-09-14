#include <iostream>

using namespace std;

main()
{
    char chr = 'a';
    int nt = 5;
    short shrt = 12345;
    float flt = 1.2345;
    double dbl = 123.45;

    cout << "Character value is: " << chr << ", address: " << &chr << endl;
    cout << "Character value is: " << nt << ", address: " << &nt << endl;
    cout << "Character value is: " << shrt << ", address: " << &shrt << endl;
    cout << "Character value is: " << flt << ", address: " << &flt << endl;
    cout << "Character value is: " << dbl << ", address: " << &dbl << endl;
}
