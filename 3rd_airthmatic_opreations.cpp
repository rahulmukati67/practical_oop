/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -2 “Write a Program for Perform All Arithmetic Operations (‘+’,’-“,’*’,’/’,’ %’)” */

#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "Enter two number two perform Arithmetic Operations :" << endl;
    cin >> a >> b;
    cout << "sum of " << a << " " << b << " is : " << endl;
    cout << a + b << endl;
    cout << "Sub of " << a << " " << b << " is : " << endl;
    cout << a - b << endl;
    cout << "Mul of " << a << " " << b << " is : " << endl;
    cout << a * b << endl;
    cout << "Div of " << a << " " << b << " is : " << endl;
    cout << a / b << endl;
    cout << "Remiander of " << a << " " << b << " is : " << endl;
    cout << a % b << endl;
    return 0;
}
