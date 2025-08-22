#include<stdio.h>
int main(){
    int l;
    float f;
    printf("Enter the no.of. Days the book return:");
    scanf("%d",&l);
    if(l<=5){
        f=l*0.50;
        printf("\n Late fine is %0.2f",f);
    }
    else if (l>=6 && l<=10)
    {
        f=l*1;
        printf("\n Late fine is %0.2f",f);
    }
    else if (l>=11 && l<=29)
    {
        f=l*5;
        printf("\n Late fine is %0.2f",f);
    }
    else if (l>=30)
    {
        
        printf("\n Your Membership was Cancelled");
    }
}