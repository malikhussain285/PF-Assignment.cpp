#include<iostream>
using namespace std;
int main()
{
    int arrA[3][3],arrB[3][3],arrC[3][3];
     cout<<"Enter the values of ArrayA "<<endl;//input A
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter the value at index "<<i<<" "<<j<< ":";
            cin>>arrA[i][j];
        }
    }
     cout<<"Enter the values of ArrayB "<<endl;//Input B
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"Enter the value at index "<<i<<" "<<j<< ":";
            cin>>arrB[i][j];
        }
    }
  
    for(int i=0;i<3;i++) //Multiplication
    {
        for(int j=0;j<3;j++)
        {
            arrC[i][j]=0;
            for(int k=0;k<3;k++)
            {
                 arrC[i][j] += arrA[i][k] * arrB[k][j];
            }
        }
    }
       for(int i=0;i<3;i++) // Matrix print
    {
        for(int j=0;j<3;j++)
        {
           cout<<arrC[i][j]<<"\t";
        }
        cout<<endl;
    }
    // Check Matrix A is symmetric
    cout<<"checking symmetric"<<endl;
    int count=0;
      for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(arrA[i][j] !=arrA[j][i])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
        cout<<"Matrix A is symemtric"<<endl;
    }
    else
    {
        cout<<"Matrix A is not symmetric"<<endl;
        
    }
    return 0;
    
}