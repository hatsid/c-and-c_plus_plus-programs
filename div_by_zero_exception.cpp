#include<exception>
#include<iostream>
using namespace std;
class calculator
{
  float a;
  int c,b;
  public:
  calculator()
  {
       cout<<"enter two number to perform the calculation operation \n";
       cin>>a>>b;
       if(a==0 || b==0)
       throw a;
       throw b;
       cout<<"enter 1 to multiply,2 for devide,3  for add\n";
       if(c=1)
       {
           cout<<"mul--\n"<<a*b;
            
       }
       else if(c==2)
       {
            cout<<"div--\n"<<a/b;
       }
      else if(c==3)
       cout<<"reminder--\n"<<a+b;
}
     
};
int main()
{
     try
     {calculator cal;
     }
     catch(...)
     {
          cout<<"zero error";
     }
}