#include<iostream>
#include<conio.h>
using namespace std;
    class A
    {
    private:
        int id=100;
        string name= "Abrar";
    public:
        friend class B;//to access the private contents of class A
    };
    class B
    {
    public:
        void display(A x)
        {
            cout<< x.id<<endl;
            cout<< x.name<<endl;
        }
    };


int main()
{
    A ob1;
    B ob2;
    ob2.display(ob1);
    _getch();

}
