#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

    int a= 25;
    int *p=&a;

    printf("value of A : %d\n",a);
    printf("Address of A : %d\n",&a);
    printf("value of P : %d\n",p);
     printf("Address of P : %d\n",&p);
      printf("value of *P : %d\n",*p);
     printf("Address of *P : %d\n",&*p);  
    return 0;
}

