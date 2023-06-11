#include <iostream>
using namespace std;
class invoice
{
     int num;
     public:
     int showvalue(int n);
};

int invoice::showvalue(int n)
{   int a=0,b=1,c;
    cout<<1;
   for(int i=0;i<n;i++)
   {
    
       c=a+b;
       cout<<c;
       a=b;
        b=c;
        c=a;
        
   }
    
    
  
}
int main()
{  int a;
    invoice e1;
    cout<<"enter the number to print the ";
    
    cin>>a;
    e1.showvalue( a);

return 0;
}