#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){


int nums[]={5,2,3,7};

int n=sizeof nums/sizeof nums[0];   //4


for(int i=0;i<=n-1;i++){
    for(int j=0;j<=n-1-i;j++){
    
        if(nums[j]>nums[j+1]){
            int temp=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=temp;
        }
    }
}

for(int i=0;i<n;i++){
    printf("%d\n",nums[i]);}

    return 0;
}

