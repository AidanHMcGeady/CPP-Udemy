#include <iostream>

using namespace std;

float inputNumber;
float powerNumber;
float result = 1;

int main()
{

    cout << "Input a number, and the amount of times it will be multiplied together. We will show you answer" << endl;
    cout << endl;

    cout << "Starting Number: "; cin >> inputNumber;
    cout << "Power Number: "; cin >> powerNumber;

    for (int i = 0; i != powerNumber; i++)
        result = result * inputNumber;

    cout << inputNumber << " to the power of " << powerNumber << " is equal to " << result << endl;
}
