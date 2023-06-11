#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{ int a[10],temp=0,i,j,min=0;
clrscr;
 printf("enter the element of the array");
 for(i=0;i<10;i++){
     scanf("%d",&a[i]);
 }
 printf("the arrayv you have entered is here\n");
  for(i=0;i<10;i++){
     printf("%d",a[i]);
 }
 for(i=0;i<9;i++){
     min=i;
     for(j=i+1;j<9;j++){
         if(a[j]<a[min]){
         min=j;
         }
     }
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
     }
     
 printf("the sorted arrayv is here\n");
 for(i=0;i<10;i++){
     printf("%d",a[i]);
 }
 
    return 0;
}