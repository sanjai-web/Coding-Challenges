#include<stdio.h>
#include<math.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>
int main(){

int height[]={0,1,0,2,1,0,1,3,2,1,2,1};
int n=sizeof height/sizeof height[0];
int left=0,right=n-1;
int leftmax=0,rightmax=0;
int water=0;

while(left<right){
    if(height[left]<height[right]){
    if(height[left]>=leftmax){
        leftmax=height[left];
    }else{
        water+= leftmax-height[left];
    }
    left++;
    }else{
        if(height[right]>=rightmax){
            rightmax=height[right];
        }else{
            water+=rightmax-height[right];
        }
        right--;
    }

}


printf("%d",water);
    return 0;
}
