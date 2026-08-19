#include<iostream>
using namespace std;
void printStudentInfo(string name,string dept="CS",int year=1);

int main()
{
    string name;
    cout<<"Enter the Name: ";
    getline(cin,name);
    string dept;
    cout<<"Enter the department :";
    cin>>dept;
    int year;
    cout<<"Enter the year :";
    cin>>year;
    printStudentInfo(name,dept,year);
    cout<<"Only two Arguments provided"<<endl;
    printStudentInfo(name,dept);
    cout<<"Only one Argument provided"<<endl;
    printStudentInfo(name);
    return 0;
    
}
void printStudentInfo(string name,string dept,int year)
{
    cout<<"Name :"<<name<<endl;
    cout<<"Department :"<<dept<<endl;
    cout<<"Year :"<<year<<endl;
}
