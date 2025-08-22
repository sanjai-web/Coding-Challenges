#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int a[]={5,6,7,4,5,3};
int *p=&a[0]+1;
 printf("address of a[0] : %d\n",&a[0]);
 printf("address of a[0]+1 : %d",*p);
    return 0;
}

