#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int i, a=-1, b=1, n , x[30];
    cin >> n;
    for (i=1; i<=n; i++)
    {
        int fibo = a + b;
        cout<<fibo<<"\t";
        a = b;
        b = fibo;
    }
    cout<<"\n\n\n\n";
    x[0]=0;
    x[1]=1;
    for (i=2; i<=n+1; i++)
    {
        x[i] = x[i-1]+x[i-2];
    }
    for(i=0; i<n; i++)
    {
        cout<<x[i]<<"\t";
    }
    _getch();
    return 0;
}

