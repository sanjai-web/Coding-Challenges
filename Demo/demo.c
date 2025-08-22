#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char a[100];
    gets(a);
    
    
    int l = strlen(a);
    for(int i=0; i<=l; i++){
        
        if(a[i]==' '){
            printf("\n");
        }
        else{
        printf("%c",a[i]);}
    }
   
}