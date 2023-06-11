#include<iostream>
using namespace std;
class timeHour
{
     int th;
     int d1;
     public:
     void getdata();
     friend class timmin;
};
void timeHour::getdata()
{
     cout<<"enter the distance in km and time in hour ";
     cin>>d1>>th;
     
}
class timmin
{
     int min;
     
     public:
     void getdata(timeHour h);
};
void timmin::getdata(timeHour h)
{
     cout<<"enter the time in min ";
     cin>>min;
     cout<<"you have covered "<<h.d1<<"km"<<"distance in "<<h.th+min/60<<"Hr";
     
}
int main()
{
     timeHour t;
     timmin m;
     t.getdata();
     m.getdata(t);
     return 0;
}