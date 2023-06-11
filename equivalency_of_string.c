
#include <stdio.h>
#include<string.h>
int main()
{
char a[10],b[10],temp=0, i;
printf("ente the string");
gets(a);
printf("enter the string b");
gets(b);
i=0;
while(a[i] !='\0' && b[i] !='\0'){

    if(a[i] != b[i]){
        temp=1;
        break;
    }
    i++;
}
    if(temp==0)
    printf("the strings are equal");
    else 
    printf("the strings are not equal ");



    return 0;
}