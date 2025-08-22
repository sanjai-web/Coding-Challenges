#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    printf("Enter a amount: ");
    scanf("%d", &a); // 1250
    b = a / 100;
    c = a % 100;
    d = c / 10;
    printf("\nTotal 100 rs notes: %d", b);
    printf("\nTotal 10 rs notes: %d", d);
    return 0;
}
