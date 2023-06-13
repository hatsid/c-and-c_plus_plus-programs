#include<iostream>
using namespace std;
class complex
{
  int a,b;
  public:
  complex()
  {
       a=0;b=0;
  }
  complex(int a1,int b1)
  {
       a=a1;b=b1;
  }
  void showdata(){cout<<a<<"and"<<b<<endl;}
  friend complex operator+(complex,complex);
};
complex operator+(complex x,complex y)
{
      complex temp;
      temp.a=x.a+y.a;
      temp.b=x.b+y.b;
      return temp;
}
int main()
{
     complex t1(2,3);
     complex t2(4,5);
     complex t3;
     t3=t1+t2;
     t3.showdata();
     
     
}