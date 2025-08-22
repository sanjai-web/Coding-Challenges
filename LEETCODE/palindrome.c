#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

int x,a,b=0,c;
printf("Enter a number: ");
scanf("%d",&x); //123
int temp=x;

                    //123
while(temp!=0){   //true   true     true
b=b*10;   // 0*10=0      30         320
b=b+(temp%10);  //0+3=3   30+2=32   
temp=temp/10;   //12       1



}


printf("The reverse of the number is %d",b);
    return 0;
}