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

void point(int *p){
    (*p)++;
}

int main(){
int a=25;
printf("Before function : %d\n ",a);
point(&a);
printf("After function : %d\n",a);

    return 0;
}
