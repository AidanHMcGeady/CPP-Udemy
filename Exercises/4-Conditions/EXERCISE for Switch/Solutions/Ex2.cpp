#include <iostream>

using namespace std;

int choice;
int year;

int main()
{
    cout << "The months in each year are: " << endl
    << "1. January" << endl
    << "2. Feburary" << endl
    << "3. March" << endl
    << "4. April" << endl
    << "5. May" << endl
    << "6. June" << endl
    << "7. July" << endl
    << "8. August" << endl
    << "9. September" << endl
    << "10. October" << endl
    << "11. November" << endl
    << "12. December" << endl;


    cout << "What month do you want to know about?" << endl;

    choice;
    cin >> choice;

    cout << "What year do you want the answer to be based on?" << endl;

    year;
    cin >> year;

    switch(choice)
    {
        case 1: cout << "There are 31 days in January, in the year " << year << endl;
        break;
        case 2:
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
                cout << "There are 29 days in February, in the year " << year << endl;
            } else
            {
                cout << "There are 28 days in February, in the year " << year << endl;
            }
        break;
        case 3: cout << "There are 31 days in March, in the year " << year << endl;
        break;
        case 4: cout << "There are 30 days in April, in the year " << year << endl;
        break;
        case 5: cout << "There are 31 days in May, in the year " << year << endl;
        break;
        case 6: cout << "There are 30 days in June, in the year " << year << endl;
        break;
        case 7: cout << "There are 31 days in July, in the year " << year << endl;
        break;
        case 8: cout << "There are 31 days in August, in the year " << year << endl;
        break;
        case 9: cout << "YThere are 30 days in September, in the year " << year << endl;
        break;
        case 10: cout << "There are 31 days in October, in the year " << year << endl;
        break;
        case 11: cout << "There are 30 days in November, in the year " << year << endl;
        break;
        case 12: cout << "There are 31 days in December, in the year " << year << endl;
        break;
        default: cout << "ERROR!! Invalid Choice. Try Again." << endl;
    }
}
