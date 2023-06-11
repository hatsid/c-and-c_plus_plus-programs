#include <iostream>
using namespace std;
class kilometer
{
   int kilo;
   public:
   void getkilo();
   friend class meter; 
};
void kilometer::getkilo()
{
     cout<<"enter the distance you have covered in kilometer ";
     cin>>kilo;
    
}
class meter
{
     int meter;
     public:
     void getmeter();
     void showdata(kilometer k);
};
void meter::getmeter()
{
     cout<<"enter the distance travelled in meter ";
     cin>>meter;
    
     
}
void meter::showdata(kilometer k)
{
     cout<<"you have travelled the distance\n"<<k.kilo+(meter/1000)<<"km";
}

int main()
{ kilometer k1;
  meter m1;
  k1.getkilo();
  m1.getmeter();
  m1.showdata(k1);

    

    return 0;
}