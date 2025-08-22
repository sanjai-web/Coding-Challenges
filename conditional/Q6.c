#include <stdio.h>
int main()
{
    int a, b, c, d, e, tot;
    printf("Enter a number: "); // 123
    scanf("%d", &a);
    b = a % 10; // 3  123
    c = a / 10; // 12
    d = c % 10; // 2
    e = c / 10; // 1
    printf("\n%d", b);

    printf("\n%d", d);
    printf("\n%d", e);

    b = b * b * b;
    e = e * e * e;
    d = d * d * d;

    tot = b + e + d;
    printf("\n%d", tot);
    if (a == tot)
    {
        printf("\nAmstrong number");
    }
    else
    {
        printf("\nNot an amstrong number");
    }

    return 0;
}