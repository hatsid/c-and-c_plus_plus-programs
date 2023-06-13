#include<iostream>
using namespace std;
class operatorr
{
     int a;
     string name;
     public:
     operatorr()
     {
          a=0;
          name="kljbqwhyq";
          
     }
     void getdata()
     {
          cout<<"enter the value\n";
          cin>>a>>name;
          
     }
     void showdata()
     {
          cout<<"the data you hve entered \n"<<a<<name;
          
     }
     operatorr * operator->()
     {
     return this;
     }
};
int main()
{
     operatorr o;
     o->getdata();
     o->showdata();
}