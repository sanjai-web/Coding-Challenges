#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the three numbers:");
    scanf("%d%d%d \n",&a,&b,&c);

    if(a>=b && a>=c){
        printf("%d is larger then %d,%d",a,b,c);
    }
   else if (b>=a && b>=c)
   {
    printf("%d is larger then %d,%d",b,a,c);
   }
    else 
    {
         printf("%d is larger then %d,%d",c,a,b);
    }
    return 0;
}