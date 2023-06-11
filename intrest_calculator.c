#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{ float amu,rate,value;
  int year,i;
    printf("entye the value of amount \n");
    scanf("%f",&amu);
    printf("entr the interest rate you are paiying \n");
    scanf("%f",&rate);
    printf("the year and intrest are given below as\n");
    value=0;
    year=0;
    for(i=1;i<=10;i++)
    {
        value=amu+amu*rate;
        
        printf("%d----%.2f\n",i,value);
        amu=value;
        
        
    }
    return 0;
}