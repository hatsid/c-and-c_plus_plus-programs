#include <stdio.h>
void pointer();
void main() {
    int a[15],*p,i;
    printf("enter the value in the array one by one");
    p=&a[0];
    for(i=0;i<4;i++){
        scanf("%d",p+i);
        
    }
    for(i=0;i<4;i++){
        printf("%d",*p+i);
    }
