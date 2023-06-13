#include <iostream>
using namespace std;
class mydata
{
     int a=80;
     public:
     void operator++()
     {   a++;
          cout<<a;
     }
};
int main()
{
    mydata d1;
    d1.operator++();

    return 0;
}