#include <stdio.h>
#include <math.h>
#include <string.h>

char a[10], b[10], c[10];

int main()
{
    
    printf("Enter a string: ");
    scanf("%s", a);
    // gets(a);
 int l=strlen(a);
    printf("You entered: %s\n", a);
    strupr(a);
    strcpy(b, a);

 for (int i=10; i>=l; i--){
    printf("\n reversed strint B: %c",b);
 }
    printf("You entered A: %s\n", a);
    printf("You entered B: %s\n", b);

    if (strcmp(a, b) == 0)
    {
        printf("Both string are matched");
    }

    return 0;
}