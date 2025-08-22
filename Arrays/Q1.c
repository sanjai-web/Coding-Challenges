#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};
    int i, j, t = 5;
    int l = sizeof(a)/sizeof(a[0]);   // 24/4  = 6
          printf("String Length: %d\n",sizeof(a));   //24
      printf("String Length: %d\n",sizeof(a[0]));   //4 
    for (i = 0; i <= l; i++)
    {
        for (j = 0; j <= 5; j++)
        {
            if (a[i] + a[j] == t)
            {
                printf("Yes");
            }
        }
    }
}