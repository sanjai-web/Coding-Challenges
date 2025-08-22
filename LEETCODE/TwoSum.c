// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    // Write C code here
    int nums[] = {2, 7, 11, 15};
    int t,numsSize=sizeof(nums)/sizeof(nums[0]);
    printf("enter the target number: ");
    scanf("%d", &t);
   
    


    for (int i = 0; i <= numsSize; i++)
    {
        for (int j = i + 1; j <= numsSize; j++)
        {
            if ((nums[i] + nums[j]) == t)
            {
                // printf("%d %d",num[i],num[j]);
                printf("[%d,%d]", i, j);
                break;
            }
        }
    }

    return 0;
}