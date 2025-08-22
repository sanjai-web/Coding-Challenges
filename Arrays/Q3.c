#include <stdio.h>
#include <math.h>
#include <string.h>

char a[10], b[10], c[10];

int main()
{
    
    printf("Enter a string: ");
    scanf("%s", a);
    // gets(a);

    printf("You entered: %s\n", a);
    strupr(a);
    strcpy(b, a);

    strrev(b);
    printf("You entered A: %s\n", a);
    printf("You entered B: %s\n", b);

    if (strcmp(a, b) == 0)
    {
        printf("Both string are matched");
    }

    return 0;
}