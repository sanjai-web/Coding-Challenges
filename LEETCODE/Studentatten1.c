#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char s[] = "A";
    int t = 0;
    int a = 0;


    if(strlen(s)==1){
        printf("false");
        return 1;
    }else {
    for (int i = 0; i < strlen(s) - 2; i++)
    {
        if (s[i] == 'L' && s[i + 1] == 'L' && s[i + 2] == 'L')
        {
            t = 1;
            break;
        }
    }

    if (t == 1)
    {
        printf("false");
    }

    // AA

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
    }

    if (a >= 2 || t == 1)
    {
        printf("false");
    }
    else
    {
        printf("true");
    }

}

    return 0;
}