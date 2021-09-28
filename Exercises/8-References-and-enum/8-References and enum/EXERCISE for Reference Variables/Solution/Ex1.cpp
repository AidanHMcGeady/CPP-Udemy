#include <iostream>

using namespace std;

string name = "Cassandra";
string &cassie = name;
string &casey = name;
string &sandra = name;

int main()
{
    cout << name << " @ " << &name << endl << endl;
    cout << cassie << " @ " << &cassie << endl << endl;
    cout << casey << " @ " << &casey << endl << endl;
    cout << sandra << " @ " << &sandra << endl << endl;
}
