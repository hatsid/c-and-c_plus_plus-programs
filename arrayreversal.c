
#include <stdio.h>
int main() {
    int a[10],i,j;
    printf("enter ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
for(i=10;i>0;i--){
    printf(" %d",a[i]);
    
}

    return 0;
}