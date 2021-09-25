#include <iostream>

using namespace std;

float inputNumber;
float result = 1;

int main()
{
    cout <<  "Enter a number." << endl;
    cin >> inputNumber;

    for (int i = 1; i <= inputNumber; i++)
    {
        cout << "*";

        if(i % 5 == 0)
        {
            cout << endl;
        }
    }
}
