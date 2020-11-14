#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n, s, count=0;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
                cout<<++count<<"\t";
        }

        cout<<"\n";
    }
    cout<<"\n\n\n";
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
                if (i==j || i+j==n+1)
                    cout<<"*"<<"\t";
                else
                    cout<<" "<<"\t";
        }

        cout<<"\n";
    }

    _getch();
    return 0;
}

