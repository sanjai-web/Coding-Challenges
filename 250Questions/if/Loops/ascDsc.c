#include <stdio.h>
#include <math.h>
#include <string.h>
int main()
{
    int c = 0;

    float a[100] = {4, 5, 6, 8, 1, 7, 3, 1, 8};

    for (int i = 0; i < 100; i++)
    {
        if (a[i] != 0)
        {
            c++;
        }
        else
        {
            break;
        }
    }

    printf("The number of elements in the array is %d\n", c);

    for (int i = 0; i < (c - 1); i++)
    {
        if (a[i] < a[i + 1])
        {
            printf("%0.2f\n", a[i]);
        }
    }

    return 0;
}
