#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    while (1)
    {
        try
            {
                int a,b;
                cin>>a;
                cin>>b;
                if(b==0)
                {
                    throw 5;
                }
                double div = (double) a/b;
                cout<<div<<endl;


            }
            catch(int x)//or catch(...)
            {
                cout<<"Division by zero isn't possible";
            }
    }
}
