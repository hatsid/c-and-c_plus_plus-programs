#include<stdio.h>
struct date
{
    int d;
    int m;
    int y;
    
    
};
void main(){
    struct date d1;
    printf("enter todays date");
    scanf("%d%d%d",&d1.d,&d1.m,&d1.y);
    printf("the date you entered");
    printf("%d%d%d",d1.d,d1.m,d1.y);
}