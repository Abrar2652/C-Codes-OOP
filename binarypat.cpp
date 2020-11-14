#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i, j,n;
    cin >> n;
    for (i=1; i<=n; i++)
    {
        for (j=1; j<=i; j++)
        {
            if(i%2!=0)
                cout<<"1"<<"\t";
            else
                cout<<"0"<<"\t";
        }
//cout<<j%2<<"\t"

        cout<<"\n";
    }
    _getch();
    return 0;
}
