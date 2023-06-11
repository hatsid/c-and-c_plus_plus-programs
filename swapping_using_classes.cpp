#include<iostream>
using namespace std;
class SWAP
{ public:
     int a,b;
     void swapvar(int *a,int *b);
     
};
void SWAP::swapvar(int *a,int *b)
{  
     int temp;
     temp=*a;
     *a=*b;
     *b=temp;
     cout<<*a<<*b;
}
int main()
{
     SWAP s;
     int a,b;
     cout<<"enter the two variable ";
     cin>>a>>b;
    s.swapvar(&a,&b);
     return 0;
}