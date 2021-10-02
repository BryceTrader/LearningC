#include <stdio.h>

int main()
{
    unsigned long temp = 0;
    unsigned long n1 = 0;
    unsigned long n2 = 1;
    unsigned long target;

    printf("Please enter a target Nth factor.\n");
    scanf("%lu", &target);
    printf("\n\n\n");
    for (long i = 0; i < target; ++i)
    {
        printf("N to the %d: %lu", i, n2);
        if (i < target - 1)
        {
            printf("\n");
        }
        temp = n1 + n2;
        n1 = n2;
        n2 = temp;
        if (n2 < n1)
        {
            break;
        }
    }
    printf("\n");
}