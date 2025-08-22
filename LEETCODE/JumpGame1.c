#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

int nums[]={2,0,0,1,4};
int numsSize=sizeof nums/sizeof nums[0];
int left=nums[0];
for(int i=0;i<numsSize-1;i++){
    left--;
    if(left<0) { printf("False"); return 0; }
    if(numsSize==i) { printf("True"); return 1; }
    if(nums[i]>=left){
        left=nums[i];
    }
}

printf("True");
    return 0;
}
