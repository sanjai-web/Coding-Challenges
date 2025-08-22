#include <stdio.h>
#include <stdlib.h>

int isSteppingNumber(int n) {
    int p = -1; 

    while (n > 0) {       //10
        int c = n % 10;      //1  

        if (p != -1) {   
            if (abs(c - p) != 1) {
                return 0; 
            }
        }

        p = c; 
        n /= 10; 
    }
    return 1; 
}

int main() {
    int start, end;
    printf("Enter the start and end: ");
    scanf("%d,%d", &start, &end);

    for (int i = start; i <= end; i++) {      //10
        if (isSteppingNumber(i)) {
            printf("%d ", i);
        }
    }

    return 0;
}
