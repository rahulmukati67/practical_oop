/* 
NAME : RAHUL MUKATI
ENO :  0827CI201150
CSIT -3 
program -4th “Write a Program for B.Tech. Mark sheet calculation (Total, Percentage and Result)” */

#include <iostream>
using namespace std;
int main()
{
    int object_oriented_programing, data_structure, eee, discreat_structure, digital_circut, total;
    float percentage;
    char reuslt[10];

    cout << "Enter Marks of student " << endl;
    cout<<endl;
    cout << "object_oriented_programing : ";
    cin >> object_oriented_programing;
    cout << "data_structure : ";
    cin >> data_structure;
    cout << "discreat_structure : " ;
    cin >> discreat_structure;
    cout << "digital_circut : ";
    cin >> digital_circut;
    cout << "EEE : " ;
    cin >> eee;
    cout<<endl;
    cout<<endl;
    total = object_oriented_programing+data_structure+discreat_structure+ digital_circut+ eee;
    percentage = total /5;
    cout<<"---------------------B.Tech. Mark sheet--------------------- ";
    cout<<endl;
     cout<<endl;
    cout<<" object_oriented_programing = "<<object_oriented_programing<<endl;
    cout<<" data_structure             = "<<data_structure <<endl;
    cout<<" discreat_structure         = "<<discreat_structure <<endl;
    cout<<" digital_circut             = "<<digital_circut<<endl;
    cout<<" EEE                        = "<<eee<<endl;
    cout<<endl;
    cout<<"Total                       ="<<total<<endl;
    cout<<"Percentage                  ="<<percentage<<"%"<<endl;
    if(percentage>33)
    cout<<"Result                      = Pass";
    else
    cout<<"Result                      = Fail";

  return 0;
}
