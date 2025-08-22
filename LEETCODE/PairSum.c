#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int nums[]={2, 9, 1, 3, 5};
int t=4;
int n=sizeof nums/sizeof nums[0];

printf("%d\n",n);



for(int i=1;i<n;i++){
    for(int j=i-1;j<n;j++){
        printf("%d + %d = %d\n",nums[i],nums[j],(nums[i]+nums[j]));

        if((nums[i]+nums[j]) == t){
            printf("index values are %d , %d \n",nums[i],nums[j]);
            printf("True");
            // break;
            return 1;
        }
    }
}

printf("False");
return 0;


    
}

