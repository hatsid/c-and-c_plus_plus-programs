#include <iostream>

using namespace std;
class name
{
     string name1;
     int age,salary;
     public:
     
     name()
     {
          cout<<"enter the name and salary of the employee"<<endl;
     }
     name(string n,int a,int sal)
     {   name1=n;
         age=a;
         salary=sal;
         // cin>>name1>>age>>salary;
          cout<<name1<<age<<salary<<endl;
          
     }
     name(name &t)
     {
          name1=t.name1;
          age=t.age;
          salary=t.salary;
          cout<<name1<<age<<salary<<endl;
          
     }
     
     
};
int main()
{  
    name n1;
    name n2("hatim",14,30);
     name n3(n2);
    

    return 0;
}