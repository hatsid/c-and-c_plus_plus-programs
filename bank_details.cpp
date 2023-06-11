#include <iostream>
#include<string.h>

using namespace std;

class Bankaccount
{    public:
     double ac;
     int balance,tamu;
     char type[14],name[10];
     
     
};
int main()
{
   Bankaccount b1;
   cout<<"enter name of account holder\n the account type ";
   cin>>(b1.name);
   cin>>(b1.type);
   cout<<"enter the account no \n transection amount";
   cin>>b1.ac>>b1.tamu;
   cout<<"enter the account balence";
   cin>>b1.balance;
   cout<<(b1.name)<<endl;
   cout<<(b1.type)<<endl;
   cout<<endl<<"accountno"<<b1.ac<<endl<<"transection amu"<<b1.tamu<<endl<<b1.balance<<endl;
   if(b1.tamu<=b1.balance)
   cout<<"wait your transection is been procesed \n kindly collect the amount";
   else"insufficient balance ";
      return 0;
}