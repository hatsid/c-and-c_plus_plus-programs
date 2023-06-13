#include<iostream>
using namespace std;
class mydata
{    public:
     int a,b;
     virtual void getdata(int a,int b){cout<<"im the base constructor "<<a<<b;}
};
class mydata2:public mydata
{   public:
     void getdata(int a,int b)
     {
          cout<<"im the child constructor "<<a<<b;
     }
};
class mydata3:public mydata,public mydata2
{
     void getdata(int a,int b)
     {
          cout<<"im the second child of the parent class"<<a<<b;
     }
};
int main()
{
     mydata *d1=new mydata3() ;
     d1->getdata(1,2);
}