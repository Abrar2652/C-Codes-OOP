#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num, i, count = 0;
    cin >> num;
    /*for (i = 2; i< num; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }

    }
    if (count == 0)
    {
        cout<< "Prime"<<endl;
    }
    else
        cout<< "Not Prime";
        */
    for (i = 2; i<num; i++)
    {
        if (num%i==0)
        {
            break;
        }
    }
    if (i == num)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not Prime";
    }
    _getch();

}
