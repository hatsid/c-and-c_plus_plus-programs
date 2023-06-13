#include<iostream>
using namespace std;
class mydata
{
  int a;
  public:
 mydata(){a=0;}
 friend ostream &operator<<(ostream &o,mydata &d);
 friend istream &operator>>(istream &in,mydata &d) ;
 
};
ostream & operator<<(ostream &o,mydata &d)
{
     o<<"the number is "<<d.a;
 return o;
}
istream & operator>>(istream &in,mydata &d)
{
 cout<<"enter the data";
 in>>d.a;
 return in;
     
}

int main()
{
     mydata d;
     cin>>d;
     cout<<d;
     return 0;
}