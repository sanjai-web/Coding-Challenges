#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int a[]={5,6,7};
int b[]={3,6,10};
int a_count=sizeof a/sizeof a[0];
int alice=0,bob=0;
for(int i=0;i<=a_count-1;i++){
    if(a[i]>b[i]){
  alice++;
    }else if(a[i]<b[i]){
        bob++;
    }
}

printf("%d %d",alice,bob);


    return 0;
}

