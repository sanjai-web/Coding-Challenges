#include<stdio.h>
int main(){
    char s[10]="san jai";
    for (size_t i = 0; i <= 10; i++)
    {
        printf("%c \n",s[i]);
        if(s[i]=='j')
        break;
    }
    
    return 0;
    }