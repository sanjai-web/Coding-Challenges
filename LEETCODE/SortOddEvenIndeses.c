#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
int nums[]={36,45,32,31,15,41,9,46,36,6,15,16,33,26,27,31,44,34};
          //9,46,15,45,15,41,27,34,32,31,33,31,36,26,36,16,44,6

int numsSize=sizeof nums/sizeof nums[0];
for(int i=0;i<numsSize;i++){
    if(i%2==0){
        for(int n=0;n<=numsSize-1;n++){
            for(int m=0;m<numsSize-1-n;m++){
        if(m + 2 < numsSize && nums[m] > nums[m + 2]){
            int temp=nums[m];
            nums[m]=nums[m+2];
            nums[m+2]=temp;
        }}}
    }else{
        for(int n=0;n<=numsSize-1;n++){
            for(int m=0;m<numsSize-1-n;m++){
        if(m + 2 < numsSize && nums[m] < nums[m + 2]){
            int temp=nums[m];
            nums[m]=nums[m+2];
            nums[m+2]=temp;
        }}}
    }


for(int i=0;i<numsSize;i++){
    printf("%d === %d\n",i,nums[i]);
}



    return 0;
}}

