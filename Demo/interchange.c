// Two numbers are input through the keyboard into two locations C and D. Write a program
// to interchange the contents of C and D.

#include<stdio.h>
int main(){
    int c,d,tem=0;
    printf("enter the value of c : ");
    scanf("%d",&c);
    printf("enter the value of d : ");
    scanf("%d",&d);
    tem=c;
    c=d;
    d=tem;
    printf("the value of c is %d \n the value of d is %d",c,d);
    return 0;
}