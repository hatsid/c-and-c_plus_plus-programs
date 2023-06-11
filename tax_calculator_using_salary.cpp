#include <iostream>
using namespace std;
class invoice
{
     int age,salary;
     string name;
     public:
     void showvalue(int *a,int *sal,string*name1);
};

void invoice::showvalue(int *a,int *sal,string*name1)
{   salary=*sal;
     age=*a;
     name=*name1;
     if(salary >500000)
     cout<<"you have to pay (18%) gst as a tax";
     else 
     {
          cout<<name<<endl<<age<<"you are free from the tax";
     }     
}
int main()
{    int sal,a;
     string name1;
    invoice e1;
    cout<<"enter the name,salary and age of the employee  ";
    getline(cin,name1);
    cin>>sal>>a;
    e1.showvalue( &a,&sal,&name1);

return 0;
}