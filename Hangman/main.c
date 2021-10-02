#include <stdio.h>

void getAnswer(char *x, size_t stringLength)
{
    printf("%lu\n", stringLength);
    printf("Welcome to Hangman.\nPlease enter the answer for this game...\n");
    scanf("%s\n", x);
}

void test(char *x, size_t st)
{
    for (int i = 0; i < st; i++)
    {
        printf("%c ", x[i]);
    }
    printf("\n");
}

int main()
{
    char answer[32];
    getAnswer(answer, sizeof(answer));
    printf("The answer is %s\n", answer);

    test(answer, sizeof(answer));

    return 0;
}