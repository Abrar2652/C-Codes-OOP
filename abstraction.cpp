#include<iostream>
#include<conio.h>
using namespace std;
/*
1. overloading-> different parameter, doesn't inherit, within same class, may or may not return the same type, doesn't hide another
2. overriding -> same para, inherits, diff classes: sub and super, same return type, hides the mother function
*/
class mobileuser//abstract class
{
public:
    void call()
    {
        cout<<"Hello!"<<endl;
    }
    virtual void sendmessage()=0;//pure virtual function
};
class Rahim:public mobileuser
{
public:
    void sendmessage()
    {
    cout<<"Hi, this is Rahim."<<endl;
    }
};
class Karim: public mobileuser
{
public:
    void sendmessage()
    {
        cout<<"karim!"<<endl;
    }
};
int main()
{
   //can't create any object of the abstract class
   mobileuser *m;
   Rahim r;
   Karim k;
   m = &r;
   m ->sendmessage();
   m=&k;
   m->sendmessage();
    _getch();
}

