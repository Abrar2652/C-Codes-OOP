#include<iostream>
#include<conio.h>
#include<cstring>
#include<string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    void display1()
    {
        cout<<name<<endl;
        cout<<age<<endl;
    }
};
class Student: public Person
{
public:
    int id;
    void display2()
    {
        //display1();
        cout<<name<<endl;
        cout<<age<<endl;
        cout<<id<<endl;
    }
};
int main()
{
    Student Abrar;
    Abrar.id = 1811035;
    Abrar.age=20;
    Abrar.name="Md. Abrar Jahin";
    Abrar.display2();
    _getch();
}

