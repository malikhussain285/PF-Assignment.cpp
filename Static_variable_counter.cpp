#include<iostream>
using namespace std;
int incrementCount();
int main()
{
    int value;
    for(int i=0;i<5;i++)
    {
        value=incrementCount();
    }
    cout<<"The final Value is :"<<value;
    return 0;
}
int incrementCount()
{
    static int count=0;
    count++;
    
    cout<<"Counter is :"<<count<<endl;
    return count;
    
}