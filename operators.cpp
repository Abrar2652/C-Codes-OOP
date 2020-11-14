#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{

    /*
    int x = 3;
    int y = x--;
    cout << y << endl;
    cout << x << endl;
    y = ++x;
    cout << y << endl;
    cout << x << endl;
    */
    int num;
    cin >> num;
    //(num%2==0) ? cout << num << " is even" : cout << num << " is odd";
    (num%2==0) ? printf(" is even") : printf(" is odd");
    _getch();
    return 0;
}
