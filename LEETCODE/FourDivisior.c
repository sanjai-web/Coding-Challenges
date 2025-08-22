#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
    int n=12;
int t=0;
    for(int i=1;i<=n;i++){
        printf("%d mod %d = %d\n",n,i,n%i);
        if(n%i==0) t++;
    }
    
    printf("Count : %d\n",t);
    if(t>=3){
        printf("True");
        // return true;
    }
    else{
        printf("False");
        // return false;
    }

    return 0;
}
