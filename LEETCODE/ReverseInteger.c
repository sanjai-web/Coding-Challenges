#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int x=-123,a=0,b=0,c=0;

for(int i=0;x!=0;i++){
   
a=x%10; 
printf("A = %d\n",a); 
b=b*10+a;  
x=x/10;         


}
printf("b = %d\n",b);
    return 0;
}

