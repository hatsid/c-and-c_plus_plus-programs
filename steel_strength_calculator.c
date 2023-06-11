#include<stdio.h>
int main(){
    int h,cc,ts,grade;
    printf("please enter the hardness\ncarbon content\ntensil strength\n");
    scanf("%d%d%d",&h,&cc,&ts);
    if(h>50 && cc<0.7 && ts>5600)
    grade=10;
    else if(h>50 && cc<0.7 )
    printf("you are awarded 9 grade to your steel");
    grade=9;
    else if( cc<0.7 && ts>5600)
    printf("you are awarded 8 grade to your steel");
    grade=8;
    else if(h>50 && ts>5600)
    printf("you are awarded 7 grade to your steel");
    grade=7;
    else if(h>50 )
    printf("you are awarded 6 grade to your steel");
    grade=6;
    else if( cc<0.7)
    printf("you are awarded 6 grade to your steel");
    grade=6;
    if(ts>5600)
    printf("you are awarded 6 grade to your steel");
    grade=6;
    else
    printf("your steel is not for use as you are awarded 5 grade");
    printf("the grade is %d",grade);
    return 0;
}