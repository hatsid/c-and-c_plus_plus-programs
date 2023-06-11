#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct book
{
char name[10][50];
int booknum[10];
float prise[10];
//int numob[10];    
};
int main(){
    struct book b1;
    int i,n;
    printf("enter the num of books you want to save");
    scanf("%d",&n);
    printf("\nenter the book name:\n book num:\nbook prise");
    for(i=0;i<n;i++){
    scanf("%s%d%f",&b1.name[i],&b1.booknum[i],&b1.prise[i]);
    }
  
    printf("the book details are");
      for(i=0;i<n;i++)
    {printf("%s%d%f",b1.name[i],b1.booknum[i],b1.prise[i]);
    
    }
    getch();
    return 0;
}