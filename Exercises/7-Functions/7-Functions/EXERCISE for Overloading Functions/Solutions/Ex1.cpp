#include <iostream>

using namespace std;

int intNumber(int a, int b)
{
    int tempInt = b;

    while(a-- > 1)
        b *= tempInt;

    return b;
}

double doubleNumber(double c, double d)
{
    double tempDouble = d;

    while(c-- > 1)
        d *= tempDouble;

    return d;
}

string stringWord(string e, string f)
{
    string tempString = f;
    int g = e.size();

    while(g-- > 1)
        f += tempString;

    return f;
}

int main()
{
    cout << intNumber(2, 5) << endl;

    cout << doubleNumber(4.44, 5.26) << endl;

    cout << stringWord("Kings", "S.O.S ") << endl;
}
