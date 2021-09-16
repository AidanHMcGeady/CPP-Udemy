#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;

    cout << "Input two seperate numbers" << endl;

    cout << "Number One: " << endl;
    cin >> a;

    cout << "Number Two: " << endl;
    cin >> b;

    cout << "You have set A as: " << a << ", and B as: " << b << endl;

    c = a;
    a = b;
    b = c;

    cout << "Now we have swapped them so A is: " << a << ", and B is " << b << endl;

}
