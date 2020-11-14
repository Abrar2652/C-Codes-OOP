#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n, s;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
                cout<<char(j+64)<<"\t";
        }

        cout<<"\n";
    }
    for (i=n-1; i>=1; i--)
    {
        for (j=1; j<=i; j++)
        {
                cout<<char(j+64)<<"\t";
        }

        cout<<"\n";
    }
    _getch();
    return 0;
}

