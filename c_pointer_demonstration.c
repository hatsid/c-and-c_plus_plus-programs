#include <stdio.h>
void pointer();
int main() {
    int a,b;
    printf("enter the value of a & b");
    scanf("%d%d",&a,&b);
    pointer(&a,&b);
    printf("%d%d",a,b);
    return 0;
}
void pointer(){
int *a,*b,t;
t=*a;
*a=*b;
*b=t;
    
    
    
}