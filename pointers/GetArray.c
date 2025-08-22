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
int* getArray();

int* getArray(){
   static int a[5];
    
    for(int i=0;i<5;i++){
      printf("Enter the %d element : \n",i);
      scanf("%d",&a[i]);
    }
    return a;
}

int main(){

    int *p;

p= getArray();

for(int i=0;i<5;i++){
    printf("array values : %d\n",*(p+i));
}

    return 0;
}
