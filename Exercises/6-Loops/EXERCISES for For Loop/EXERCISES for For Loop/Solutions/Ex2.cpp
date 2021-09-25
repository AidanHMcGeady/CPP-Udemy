#include <iostream>

using namespace std;

char starting = 'A';
char ending = 'a';

int main()
{
    cout << "Input a number, and we will show you the next 100" << endl;

    cout << endl;

    for (starting, ending; starting <= 'Z', ending <= 'z'; starting++, ending++)
        cout << starting << ending << endl;
}
