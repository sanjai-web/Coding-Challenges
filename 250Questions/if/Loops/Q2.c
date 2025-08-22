#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c = 0, i = 0, d, e = 0, f, g;

    printf("Enter a Number: ");
    scanf("%d", &a); // 123

    int t = a;

    while (a != 0)
    {
        a = a / 10; // 153
        c++;        // 3
    }
    printf("Digits: %d\n", c);

    while (i<=c)
    {
        g = t % 10;
        e += pow(g, c); // 3
        t = t / 10;     // 120

        i++;
    }

    printf(" Aamstrong Number : %d", e);

    return 0;
}
