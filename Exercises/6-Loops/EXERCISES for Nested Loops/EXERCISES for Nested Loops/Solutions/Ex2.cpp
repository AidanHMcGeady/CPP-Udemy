#include <iostream>

using namespace std;

int player1InputX, player1InputY, player2InputX, player2InputY;

char array[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool player1Turn = true, player2Turn = false;

int main()
{
    for (int x = 9; x != 0; --x)
    {
        for (int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << "   " << array[i][j];
            }
            cout << endl;
        }

        cout << "Specify a numbered cell that you want to replace with an X" << endl;
        cout << endl;

        if (player1Turn)
        {
            cout << "What row? "; cin >> player1InputX;
            cout << "What column? "; cin >> player1InputY;
            cout << endl;

            array[player1InputX][player1InputY] = 'X';

            player1Turn = false;
            player2Turn = true;
        }
        else
        {
            cout << "What row? "; cin >> player2InputX;
            cout << "What column? "; cin >> player2InputY;
            cout << endl;

            array[player2InputX][player2InputY] = 'O';

            player2Turn = false;
            player1Turn = true;
        }
    }
}
