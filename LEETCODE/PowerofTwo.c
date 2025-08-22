#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
int temp=0,t=0;
for (int i=0;i<=n;i++){
    temp=pow(3,i);  
    // printf("%d",temp);   
    if(temp==n){
        t=1;
        break;
    }
    else{
        t=0;
       
    }
}

if(t==1){
    printf("true");
}else{
    printf("false");
}

    return 0;
}