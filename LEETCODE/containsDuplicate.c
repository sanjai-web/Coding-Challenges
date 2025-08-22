#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main() {
    int nums[] = {-1, -2, -3, -1};
    int size = sizeof(nums) / sizeof(nums[0]);

    printf("Array size: %d\n", size);

    int temp = 0; 
    for (int i = 0; i < size; i++) { 
        for (int j = i + 1; j < size; j++) { 
            printf("Comparing indices %d, %d\n", i, j);
            if (nums[i] == nums[j]) {
                temp++;
                break; 
            }
        }
    }

    printf("\nDuplicate count: %d\n", temp);

    if (temp >= 1) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
