#include <iostream>
using namespace std;
class student
{   int rollno;
    string name;
    public:
    student(){
         rollno=0;name="hidwe";
         
    }
     student(int d,string n){
          name=n;rollno=d;
         cout<<"name=="<<name<<"rollno "<<rollno<<endl;
         
    }
};
class Fees:public student
{
     int fees;
     public:
     Fees()
     {
          fees=0;
     
          cout<<"enter the fees amount for the second semester \n";
          cin>>fees;
          if(fees==45000)
          {cout<<"fees paid ";
          cout<<"recipt no 123344423\n";}
          else
          cout<<"due amount\n"<<(45000-fees);
     }
};
class result:public student
{
     int r[4],sum=0;
     public:
     result(int a,int d,string n):student(d,n)
     { cout<<"enter the marks you have obtained "<<endl;
         for(int i=0;i<4;i++)
         {
              cin>>r[i];
              sum+=r[i];
         }
        cout<<"the total marks you hve obtsined are"<<sum<<endl;
        
     }
};
int main()
{
     result r(0,125478,"hatim");
     Fees();
}