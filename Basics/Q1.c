// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of
// basic house rent allowance is 20% of basic salary. Write a program to calculate
// his gross salary.


#include<stdio.h>
int main(){
    int a;
    printf("enter your salary;");
    scanf("%d",&a);
  float b=a*0.4;
  float c=a*0.2;
  float d=a+b+c;
  printf("gross salary is %f",d);


}