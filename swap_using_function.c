#include<stdio.h>
#include<string.h>
void swap(int a,intb){
    int t;
    t=a;
    a=b;
    b=t;
    printf("the value of a and b are%d%d\n ",a,b);
    
}
void main()
{
    int a,b;
    printf("enter trhe value of a and b");
    scanf("%d%d",&a,&b);
    swap(a,b);
    return 0;

}