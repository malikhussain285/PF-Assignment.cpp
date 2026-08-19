#include<iostream>
using namespace std;
int main()
{
    int Array1[3][3];
    cout<<"Enter the values of Array1 "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter the value at index "<<i<<" "<<j<< ":";
            cin>>Array1[i][j];
        }
    }
    // Display the matrix in a proper row column format
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<Array1[i][j]<<"\t";
        }
        cout<<endl;
    }
    // compute and print sum
    int sum=0;
     for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            sum+=Array1[i][j];
        }
    }
     cout<<"The sum is :"<<sum<<endl;
     // find and print maximum and minimum values in the matrix
     int max=Array1[0][0];
     int min=Array1[0][0];
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Array1[i][j]>max)
            {
                max=Array1[i][j];
            }
        }
    }
        cout<<"The maximum value is :"<<max<<endl;
        
        for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(Array1[i][j]<min)
            {
                min=Array1[i][j];
            }
        }
    }
        cout<<"The minimum value is :"<<min<<endl;
    return 0;    
     
}