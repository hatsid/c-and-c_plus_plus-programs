#include<iostream>
using namespace std;
template<class a,class b,class c,class d>
class temp
{ a name ,department;
  b empid;
  c age;
  d salary;
  public:
  temp()
  {
       name="wdqwe";
       empid=0;age=0;salary=0;
  }
  void getdata()
  {
       cout<<"enter the data for the employee\n";
       cout<<"name ,department ,employee id,age,salary\n";
       getline(cin,name);
       getline(cin,department);
       cin>>empid>>age>>salary;
       cout<<"employee details are ";
       cout<<"name--"<<name<<endl;
       cout<<"department--"<<department<<endl;
       cout<<"empolyee id--"<<empid<<endl;
       cout<<"age--"<<age<<endl;
       cout<<"salary--"<<salary;
       
  }
     
};
int main()
{
     temp<string ,long,int ,float>t1;
     t1.getdata();
}