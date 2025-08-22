#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){

int num=808201;
int t=0,n=num/2;
// if(num>=19){
//     n=19;
// }
// else{
//     n=num;
// }
int p;
    for(int i=0;i<n;i++){
   
p=i*i;

if(p==num){
    t=1;
}



    }
       
if(t==1){
    printf("True\n");
}
else{
    printf("false");
}
    return 0;
}

