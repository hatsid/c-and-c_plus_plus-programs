#include<stdio.h>
int main()
{
    int s,h,m;
    char b;
    printf("enter the time in seconds");
    scanf("%d",&s);
    h=s/3600;
    s=s%3600;
    m=s/60;
    s=s/60;
    printf("choose a for am and p for pm");
    scanf("%s",b);
    if(b=='a')
    printf("%d::%d::%d am",h,m,s);
    else
    printf("%d::%d::%d pm",h,m,s);
    return 0;
    
}