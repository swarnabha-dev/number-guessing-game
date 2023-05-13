#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Guess the number between 1 to 100\n");
    do
    {
        printf("Think of a number between 1 and 100.\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Guess a lower number\n");
        }
        else if (guess < number)
        {
            printf("Guess a higher number\n");
        }
        else
        {
            printf("You guessed the number in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);
    return 0;
}
