
#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(int *a,int *b){
    int temp = *a;
    *a=*b;
    *b=temp;
}

int main(){

int a=9,b=8;

swap(&a,&b);
printf("Value of A : %d\nValue of B : %d",a,b);
    return 0;
}
