#include <iostream>

using namespace std;

int main()
{
    int Min;
    int Max;
    int Mid;

    bool MinMid;
    bool MaxMid;

    cout << "Test the program! You should input a low number first, a high number second, and a number between them third. But feel free to get this wrong." << endl;

    cout << "Low Number: ";
    cin >> Min;

    cout << "High Number: ";
    cin >> Max;

    if (Max <= Min)
    {
        cout << "ERROR!! Max cannot be lower than Min. Program will stop." << endl;

        return EXIT_FAILURE;
    }

    cout << "Middle Number: ";
    cin >> Mid;

    if (Mid >= Min)
    {
        MinMid = true;
    }

    if (Mid <= Max)
    {
        MaxMid = true;
    }

    cout << "Is middle number higher than low number? " << MinMid << endl << "Is middle number lower than high number? " << MaxMid << endl;
}
