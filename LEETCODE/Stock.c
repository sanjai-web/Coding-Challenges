#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int prices[]={7,1,5,3,6,4};
int pricesSize = sizeof (prices)/sizeof (prices[0]);
int min,max=0,tot,minind,maxind=0,o;

// min
 min=prices[0];
for(int i=0;i<pricesSize;i++){
   
    if(prices[i]<min){
        min=prices[i];
        minind=i;
        
    }

}

printf("Minimum Value   : %d \n",min);
printf("Minimum Value index   : %d \n",minind);


// max

maxind = minind;
    for (int i = minind + 1; i < pricesSize; i++) {
        if (prices[i] > max) {
            max = prices[i];
            maxind = i;
        }
    }

printf("Maxmimum Value   : %d \n",max);
printf("Max Value index   : %d\n ",maxind);


o=max-min;
printf("Output : %d",o);
    return 0;
}

