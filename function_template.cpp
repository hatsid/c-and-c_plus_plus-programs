#include<iostream>
using namespace std;
template<class t=int>
int area(t a, t b)
{
     return a*b;
}
template<class t=int >
int area(t a)
{
     return a*a;
}
template<class f=float>
int area()
{    f r;
     cout<<"enter radius";
     cin>>r;
     return(3.14*r*r);
}
int main()
{
 cout<<"area of rectangle is \n"<<area(10,20);
 cout<<"area of square  is \n"<<area(10);
 cout<<"area of circle is \n"<<area();
 return 0;
}