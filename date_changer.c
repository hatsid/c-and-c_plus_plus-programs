#include<stdio.h>
int main(){
    int d,m,y;
    printf("enter todays date that is date-month-year\n");
    scanf("%d%d%d",&d,&m,&y);
    if(d<=31 && m<=12 && y<2025)
    printf("%d-%d-%d",d,m,y);
    else
    printf("you are so stupid that you dont know todays date");
    return 0;
}