#include<iostream>
using namespace std;
class matrix
{
  int arr[2][2];
  public:
  matrix()
  {
       arr[2][2]={0};
  }
  void getdata()
  {
       cout<<"enter the data to subtract the two matrix\n";
       for(int i=0;i<2;i++)
       {
            for(int j=0;j<2;j++)
            {
                 cin>>arr[i][j];
            }
       }
  }
  void operator-(matrix &m)
  { int c[2][2];
     for(int i=0;i<2;i++)
     {
          for(int j=0;j<2;j++)
          {
               c[i][j]=arr[i][j]-m.arr[i][j];
          }
     }
     cout<<"the subtracted matrix is \n";
       for(int i=0;i<2;i++)
       {     
            for(int j=0;j<2;j++)
            {
                 cout<<c[i][j];
            }
            cout<<endl;
       }
       
  }
};
int main()
{
     matrix i;
     i.getdata();
     matrix j;
     j.getdata();
     j.operator-(i);
     
     
}