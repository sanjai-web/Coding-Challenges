#include<stdio.h>
int main(){
int a;
printf("Enter a number: ");
scanf("%d",&a);
printf("You entered: %d",(a%4));
if (a%4==0)
{
    printf("Leap Year");
}
else
{
    printf("Not a Leap Year");
}

    return 0;
}