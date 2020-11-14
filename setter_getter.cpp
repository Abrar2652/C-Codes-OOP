#include<iostream>
#include<conio.h>
#include<cstring>
#include<string>
//Encapsulation
using namespace std;
class Student
{
private:
    string name;//class var
public:
    void setName(string name)//local var
    {
        this -> name = name;//this keyword is used to indicate the class var
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    Student Abrar;
    Abrar.setName("Md. Abrar Jahin");
    cout<<Abrar.getName()<<endl;
    _getch();
}

