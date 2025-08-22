#include<stdio.h>
#include<math.h>
#include <ctype.h>  
#include<string.h>
#include<stdlib.h>
int main(){

int arr[2];

int n;
printf("Enter: ");
scanf("%d",n);

for(int i=0;i<=n;i++){

    printf("%d value is ",i);
    scanf("%d",arr[i]);
}


  int r = 0;
    for (int i = 0; i < n; i++) {
        r = r * 10 + arr[i];  
    }

     printf("The combined single number is: %d\n", r);

    return 0;
}

