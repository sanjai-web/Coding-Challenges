#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
  int num=7;
int a=0,b=0;
// printf("%d\n",num);
  for(int i=2;i<=num;i++){
    if(num%i==0){
b=num/i;
        printf("%d\n",b);

        a+=b;
        
    }
    
    
  }
printf("%d\n",a);

if(a==num){
    printf("True");
}else{
    printf("false");
}
    return 0;
}

