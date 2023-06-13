#include<iostream>
using namespace std;
class A 
{
     int  a,b;
     public:
     A()
     { 
          cout<<"enter the value of a nad b "<<endl;
          cin>>a>>b;
          if(a==0 ||b==0)
          {
               throw runtime_error("/////////////");
          }
          
     }
};
int main()
{
     try
     {
          A a;
     }
     catch(runtime_error &e)
     {
          cout<<"error";
        cout<<e.what();
     }
}