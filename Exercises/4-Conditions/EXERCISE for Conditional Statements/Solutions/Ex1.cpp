#include <iostream>

using namespace std;


bool result = false;

int main()
{
    do
    {
        int points;

        cout << "How much did you achieve in your 100 point test? " << endl;

        cin >> points;

        if(points > 100 || points < 0)
        {
            cout << "ERROR. The number of points is invalid !" << endl;
        }
        else if (points < 50)
        {
            cout << "You did not score high enough to pass !" << endl;
            result = true;
        }
        else
        {
            cout << "You pass !" << endl;
            result = true;
        }

        points = NULL;
    } while (result == false);
}
