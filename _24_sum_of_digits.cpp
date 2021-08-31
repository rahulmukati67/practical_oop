/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -24 “A program for find out the sum of digit and count the digit of a number” */

#include<iostream>
using namespace std;

int main()
{
     int num , a,b=0,sum=0;
     cout<<"Enter the number to calculate sum of their digits ";
     cin>> num;
     while(num!=0)
     {
         a = num%10;
        sum = sum+ a;
        num = num/10;
         b+=1;
     }
     cout<<"sum of digites of given number is : "<<sum<<endl;
     cout<<"Number of digits in given number is "<<b;

    return 0;
}
