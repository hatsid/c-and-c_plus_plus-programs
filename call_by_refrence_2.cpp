#include <iostream>

using namespace std;
class invoice
{
     int age,salary;
     string name;
     public:
     void getvalue(int &a,int &sal);
     void showvalue();
};
void invoice::getvalue(int &a,int &sal)
{    age=*&a;
     salary=*&sal;
     
     
    cout<<"enter the name and age of the employee";
     getline(cin,name);
     cin>>age;
     cout<<"enter the salary of the employee";
     cin>>salary;
     showvalue();
}
void invoice::showvalue()
{
     if(salary >500000)
     cout<<"you have to pay (18%) gst as a tax";
     else 
     {
          cout<<name<<endl<<age<<"you are free from the tax";
     }     
}
int main()
{    int sal,a;
     char name1;
    invoice e1;
    e1.getvalue(a,sal);

return 0;
}