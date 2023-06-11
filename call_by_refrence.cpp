#include <iostream>
#include<stdio.h>
using namespace std;
class invoice
{
     int age,salary;
     char name[10];
     public:
     void getinfo(int *a,int *sal,string *name1[10]);
     void showinfo();
};
void invoice::getinfo(int *a,int *sal,string *name1[10])
{    *a=age;
     *sal=salary;
     *name1[10]=name[10];
     cout<<"enter the name and age of the employee";
     gets(name);
     cin>> age>>endl>>salary;
}
void invoice::showinfo()
{
     if(salary >500000)
     cout<<"you have to pay (18%) gst as a tax";
     else
     puts(name);
     cout<<endl<<age<<"you are free from the tax";
     

}


int main()
{
    int a,sal;
    char name[10];
    invoice e1;
    e1.getinfo(&a,&sal,&name[10]);

    return 0;
}