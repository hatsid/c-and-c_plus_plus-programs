#include<iostream>
using namespace std;
template<class t=double>
class mydata
{  t a;
  public:
  mydata()
  { cout<<"enter the data";
   cin>>a;
   
  }
  t showdata(){cout<<a;}
};
int main()
{
     mydata<float>r;
     r.showdata();
}