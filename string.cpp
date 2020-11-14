#include<iostream>
#include<conio.h>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    char ch[]={'h','e','l','l','o','\0'};
    char ch1[6] = {'h','e','l','l','o'};
    char ch2[]="hello";
    char name[10], name2[]=" Islam", name3[]="HEllo";
    int len = strlen(ch);
    strcpy(name,ch);
    strupr(strcat(name, name2));//strlwr
    int value = strcmp(name,name3);
    if (value==0)
        cout<<"equal"<<endl;
    else
        cout<<"not equal"<<endl;
    cout<<len<<endl;
    cout<<name<<endl;




    string str1 ="Abrar";
    string str2 =" Jahin";
    string str3 = str1;
    cout<<str3<<endl;
    str3=str1+str2;
    cout<<str3<<endl;
    int len2=str1.size();
    cout<<len2<<endl;
    _getch();
}
