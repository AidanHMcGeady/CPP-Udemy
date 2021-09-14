#include <iostream>

using namespace std;

int main()
{
    int RoomNum;
    int FloorNum;
    string FirstName;
    string LastName;
    string IncludedMeals;

    cout << "Your First Name is: ";
    cin >> FirstName;

    cout << "Your Last Name is: ";
    cin >> LastName;

    cout << "Your Room Number is: ";
    cin >> RoomNum;

    cout << "Your Floor Number is: ";
    cin >> FloorNum;

    cout << "Are meals included? Please answer 'Yes' or 'No' ";
    cin >> IncludedMeals;

    cout << "A group under the name of: " << FirstName << " " << LastName << ". Is are booked into room number: " << RoomNum << ", on floor number: " << FloorNum << endl;

    if (IncludedMeals == "Yes")
    {
        cout << "Meals included? Yes" << endl;
    }
    else
    {
        cout << "Meals included? No" << endl;
    }
}
