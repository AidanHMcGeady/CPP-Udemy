#include <iostream>

using namespace std;

float inputNumber;
float result = 1;

int main()
{
    cout <<  "Enter a number, that will be used in a factoiral operation." << endl;
    cin >> inputNumber;

    for (int i = 1; i <= inputNumber; i++)
    {
        result = i * result;

        cout << i << "! = " << result << endl;
    }
}
