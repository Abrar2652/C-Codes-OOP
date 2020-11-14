#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int displayarray(int num[],int size1)
{
    for(int i=0; i<size1; i++)
        cout<<num[i]<<"\t";
}
void display(int *num)//call by reference, we're passing the copy of the address of the variable x, so it's changing the original value of x.
{
    *num =20;
}
int main()
{
    int a[5]={2,3,4,5,6};
    displayarray(a,5);
    int x=10;
    display(&x);
    cout<<endl<<x;
    _getch();
}
