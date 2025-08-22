#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){


int n=19,cp=0,c=0;
for (int i=0;n>=2;i++){
        int a=n%10;  //9
        int b=n/10;  //1
         if(b>9){
             c=b%10;
              cp=pow(c,2);
         }
       printf("%d, %d , %d\n",a,b,c);
        
        int ap=pow(a,2);
        int bp=pow(b,2);
       
         printf("ap %d, bp %d, cp %d\n",ap,bp,cp);
        n=ap+bp+cp;
printf("n value: %d",n);

    }

    return 0;
}

