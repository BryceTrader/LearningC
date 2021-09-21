#include <stdio.h>
#include <stdlib.h>

int main()
{
    // setup
    int nRows, i, j, previous, current;

    printf("Number of rows (up to 34): ");
    if (scanf("%d", &nRows) == 0)
    {
        printf("0");
        return 0;
    }

    // int overflows after 34 / error handling
    if (nRows > 34)
    {
        nRows = 34;
    }

    if (nRows < 1)
    {
        printf("0");
        return 0;
    }

    // memory allocation based on the level in the array
    long long **triangle;
    triangle = malloc(nRows * sizeof(*triangle));
    for (i = 0; i < nRows; i++)
    {
        triangle[i] = malloc((i + 1) * sizeof(*triangle[i]));
    }

    // Rows 1 and 2 setup
    triangle[0][0] = 1;
    triangle[1][0] = 1;
    triangle[1][1] = 1;

    // Building rows
    for (j = 2; j < nRows; j++)
    {
        for (i = 0; i < j + 1; i++)
        {
            if (i == 0 || i == j)
            {
                triangle[j][i] = 1;
                continue;
            }
            if (i > 0)
            {
                previous = triangle[j - 1][i - 1];
                current = triangle[j - 1][i];
                triangle[j][i] = previous + current;
            }
        }
    }

    // Printing
    printf("Pascal's Triangle to %d rows\n", nRows);
    for (i = 0; i < nRows; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d ", triangle[i][j]);
        }
        printf("\n");
    }

    // Freeing memory
    for (i = 0; i < nRows; i++)
    {
        free(triangle[i]);
    }
    free(triangle);

    return 0;
}