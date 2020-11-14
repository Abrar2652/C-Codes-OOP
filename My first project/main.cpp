#include <iostream>
#include "myfirstclass.h"
using namespace std;
int main()
{
    Myfirstclass ob;
    ob.display();
    Myfirstclass *p = &ob;
    p -> display(); //selection operator
    return 0;
}
