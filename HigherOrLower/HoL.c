#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

long randomNumber(char *x)
{
    typedef struct dif
    {
        unsigned char easy;
        unsigned short medium;
        unsigned int hard;
    } dif;

    unsigned int seed;
    srand(time(&seed));
    dif level;

    level.easy = rand() % 256;
    level.medium = rand() % 65536;
    level.hard = rand() % 4294967296;

    // printf("Easy %d, Medium %d, Hard %d\n", level.easy, level.medium, level.hard);

    if (strcmp(x, "easy") == 0)
        return level.easy;
    if (strcmp(x, "medium") == 0)
        return level.medium;
    if (strcmp(x, "hard") == 0)
        return level.hard;

    return 1;
}

int highOrLow(unsigned long x)
{
    unsigned long userGuess;
    scanf("%lu", &userGuess);

    if (userGuess == x)
    {
        printf("Correct\n");
        return 1;
    }
    if (userGuess > x)
    {
        printf("Lower\n");
        return 0;
    }
    if (userGuess < x)
    {
        printf("Higher\n");
        return 0;
    }
    return -1;
}

int main(void)
{
    char userInput[7];
    printf("Please choose a difficulty, easy, medium, or hard.\n");
    scanf("%s", &userInput);
    unsigned long rNum = randomNumber(userInput);

    printf("Please begin guessing...\n");
    char state = 0;
    while (state == 0)
    {
        state = highOrLow(rNum);
    }
    printf("Thanks for playing!\n");
    return 0;
}
