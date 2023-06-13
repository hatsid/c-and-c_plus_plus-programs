#include<iostream>
using namespace std;
class times
{
     int s;
     public:
     times()
     {
          cout<<"enter the current time ";
          cin>>s;
          
     }
     void operator++()
     {
        int a=s+1;
        cout<<"the current time changes from "<<s<<a<<endl;
     }
     void operator--()
     {
        int a=s-1;
        cout<<"the current time changes from "<<s<<a;
     }
};
int main()
{
     times m;
     m.operator++();
     m.operator--();
}