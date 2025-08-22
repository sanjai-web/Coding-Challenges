#include <stdio.h>
int main(){
    int a,b,c,s,m,d;
    float mo;
    printf("Enter Two Numbers");
    scanf("%d %d",&a,&b);
    c=a+b;
    s=a-b;
    m=a*b;
    d=a/b;
    mo=a%b;
    printf("Total : %d\n",c);
     printf("sub : %d\n",s);
      printf("multi : %d\n",m);
       printf("Division : %d\n",d);
        printf("modules : %0.2f\n",mo);
         printf("Total : %d\n",c);
    return 0;
}