#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter");
    scanf("%d",&n);
    do
    {
           i+=2;
           printf("%d",i);
        
    } while (i<=n);
    printf("output");
    return 0;
    
}