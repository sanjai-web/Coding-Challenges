#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

int num=6;
int a=num,b=0,i;

    for( i=1;i<=num;i++)
{
    a=a-i;   
    printf("%d\n",a);
    b=i;
    if(a<=0) break;
}
if(a<0){
i=i-1;}

printf("iteration %d\n",i);
    return 0;
}
