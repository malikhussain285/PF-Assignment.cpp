#include<iostream>
using namespace std;
void area(float radius);//Area of circle
void area(int lenght,int width);//Area of rectangle
void area(float base,float height);//Area of triangle
int main()
{
    float x;//for area of circle
    cout<<"Enter the value of X :";
    cin>>x;
    area(x);
    int lenght,width;//for area of rctangle
    cout<<"Enter the value of X and Y :";
    cin>>lenght>>width;
    area(lenght,width);
    float base,height;
    cout<<"Enter the value of X and Y :";//for area of triangle
    cin>>base>>height;
    area(base,height);
    
    return 0;
}
void area(float radius)
{
    float area=0.0;
    area=3.14*radius*radius;
    cout<<"=====Area of circle====="<<endl;
    cout<<"Area of circle is :"<<area<<endl;
}
void area(int lenght,int width)
{
    int area;
    area=lenght*width;
    cout<<"=====Area of Rectangle====="<<endl;
    cout<<"Area of rectangle is :"<<area<<endl;
}
void area(float base,float height)
{
    float area=0.0;
    area=1.0/2.0 * base * height;
    cout<<"=====Area of Triangle====="<<endl;
    cout<<"Area of triangle is :"<<area<<endl;
    
}
