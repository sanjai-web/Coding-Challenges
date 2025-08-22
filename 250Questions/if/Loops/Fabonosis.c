#include<stdio.h>
//LCM
int main(){

int a,b,max;

   printf("Enter two Number");
   scanf("%d%d",&a,&b);
if(a>b){
    max=a;
}
else{
    max=b;
}

   int i=max;  // 36
   while (1)
   {
    if(max%a == 0 && max%b==0){
       printf("%d,%d lcm of %d",a,b,max);
       break;
    }
  
    max++;
   }
      
    return 0;
}
