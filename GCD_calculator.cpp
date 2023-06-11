#include <iostream>

using namespace std;

class Fraction 
	{
		private:
			int num;
			int deno;
			int r;
		public:
			void get_data();
			int GCD();

	};
void Fraction::get_data()
{
     cout<<"enter two numbers n1 and n2";
     cin>>num>>deno;
     
}
int Fraction::GCD()
  
{ int i=1;
     while(i<=num && i <=deno)
    {
        // check if the 'i' is factor of 'num1' and 'num2'
        if(num % i == 0 && deno % i == 0)
        {
            // update the 'gcd'
            r= i;
        }
 
        // increment counter 'i'
        i++;
    }
 


cout<<"the value of the gcd of two numbers are "<<r;
}


int main()
{
   Fraction f;
   f.get_data();
   f.GCD();

    return 0;
}