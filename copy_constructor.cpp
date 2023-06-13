#include<iostream>
using namespace std;
class dummy
{
     int a, b;
     string name;
     int *p;
     public:
     dummy()
     {
        p=new int;  
        cout<<"hey there my self default constructor "<<endl;  
     }
     void setdata (int x,int y,string z,int h)
     { 
       a=x;
       b=y;
      *p=h;
       name=z;
       
       cout<<"hey there my self parametrrised constructructor "<<x<<endl;
          
     }
    dummy(dummy &t)
     {
      a=t.a;
      b=t.b;
      name =t.name;
      p=new int;
     *p=*(t.p);
      cout<<"hey there my self copy constructor "<<endl<<name<<endl<<a<<endl<<b<<endl<<*p;
          
     }
};
int main()
{
     dummy d1;
     d1.setdata(100,20,"hatim ",115);
     dummy d3=d1;
     return 0;
}