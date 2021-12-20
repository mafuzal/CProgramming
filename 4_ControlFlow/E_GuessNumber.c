#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber = 0;
    int guess = 0;
    int noOfGuesses;
    time_t t;

    // Initialize Random Number generator 
    srand((unsigned) time(&t));
    randomNumber = rand()% 21;
    printf(" This is a guessing game.\n");
    printf("I have chosen a number between 0 and 20, which you must guess. \n");

    for(noOfGuesses = 5; noOfGuesses > 0; noOfGuesses--)
    {
        printf("You have %d tr%s left.\n", noOfGuesses, noOfGuesses ==1?"y":"ies");
        printf("Enter a guess: \n");
        scanf("%d",&guess);

        if(guess == randomNumber)
        {
            printf("You guessed it correct.\n");
            return;
        }
        else if(guess <0 || guess >20)
            printf("Enter the number only between 0 and 20.\n");
        else if(randomNumber > guess)
            printf("Random number is greater than enetered %d\n",guess);
        else if(randomNumber < guess)
            printf("Random number is less than enetered %d\n",guess);
        
    }
    printf("You have exceedd five tries. The number was %d\n",randomNumber);

    return 0;

}