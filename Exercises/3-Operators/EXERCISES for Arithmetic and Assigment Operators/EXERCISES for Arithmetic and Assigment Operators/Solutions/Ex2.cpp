#include <iostream>

using namespace std;

double tempC;
double tempF;
double tempK;

int main()
{
    cout << "Celsius to Fahrenheit and Kelvin" << endl << endl;

    cout << "What is your current temperature in Celsius?" << endl;
    cin >> tempC;

    tempF = (tempC * 9/5) + 32;
    tempK = tempC + 273.15;

    cout << "Your temperature is: " << tempF << "°F" << endl;
    cout << "Your temperature is: " << tempK << "°K" << endl;
}
