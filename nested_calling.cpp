#include <iostream>
#include<string.h>

using namespace std;
class student
{
     int sum,uid,marks[5],per;
     string name;
     public:
     void getdata();
     void caldata();
     void showdata();
};
void student::getdata()
{
     cout<<"enter the name of the student \n and its uid";
     getline(cin,name);
     cin>>uid;
     caldata();
}
void student::caldata()
{    
     cout<<"enter the marks of the student";
     for(int i=0;i<3;i++)
     {
          cin>>marks[i];
          sum+=marks[i];
     }
     showdata();
     
     
     
}
void student::showdata()
{
     cout<<name<<endl<<uid<<endl<<sum;
}

int main()
{
    student s1;
    s1.getdata();

    return 0;
}