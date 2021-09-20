#include <iostream>

using namespace std;

int choice;
int array[4];

int main()
{
    cout << "Please enter 4 numbers into the array." << endl;

    choice;

    cin >> choice;
    array[0] = choice;

    cin >> choice;
    array[1] = choice;

    cin >> choice;
    array[2] = choice;

    cin >> choice;
    array[3] = choice;

    cout << "Result = " << array[0] + array[1] + array[2] + array[3]<< endl;
    cout << "Address of first element = " << &array[0] << endl;
    cout << "Address of last element = " << &array[3] << endl;
}
