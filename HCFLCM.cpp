#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n1, n2, i, hcf, lcm;
    cin >> n1>>n2;
    for (i = n1<n2? n1:n2; i>=1 ; i--)
    {
        if(n1%i==0 && n2%i==0)
            break;
    }
    cout << "HCF: "<<i<<endl;
    for (i = n1>n2? n1:n2; i<=n1*n2 ; i+=n1>n2?n1:n2)
    {
        if(i%n1==0 && i%n2==0)
            break;
    }
    cout <<"LCM: "<<i<<endl;
    _getch();
    return 0;
}
