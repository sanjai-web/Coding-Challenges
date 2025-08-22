#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

char *details[]={"7868190130M7522","5303914400F2211"};

// char d[]="Sanjai";
int c=0;
// printf("cdharcter : %c\n",d[3]);

// printf("cdharcter : %c",details[1][0]);

for(int i=0;i<=1;i++){

int a=((details[i][11]-'0')*10+(details[i][12]-'0'));


if(a>60){
    c++;
}

printf("\nzCount : %d",a);
}
printf("\nzCount : %d",c);
    return 0;
}

