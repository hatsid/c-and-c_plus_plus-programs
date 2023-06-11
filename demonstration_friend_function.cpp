#include <iostream>
#include<string.h>

using namespace std;
class student
{
     int sum,uid,marks[5],per;
     string name;
     public:
     friend void getdata(student ob);
};
void getdata(student ob )
{
     cout<<"enter the name of the student \n and its uid";
     getline(cin,ob.name);
     cin>>ob.uid;
     cout<<ob.name<<ob.uid;
}

int main()
{
    student s1;
    getdata(s1);

    return 0;
}