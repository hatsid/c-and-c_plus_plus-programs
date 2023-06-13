#include<iostream>
using namespace std;
template<class t>
class mydata
{
 t *ptr;
 t size;
 public:
 mydata(int n)
 {
     ptr=new t[n];
     size=n;   
     showdata();
 }
 t showdata()
 {
      cout<<"enter element\n";
     for(int i=0;i<size;i++)
     {
          cin>>ptr[i];
     }
      for(int i=0;i<size;i++)
     {
          cout<<ptr[i];
     }
     
      return 0;
 }
 
 
 
};
int main()
{    mydata<int>r2(5);
     
}