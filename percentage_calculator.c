#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct info{
    char name[10][50];
    char subn[6][50];
    int roll[10];
    int marks[5];
};
int main(){
    struct info a[5];
    int i,j,n,sum=0 ;
    float total[5],per=0;
    printf("enter the num  of the student whose marks you want to save\n");
    scanf("%d",&n);
    printf("now enter the name of the student \n");
    for(i=0;i<3;i++){
        printf("name of the student\n");
        scanf("%s\n",&a[i].name);
        printf("enetr the marks of 5 subject\n");
        for(j=0;j<5;j++){
        scanf("%d\n",a[i].marks[j]);
        sum+=a[i].marks[j]; 
        }
        total[i]=sum;
    }
    
    printf("the name and persantage of the student are\n");
    
    for(i=0;i<3;i++){
        printf("%s\t",a[i].name);
        per=total[i]/6;
        printf("%f\t",per);
        
    }
    getch();
    return 0;
    
    
    
}