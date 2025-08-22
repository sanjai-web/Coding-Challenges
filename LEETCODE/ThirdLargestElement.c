#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

                        
int nums[]={5,4,-1,7,8}; //3

// int fir=nums[0];
int size = sizeof nums /sizeof nums[0];

int fir = 0;
int sec=0;
int thr=0;

    for(int i = 0; i < size; i++){
        if(nums[i] > fir){
            thr = sec;           //2
            sec = fir;
            fir = nums[i];
        }
        else if(nums[i] > sec && nums[i] < fir){         //0
            thr = sec;
            sec = nums[i];
        }
        else if(nums[i] > thr && nums[i] < sec){
            thr = nums[i];              //0
        }
    }

    printf("first largest element: %d\n", fir);
    printf("Second largest element: %d\n", sec);
    printf("Third largest element: %d\n", thr);


// printf("\n sizeof array : %d",size);
// for(int i=1;i<=size+1;i++){
//     for(int j=i;j<=size+1;j++){
//     if(nums[i]>nums[j]){
//         fir=nums[i];
//     }
// }
// }
// printf("\n first firge of array : %d",fir);
// int sec=nums[0];

// for(int i=1;i<=size+1;i++){
//     for(int j=i;j<=size+1;j++){
//    if(nums[i]>nums[j] ){
//     if(nums[i]==fir){
//         continue;
//     }else{
//         sec=nums[i];
       
//     }}
// }}

// printf("\n second firge of array : %d",sec);


// int thr=nums[0];

// for(int i=1;i<=size+1;i++){
//     for(int j=i;j<=size+1;j++){
   
//    if(nums[i]>nums[j] ){
//     if(nums[i]==sec || nums[i]==fir){
//         continue;
//     }else{
       
//         thr=nums[i];
       
//     }
//    }
//     }
// }

// printf("\n third firge of array : %d",thr);

    return 0;
}

