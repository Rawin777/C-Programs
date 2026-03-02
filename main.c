#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, guesses = 0, guess;
    srand(time(0));
    int RandomNumber = (rand() % 100) + 1;
    do
    {
        printf("Enter your guess:", a);
        scanf("%d", &guess);
        if (guess > RandomNumber)
        {
            printf("Lower Number please\n");
        }
        else if (guess < RandomNumber)
        {
            printf("Higher Number Please\n");
        }
        else
        {
            printf("Congrats!!!\n");
        }
        guesses++;
    } while (guess != RandomNumber);

    printf("You guessed the number in %d guesses\n", guesses);

    return 0;
}