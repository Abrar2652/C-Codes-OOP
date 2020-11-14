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
        sum=sum*10+r;
        temp = temp/10;
    }
    cout<<"Reverse: "<<sum<<endl;
    if (num == sum)
    {
        cout<<"Palindrome";
    }
    else
        cout<<"Not Palindrome";
    _getch();
    return 0;
}
