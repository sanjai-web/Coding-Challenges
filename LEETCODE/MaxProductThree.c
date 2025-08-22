#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){
int nums[]={-1,-2,-3};
int numsSize=sizeof nums/sizeof nums[0];
 int f = 0, s = 0, t = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > f) {
             t=s;
             s=f;
            
            f = nums[i];
           
        } else if (nums[i] > s && nums[i] < f) {
           t=s;
            s = nums[i];
            
        } else if (nums[i] > t && nums[i] < s) {
            t = nums[i];
        }
    }
    printf("First : %d\n",f);
    printf("Secon : %d\n",s);
    printf("Third : %d\n",t);
    int c = f * s * t;
    printf("%d",c);


}

