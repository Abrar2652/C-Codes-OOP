#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;
    ofstream file;
    file.open("Student.txt", ios::out|ios::app);
    for (int i=1; i<=3; i++)
    {
        cout<<"Enter your name: "<<endl;
        getline(cin, name);
        file<<"Welcome "<<name<<"\t";
        cout<<"Enter your age: ";
        cin>>age;
        file<<age<<endl;
        cin.ignore();
    }

    file.close();


    return 0;
}
