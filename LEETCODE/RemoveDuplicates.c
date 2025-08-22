#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
int nums[]={1,2,3,4,4,5,6};
int numsSize=sizeof nums/sizeof nums[0];

  int k = 1; 

    for (int i = 1; i < numsSize; ++i) {
        if (nums[i] != nums[k - 1]) {    //num 1 != num 0
            nums[k++] = nums[i];
            // printf("%d",nums[k++]);          // nums 
        }
    }

    for (int i = 0; i < k; ++i) {
        printf("%d\n", nums[i]);
    }

    return k; 
}

