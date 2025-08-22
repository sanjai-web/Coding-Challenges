#include<stdio.h>
int main(){
    int a,b,sum,sub,mul,mod;
    float div;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf("\n Total:%d",sum);
    sub=a-b;
    printf("\n Difference:%d",sub);
    mul=a*b;
    printf("\n miltiplication:%d",mul);
    div=(float)a/(float)b;
    printf("\n Division:%0.3f",div);
    mod=a%b;
    printf("\n Modolus:%d",mod);
}