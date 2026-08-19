#include<iostream>
using namespace std;

void swap_ref(int &a,int &b);
int main()
{
    int x,y;
    cout<<"enter the value of X and Y :";
    if(!(cin>>x>>y))
    {
        cout<<"Please enter integer value only! ";
        return 1;
    }
    cout<<"Value of X and Y Before swap :"<<x <<" "<<y<<endl;
    swap_ref(x,y);
    cout<<"Value of X and Y after swap in main :"<<x <<" "<<y<<endl;
    
    return 0;
}
void swap_ref(int &a,int &b)
{
    int temp=0;
    temp=a;
    a=b;
    b=temp;
    cout<<"Value of X and Y After swap :"<<a<<" "<<b<<endl;
}

