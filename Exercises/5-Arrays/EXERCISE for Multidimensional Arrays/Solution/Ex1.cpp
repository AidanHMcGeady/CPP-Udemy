#include <iostream>

using namespace std;

int choiceX;
int choiceY;

int array[3][3];


int main()
{
    array[0][0] = 1, array[1][0] = 2, array[2][0] = 3, array[0][1] = 4, array[1][1] = 5, array[2][1] = 6, array[0][2] = 7, array[1][2] = 8, array[2][2] = 9;

    cout << "Please enter x and y numbers to get values from the array." << endl;

    choiceX;
    choiceY;

    cin >> choiceX;
    cin >> choiceY;

    cout << "Value stored at array[" << choiceX << "][" << choiceY << "] = " << array[choiceX][choiceY] << endl;
}
