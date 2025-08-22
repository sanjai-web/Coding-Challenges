#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
int n,a,b;
printf("Enter the number: ");
scanf("%d",&n);

if(n==1){
    printf("True");
   
}

else{
for(int i=2;i<=5;i++){

    for(int j=i;j<=5;j++){
    if(i==4||j==4) continue;
    
  printf("\n i%d * j%d = %d",i,j,i*j);


    if(i*j==n){
        printf("True");
    }

      }
}
}
    return 0;
}

