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
int main(){

int n=4;

// Solution 1

for(int i=0;i<n;i++){
    for(int j=1;j<((n*2)-i*2);j++){
        printf("%d ",j);
    }printf("\n");
}


printf("---------------------\n");

for(int i=0;i<n;i++){
    for(int j=((n*2)-i*2)-1;j>0;j--){
       printf("%d ",j);
    }printf("\n");
}

printf("---------------------\n");
int c=0;
for(int i=1;i<=n;i++){     //1 2 3 4
    for(int j=1;j<=i;j++){      // 1 23 456 78910

        printf("%d ",(c%2));
        c++;
    }printf("\n");
}


    return 0;
}

