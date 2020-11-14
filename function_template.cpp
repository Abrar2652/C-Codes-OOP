#include<iostream>
#include<conio.h>
using namespace std;
//using template for supporting all data types
template <class mytemp1, class mytemp2>//generic data type
mytemp1 add (mytemp1 a, mytemp2 b)//multiple parameter
{
    return a+b;
}

int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10.23452,234.1234)<<endl;
    cout<<add(10.23452,234)<<endl;
    _getch();

}

