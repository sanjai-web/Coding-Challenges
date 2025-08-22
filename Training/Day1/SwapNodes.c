#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
  int nums[]={1,2,3,4};
int k=3;
  for(int i=1;i<=k-1;i++){
    int temp =nums[1];
    nums[1]=nums[2];
    nums[2]=nums[3];
    nums[3]=temp;
  }


for(int i=0;i<=3;i++){
    printf("%d\n",nums[i]);
}
    return 0;
}

