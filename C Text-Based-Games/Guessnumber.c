#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int randomNumber = (rand() % 100) + 1;
    int guess;
    int numberOfGuesses = 0;

    printf("Guess the number between 1 and 100\n");

    while (guess != randomNumber){
        printf("Enter your guess: ");
        scanf("%d", &guess);
        numberOfGuesses++;    

        if (guess < randomNumber){
            printf("Too low! Try again.\n");
        } else if (guess > randomNumber){
            printf("Too high! Try again.\n");
        } else {
            printf("Congratulations! You guessed the number in %d attempts.\n", numberOfGuesses);
        }
        
    }
    
}