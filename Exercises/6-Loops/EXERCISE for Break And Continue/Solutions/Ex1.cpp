#include <iostream>

using namespace std;

int userInput = 10;
int sum;

int main()
{
    cout << "Please enter a positive number" << endl;

    cin >> userInput;

    for (int i; i - 1 != userInput; i++)
    {


        if (i % 2 == 0 && i != 0)
        {
            cout << sum << " + " << i << " = ";
            sum = sum + i;
            cout << sum << endl;
        }
    }
}
