
#include <stdio.h>
//#include<conio.h>

int main() {
    int m;
    printf("good afternoon here is your result kindly enter the marks to see your grades ");
    scanf("%d",&m);
    if ( m=>90 )
    printf("congrates you recieved A grade ");
    else if (m<=90 && m=>80)
    printf("congrates you recieved b grade");
    else if (m<=80 && m>=70)
    printf("you recieved C grade");
    else if (m<=70 && m>=60)
    printf("you recieved D grade");
    else if (m<=60 && m>=50)
    printf("you recieved E grade");
    else if (m<=50 && m>=40)
    printf("you recieved F grade");
    else if (m<=40 && m>=30)
    printf("you recieved G grade");
    else
    printf("you have not appeaered any exam");
    
    //getch();
    return 0;
}