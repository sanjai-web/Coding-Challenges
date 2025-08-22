#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
int nums[]={9,6,4,2,3,5,7,0,1};
int numsSize=9;

int a=(numsSize*(numsSize+1))/2;
printf(" formula : %d\n",a);
int temp=0;

for(int i=0;i<=numsSize-1;i++){
    temp+=nums[i];
}

printf("temp : %d\n",temp);
int res=a-temp;

printf("output : %d",res);




    return 0;
}