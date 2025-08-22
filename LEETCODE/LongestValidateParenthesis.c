#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
char s[]="(()";
int p=0,sq=0,c=0;
for(int i=0;i<=strlen(s);i++){
    if(s[i]=='('){
  p++;
    }

    else if(s[i]==')'){
    p++;
    }
    else if(s[i]=='['){
    sq++;
    }
    else if(s[i]==']'){
    sq++;
    }
    else if(s[i]=='{'){
    c++;
    }
    else if(s[i]=='}'){
    c++;
    }
}


// printf("%d",count);


if(c>p && c>sq){
    printf("c is greater %d",c);
}else if(p>c && p>sq){
    printf("p is greater %d",p);
}else if(sq>c && sq>p){
    printf("sq is greater %d",sq);
}

    return 0;
}
