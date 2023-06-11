#include <stdio.h>
#include<math.h>
#include<conio.h>
int main()
{   float a;
    int c;
    clrscr;
    
    printf("enter the amount in paisa ");
    scanf("%f",&a);
    c=a/100;
    printf("the amount in rupee is %d",c);
    getch();
    return 0;
}