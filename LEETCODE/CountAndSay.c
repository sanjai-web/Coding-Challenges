#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

int n=20;

char* final=(char*)malloc(sizeof(char)*5000);
strcpy(final,"1");
for(int i=1;i<n;i++){
    char* new=(char*)malloc(sizeof(char)*5000);
    int k=0;
    int index=0;
    while(final[k]!='\0'){
        int count=1;

        while(final[k]==final[k+1]){
            count++;
            k++;
        } 
         new[index++]=count+'0';
         new[index++]=final[k];
         k++;
       }
       new[index]='\0';
   final=new;

}


printf("%s",final);
    return 0;
}

