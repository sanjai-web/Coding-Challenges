#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


int main(){



int nums[]={1,3,5,6};
int size=sizeof nums / sizeof nums[0] - 1,target=2,t=0;
printf("Size : %d\n",size);

for(int i=0;i<size;i++){
    if(nums[i]==target){
        printf("%d is found in %d",nums[i],target);
   t=1;
   break;
    }
}

if(t==0){

nums[size]=target;
size++;

}


qsort(nums, size, sizeof(int), compare);

for(int i=0;i<=size;i++){
    printf("%d\n",nums[i]);
}


for(int i=0;i<=size;i++){
     if(nums[i]==target){
        printf("found in %d",i);
         
//    break;
    }
}
    return 0;
}

