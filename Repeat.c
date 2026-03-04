// A number guessing game
// A user will have to guess a random number between 1 to 100
// Upon entering a number they will be told whether the number is higher or lower than the needed number. And will be told when they successfully guessed the correct number. Plus how many attempts it took them to get to the number.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int a, guess, no_of_guesses = 0;
    srand(time(0));                  // This and
    int random = (rand() % 100) + 1; // this is important to remember for generating random numbers.
    // what is happening here?
    // using time (an everchanging) to generate random number, [rand()%100] gives range (0 to 99) and adding '+1' make the range (1 to 100). And a random number from the range is assigned to the variable.

    // Using a do-while loop helps us run the loop at least once before checking the condition itself. Otherwise without a value for the variable 'guess' from the user other loops would just not work. and we cannot ask the user to enter a new number without using the loop itself which needs to run itself once.
    do
    {
        printf("Enter your number: ");
        scanf("%d", &a);
        if (a > random)
        {
            printf("Your number is higher\n");
        }
        else if (a < random)
        {
            printf("Your number is lower\n");
        }
        else // if it is neither higher or lower then the guess must be the same as the generated number
        {
            printf("Congrats!\n");
        }
        no_of_guesses++; // adds 1 to itself every time a guess is made
    } while (a != random);

    printf("The number of attempts: %d\n", no_of_guesses);

    return 0;
}
// Good Job Revising👍🏻