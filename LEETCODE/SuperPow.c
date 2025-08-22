#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
int b[]={1,0};
int u,c=0,d=1,p;
int bsize=sizeof(b)/sizeof(b[0]);

 printf("\nsize : %d",bsize);
int a=2;

if(bsize==0){
    
     printf("\nAnswer : %d",b[0]);
    p=pow(a,b[0]);

    printf("\nAnswer : %d",p);
}

else{


for(int i=0;i<bsize;i++){
    
c=d*10;
d=b[i]+c;

 

}
u=c/10;
// u=u/2;
printf("\n value of U : %d",u);


p=pow(a,u);

printf("\nAnswer : %d",p);

}

return 0;
  
}
