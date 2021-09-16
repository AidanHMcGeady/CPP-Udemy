#include <iostream>

using namespace std;

int numOne;
int numTwo;
int sum;

int main()
{
    cout << "Lets divide numbers from each other" << endl;

    cout << "First Number: " << endl;
    cin >> numOne;

    cout << "Last Number: " << endl;
    cin >> numTwo;

    if (numOne > numTwo)
    {
        sum = numOne % numTwo;

        cout << numOne << " / " << numTwo << " has a remainder of " << sum;
    }
    else
    {
        sum = numTwo % numOne;

        cout << numTwo << " / " << numOne << " has a remainder of " << sum;
    }


}
