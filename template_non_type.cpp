#include<iostream>
using namespace std;
template<class t ,int a>
class mydata
{
     t arr[a];
     public:
     mydata()
     {
       for(int i=0;i<a;i++)
       {
            cin>>arr[i];
       }
       for(int i=0;i<a;i++)
       {cout<<arr[i];}
       
     }
};
int main()
{    mydata<float,4>r2;
     mydata<int ,4>r;
}