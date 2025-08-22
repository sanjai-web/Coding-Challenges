#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

int n=2,t=0;

for(int i=0;i<=n;i++){
    for(int j=0;j<=n;j++){

        printf("\n%d + %d : %d",i,j,i+j);
       if(i+j==n){
        printf(" Matched");
        t++;
       }
    }
}
printf("\n%d",t);
    return 0;
}

