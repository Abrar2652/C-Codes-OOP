#include "mynewclass.h"
#include<iostream>
using namespace std;
mynewclass::mynewclass(int x, int y, int z)
: admissionfee(x), examfee(y)
{
    cout<<"AdmissionFee: "<<x<<endl;
    cout<<"ExamFee: "<<y<<endl;//ctor
    id = z;
    cout<<"ID: "<<id<<endl;
}
void mynewclass :: display1() const
{
    cout<<"I\'m constant function"<<endl;
}
void mynewclass :: display2()
{
    cout<<"I\'m not constant function"<<endl;
}

