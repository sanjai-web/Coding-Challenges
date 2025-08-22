#include<stdio.h>
int main(){
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    if (a>=18){
        printf("You are an adult.");
    }
    else if (a<=10){
        printf("You are a child.");
    }
    else{
        printf("You are a teenager.");
    }
    
    
    return 0;
}