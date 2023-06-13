#include<iostream>
using namespace std;
class mydata
{
     int a[10];
     public :
     mydata()
     {
          cout<<"enter the data i your pc";
          for(int i=0;i<10;i++)
          {
               cin>>a[i];
          }
     }
     int operator[](int i)
     {
          
         for(i=0;i<10;i++)
          {
               cout<<a[i];
          } 
         return 0;
     }
};
int main()
{
     mydata d;
     cout<<d[10];
     
}