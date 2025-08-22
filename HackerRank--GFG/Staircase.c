#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int n=6;

for(int i=0;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf(" ");
    }
    for(int k=1;k<=i;k++){
    printf("#");
    }
    printf("\n");
}
    return 0;
}

