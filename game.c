#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateComputerChoice() {
    srand(time(NULL));
    return rand() % 3; // Generate a random number between 0 and 2
}

void printResult(int playerChoice, int computerChoice) {
    if (playerChoice == computerChoice) {
        printf("It's a tie!\n");
    } else if ((playerChoice == 0 && computerChoice == 2) ||
               (playerChoice == 1 && computerChoice == 0) ||
               (playerChoice == 2 && computerChoice == 1)) {
        printf("You win!\n");
    } else {
        printf("Computer wins!\n");
    }
}

int main() {
    char *choices[] = {"Rock", "Paper", "Scissors"};
    int playerChoice, computerChoice;

    printf("Welcome to Rock, Paper, Scissors!\n");
    printf("Enter your choice (0 for Rock, 1 for Paper, 2 for Scissors): ");
    scanf("%d", &playerChoice);

    if (playerChoice < 0 || playerChoice > 2) {
        printf("Invalid choice! Please enter 0, 1, or 2.\n");
        return 1;
    }

    computerChoice = generateComputerChoice();

    printf("You chose %s\n", choices[playerChoice]);
    printf("Computer chose %s\n", choices[computerChoice]);

    printResult(playerChoice, computerChoice);

    return 0;
}