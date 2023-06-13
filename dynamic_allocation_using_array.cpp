#include<iostream>
using namespace std;

class name
{ string nam;
  int size;
  int *a;
  public:
  
  name(int n)
  {  //size=n;
     a=new int[n];
  /*}
  name(name &t)
  {*/int sum=0;
       cout<<"enter the number to print the array size";
       for(int i=0;i<n;i++)
       {
            //cout<<"enter the value to define the length of the array ";
            cin>>a[i];
            sum+=a[i];
       }
       
      cout<<sum;
  }
     
     
     
};
int main()
{   int d;
 cin>>d;
     name n1(d);
     
     
     
}