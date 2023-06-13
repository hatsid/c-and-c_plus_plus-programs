#include<iostream>
using namespace std;
template<class a=int  ,class b=float, class c=double>
class mydata
{
 a d;
 b e;
 c f;
 public:
 mydata()
 {
      d=0;
      e=0;
      f=0;
      cout<<"enter the value of the data\n";
      cin>>d>>e>>f;
      cout<<d<<" "<<e<<" "<<f;
 }
 
};
int main()
{    mydata<>r2;
     
}