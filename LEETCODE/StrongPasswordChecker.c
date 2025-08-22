#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include <ctype.h>
int main(){
    char p[]="mmani7896541aj2";





int u=0,l=0,d=0,sc=0,i;
char s[]="!@#$%^&*()-+";

if(strlen(p)<=7 ){
    printf("false");
}
else{
for(i=0;i<=strlen(p);i++){

if(p[i]==p[i+1]){
    printf("false");
    break;
}

    if(isupper(p[i])){
        u++;
    }
    else if(islower(p[i])){

      l++;
    }else if(strchr(s,p[i])){
    sc++;
    }else if (isdigit(p[i])){
        d++;
    }
}
}

if( u>=1 &&  l>=1 && sc>=1 &&d>=1){

    printf("True");

}
else{
    printf("false");
}


}