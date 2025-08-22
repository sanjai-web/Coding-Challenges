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
int k=2,c=0;
int nums[]={1,3,5,7,10};
int size= sizeof nums/sizeof nums[0];


for(int i=1;i<=size;i++){
    if(nums[i]-nums[i-1]==k){
        c++;
        
    }
}


printf("%d",c);
    return 0;
}

