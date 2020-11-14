#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n, s;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for (s=1; s<=n-i; s++)
        {
                cout<<" "<<"\t";
        }
        for (j=1; j<=i; j++)
        {
                cout<<j<<"\t";
        }
        for (j=i-1; j>=1; j--)
        {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
        for (i=n-1; i>=1; i--)
    {
        for (s=1; s<=n-i; s++)
        {
                cout<<" "<<"\t";
        }
        for (j=1; j<=i; j++)
        {
                cout<<j<<"\t";
        }
        for (j=i-1; j>=1; j--)
        {
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    _getch();
    return 0;
}

