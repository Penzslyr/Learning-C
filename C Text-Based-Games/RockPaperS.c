#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int playerChoice, computerChoice, result;

    srand(time(0));

    printf("Rock, Paper, Scissors Game\n");
    printf("Choose 1 for Rock, 2 for Paper, 3 for Scissors\n");

    printf("Enter your choice: ");
    scanf("%d", &playerChoice);

    computerChoice = (rand() % 3) + 1;

    printf("Computer chose: %d\n", computerChoice);
    printf("===============================\n");
    
    if (playerChoice == computerChoice){
        printf("It's a tie!\n");
    }
    else if (playerChoice == 1 && computerChoice == 3){
        printf("Rock smashes Scissors! You win!\n");
    }
    else if (playerChoice == 2 && computerChoice == 1){
        printf("Paper covers Rock! You win!\n");
    }
    else if (playerChoice == 3 && computerChoice == 2){
        printf("Scissors cuts Paper! You win!\n");
    }
    else{
        switch (computerChoice){
            case 1:
                printf("Rock smashes Scissors! Computer wins!\n");
                break;
            case 2:
                printf("Paper covers Rock! Computer wins!\n");
                break;
            case 3:
                printf("Scissors cuts Paper! Computer wins!\n");
                break;
        }
        
    }

    return 0;
}
