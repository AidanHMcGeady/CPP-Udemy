#include <iostream>

using namespace std;

int array[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            cout << "   " << array[i][j];
        }
        cout << endl;
    }
}
