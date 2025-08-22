#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){


    int num=14,t=0;

    for(int i=1;num>0;i++){
        if(num%2==0){
            num=num/2;
        }else{
            num=num-1;
           
        }
t++;
    }

printf("Count : %d",t);
    return 0;
}

