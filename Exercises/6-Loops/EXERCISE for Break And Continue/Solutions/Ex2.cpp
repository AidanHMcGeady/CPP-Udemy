#include <iostream>

using namespace std;

char userInput;
int sum;

int main()
{
    for (int i = 1;; i++)
    {
        userInput = NULL;

        cout << "The current sum is: " << sum << ". " << endl
             << "Do you want to add " << i << " ?" << endl
             << endl
             << "Y for yes, N for no" << endl
             << endl;

        cin >> userInput;
        cout << endl;

        if(userInput == 'Y' || userInput == 'y')
            sum = sum + i;
        else if(userInput == 'N'|| userInput == 'n')
            sum = sum;
        else
        break;
    }
}
