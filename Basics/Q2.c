// The distance between two cities (in km.) is input through the keyboard. Write a program
// to convert and print this distance in meters, feet, inches and centimet".


#include<stdio.h>
int main(){
    int a;
    float m,f,i,c;
    printf("Enter the distance in km:");
    scanf("%d",&a);
    m=a*1000;
    printf("\nDistance in meter: %0.2f",m);
     c=a*100000;
    printf("\nDistance in centimeter: %0.2f",c);
     f=a*3280.84;
    printf("\nDistance in feet: %0.2f",f);
     i=a*39370.1;
    printf("\nDistance in inch: %0.2f",i);
    return 0;
}