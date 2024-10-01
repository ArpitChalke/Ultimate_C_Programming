#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    int randomNumber = rand() % 100 + 1;
    int number_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
        {
            printf("Lower number please\n");
        }
        else if (guessed_number < randomNumber)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Congrates!! you guessed the right number\n");
        }
        number_of_guesses++;

    } while (randomNumber != guessed_number);

    printf("You guessed the right number in %d guessses\n", number_of_guesses);

    return 0;
}