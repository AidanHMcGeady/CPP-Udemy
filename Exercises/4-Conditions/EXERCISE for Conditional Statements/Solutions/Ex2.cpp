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


    do
    {
        cout << "What do you desire?";

        choice;
        cin >> choice;

        if(choice == 1)
            cout << "You have selected " << res1 << endl;
        else if(choice == 2)
            cout << "You have selected " << res2 << endl;
        else if(choice == 3)
            cout << "You have selected " << res3 << endl;
        else if(choice == 4)
            cout << "You have selected " << res4 << endl;
        else if(choice == 5)
            cout << "You have selected " << res5 << endl;
        else if(choice == 6)
            cout << "You have selected " << res6 << endl;
        else if(choice < 0 || choice > 6)
            cout << "ERROR!! Invalid Choice. Try Again." << endl;
    } while (choice < 1 || choice > 6);
}
