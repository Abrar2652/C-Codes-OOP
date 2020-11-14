#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int r, num, temp, sum = 0;

    for(int i=1;i<=1000;i++)
    {
        temp = i;
        while(temp!=0)
            {
                r = temp%10;
                sum=sum+r*r*r;//153=1^3+5^3+3^3
                temp = temp/10;
            }
            //cout<<"Reverse: "<<sum<<endl;
            if (i == sum)
            {
                cout<<sum<<endl;
            }
            sum = 0;
    }


    _getch();
    return 0;
}
