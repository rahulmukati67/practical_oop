/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -6th “Write a Program for Convert Temperature from Celsius to Fahrenheit and Fahrenheit to
Celsius” */

#include <iostream>
using namespace std;

int main()
{
    int c, f;
    cout << "Enter the Temperature in  Celsius : ";
    cin >> c;
    cout << endl;
    cout << "Enterted  Temperature in  Fahrenheit is : " << (c * 9.0) / 5.0 + 32 << endl;
    cout << "Enter the Temperature in  Celsius : ";
    cin >> f;
    cout << endl;
    cout << "Enterted  Temperature in Celsius is : " << 5 * (f - 32) / 9 << endl;
    return 0;
}
