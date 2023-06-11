#include<stdio.h>
int main()
{
    int i,a,b[8]={0};
  printf("enter the number");
  scanf("%d",&a);
  for (i=0;a>0;i++)
  { b[i]=a%2;
    a=a/2;
 }
 for(i=8;i>0;i--)
 {
     printf("%d equilant binary number",b[i]);
 }
    return 0;
    
}