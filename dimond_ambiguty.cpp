#include<iostream>
using namespace std;
class base
{
  public:
    void showdata()
  {cout<<"hii im the base class function ";}
};
class derived:virtual base
{
     public:
     virtual void showdata()
     {
          cout<<"im the derived classs functon ";
     }
     
};
class derived2:virtual public  base 
{
     //public:
     void showdata()
     {
          cout<<"im the 2nd derived class ";
     }
     
};
class derived3:  derived,public derived2
{  
     void showdata(){cout<<"fuck off";}
};
int main()
{  
     base *ptr;
     derived3 d1;
     ptr=&d1;
     ptr->showdata();
     
}