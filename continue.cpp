#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for (int i=1; i<=50; i++)
    {
        if(i == 10)
        {
            continue;
        }
        cout << i <<endl;
    }
}
