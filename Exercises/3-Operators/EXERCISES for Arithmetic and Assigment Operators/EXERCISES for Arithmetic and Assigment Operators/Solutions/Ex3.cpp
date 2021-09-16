#include <iostream>

using namespace std;

int numOne;
int numTwo;
int sum;

int main()
{
    cout << "Lets subtract numbers from each other" << endl;

    cout << "First Number: " << endl;
    cin >> numOne;

    cout << "Last Number: " << endl;
    cin >> numTwo;

    sum = numOne + numTwo;

    cout << numOne << " + " << numTwo << " = " << sum;

}
