#include<stdio.h>
#include<string.h>
void revstr(char *str)  
{  
    // declare variable  
    int i, len, temp;  
    len = strlen(str); // use strlen() to get the length of str string  
      
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = str[i];  
        str[i] = str[len - i - 1];  
        str[len - i - 1] = temp;  
    }  
}  
