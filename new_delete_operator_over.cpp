#include<iostream>
using namespace std;
class operatorr
{
    int a;
     public:
     operatorr()
     {
          cout<<"welcme maderchod";
     }
     void * operator new(size_t s,int i)
     {
          cout<<"enter the value to allaocate the memeory";
          operatorr a=(operatorr)malloc(s);
          a->a=i;
          cout<<"the value you have assigned is"<<i;
          return a;
     }
     void operator delete(void *a)
     {
          cout<<"delete maderchod";
     
          free(a);
     }
     
};
int main()
{    int c;
     cin>>c;
     operatorr*p=new(c) operatorr;
    
     
     delete p;
}