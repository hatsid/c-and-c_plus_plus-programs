#include <iostream>
using namespace std;
class factorial
{
     int num,fact=1;
     public:
     void calfact();
};
void factorial::calfact()
{
     cout<<"enter the value to calculte the factorial";
     cin>>num;
     for(int i=1;i<=num;i++)
     {
         fact=fact*i;
     
     }
     cout<<fact;
}

int main()
{
    factorial f1;
    f1.calfact();

    return 0;
}