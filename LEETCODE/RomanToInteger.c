// Symbol       Value
// I             1
// V             5
// X             10
// L             50
// C             100
// D             500
// M             1000



#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

char s[5];
scanf("%s",s);

int len=strlen(s);

int temp=0;

for(int i=0;i<=len;i++){
    if(s[i]=='I'){
        temp+=1;
    }
    else if(s[i]=='V'){
        temp+=5;
    }
    else if(s[i]=='X'){
        temp+=10;
    }
    else if(s[i]=='L'){
        temp+=50;
    }
    else if(s[i]=='C'){
        temp+=100;
    }
    else if(s[i]=='D'){
        temp+=500;
    }
    else if(s[i]=='M'){
        temp+=1000;
    }
}

printf("%d",temp);

    return 0;
}