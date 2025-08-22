#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int nums[]={3,2,3};

int len= sizeof(nums)/sizeof(nums[0]);
int a=len/2,c,b=0;
printf(" length : %d\n",len);


printf(" N by 2 Value : %d\n",a);



for(int i=0;i<len;i++){
    c=0;
    for(int j=0;j<len;j++){
        if(nums[i]==nums[j]){
            c++;

           
        }
         
    }
    if(c>a){
          
        printf("Output C : %d\n",c);
        b=nums[i];
         printf("Output B : %d\n",b);
        break;
    }
    
}



    return 0;
}

