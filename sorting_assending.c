#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{ int a[10],temp,i,j;
clrscr;
 printf("enter the element of the array");
 for(i=0;i<10;i++){
     scanf("%d",&a[i]);
 }
 printf("the arrayv you have entered is here\n");
  for(i=0;i<10;i++){
     printf("%d",a[i]);
 }
 for(i=9;i>0;i--){
     temp=0;
     for(j=10;j>0-i;j--){
         if(a[j]>a[j-1]){
         temp=a[j];
         a[j]=a[j-1];
         a[j-1]=temp;}
     }
     
     
     
 }
 printf("the sorted arrayv is here\n");
 for(j=0;j<10;j++){
     printf("%d",a[j]);
 }
 
    return 0;
}