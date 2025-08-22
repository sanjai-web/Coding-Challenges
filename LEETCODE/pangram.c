#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
int c=0,b=0;
int a[25]={0};
char sentence[] = "thequickbrownfoxjumpsoverthelazydog";
strlwr(sentence);

if(strlen(sentence)<26){
    printf("False");
}
else{
   for(int i=0;i<=strlen(sentence);i++){
   int index = tolower(sentence[i]) - 'a';
            if (!a[index]) {
                a[index] = 1;
                c++;
            }
   }
}

if (c == 26)
        printf("True\n");
    else
        printf("False1\n");
}


 
