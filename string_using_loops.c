#include <stdio.h>
#include<string.h>

int main()
{
int a[20],b[20],i;
printf("input the string a");
gets(a);
puts(a);
for(i=0;i<20;i++){
    b[i]=a[i];
}
puts(b);
    return 0;
}