#include <stdio.h>
int main(){
    int a;
    float c;
    
    printf("Enter the farenheit");
    scanf("%d",&a);
    c=(a-32)*0.5/0.9;
    printf("Celisus %0.2f",c);
    return 0;
}