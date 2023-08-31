#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int truthy = 1;
    int userIn;

    while (truthy == 1)
    {
        printf("Hello and welcome to the game of Guessing! \n");
        printf("\n");
        printf("\n");
        printf("\n");
        printf("So let's begin \n");
        printf("... \n");

        // Get Random Number
        srand(time(NULL));
        int randomNumber = rand() % 10;

        printf("The computer has got a number... \n");
        printf("And now, you guess it (Between 0 - 10) \n");

        int win = 0;

        while (truthy == 1)
        {
            scanf("%d", &userIn);

            if (userIn == randomNumber)
            {
                // Win Protocol
                printf("Are you sure? Of course, you just won!");
                break;
                // Ask for rematch?
            }
            else if (userIn > randomNumber)
            {
                printf("Guess a little lower \n");
            }
            else if (userIn < randomNumber)
            {
                printf("Guess a little higher \n");
            }
        }
        char choice;

        printf("Great! do you wanna play again? (y)es, or (n)o \n");
        scanf(" %c", &choice); // Note the space before %c

        if (choice == 'n') {
            printf("K, see you later \n");
            break;
        }
    }

    return 0;
}
