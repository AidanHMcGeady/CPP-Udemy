#include <iostream>

using namespace std;

    int value;

int setValue()
{
    cout << endl <<  value << endl;
}

int main()
{
    int &amount = value;

    cout << "input a numerical whole number value" << endl; cin >> amount;

    amount = value;

    setValue();
}
