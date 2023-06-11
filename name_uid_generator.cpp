#include <iostream>

using namespace std;

class student
{    public:
     int uid[6];
     char name[5][30];
     void info();
};
void student::info()
{
     cout<<"enter the name and uid of the student";
     for(int i=0;i<6;i++)
     {
          cin>>name[i]>>uid[i];
     }
     cout<<"the name and uids are";
     for(int i=0;i<6;i++)
     {
          cout<<endl<<name[i]<<"--"<<uid[i];
     }
     
}
int main()
{
   student s1;
   s1.info();
   return 0;
}