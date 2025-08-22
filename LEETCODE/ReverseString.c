#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

char s[100]="hello";

int sSize=strlen(s);

for(int i=sSize-1;i>=0;i--){

    printf("%c",s[i]);
    
}

    return 0;
}

