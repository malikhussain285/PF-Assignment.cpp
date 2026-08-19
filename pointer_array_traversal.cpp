#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    cout<<"=====Enter the value of Array====="<<endl;
    for(int i=0;i<5;i++) //for input of array
    {
        cout<<"Enter the value at "<<i<<":";
        cin>>arr[i];
        if(cin.fail())
        {
            cout<<"Please enter the integer valus only!"<<endl;
            return 1;
            
        }
    }
    int *ptr=arr;
    for(int i=0;i<5;i++)// for print 
    {
        cout<<"The value at "<<i<<":"<<*ptr<<endl;
        ++ptr;
    }
    return 0;
}