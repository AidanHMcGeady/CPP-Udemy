#include <iostream>

using namespace std;

double length;

int main()
{
    cout << "Inches to Centimetres Calculator" << endl << endl;

    cout << "Inches: ";
    cin >> length;

    length = length * 2.54;

    cout << "Centimetres: " << length;
}
