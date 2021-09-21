#include <stdio.h>
#include <stdlib.h>

// int fib(int n)
// {
//     if (n <= 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     return fib(n - 1) + fib(n - 2);
// }

int fib2(int n)
{
    int i = 0;
    int a = 0;
    int b = 0;
    int temp = 0;
    int result = 0;

    for (i = 0; i < n; ++i)
    {
        b = a + b;
        a = b - a;

        if (b == 0)
        {
            b = 1;
        }
        printf("%d, ", b);
    }
    result = temp;
    return result;
}

int main()
{

    int n;

    printf("n: ");
    scanf("%d", &n);

    int result;

    result = fib2(n);

    // printf("%d\n", result);

    return 0;
}