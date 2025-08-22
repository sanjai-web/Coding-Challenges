#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a[100],n;
    int sum=0;
     int l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    
    
      for(int i=1;i<=n;i++){
      sum=sum+a[i];
    }
    
     l=sizeof(a)/sizeof(a[0]);
    printf("total %d",sum);
   

   
   
    printf("soze");
    printf("%d",l);
     return 0;
}