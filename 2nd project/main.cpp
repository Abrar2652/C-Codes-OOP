#include <iostream>
#include "mynewclass.h"
using namespace std;

int main()
{
    //const mynewclass ob;//constant object can only call constant functions
    //ob.display1();
    mynewclass ob1(1500,500,600);//non-constant object can only call non-constant functions
    ob1.display2();
    return 0;
}
