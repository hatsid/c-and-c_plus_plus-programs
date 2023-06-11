#include <iostream>
using namespace std;
class visitor
{    static int id;
     int mno,vnum;
     string name;
     public:
     void getdata();
     void showdata();
     static void idgen();
};
int visitor::id=10;
void visitor::getdata()
{  int a;
     cout<<"WELCOME TO JURASIC PARK \nHOPE YOU ARE WELL\n KINDLY ENTER THE FOLLOWING DETAILES FOR THE GATE PASS";
     label:
     {cout<<"enter-->>\nNAME-->>\nMOBILE-NO-->>\nVEHICAL-NO-->>\n";
     getline(cin,name);
     cin>>mno>>vnum;
     idgen();
     showdata();
     }
     cout<<"ENTER 1 TO CONTINUE 0 TO EXIT"<<endl;
     cin>>a;
     if(a==1)
     goto label;
     else
    { goto end;
     end:
     cout<<"THANK YOU";
    }
}      
void visitor::showdata()
{   
     cout<<name<<endl<<mno<<endl<<vnum;
     
}
void visitor::idgen()
{
     cout<<"your gate pass"<<endl<<id<<endl;
     id++;
}
int main()
{   
    static visitor v1;
    v1.getdata();
    
    return 0;
}\