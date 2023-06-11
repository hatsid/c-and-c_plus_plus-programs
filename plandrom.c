
#include <stdio.h>
#include<math.h>
int main() {
    int a,b,c,d,mult,mult1,mult2,sum;
    printf("enter the 3 digit num to check the palandrome");
    scanf("%d",&d);
    printf("enter the 1st,2nd,3rd num");
    scanf("%d%d%d",&a,&b,&c);
    mult=a*a*a;
    mult1=b*b*b;
    mult2=c*c*c;
    sum=mult+mult1+mult2;
    if(sum ==d){
        printf("the num is palandrome");
    }
    return 0;
}