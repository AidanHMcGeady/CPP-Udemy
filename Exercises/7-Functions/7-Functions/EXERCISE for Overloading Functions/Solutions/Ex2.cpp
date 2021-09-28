#include <iostream>

using namespace std;

int result, a, b, c, d, e;

int add(int, int);
int add(int, int, int);
int add(int, int, int, int);
int add(int, int, int, int, int);

int add(int a, int b)
{
    result = a + b;
}

int add(int a, int b, int c)
{
    result = a + b + c;
}

int add(int a, int b, int c, int d)
{
    result = a + b + c + d;
}

int add(int a, int b, int c, int d, int e)
{
    result = a + b + c + d + e;
}

int main()
{
    int choice;

    cout << "How many numbers do you want to add together? (2 - 5)" << endl;
    cin >> choice;

    switch(choice)
    {
        case 2:
            cout << "Please enter two numbers" << endl;
            cin >> a; cin >> b;

            cout << add(a, b);
            break;

        case 3:
            cout << "Please enter three numbers" << endl;
            cin >> a; cin >> b; cin >> c;

            cout << add(a, b, c);
            break;

        case 4:
            cout << "Please enter four numbers" << endl;
            cin >> a; cin >> b; cin >> c; cin >> d;

            cout << add(a, b, c, d);
            break;

        case 5:
            cout << "Please enter five numbers" << endl;
            cin >> a; cin >> b; cin >> c; cin >> d; cin >> e;

            cout << add(a, b, c, d, e);
            break;

        default:
            cout << "You didn't choose an option, application is closing.";
    }
}
