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
    virtual void display()
    {
        cout<<"I am a person"<<endl;
    }
};
class Student: public Person
{
public:
    void display()
    {
        cout<<"I am a student"<<endl;
    }
};
class Teacher: public Student
{
public:
    void display()
    {
        cout<<"I am a teacher"<<endl;
    }
};

int main()
{
    Student s;
    Person *p;
    Teacher t;
    p = &t;
    p -> display();
    p = &s;
    p -> display();

    _getch();
}

