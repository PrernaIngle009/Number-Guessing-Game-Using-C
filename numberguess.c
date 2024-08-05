#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int guess, random;
    int no_of_guess = 0;
    printf("Welcome to the world of GUESSING NUMBER\n");
    srand(time(NULL));
    random = rand() % 100 + 1;

    do
    {
        printf("\nEnter number between 1-100 :- ");
        scanf("%d", &guess);
        no_of_guess++;
        if (guess < random)
        {
            printf("Larger Number Please ");
        }
        else if (guess > random)
        {
            printf("Smaller number please");
        }
        else
        {
            printf("Congratulations! You guessed it right");
            printf("\nYou guessed the number in %d attempt", no_of_guess);
        }

    } while (guess != random);

    return 0;
}