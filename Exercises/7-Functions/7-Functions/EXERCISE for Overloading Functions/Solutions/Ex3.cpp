#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Give me your name and surname:"<<endl;
    cin >> name;

    cin.ignore(10000, '\n');

    int age;
    cout << "Give me your age:" <<endl;
    if (cin >> age)
        cout << "Your age is: " << age << endl;
    else
    {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "You only get one more chance, give me your age as an integer" << endl;
        cin >> age;
    }
}
