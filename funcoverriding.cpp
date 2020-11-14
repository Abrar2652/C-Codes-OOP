#include<iostream>
#include<conio.h>
using namespace std;
/*
1. overloading-> different parameter, doesn't inherit, within same class, may or may not return the same type, doesn't hide another
2. overriding -> same para, inherits, diff classes: sub and super, same return type, hides the mother function
*/
class Person
{
public:
    void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class Student
{
public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};
class Teacher
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};
class boy
{
private:
    string name;
public:
    void setname(string x)
    {
        name = x;
    }
    void getname()
    {
        cout<<name<<endl;
    }
};
int main()
{
    Student s;
    s.display();
    Teacher t;
    t.display();
    boy b;
    b.setname("Abrar");
    b.getname();

    _getch();
}
