#include <iostream>

using namespace std;
class invoice
{
     int age,salary;
     string name;
     public:
     void getvalue();
     void showvalue();
};
void invoice::getvalue()
{   cout<<"enter the name and age of the employee";
     getline(cin,this->name);
     cin>>this->age;
     cout<<"enter the salary of the employee";
     cin>>this->salary;
     showvalue();
}
void invoice::showvalue()
{
     if(salary >500000)
     cout<<"you have to pay (18%) gst as a tax";
     else 
     {
          cout<<(*this).name<<endl<<(*this).age<<endl<<"you are free from the tax";
     }     
}
int main()
{    int sal,a;
     char name1;
    invoice e1;
    e1.getvalue();

return 0;
}