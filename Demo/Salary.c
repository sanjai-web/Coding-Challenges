// Ramesh's basic salary is input through the keyboard. His dearness allowance is 40% of
// basic salary, an&house rent allowance is 20% of basic salary. Write a program to calculate
// his gross salary.



#include<stdio.h>
int main(){

  float bs,da,hra,gs;
 printf("Enter your basic salary");
 scanf("%f",&bs);

 da=bs*0.4;
 hra=bs*0.2;
 gs=bs+da+hra;
 printf("the gross salary is the %0.2f",gs);
    return 0;

}
