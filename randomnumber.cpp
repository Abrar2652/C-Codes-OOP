#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    for (int i=0; i<10; i++)
    {
        int random = rand()%5 +1;//1 to 4 randomly print
        cout<<random<<endl;
    }
    int guess, rand1;
    while(1)
    {
        cout<<"Enter any guess number between 1 to 5: "<<endl;
        cin>>guess;
        rand1=rand()%5+1;
        if (guess==rand1)
        {
            cout<<"You've won!!!"<<endl;
        }
        else
        {
            cout<<"You've lost. Try again!"<<endl;
            cout<<"Random number was: "<<rand1<<endl;
        }
    }

    _getch();

}
