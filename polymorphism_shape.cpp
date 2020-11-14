#include<iostream>
#include<conio.h>
using namespace std;
/*
1. overloading-> different parameter, doesn't inherit, within same class, may or may not return the same type, doesn't hide another
2. overriding -> same para, inherits, diff classes: sub and super, same return type, hides the mother function
*/
class Shape
{
public:
    double dim1, dim2;
    Shape(double dim1,double dim2)
    {
        this -> dim1 = dim1;
        this -> dim2 = dim2;
    }
    virtual double area()
    {
        return 0;
    }
};
class Triangle:public  Shape
{
public:
    Triangle(double dim1,double dim2)
    : Shape(dim1, dim2)
    {

    }
    double area()
    {
        return (double)1/2*dim1*dim2;
    }
};
class Rectangle: public Shape
{
public:
    Rectangle(double dim1,double dim2)
    : Shape(dim1, dim2)
    {

    }
    double area()
    {
        return dim1*dim2;
    }
};
int main()
{
   Shape *p;
   Triangle t(10,20);
   Rectangle r(10,20);
   p = &t;
   cout<<p->area()<<endl;
    p = &r;
   cout<<p->area()<<endl;
    _getch();
}

