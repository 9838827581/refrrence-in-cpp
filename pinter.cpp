#include<iostream>
using namespace std;
int main()
{
     int x;
     int &y=x;
     cout<<"Enter the number"<<endl;
     cin>>x;
     cout<<"This is value of X"<<x<<endl;
     cout<<"Thois is value of Y"<<y<<endl;
     cout<<"Address of X-:"<<&x<<endl;
     cout<<"Address of Y-:"<<&y<<endl;
    
    
}
