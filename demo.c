#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    for(int i = 0; i < 128; i++) {
        printf("%d is the ASCII code of %c\n", i, (char)i);
    }
    return 0;
}
