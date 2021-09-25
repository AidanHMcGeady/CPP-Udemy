#include <iostream>

using namespace std;

int userInput;

int main()
{
    cout << "Input a number, and we will show you the next 100" << endl;
    cin >> userInput;
    cout << endl;

    for (int i = userInput; i != userInput + 100; i++)
        cout << i << endl;
}
