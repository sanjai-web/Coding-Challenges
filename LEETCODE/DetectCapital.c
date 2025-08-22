#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
char s[]="KAN";
int len=strlen(s);
int t=0,r=0,e=0;

for(int i=0;i<=2;i++){
    if(isupper(s[i])==1){
    //  printf("false");
     t++;
    }
}

for(int i=0;i<=2;i++){
    if(islower(s[i])==1){
    //  printf("false");
     r++;
    }
}

if(isupper(s[0])==1){

    printf("executed");
    e=1;
}


printf("t==%d   r=== %d",t,r);

if(t==len || r==len){
    printf("False");
}else{
    printf("True");
}
    return 0;
}
