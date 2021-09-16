#include <iostream>

using namespace std;

int main()
{
    int Min;
    int Max;
    int Mid;

    bool Pos;

    cout << "Test the program! You should input a low number first, a high number second, and a number between them third. But feel free to get this wrong." << endl;

    cout << "Low Number: ";
    cin >> Min;

    cout << "High Number: ";
    cin >> Max;

    cout << "Middle Number: ";
    cin >> Mid;

    if (Min < Mid && Mid < Max)
    {
        Pos = true;
    }

    cout << Pos << endl;

    if (Max == Mid == Min)
    {
        cout << "All numbers are the same";
    }
    else if (Min >= Mid)
    {
        cout << "Low Number is too high" << endl;
    }
    else if (Mid >= Max)
    {
        cout << "High Number is too low" << endl;
    }

}
