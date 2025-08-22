#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

 int candles[]={3,2,1,3};
 int candles_count = sizeof c/sizeof c[0];

 int lar=candles[0];
int count=1;
 for(int i=1;i<candles_count;i++){
    if(candles[i]>lar){
        
        lar=candles[i];
        count=1;
    }
    else if(candles[i]==lar){
        count++;
    }

 }

printf("large value : %d \n count : %d",lar,count);
    return 0;
}

