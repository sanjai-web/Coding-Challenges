#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int arr[3][3] = {{11, 2, 3}, {4, 5, 6}, {7, 8, 9}};

int a=0;
int b=0;
for(int i=0;i<3;i++){  a+=arr[i][i]; }

for(int i=0;i<3;i++){  b+=arr[i][2-i];  } 

abs(b);
abs(a);
printf("%d\n",a);
printf("%d",b);
int c= abs(a+b);
printf("\n A+ B : %d",c);
    return 0;
}

