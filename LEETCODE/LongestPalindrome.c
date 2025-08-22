#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

char s[] = "abccccdd";
int n=strlen(s);
int fre[128]={0};


for(int i=0;i<n;i++){
    fre[s[i]]++;
}

int len=0,odd=0;

for(int i=0;i<128;i++){
    len+=(fre[i]/2)*2;
    if(fre[i]%2==1){
        odd=1;
    }
}

printf("%d ",odd+len);


    return 0;
}

