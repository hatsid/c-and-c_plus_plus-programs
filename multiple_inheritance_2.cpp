#include<iostream>
using namespace std;
class base
{
  public:
   virtual void showdata()
  {cout<<"hii im the base class function ";}
};
class derived
{
     public:
     virtual void showdata()
     {
          cout<<"im the derived classs functon ";
     }
     
};
class derived2:public base,public derived  
{
     
     void showdata()
     {
          cout<<"im the 2nd derived class ";
     }
     
};
int main()
{    derived *ptr2;
     base *ptr;
     derived2 d1;
     ptr=&d1;
     ptr2=&d1;
     ptr->showdata();
     ptr2->showdata();
}