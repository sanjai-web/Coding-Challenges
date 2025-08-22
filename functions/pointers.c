#include<stdio.h>
int main(){
    int a=10,*p; // *p have the value of a
    p=&a;
    printf("\nvalue   of A : %d",a);
    printf("\naddress of A &a : %d",&a);
    printf("\nvalue   of A : %d",p);
    printf("\naddress of A : %d",&p);
     printf("\nvalue  of A : %d",*p);
    return 0;
}