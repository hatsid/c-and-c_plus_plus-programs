
#include <stdio.h>

int main() {
    int a[10],i,j;
    printf("enter the array element ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }
    for(j=1;j<10;j++){
    if(a[0]<a[i]){
        a[0]=a[i];
    }
        
    }
    
    printf("the greatest element is %d",a[0]);
        
        
    

    return 0;
}