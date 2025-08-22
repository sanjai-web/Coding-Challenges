#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

char *name;
char de[10]="qwertyuiop";
name=malloc(5);
realloc(name,sizeof de);

strcpy(name,de);
printf("%s",name);
    return 0;
}

