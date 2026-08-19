#include<iostream>
using namespace std;

void findMinMax(int *arr, int size, int *minVal, int *maxVal);
void reverseArray(int *arr, int size);

int main()
{
    int size;
    cout<<"Enter the size of Array :";
    cin>>size;
    int *arr=new int[size];
    cout<<"===Enter the value of Array==="<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<"Enter the value at index "<<i<<":";
        cin>>*(arr+i);
    }
    // int minVal;
    // int maxVal;
    cout<<"=====Original Arrays====="<<endl;
    cout<<"The original array is :";
    for(int i=0;i<size;i++)
    {
        cout<<*(arr + i)<<" ";
    }
    cout<<endl;
    int minVal;
    int maxVal;
    findMinMax(arr, size, &minVal,&maxVal);
    cout<<"The minimum value in Array :"<<minVal<<endl;
    cout<<"the maximum value in Array :"<<maxVal<<endl;
    
    reverseArray(arr,size);
    cout<<"======Reverse Array======="<<endl;
    for(int i=0;i<size;i++)
    {
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
    delete[] arr;
    
    return 0;
}
void findMinMax(int *arr, int size, int *minVal, int *maxVal)
{
    *minVal=*arr;
    *maxVal=*arr;
    for(int i=0;i<size;i++)
    {
        if(*(arr+i)>*maxVal)
        {
            *maxVal=*(arr+i);
        }
         if(*(arr+i)<*minVal)
        {
            *minVal=*(arr+i);
        }
    }
}
void reverseArray(int *arr, int size)
{
    int *start=arr;
    int *end=arr+(size-1);
    while(true)
    {
        if(start>=end)
        {
            break;
        }
        int temp=*start;
        *start=*end;
        *end=temp;
        start++;
        end--;
    }
}