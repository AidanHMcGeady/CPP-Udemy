#include <iostream>

using namespace std;

string res1 = "Chocolate bar", res2 = "Cola", res3 = "M&M Caramel", res4 = "M&M Peanuts", res5 = "Skittles", res6 = "Diet Cola";

int choice;

int main()
{
    cout << "The vending machine layout is: " << endl
    << "1. " << res1 << endl
    << "2. " << res2 << endl
    << "3. " << res3 << endl
    << "4. " << res4 << endl
    << "5. " << res5 << endl
    << "6. " << res6 << endl;


        cout << "What do you desire?" << endl;

        choice;
        cin >> choice;

        switch(choice)
        {
        case 1: cout << "You have selected " << res1 << endl;
        break;
        case 2: cout << "You have selected " << res2 << endl;
        break;
        case 3: cout << "You have selected " << res3 << endl;
        break;
        case 4: cout << "You have selected " << res4 << endl;
        break;
        case 5: cout << "You have selected " << res5 << endl;
        break;
        case 6: cout << "You have selected " << res6 << endl;
        break;
        default: cout << "ERROR!! Invalid Choice. Try Again." << endl;
        break;
        }
}
