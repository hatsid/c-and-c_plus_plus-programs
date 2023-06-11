#include<iostream>
using namespace std;
void funnction()
{
     class call
     {
          int a;
          int b;
          public:
          void showdata()
          {
               cout<<"enter the value of a and b ";
               cin>>a>>b;
               cout<<"the value are"<<a<<b;
          }
          
     };
     call obj;
     obj.showdata();
     
     
}
int main()
{
     funnction();
     return 0;
}