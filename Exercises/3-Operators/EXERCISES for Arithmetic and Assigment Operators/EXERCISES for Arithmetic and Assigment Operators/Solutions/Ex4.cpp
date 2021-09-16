#include <iostream>

using namespace std;

int numOne;
int numTwo;
int sum;

int main()
{
    cout << "Lets add numbers together" << endl;

    cout << "First Number: " << endl;
    cin >> numOne;

    cout << "Last Number: " << endl;
    cin >> numTwo;

    if (numOne > numTwo)
    {
        sum = numOne - numTwo;

        cout << numOne << " - " << numTwo << " = " << sum;
    }
    else
    {
        sum = numTwo - numOne;

        cout << numTwo << " - " << numOne << " = " << sum;
    }


}
