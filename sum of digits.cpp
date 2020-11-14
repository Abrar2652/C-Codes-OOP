#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r, num, temp, sum = 0;
    cin>>num;
    temp = num;
    while(temp!=0)
    {
        r = temp%10;
        sum+=r;
        temp = temp/10;
    }
    cout<<"Sum: "<<sum<<endl;
    _getch();
    return 0;
}
