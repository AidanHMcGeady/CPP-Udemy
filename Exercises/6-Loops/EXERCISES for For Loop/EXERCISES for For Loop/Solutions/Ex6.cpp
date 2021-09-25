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
        if(i % 2 == 0)
        {
            cout << "The number " << i << " is even" << endl;
        }
        else
        {
            cout << "The number " << i << " is odd" << endl;
        }
    }
}
