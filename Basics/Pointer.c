#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int num[]={1,2,3,4,5,6,7,8,90};
int *a;
for(int i=0;i<=8;i++){
a=&num[i];
    printf("%d value have %d Address\n",num[i],a);
}
    return 0;
}

