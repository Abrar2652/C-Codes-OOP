#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n, s;
    cin >> n;
    for (i=n; i>=1; i--)
    {
        for (s=1; s<=n-i; s++)
        {
                cout<<" "<<"\t";
        }
        for (j=1; j<=i; j++)
        {
                cout<<j%2<<"\t";
        }

        cout<<"\n";
    }

    _getch();
    return 0;
}

