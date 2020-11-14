#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class Student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"\t"<<gpa<<endl;
    }
    /*
    void setvalue(int x, double y)
    {
        id=x;
        gpa=y;
    }
    */
    //parametrized constructor
    Student(int x, double y)
    {
        id = x;
        gpa = y;
    }
    //default constructor
    Student()
    {
        cout<<"Default constructor"<<endl;
    }
    //constructor overloading
};
//constructor is a special type of function, no return type, same name as the class it belongs to, is called automatically
int main()
{
    Student Mithi;
    Student Abrar(35,3.96), Omar(8,3.5);
    Student Jahin(234,3.7);
    Jahin.display();
    //Abrar.setvalue(35,3.96);
    //Abrar.id = 35;
    //Abrar.gpa = 3.96;
    //Omar.id  = 8;
    //Omar.gpa = 3.5;
    Abrar.display();
    Omar.display();
    _getch();
}

