#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){


int nums[]={2,1,2};
int a[3];
int b,c,i,x;

for(i=0;i<=2;i++){
    x=nums[i];
    a[i]=x; 

 

}
if((a[0]+a[1]>a[2]) &&( a[0]+a[2]>a[1]) && (a[1]+a[2]>a[0] )){
    c=a[0]+a[1]+a[2];
    return c ;
}else{
    return 0;
}

    return 0;
}

