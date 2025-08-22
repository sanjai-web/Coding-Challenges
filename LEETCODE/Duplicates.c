#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    int k = 0;  

    printf("limit : ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter the %d value : ", i);
        scanf("%d", &arr[i]);  
    }

    
    printf("input:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("------------------------------\n");
   for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[i]==arr[j])
        {
            printf("%d === %d\n",arr[i],arr[j]);

        }
    }
   }


    free(arr);  
    return 0;
}
