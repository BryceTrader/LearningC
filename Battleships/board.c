#include <stdio.h>

char *makeBoard()
{
    char cell[] = " |  ";
    int boardSize = 9;
    char result[boardSize][5];

    for (int i = 0; i < boardSize; i++)
    {
        result[i][] = cell;
    }

    return &result;
}

int main()
{
    char *x = makeBoard();

    printf("Boardtest\n%s", &x);

    return 0;
}