#include <iostream>

using namespace std;

int playerInputX, playerInputY;

char array[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

bool player1Turn, repeat = false;

int main()
{
    player1Turn = false;

    for (int x = 9; x != 0; --x)
    {
        player1Turn == true ? player1Turn = false : player1Turn = true;

        player1Turn == true ? cout << "Player 1 Turn" << endl << endl : cout << "Player 2 Turn" << endl << endl;

        for (int i = 0; i < 3; i++)
        {
            for(int j = 0; j < 3; j++)
            {
                cout << "   " << array[i][j];
            }
            cout << endl;
        }

        if (player1Turn)
        {
            cout << "Specify a numbered cell that you want to replace with an X" << endl;
        }
        else
        {
            cout << "Specify a numbered cell that you want to replace with an O" << endl;
        }

        do
        {
            repeat == true ? cout << "You cannot got there" << endl << endl : cout << endl;

            cout << "What row? "; cin >> playerInputX;
            cout << "What column? "; cin >> playerInputY;
            cout << endl;

            repeat = true;

        } while (array[playerInputX][playerInputY] == 'X' || array[playerInputX][playerInputY] == 'O' || playerInputX > 2 || playerInputY > 2 || playerInputX < 0 || playerInputY < 0);

        repeat = false;

        player1Turn == true ? array[playerInputX][playerInputY] = 'X' : array[playerInputX][playerInputY] = 'O';

        system("cls");
    }
}
